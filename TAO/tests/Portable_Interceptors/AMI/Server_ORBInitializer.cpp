/**
 * @file Server_ORBInitializer.cpp
 *
 * $Id: Server_ORBInitializer.cpp 91652 2010-09-08 14:42:59Z johnnyw $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 */

#include "Server_ORBInitializer.h"
#include "Server_Interceptor.h"

Server_ORBInitializer::Server_ORBInitializer (void)
{
}

void
Server_ORBInitializer::pre_init (
    PortableInterceptor::ORBInitInfo_ptr)
{
}

void
Server_ORBInitializer::post_init (
    PortableInterceptor::ORBInitInfo_ptr info)
{
  PortableInterceptor::ServerRequestInterceptor_var interceptor(
      new Echo_Server_Request_Interceptor);

  info->add_server_request_interceptor (interceptor.in ());
}
