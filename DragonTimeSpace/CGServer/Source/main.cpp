﻿#include <boost/exception/all.hpp>
#include <boost/filesystem.hpp>

#include <iostream>
#include <cstdio>

#include <Network/Socket.h>
#include <Network/io_context_pool.h>

#include <Database/MySQLWrapper.h>

#include "Network/CGServer.h"

int main()
{
	try
	{
		sConfig.Load("./CGServer.json");

		io_context_pool pool(sConfig.GetWorker());
		boost::asio::io_context& io = pool.get_io_context();
		boost::asio::signal_set signals(io, SIGINT, SIGTERM);
		signals.async_wait(boost::bind(&io_context_pool::stop, &pool));

		LOG_TRACE << "=========== Logger initialized ===========";

		CGServer srv(pool);
		srv.Init(pool);

		LOG_INFO << "\t     ____                              ____        _ _ ";
		LOG_INFO << "\t    |  _ \\ _ __ __ _  __ _  ___  _ __ | __ )  __ _| | |";
		LOG_INFO << "\t    | | | | '__/ _` |/ _` |/ _ \\| '_ \\|  _ \\ / _` | | |";
		LOG_INFO << "\t    | |_| | | | (_| | (_| | (_) | | | | |_) | (_| | | |";
		LOG_INFO << "\t    |____/|_|  \\__,_|\\__, |\\___/|_| |_|____/ \\__,_|_|_|";
		LOG_INFO << "\t                     |___/                             ";
		LOG_INFO << "\t   	           AKCore 2019					\n";

		srv.run();
		pool.run();
	}
	catch (std::exception& e)
	{
		LOG_FATAL << "Exception catch: " << std::string(e.what());
		system("PAUSE");
	}
	catch (boost::exception const& e)
	{
		LOG_FATAL << "Error on main: [" << boost::diagnostic_information(e) << "]";
		system("PAUSE");
	}

	LOG_TRACE << "=========== Application exited. ===========";
	return EXIT_SUCCESS;
}
