#pragma once

#include <Network/Socket.h>
#include <Network/Packet/Packet.h>
#include <Utils/Logger/Logger.h>
#include <Database/Query/QueryResult.h>

class WorldSession;
class CGSocket : public Socket
{
	enum SocketState
	{
		CHARACTER,
		GAME
	};
public:
	/**
	*  Our socket constructor
	*\	Parameters are boost::socket and callback for the socket destruction
	*/
	CGSocket(boost::asio::io_context &service);
	/**
	*  Our socket destructor
	*/
	virtual ~CGSocket() override;
	virtual void OnConnected() override;
private:
	std::string userName;
	std::string userPassword;
	std::string macAddress;
	uint32_t account_id;
	std::shared_ptr<WorldSession> _session;
	SocketState _socket_state;

	using Method = std::function<bool(const Packet& packet)>;
	using TupleMethod = std::tuple<unsigned short, Method>;
	using MethodList = std::list<TupleMethod>;
	MethodList methodList;

private:
	// -- Called only by on return to char screen
	void release_worldsession();
protected:
	/**
	*  We get incoming packets so process then
	*\
	\*	set InternalError to fail in case of bad data
	*/
	virtual bool ProcessIncomingData(const Packet& packet) override;

private:
	bool onCheckGatewayVer(const Packet& packet);
	bool onReceiveUserInfo(const Packet& packet);
	bool onReceiveCharCreate(const Packet& packet);
	bool onSelectCharToLogin(const Packet& packet);
};