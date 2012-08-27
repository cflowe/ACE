// $Id: transport_prio_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "transport_prio_qos_test.h"

TransportPriorityPolicyTest::TransportPriorityPolicyTest ()
{
}

bool
TransportPriorityPolicyTest::check (const ::DDS_TransportPriorityQosPolicy & dds_qos,
                                    const ::DDS::TransportPriorityQosPolicy & qos)
{
  return dds_qos.value == qos.value;
}
