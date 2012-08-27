// file      : RolyPoly/StateUpdate.h
// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// cvs-id    : $Id: StateUpdate.h 54669 2003-12-22 01:44:39Z wilson_d $

#ifndef STATE_UPDATE_H
#define STATE_UPDATE_H

#include "tao/corba.h"

class Checkpointable
{
public:
  virtual
  ~Checkpointable ();

  virtual CORBA::Any*
  get_state ();

  static void
  associate_state (CORBA::ORB_ptr orb, CORBA::Any const& state);

  virtual void
  set_state (CORBA::Any const& state) = 0;
};


#endif // STATE_UPDATE_H
