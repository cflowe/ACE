//$Id: utils.h 91731 2010-09-13 09:33:32Z johnnyw $

#include "tao/RTCORBA/RTCORBA.h"
#include "Kokyu_qosC.h"
#include "tao/RTScheduling/RTScheduler.h"

void guid_copy( Kokyu::GuidType& lhs, const RTScheduling::Current::IdType& rhs);
void guid_copy( RTScheduling::Current::IdType& lhs, const Kokyu::GuidType& rhs);
