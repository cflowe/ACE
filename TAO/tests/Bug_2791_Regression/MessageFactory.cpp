// $Id: MessageFactory.cpp 91816 2010-09-17 08:35:56Z johnnyw $

#include "MessageFactory.h"


int MessageFactory::destructorInvoked_ = 0;


MessageFactory::~MessageFactory ()
{
  ACE_DEBUG ((LM_DEBUG, "MessageFactory: destructor invoked\n"));
  destructorInvoked_ = 1;
}


CORBA::ValueBase *
MessageFactory::create_for_unmarshal ()
{
  return new MessageImpl ();
}
