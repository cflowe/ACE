
//=============================================================================
/**
 *  @file   test_i.h
 *
 *  $Id: test_i.h 93650 2011-03-28 08:44:53Z johnnyw $
 *
 *  @author Bala Natarajan <bala@cs.wustl.edu>
 */
//=============================================================================


#ifndef TAO_FT_IOGR_TEST_I_H
#define TAO_FT_IOGR_TEST_I_H

#include "testS.h"

/**
 * @class Simple_Server_i
 *
 * @brief Simpler Server implementation
 *
 * Implements the Simple_Server interface in test.idl
 */
class Simple_Server_i : public POA_Simple_Server
{
public:
  /// ctor
  Simple_Server_i (CORBA::ORB_ptr orb);

  /// ctor
  Simple_Server_i (void);

  // = The Simple_Server methods.
  void remote_call (void);

  void shutdown (void);

private:
  CORBA::ORB_var orb_;
};

#endif /* TAO_FT_IOGR_TEST_I_H */
