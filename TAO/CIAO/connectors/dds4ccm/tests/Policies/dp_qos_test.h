//$Id: dp_qos_test.h 92430 2010-10-30 07:02:24Z msmit $

#ifndef DOMAINPARTICIPANT_QOS_TEST_H_
#define DOMAINPARTICIPANT_QOS_TEST_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ndds/ndds_cpp.h"
#include "dds4ccm/impl/ndds/convertors/DomainParticipantQos.h"

class DomainParticipantPolicyTest
{
public:
  DomainParticipantPolicyTest ();

  int run ();
};

#endif /* DOMAINPARTICIPANT_QOS_TEST_H_ */
