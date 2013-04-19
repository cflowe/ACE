/* -*- C++ -*- $Id: Terminator.h 96840 2013-02-19 21:48:51Z harrisb $ */

#include "ace/Task_T.h"

class Terminator : public ACE_Task<ACE_MT_SYNCH>
{
 public:

  virtual int open(void*);

  virtual int svc();
};

