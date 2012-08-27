//$Id: transport_prio_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef TRANSPORT_PRIORITY_QOS_TEST_H_
#define TRANSPORT_PRIORITY_QOS_TEST_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/TransportPriorityQosPolicy.h"

class TransportPriorityPolicyTest
{
public:
  TransportPriorityPolicyTest ();

  static bool check (const ::DDS_TransportPriorityQosPolicy & dds_qos,
                     const ::DDS::TransportPriorityQosPolicy & qos);
};

#endif /* TRANSPORT_PRIORITY_QOS_TEST_H_ */
