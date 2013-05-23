// $Id: NsShutdown.cpp 96986 2013-04-11 16:39:42Z mesnier_p $

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
