// -*- C++ -*-
// $Id: test_i.cpp 91652 2010-09-08 14:42:59Z johnnyw $

#include "test_i.h"

test_i::test_i (CORBA::Short num,
                CORBA::ORB_ptr orb)
  : number_ (num),
    orb_ (CORBA::ORB::_duplicate (orb))
{
}

test_i::~test_i (void)
{
}

CORBA::Short
test_i::number (void)
{
  return this->number_;
}

void
test_i::shutdown (void)
{
  ACE_DEBUG ((LM_DEBUG,
              "Server is shutting down via object %d.\n",
              this->number_));
  this->orb_->shutdown (0);
}
