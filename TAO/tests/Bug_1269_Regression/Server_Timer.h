/**
 * @file Server_Timer.h
 *
 * $Id: Server_Timer.h 51175 2003-07-21 23:51:40Z dhinton $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 *
 */

#ifndef Server_Timer__h_
#define Server_Timer__h_
#include /**/ "ace/pre.h"

#include "TestC.h"
#include "ace/Event_Handler.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

class Server_Timer : public ACE_Event_Handler
{
public:
  /// Constructor
  Server_Timer (Test::Echo_ptr echo, ACE_Reactor * reactor);

  void activate (void);

  /// Thread entry point
  int handle_timeout(ACE_Time_Value const & tv, void const *);
  int handle_close (ACE_HANDLE, ACE_Reactor_Mask);

private:
  /// Reference to the test interface
  Test::Echo_var echo_;
};

#include /**/ "ace/post.h"
#endif /* Server_Timer__h_ */
