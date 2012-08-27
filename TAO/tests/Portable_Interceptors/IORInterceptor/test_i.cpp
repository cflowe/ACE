// -*- C++ -*-
// $Id: test_i.cpp 91652 2010-09-08 14:42:59Z johnnyw $

#include "test_i.h"

test_i::test_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
test_i::shutdown (void)
{
  ACE_DEBUG ((LM_DEBUG,
              "\"test_i\" is shutting down.\n"));
  this->orb_->shutdown (0);
}
