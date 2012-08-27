// $Id: dest_order_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "dest_order_qos_test.h"

DestinationOrderPolicyTest::DestinationOrderPolicyTest ()
{
}

bool
DestinationOrderPolicyTest::check (const ::DDS_DestinationOrderQosPolicy & dds_qos,
                                   const ::DDS::DestinationOrderQosPolicy & qos)
{
  return dds_qos.kind == static_cast <DDS_DestinationOrderQosPolicyKind> (qos.kind);
}
