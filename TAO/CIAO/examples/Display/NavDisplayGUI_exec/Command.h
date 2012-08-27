// $Id: Command.h 94051 2011-05-11 13:25:57Z johnnyw $

#ifndef __COMMAND_H
#define __COMMAND_H

#include <QtCore/qdatetime.h>

class CommandBase
{
public:
  CommandBase() {timestamp_ = QTime::currentTime();}
  virtual ~CommandBase() {}

public:
  virtual int execute(void *context = 0) = 0;
  QTime timestamp_;
};


#endif // __COMMAND_H
