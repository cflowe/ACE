// $Id: Messenger_i.cpp 78067 2007-04-17 12:10:42Z johnnyw $

#include "Messenger_i.h"

Messenger_i::Messenger_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void Messenger_i::send (void)
{
  this->orb_->shutdown (0);
}

