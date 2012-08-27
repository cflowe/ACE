// $Id: test_i.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "test_i.h"

#if !defined(__ACE_INLINE__)
#include "test_i.inl"
#endif /* __ACE_INLINE__ */



void
Simple_Server_i::send_line (const char *line)
{
  ACE_DEBUG ((LM_DEBUG, "%s\n", line));
}

void
Simple_Server_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
