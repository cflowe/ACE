
//=============================================================================
/**
 *  @file    MT_Object_i.h
 *
 *  $Id: MT_Object_i.h 93658 2011-03-28 11:22:55Z johnnyw $
 *
 *  This class implements the Object A of the
 *  Nested Upcalls - MT Client test
 *
 *  @author Michael Kircher
 */
//=============================================================================

#ifndef MT_OBJECT_IMPL_H
#  define MT_OBJECT_IMPL_H

#include "MT_Client_TestS.h"
#include "MT_Client_TestC.h"

/**
 * @class MT_Object_i
 *
 * @brief Implement the <MT_Object> IDL interface.
 */
class MT_Object_i : public POA_MT_Object
{
public:
  /// Constructor.
  MT_Object_i (void);

  /// Destructor.
  virtual ~MT_Object_i (void);

  virtual CORBA::Long yadda (CORBA::Long hop_count,
                             MT_Object_ptr partner);
};

#endif /* MT_OBJECT_IMPL_H */
