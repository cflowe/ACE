// $Id: NamingTask.h 96986 2013-04-11 16:39:42Z mesnier_p $

#ifndef NAMINGTASK_H
#define NAMINGTASK_H

#include "tao/CORBA_String.h"
#include "tao/ORB.h"
#include "ace/Task.h"
#include "ace/Synch_Traits.h"

class NamingTask : public ACE_Task_Base
{
public:
  NamingTask (const char* orbname, int argc, ACE_TCHAR **argv, unsigned short port);
  virtual int svc();
  void waitInit ();
  void end();

  const char* ior ();

private:
  CORBA::ORB_var orb_;
  bool initialized_;
  CORBA::String_var ior_;
};

#endif
