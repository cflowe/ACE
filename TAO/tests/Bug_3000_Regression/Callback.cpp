//
// $Id: Callback.cpp 91648 2010-09-08 13:25:56Z johnnyw $
//
#include "Callback.h"

Callback::Callback (void)
  : received_callback_ (false)
{
}

void
Callback::test_oneway (void)
{
  received_callback_ = true;

  ACE_DEBUG ((LM_DEBUG,
              "(%P|%t) Callback - test_oneway!\n"));
}

bool
Callback::received_callback (void)
{
  return received_callback_;
}
