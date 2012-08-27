// $Id: QuitCmd.cpp 90297 2010-05-25 20:56:18Z johnnyw $

#include "QuitCmd.h"
#include "RootPanel.h"

QuitCmd::QuitCmd()
{
}

QuitCmd *
QuitCmd::create(RootPanel *form)
{
  QuitCmd *cmd = new QuitCmd ();
  cmd->form_ = form;
  return cmd;
}

int
QuitCmd::execute (void * /* context */)
{
  return form_->close ();
}
