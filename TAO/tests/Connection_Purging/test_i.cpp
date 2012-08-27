//
// $Id: test_i.cpp 83233 2008-10-14 06:33:08Z johnnyw $
//
#include "test_i.h"

void
test_i::send_stuff (const char* string)
{
  ACE_DEBUG ((LM_DEBUG, "TAO (%P|%t) - %C\n", string));
}

