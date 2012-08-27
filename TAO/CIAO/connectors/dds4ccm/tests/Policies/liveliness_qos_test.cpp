// $Id: liveliness_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "liveliness_qos_test.h"

#include "duration.h"

LivelinessPolicyTest::LivelinessPolicyTest ()
{
}

bool
LivelinessPolicyTest::check (const ::DDS_LivelinessQosPolicy & dds_qos,
                             const ::DDS::LivelinessQosPolicy & qos)
{
  return dds_qos.kind == static_cast <DDS_LivelinessQosPolicyKind> (qos.kind) &&
         Duration::check (dds_qos.lease_duration, qos.lease_duration);
}
