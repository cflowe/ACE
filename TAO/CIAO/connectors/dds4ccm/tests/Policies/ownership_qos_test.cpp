// $Id: ownership_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "ownership_qos_test.h"

OwnershipPolicyTest::OwnershipPolicyTest ()
{
}

bool
OwnershipPolicyTest::check (const ::DDS_OwnershipQosPolicy & dds_qos,
                            const ::DDS::OwnershipQosPolicy & qos)
{
  return dds_qos.kind ==
         static_cast <DDS_OwnershipQosPolicyKind> (qos.kind);
}
