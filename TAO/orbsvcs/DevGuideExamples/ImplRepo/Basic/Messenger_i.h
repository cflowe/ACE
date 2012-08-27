// $Id: Messenger_i.h 83414 2008-10-23 08:12:35Z johnnyw $

#ifndef MESSENGERI_H_
#define MESSENGERI_H_

#include "MessengerS.h"

class  Messenger_i : public virtual POA_Messenger
{
  int count;
public:
  Messenger_i() : count(0) {}
  virtual CORBA::Boolean send_message (
    const char * user_name,
    const char * subject,
    char *& message);
};

#endif
