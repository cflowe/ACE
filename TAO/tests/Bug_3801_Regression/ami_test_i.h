
//=============================================================================
/**
 *  @file   ami_test_i.h
 *
 *  $Id: ami_test_i.h 88307 2009-12-23 09:09:46Z johnnyw $
 *
 *  @author Michael Kircher <Michael.Kircher@mchp.siemens.de>
 */
//=============================================================================


#ifndef TAO_AMI_TEST_I_H
#define TAO_AMI_TEST_I_H

#include "ami_testS.h"

/**
 * @class AMI_Test_i
 *
 * @brief AMI Test implementation
 *
 * Implements the AMI_Test interface in test.idl
 */
class AMI_Test_i : public POA_A::AMI_Test
{
public:
  /// ctor
  AMI_Test_i (CORBA::ORB_ptr orb);

  void shutdown (void);

  CORBA::Long yadda (void);

  void yadda (CORBA::Long yadda);

  CORBA::Long dadda (void);

  void inout_arg_test (char *& str);

private:
  CORBA::ORB_var orb_;
};

#endif /* TAO_AMI_TEST_I_H */

