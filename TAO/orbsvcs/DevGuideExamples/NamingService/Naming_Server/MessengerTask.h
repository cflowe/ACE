// $Id: MessengerTask.h 83415 2008-10-23 08:18:15Z johnnyw $

#ifndef MESSENGERTASK_H
#define MESSENGERTASK_H

#include "tao/corba.h"
#include "ace/Task.h"

class MessengerTask : public ACE_Task_Base
{
public:
  MessengerTask();
  virtual int svc();

  void end();
private:
  CORBA::ORB_var orb_;
};

#endif
