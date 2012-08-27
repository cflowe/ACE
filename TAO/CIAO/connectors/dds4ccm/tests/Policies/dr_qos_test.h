// $Id: dr_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef DATAREADER_QOS_TEST_H_
#define DATAREADER_QOS_TEST_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/DataReaderQos.h"

class DatareaderPolicyTest
{
public:
  DatareaderPolicyTest ();

  int run ();
};

#endif /* DATAREADER_QOS_TEST_H_ */
