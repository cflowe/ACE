/**
 * @file Utils.h
 * @author Marcel Smit (msmit@remedy.nl)
 *
 * $Id: Utils.h 95809 2012-06-03 17:56:00Z johnnyw $
 *
 * Misc utility classes for NDDS.
 */

#ifndef NDDS_UTILS_H_
#define NDDS_UTILS_H_

#include "ace/String_Base.h"

namespace CIAO
{
  namespace NDDS
  {
    char * get_library_name (const char * qos_profile);
    char * get_profile_name (const char * qos_profile);
  }
}

#endif /* NDDS_UTILS_H_ */
