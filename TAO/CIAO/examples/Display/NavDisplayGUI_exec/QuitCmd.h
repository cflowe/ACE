// $Id: QuitCmd.h 78622 2007-06-28 03:43:08Z sowayaa $

#ifndef __QUITCMD_H
#define __QUITCMD_H

#include "Command.h"

class RootPanel;

class QuitCmd : public CommandBase
{
public:
  static QuitCmd *create(RootPanel *form);

public:
  virtual int execute(void *context = 0);

protected:
  QuitCmd();

  RootPanel *form_;
};


#endif // __QUITCMD_H
