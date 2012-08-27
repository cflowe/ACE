//$Id: duration.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "duration.h"

Duration::Duration ()
{
}


bool
Duration::check (const ::DDS_Duration_t & dds_dur,
                 const ::DDS::Duration_t & dur)
{
  return dds_dur.sec == dur.sec &&
         dds_dur.nanosec == dur.nanosec;
}
