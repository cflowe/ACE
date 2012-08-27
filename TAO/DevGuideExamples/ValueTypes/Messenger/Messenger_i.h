// $Id: Messenger_i.h 83359 2008-10-21 23:50:20Z sowayaa $

#ifndef MESSENGER_I_H_
#define MESSENGER_I_H_

#include "MessengerS.h"

class  Messenger_i : public virtual POA_Messenger
{
public:
  virtual CORBA::Boolean send_message(Message*& msg);
};

#endif
