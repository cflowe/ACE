//
// $Id: Session_Task.cpp 91648 2010-09-08 13:25:56Z johnnyw $
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
