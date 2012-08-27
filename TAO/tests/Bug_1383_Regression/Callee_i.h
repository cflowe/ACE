// $Id: Callee_i.h 77283 2007-02-21 11:43:23Z johnnyw $

#ifndef CALLEE_I_H
#define CALLEE_I_H

#include "calleeS.h"

class Callee_i : public POA_Callee {
  void callback (const char * message);
};

#endif
