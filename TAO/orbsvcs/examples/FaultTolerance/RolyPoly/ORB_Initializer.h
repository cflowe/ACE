// file      : RolyPoly/ORB_Initializer.h
// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// cvs-id    : $Id: ORB_Initializer.h 81490 2008-04-28 14:32:24Z johnnyw $

#ifndef ORB_INITIALIZER_H
#define ORB_INITIALIZER_H

#include "tao/LocalObject.h"
#include "tao/PI/PI.h"

class ORB_Initializer :
  public virtual PortableInterceptor::ORBInitializer,
  public virtual ::CORBA::LocalObject
{
public:

  virtual void
  pre_init (PortableInterceptor::ORBInitInfo_ptr info);

  virtual void
  post_init (PortableInterceptor::ORBInitInfo_ptr info);
};

#endif /* ORB_INITIALIZER_H */
