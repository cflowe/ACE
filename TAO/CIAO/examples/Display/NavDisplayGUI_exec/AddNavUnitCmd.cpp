// $Id: AddNavUnitCmd.cpp 90297 2010-05-25 20:56:18Z johnnyw $

#include "AddNavUnitCmd.h"
#include "RootPanel.h"
#include "NavUnit.h"

AddNavUnitCmd::AddNavUnitCmd()
{
}

AddNavUnitCmd *
AddNavUnitCmd::create(RootPanel *form, NavUnit *unit)
{
  AddNavUnitCmd *cmd = new AddNavUnitCmd();
  cmd->form_ = form;
  cmd->unit_ = unit;
  return cmd;
}

int
AddNavUnitCmd::execute(void * /* context */)
{
  this->form_->addUnit (this->unit_);
  return 0;
}
