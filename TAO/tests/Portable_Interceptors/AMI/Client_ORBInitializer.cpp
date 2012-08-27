/**
 * @file Client_ORBInitializer.cpp
 *
 * $Id: Client_ORBInitializer.cpp 91652 2010-09-08 14:42:59Z johnnyw $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 */

#include "Client_ORBInitializer.h"
#include "Client_Interceptor.h"

Client_ORBInitializer::Client_ORBInitializer ()
{
}

void
Client_ORBInitializer::pre_init (
    PortableInterceptor::ORBInitInfo_ptr)
{
}

void
Client_ORBInitializer::post_init (
    PortableInterceptor::ORBInitInfo_ptr info)
{
  PortableInterceptor::ClientRequestInterceptor_var interceptor(
      new Echo_Client_Request_Interceptor);

  info->add_client_request_interceptor (interceptor.in ());
}
