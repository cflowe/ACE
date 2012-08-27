
//=============================================================================
/**
 *  @file   test_i.h
 *
 *  $Id: test_i.h 93650 2011-03-28 08:44:53Z johnnyw $
 *
 *  @author Irfan Pyarali
 */
//=============================================================================


#include "testS.h"

/**
 * @class test_i
 *
 * @brief Simple test implementation.
 */
class test_i : public POA_test
{
public:
  /// ctor.
  test_i (CORBA::ORB_ptr orb);

  // = The test interface methods.
  CORBA::ULong method (CORBA::ULong work);

  void shutdown (void);

private:
  /// The ORB.
  CORBA::ORB_var orb_;
};
