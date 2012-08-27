// $Id: ServerInitializer.h 83358 2008-10-21 23:02:02Z sowayaa $

#ifndef SERVERINITIALIZER_H
#define SERVERINITIALIZER_H

#include "tao/PortableInterceptorC.h"
#include "tao/PI/PI.h"

class ServerInitializer :
public virtual PortableInterceptor::ORBInitializer
{
 public:
  ServerInitializer ();

  virtual void pre_init (PortableInterceptor::ORBInitInfo_ptr info);

  virtual void post_init (PortableInterceptor::ORBInitInfo_ptr info);

 private:
  int interceptor_type_;
};

#endif
