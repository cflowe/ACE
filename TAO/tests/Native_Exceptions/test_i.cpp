// $Id: test_i.cpp 91649 2010-09-08 13:44:26Z johnnyw $

#include "test_i.h"

#if !defined(__ACE_INLINE__)
#include "test_i.inl"
#endif /* __ACE_INLINE__ */

CORBA::Long
Simple_Server_i::test_method (CORBA::Long x)
{
  return x;
}

CORBA::Long
Simple_Server_i::test_raise (CORBA::Long)
{
  throw Simple_Server::Failure ();
}

void
Simple_Server_i::shutdown (void)
{
  this->orb_->shutdown ();
}
