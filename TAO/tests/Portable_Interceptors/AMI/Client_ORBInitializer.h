/**
 * @file Client_ORBInitializer.h
 *
 * $Id: Client_ORBInitializer.h 81490 2008-04-28 14:32:24Z johnnyw $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 */

#ifndef Client_ORBInitializer__h_
#define Client_ORBInitializer__h_
#include /**/ "ace/pre.h"

#include "tao/PI/PI.h"
#include "tao/LocalObject.h"

class Client_ORBInitializer
  : public virtual PortableInterceptor::ORBInitializer
  , public virtual ::CORBA::LocalObject
{
public:
  Client_ORBInitializer ();

  virtual void pre_init (PortableInterceptor::ORBInitInfo_ptr info);

  virtual void post_init (PortableInterceptor::ORBInitInfo_ptr info);
};

#include /**/ "ace/post.h"
#endif /* Client_ORBInitializer__h_ */
