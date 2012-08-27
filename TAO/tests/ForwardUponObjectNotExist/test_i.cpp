// $Id: test_i.cpp 91648 2010-09-08 13:25:56Z johnnyw $

#include "test_i.h"

#if !defined(__ACE_INLINE__)
#include "test_i.inl"
#endif /* __ACE_INLINE__ */

CORBA::Boolean
Simple_Server_i::test_is_a (const char * /* type */)
{
  // ACE_DEBUG ((LM_DEBUG, "(%P|%t) test_is_a %s\n", type));
  throw ::CORBA::OBJECT_NOT_EXIST ();
  return 0;
}

void
Simple_Server_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
