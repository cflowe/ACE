// -*- C++ -*-

//=============================================================================
/**
 *  @file    CSD_ThreadPool.h
 *
 *  $Id: CSD_ThreadPool.h 79212 2007-08-06 05:13:12Z johnnyw $
 *
 *  @author  Tim Bradley <bradley_t@ociweb.com>
 */
//=============================================================================

#ifndef TAO_CSD_THREADPOOL_H
#define TAO_CSD_THREADPOOL_H

#include /**/ "ace/pre.h"

#include "tao/CSD_ThreadPool/CSD_TP_Export.h"
#include "tao/Versioned_Namespace.h"
#include "ace/Service_Object.h"
#include "ace/Service_Config.h"


#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class TP_Strategy_Factory
 *
 * @brief An ACE_Service_Object capable of creating TP_Strategy objects.
 *
 * TBD - Explain in more detail.
 *
 */
class TAO_CSD_TP_Export TAO_CSD_ThreadPool
{
 public:
  /// Used to force the initialization of the ORB code.
  static int init (void);
};

static int
TAO_Requires_CSD_Threadpool =
  TAO_CSD_ThreadPool::init ();

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* TAO_CSD_THREADPOOL_H */
