// $Id: NsShutdown.cpp 97131 2013-05-13 19:18:55Z mesnier_p $

#include "NsShutdown.h"

NsShutdown::NsShutdown (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
NsShutdown::shutdown (void)
{
  this->orb_->shutdown (0);
}
