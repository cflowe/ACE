// $Id: lifespan_qos_test.cpp 91815 2010-09-17 08:35:19Z johnnyw $

#include "lifespan_qos_test.h"

#include "duration.h"

LifespanPolicyTest::LifespanPolicyTest ()
{
}

bool
LifespanPolicyTest::check (const ::DDS_LifespanQosPolicy & dds_qos,
                           const ::DDS::LifespanQosPolicy & qos)
{
  return Duration::check (dds_qos.duration, qos.duration);
}
