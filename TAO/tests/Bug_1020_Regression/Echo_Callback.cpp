/**
 * @file Echo_Callback.cpp
 *
 * $Id: Echo_Callback.cpp 91672 2010-09-08 18:44:58Z johnnyw $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 *
 */
#include "Echo_Callback.h"



Echo_Callback::Echo_Callback()
{
}

void
Echo_Callback::echo_payload(Test::Payload const &
                            TAO_ENV_ARG_DECL_NOT_USED)
{
  static int n = 0;
  n++;
  if(n == 30)
    ACE_OS::abort();

  ACE_Time_Value tick(0, 20000);
  ACE_OS::sleep(tick);
}

void
Echo_Callback::echo_payload_excep(Test::AMI_EchoExceptionHolder *
                                  TAO_ENV_ARG_DECL_NOT_USED)
{
}
