$Id: ReadMe.txt 94654 2011-10-07 09:17:20Z msmit $

tao#532 - Bugzilla Bug 2962

The original problem is that asking the IFR for the length of an array doesn't
always give the correct answer.

Basically any recursive array within an array corrupts the containing array's
length result.
