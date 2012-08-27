// -*- C++ -*-
//
// $Id: Foo_i.cpp 91816 2010-09-17 08:35:56Z johnnyw $

#include "Foo_i.h"


Foo_i::Foo_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Foo_i::shutdown (void)
{
  ACE_DEBUG ((LM_DEBUG,"SUCCESS: server received expected shutdown\n"));
  this->orb_->shutdown (0);
}
