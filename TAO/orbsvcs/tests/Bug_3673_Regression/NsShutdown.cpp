// $Id: NsShutdown.cpp 95323 2011-12-14 12:37:01Z msmit $

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
