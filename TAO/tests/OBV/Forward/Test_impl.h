
//=============================================================================
/**
 *  @file   Test_impl.h
 *
 *  $Id: Test_impl.h 93650 2011-03-28 08:44:53Z johnnyw $
 *
 *  @author Boris Kolpackov <bosk@ipmce.ru>
 */
//=============================================================================


#ifndef TAO_TEST_IMPL_H
#define TAO_TEST_IMPL_H

#include "TreeControllerS.h"

/**
 * @class Test_impl
 *
 * @brief Implementation of Test interface
 *
 * This interface is provided to produce valuetypes and test
 * marshaling
 */
class Test_impl : public POA_Test
{
public:
  /// ctor
  Test_impl (CORBA::ORB_ptr orb);

  virtual TreeController * reflect (
      TreeController * tc);

  virtual void shutdown (void);

private:
  /// The ORB
  CORBA::ORB_var orb_;
};

#endif /* TAO_TEST_IMPL_H */
