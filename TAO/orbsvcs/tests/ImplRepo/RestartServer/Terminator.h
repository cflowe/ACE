/* -*- C++ -*- $Id: Terminator.h 96263 2012-11-12 21:37:55Z harrisb $ */

#include "ace/Task_T.h"

class Terminator : public ACE_Task<ACE_MT_SYNCH>
{
 public:

  virtual int open(void*);

  virtual int svc();
};

