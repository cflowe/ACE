
//=============================================================================
/**
 *  @file   test_i.h
 *
 *  $Id: test_i.h 93650 2011-03-28 08:44:53Z johnnyw $
 *
 *  @author Nanbor Wang
 */
//=============================================================================


#ifndef TAO_INTERCEPTOR_TEST_I_H
#define TAO_INTERCEPTOR_TEST_I_H

#include "testS.h"

/**
 * @class Secure_Vault_i
 *
 * Implements the Secure_Vault interface in test.idl
 */
class Secure_Vault_i : public POA_Test_Interceptors::Secure_Vault
{

public:
  /// ctor
  Secure_Vault_i (CORBA::ORB_ptr orb);

  virtual CORBA::Short ready (void);

  /// Passwd sent in the service context list
  virtual void authenticate (const char * user);

  virtual CORBA::Long update_records (CORBA::Long id,
                                      const Test_Interceptors::Secure_Vault::Record & val);

  virtual void shutdown (void);

 private:
  /// The ORB pointer (for shutdown.)
  CORBA::ORB_var orb_;
};

#endif /* TAO_INTERCEPTOR_TEST_I_H */
