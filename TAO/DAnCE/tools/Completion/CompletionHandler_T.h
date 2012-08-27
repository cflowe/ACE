// -*- C++ -*-

//=============================================================================
/**
 *  @file    CompletionHandler_T.h
 *
 *  $Id: CompletionHandler_T.h 90150 2010-05-17 16:21:51Z johnnyw $
 *
 *  @author Martin Corino <mcorino@remedy.nl>
 */
//=============================================================================

#ifndef COMPLETION_HANDLER_T_H
#define COMPLETION_HANDLER_T_H

#include /**/ "ace/pre.h"

#include /**/ "ace/config-all.h"
#include "tao/Exception.h"

namespace DAnCE
  {

  template <class PROCESSOR>
  class CompletionHandler
    {
    public:
      virtual ~CompletionHandler () {}

      virtual void handle_completion (PROCESSOR *processor) = 0;
      virtual void handle_exception (CORBA::Exception* local_ex) = 0;
    };
  } /* DAnCE */

#include /**/ "ace/post.h"

#endif /* COMPLETION_HANDLER_T_H */
