// -*- C++ -*-
// $Id: Client_ORBInitializer.cpp 91652 2010-09-08 14:42:59Z johnnyw $

#include "Client_ORBInitializer.h"

Client_ORBInitializer::Client_ORBInitializer (void) :
  pre_init_called (false),
  post_init_called (false)
{
}

void
Client_ORBInitializer::pre_init (
    PortableInterceptor::ORBInitInfo_ptr)
{
  pre_init_called = true;

  throw CORBA::NO_MEMORY ();
}

void
Client_ORBInitializer::post_init (
    PortableInterceptor::ORBInitInfo_ptr)
{
  post_init_called = true;

  throw CORBA::NO_MEMORY ();
}

