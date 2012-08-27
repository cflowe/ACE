// $Id: group_data_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "group_data_qos_test.h"

#include "octet_seq.h"

GroupDataPolicyTest::GroupDataPolicyTest ()
{
}

bool
GroupDataPolicyTest::check (const ::DDS_GroupDataQosPolicy & dds_qos,
                            const ::DDS::GroupDataQosPolicy & qos)
{
  return OctetSequence::check (dds_qos.value,
                               qos.value,
                               "GroupDataPolicyTest");
}
