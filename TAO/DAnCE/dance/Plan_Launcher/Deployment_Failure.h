/**
 * @file Deployment_Failure.h
 * @author William R. Otte <wotte@dre.vanderbilt.edu>
 *
 * $Id: Deployment_Failure.h 91745 2010-09-13 18:28:28Z johnnyw $
 *
 * Defines exceptions used internally to the Plan Launcher
 */

#ifndef DANCE_DEPLOYMENT_FAILURE
#define DANCE_DEPLOYMENT_FAILURE

#include "ace/SString.h"

namespace DAnCE
{
  struct Deployment_Failure
  {
    Deployment_Failure (const ACE_CString &ex) : ex_ (ex) {}

    ACE_CString ex_;
  };
}

#endif
