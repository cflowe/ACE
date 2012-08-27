// $Id: dur_service_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "dur_service_qos_test.h"

DurabilityServicePolicyTest::DurabilityServicePolicyTest ()
{
}

bool
DurabilityServicePolicyTest::check (const ::DDS_DurabilityServiceQosPolicy & dds_qos,
                                    const ::DDS::DurabilityServiceQosPolicy & qos)
{
  return dds_qos.service_cleanup_delay.sec == qos.service_cleanup_delay.sec &&
         dds_qos.history_kind == static_cast <DDS_HistoryQosPolicyKind> (qos.history_kind) &&
         dds_qos.history_depth == qos.history_depth &&
         dds_qos.max_samples == qos.max_samples &&
         dds_qos.max_instances == qos.max_instances &&
         dds_qos.max_samples_per_instance == qos.max_samples_per_instance;
}
