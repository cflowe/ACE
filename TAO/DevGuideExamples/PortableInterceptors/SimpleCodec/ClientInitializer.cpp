// $Id: ClientInitializer.cpp 83358 2008-10-21 23:02:02Z sowayaa $

#include "ClientInitializer.h"
#include "ClientInterceptor.h"

ClientInitializer::ClientInitializer (void)
{
}

void
ClientInitializer::pre_init (
                             PortableInterceptor::ORBInitInfo_ptr
                             )
{
}

void
ClientInitializer::post_init (
                              PortableInterceptor::ORBInitInfo_ptr info
                              )
{

  // get Codec factory
  IOP::CodecFactory_var codec_factory = info->codec_factory();

  // Create and register the request interceptors.
  PortableInterceptor::ClientRequestInterceptor_var ci =
    new ClientInterceptor (codec_factory);
  info->add_client_request_interceptor (ci.in());
}

