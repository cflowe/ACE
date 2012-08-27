//$Id: tp_data_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef TOPIC_DATA_QOS_TEST_H_
#define TOPIC_DATA_QOS_TEST_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/TopicDataQosPolicy.h"

class TopicDataPolicyTest
{
public:
  TopicDataPolicyTest ();

  static bool check (const ::DDS_TopicDataQosPolicy & dds_qos,
                     const ::DDS::TopicDataQosPolicy & qos);
};

#endif /* TOPIC_DATA_QOS_TEST_H_ */
