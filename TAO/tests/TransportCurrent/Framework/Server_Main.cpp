// -*- C++ -*-
// $Id: Server_Main.cpp 91493 2010-08-26 13:48:03Z johnnyw $

#include "Server_Request_Interceptor.h"

/// Prototype
int server_main (int argc,
                 ACE_TCHAR *argv[],
                 Test::Server_Request_Interceptor *cri);

int
test_transport_current (CORBA::ORB_ptr orb);

int
ACE_TMAIN (int argc, ACE_TCHAR *argv[])
{
  Test::Server_Request_Interceptor* cri = 0;
  ACE_NEW_RETURN (cri,
                  Test::Server_Request_Interceptor ("test_orb",
                                                    test_transport_current),
                  -1);
  PortableInterceptor::ServerRequestInterceptor_var cri_safe (cri);

  return server_main (argc, argv, cri);
}
