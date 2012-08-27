// $Id: sub_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef SUBSCRIBER_QOS_TEST_H_
#define SUBSCRIBER_QOS_TEST_H_


#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/SubscriberQos.h"

class SubscriberPolicyTest
{
public:
  SubscriberPolicyTest ();

  int run ();
};

#endif /* SUBSCRIBER_QOS_TEST_H_ */
