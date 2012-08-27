// $Id: dur_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "dur_qos_test.h"

DurabilityPolicyTest::DurabilityPolicyTest ()
{
}


bool
DurabilityPolicyTest::check (const ::DDS_DurabilityQosPolicy & dds_qos,
                             const ::DDS::DurabilityQosPolicy & qos)
{
  return dds_qos.kind == static_cast <DDS_DurabilityQosPolicyKind> (qos.kind);
}
