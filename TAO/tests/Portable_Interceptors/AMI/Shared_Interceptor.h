/**
 * @file Shared_Interceptor.h
 *
 * $Id: Shared_Interceptor.h 47149 2002-11-12 02:08:02Z ossama $
 *
 */
#ifndef Shared_Interceptor__h_
#define Shared_Interceptor__h_

#include "tao/IOPC.h"

// Unreserved (and probably unwanted) ServiceId
const IOP::ServiceId service_id = 0xdeadbeef;

const char magic_cookie[] = "Magic Cookie";
const CORBA::ULong magic_cookie_len = sizeof(magic_cookie);

#endif /* Shared_Interceptor__h_ */
