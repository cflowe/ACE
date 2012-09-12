// $Id: Test_impl.cpp 96016 2012-08-08 15:48:50Z sma $

#include "Test_impl.h"



Server_impl::Server_impl (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void Server_impl::shutdown ()
{
  this->orb_->shutdown (0);
}
