// $Id: InheritedOp_i.cpp 91816 2010-09-17 08:35:56Z johnnyw $

#include "InheritedOp_i.h"

Derived_i::Derived_i (CORBA::ORB_ptr orb)
  : orb_ (orb)
{
}

void
Derived_i::BaseOp (void)
{
  ACE_DEBUG ((LM_DEBUG, "BaseOp upcall successful\n"));
}

void
Derived_i::shutdown (void)
{
  orb_->shutdown ();
}
