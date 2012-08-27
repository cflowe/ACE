// $Id: test_i.cpp 91649 2010-09-08 13:44:26Z johnnyw $

#include "test_i.h"

#if !defined(__ACE_INLINE__)
#include "test_i.inl"
#endif /* __ACE_INLINE__ */

Simple_Server_i::Simple_Server_i (void)
  :orb_ (0)
{
  // no-op
}

void
Simple_Server_i::remote_call (void)
{
  ACE_DEBUG ((LM_DEBUG,
              "Print out from process id (%P) hosting the servant\n"));
}


void
Simple_Server_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
