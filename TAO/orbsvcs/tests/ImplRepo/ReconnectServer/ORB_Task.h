/**
 * @file ORB_Task.h
 *
 * $Id: ORB_Task.h 86232 2009-07-24 21:52:20Z dai_y $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 *
 */
#ifndef IMR_REGRESSION_ORB_TASK_H
#define IMR_REGRESSION_ORB_TASK_H
#include "tao/ORB.h"
#include "ace/Task.h"

class ORB_Task : public ACE_Task_Base
{
public:
  ORB_Task (CORBA::ORB_ptr orb);

  virtual int svc (void);

private:
  CORBA::ORB_var orb_;
};

#endif /* IMR_REGRESSION_ORB_TASK_H*/
