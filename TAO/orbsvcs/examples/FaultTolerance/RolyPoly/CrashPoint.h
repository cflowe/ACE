// file      : RolyPoly/CrashPoint.h
// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// cvs-id    : $Id: CrashPoint.h 54669 2003-12-22 01:44:39Z wilson_d $

#ifndef CRASH_POINT_H
#define CRASH_POINT_H

// Valid crash-point values:
//
// 0 no crash (default)
//
// 1 crash before logging the reply
//
// 2 crash after logging the reply but before replying to the client
//

extern short crash_point;

#endif // CRASH_POINT_H
