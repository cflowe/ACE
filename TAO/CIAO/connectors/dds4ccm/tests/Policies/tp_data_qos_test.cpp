// $Id: tp_data_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "tp_data_qos_test.h"

#include "octet_seq.h"

TopicDataPolicyTest::TopicDataPolicyTest ()
{
}

bool
TopicDataPolicyTest::check (const ::DDS_TopicDataQosPolicy & dds_qos,
                            const ::DDS::TopicDataQosPolicy & qos)
{
  return OctetSequence::check (dds_qos.value,
                               qos.value,
                               "TopicDataPolicyTest");
}
