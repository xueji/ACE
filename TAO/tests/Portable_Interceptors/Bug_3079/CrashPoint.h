// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// $Id: CrashPoint.h 79715 2007-09-25 06:49:22Z johnnyw $

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
