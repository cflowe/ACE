// $Id: ChildServant.cpp 77008 2007-02-12 11:52:38Z johnnyw $

#include "ChildServant.h"

ChildServant::ChildServant(CORBA::ORB_ptr orb)
: orb_(CORBA::ORB::_duplicate(orb))
{
}

void
ChildServant::childMethod ()
{
   // No-op
}

void
ChildServant::parentMethod ()
{
   // Just throw an exception
   throw CORBA::INTERNAL ();
}

void
ChildServant::shutdown ()
{
   this->orb_->shutdown(0);
}
