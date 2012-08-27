//$Id: liveliness_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef LIVELINESS_QOS_TEST_H_
#define LIVELINESS_QOS_TEST_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/LivelinessQosPolicy.h"

class LivelinessPolicyTest
{
public:
  LivelinessPolicyTest ();

  static bool check (const ::DDS_LivelinessQosPolicy & dds_qos,
                     const ::DDS::LivelinessQosPolicy & qos);
};

#endif /* LIVELINESS_QOS_TEST_H_ */
