#include "AuthSocket.h"

#include <Network/Packet/Packet.h>
#include <Network\Packet\Auth\Auth.h>

#include <Utils/Logger/Logger.h>
#include <Utils\Utils.h>

#include <Configuration\Configuration.h>
#include <Configuration\Configuration.h>

#include <Database\Repository\RepositoryManager.h>

//----------------------------------------
//	Called when we open the socket
//----------------------------------------
AuthSocket::AuthSocket(boost::asio::io_context &service)
	: Socket{ service }
{
	methodList.emplace_back(AUTH_CONNECT_FIT, std::bind(&AuthSocket::onConnectFit, this, std::placeholders::_1));
	methodList.emplace_back(AUTH_CLIENT_IP, std::bind(&AuthSocket::OnClientIp, this, std::placeholders::_1));
	methodList.emplace_back(AUTH_LOGIN_REQ, std::bind(&AuthSocket::OnLoginReq, this, std::placeholders::_1));
}

//----------------------------------------
//	Called when we open the socket
//----------------------------------------
AuthSocket::~AuthSocket()
{
	LOG_TRACE << "AuthSocket connection close: [" << GetRemoteEndPoint() << "]";
}
void AuthSocket::OnConnected()
{
	LOG_DEBUG << "New Connection from: " << this->GetAddress();
}

//----------------------------------------
//	We got incomming data from our player
//	Return false in case we was not able to parse data
//	Set internalError = ResultCodes::RESULT_FAIL in case of something unexpected to kick the connection
//----------------------------------------
bool AuthSocket::ProcessIncomingData(const Packet& packet)
{
	auth_packet* p = (auth_packet*)packet.GetPacketData();
	LOG_WARNING << "Get packet: command type [" << std::to_string(p->CMD) << "] param: [" << std::to_string(p->CMD_PARAM) << "]";
	for (const auto& method : methodList)
	{
		if (std::get<0>(method) == p->CMD_PARAM)
		{
			auto _method = std::get<1>(method);
			_method(packet);
			return true;
		}
	}
	//LOG_WARNING << "Get an unexpected packet: [" << std::to_string(packet._header.CMD_PARAM) << "]";
	internalError = 1000;
	return false;
}
bool AuthSocket::onConnectFit(const Packet& packet)
{
	return true;
}
bool AuthSocket::OnClientIp(const Packet& packet)
{
	LOG_DEBUG << "Received send client ip";

	client_ip stru_ip;
	{
		memset(stru_ip.ip, '\0', 16);
	}

	stru_ip.size = sizeof(client_ip) - 4;
	stru_ip.encrypt = 0;
	stru_ip.compress = 0;
	stru_ip.CMD = 104;
	stru_ip.CMD_PARAM = 16;
	stru_ip.timestamp = 0;
	std::string ip = "192.168.1.6";//+ this->GetAddress();
	memcpy(stru_ip.ip, ip.c_str(), ip.size());

	st_Write(stru_ip);
	return true;
}
bool AuthSocket::OnLoginReq(const Packet& packet)
{
	LOG_DEBUG << "Received login data";

	login_failed failed;
	{
		failed.size = sizeof(login_failed) - 4;
		failed.CMD = 104;
		failed.CMD_PARAM = 3;
		failed.timestamp = 0;
		failed.compress = 0;
		failed.encrypt = 0;
	}
	real_login* real_data = (real_login*)packet.GetPacketData();
	std::string username(real_data->user);
	std::string password(real_data->password);

	bool ret = false;
	auto result = sQueryRepository.GetAuthRepository().GetAccountInfoByUsername(username, ret);
	if (!ret)
	{
		LOG_FATAL << "Query result were null";
		return false;
	}
	if (result->rowsCount() <= 0)
	{
		failed.error_code = msg::LoginRetCode::LOGIN_RETURN_USERDATANOEXIST;
		st_Write(failed);
		return false;
	}

	result->next();
	if (password.compare(result->getString("UserPassword")) == 0)
		// -- On login ok
	{
		login_accept login_ok;
		{
			memset(login_ok.ip, '\0', 16);
			memset(login_ok.key, '\0', 256);
		}
		login_ok.size = sizeof(login_accept) - 4;
		login_ok.CMD = 104;
		login_ok.CMD_PARAM = 4;
		login_ok.timestamp = 0;
		login_ok.compress = 0;
		login_ok.encrypt = 0;

		login_ok.dwUserID = result->getUInt("AccountID");
		login_ok.loginTempID = result->getUInt("AccountID");
		login_ok.state = BYTE(1);

		result = sQueryRepository.GetCGServerRepository().GetAllLineId(ret);
		if (!ret)
		{
			LOG_FATAL << "Unable to retreive realmlist";
			failed.error_code = msg::LoginRetCode::LOGIN_RETURN_DB;
			st_Write(failed);
			return false;
		}
		if (result->rowsCount() == 0)
		{
			LOG_FATAL << "No regristrated realmlist";
			failed.error_code = msg::LoginRetCode::LOGIN_RETURN_USERDATANOEXIST;
			st_Write(failed);
			return false;
		}

		// -- Get all online server
		struct _available_server
		{
			std::string ip;
			WORD port;
		};
		std::map<uint32_t, _available_server> _servers;
		while (result->next())
		{
			const ServerState server_state = (ServerState)result->getByte("realmflags");
			if (server_state == ServerState::UP)
			{
				_available_server _server;
				const uint32_t population = result->getUInt("population");
				_server.ip = result->getString("Ip");
				_server.port = (WORD)result->getUInt("Port");

				_servers.emplace(population, std::move(_server));
			}
		}

		if (_servers.size() == 0)
		{
			LOG_FATAL << "No up CGServer found";
			failed.error_code = msg::LoginRetCode::LOGIN_RETURN_USERDATANOEXIST;
			st_Write(failed);
			return true;
		}

		// -- send player to the lowest populated
		for (auto& c : _servers)
		{
			login_ok.wdPort = c.second.port;
			memcpy(login_ok.ip, c.second.ip.c_str(), c.second.ip.size());
			memcpy(login_ok.key, "coucou", strlen("coucou"));
			break;
		}
		st_Write(login_ok);
		return true;
	}

	failed.error_code = msg::LoginRetCode::LOGIN_RETURN_USERDATANOEXIST;
	st_Write(failed);

	return true;
}