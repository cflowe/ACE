// $Id: dw_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef DATAWRITER_QOS_TEST_H_
#define DATAWRITER_QOS_TEST_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/DataWriterQos.h"

class DatawriterPolicyTest
{
public:
  DatawriterPolicyTest ();

  int run ();
};

#endif /* DATAWRITER_QOS_TEST_H_ */
