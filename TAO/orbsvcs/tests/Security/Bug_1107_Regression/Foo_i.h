// -*- C++ -*-

//=============================================================================
/**
 * @file Foo_i.h
 *
 * $Id: Foo_i.h 77907 2007-04-04 16:11:14Z elliott_c $
 *
 * Implementation header for the Bug_1107_Regression test.
 *
 * @author Ossama Othman <ossama@uci.edu>
 */
//=============================================================================

#ifndef SECURE_INVOCATION_FOO_I_H
#define SECURE_INVOCATION_FOO_I_H

#include "FooS.h"
#include "orbsvcs/SecurityLevel3C.h"

class Foo_i : public virtual POA_Foo::Bar
{
public:

  /// Constructor.
  Foo_i (CORBA::ORB_ptr,
         SecurityLevel3::SecurityCurrent_ptr current);

  /// Test method.
  virtual void baz (void);

  virtual void shutdown (void);

private:

  /// Reference to the ORB.
  CORBA::ORB_var orb_;

  /// Reference to the "SecurityCurrent" object.
  SecurityLevel3::SecurityCurrent_var current_;

};

#endif  /* SECURE_INVOCATION_FOO_I_H */
