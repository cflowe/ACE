// $Id: ownership_strength_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "ownership_strength_qos_test.h"

OwnershipStrengthPolicyTest::OwnershipStrengthPolicyTest ()
{
}

bool
OwnershipStrengthPolicyTest::check (const ::DDS_OwnershipStrengthQosPolicy & dds_qos,
                                    const ::DDS::OwnershipStrengthQosPolicy & qos)
{
  return dds_qos.value == qos.value;
}
