// $Id: test_i.cpp 91648 2010-09-08 13:25:56Z johnnyw $

#include "test_i.h"

extern CORBA::Boolean receive_request_called;

test_i::test_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

test_i::~test_i (void)
{
}

void
test_i::op (void)
{
  // PortableInterceptor::ServerRequestInterceptor::receive_request()
  // should have been invoked.
  if (::receive_request_called == 0)
    {
      ACE_ERROR ((LM_ERROR,
                  "PortableInterceptor::ServerRequestInterceptor::"
                  "receive_request() not called\n"
                  "prior to target operation execution.\n"));

      throw CORBA::INTERNAL ();
    }
}

void
test_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
