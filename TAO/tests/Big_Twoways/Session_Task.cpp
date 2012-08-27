//
// $Id: Session_Task.cpp 91652 2010-09-08 14:42:59Z johnnyw $
//

#include "Session_Task.h"
#include "Session.h"

Session_Task::Session_Task (Session *session)
  : session_ (session)
{
}

int
Session_Task::svc (void)
{
  return this->session_->svc ();
}
