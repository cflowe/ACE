// -*- C++ -*-

//=============================================================================
/**
 * @file ORT_test_i.h
 *
 * $Id: ORT_test_i.h 77008 2007-02-12 11:52:38Z johnnyw $
 *
 * Implementation header for the "server" IDL interface for the
 * ORT example.
 *
 * @author Priyanka Gontla <gontla_p@ociweb.com>
 */
//=============================================================================


#ifndef ORT_TEST_I_H
#define ORT_TEST_I_H

#include "ORT_testS.h"


class ORT_test_i : public virtual POA_ObjectReferenceTemplate::ORT_test
{
public:

  ORT_test_i (CORBA::ORB_ptr orb);

  virtual CORBA::Boolean request_server (void);

  virtual void shutdown (void);

private:

  CORBA::ORB_var orb_;

};


#endif  /* ORT_TEST_I_H */
