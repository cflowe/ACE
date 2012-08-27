// $Id: Callee_i.cpp 77283 2007-02-21 11:43:23Z johnnyw $

#include "Callee_i.h"

void Callee_i::callback (const char * message)
{
  ACE_DEBUG ((LM_DEBUG, "Callee_i::callback: message is %s", message));
}
