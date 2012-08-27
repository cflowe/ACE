// $Id: RT_Factories_Define.cpp 91672 2010-09-08 18:44:58Z johnnyw $
#include "../lib/Factories_Define.h"



#include "rt_notify_test_export.h"
#include "../lib/Name.h"
#include "../lib/Command_Factory_T.h"
#include "RT_POA_Command.h"
#include "RT_Application_Command.h"

TAO_Notify_Tests_COMMAND_FACTORY_DEFINE(TAO_RT_NOTIFY_TEST,TAO_Notify_Tests_RT_POA_Command,TAO_Notify_Tests_Name::poa_command_factory)
TAO_Notify_Tests_COMMAND_FACTORY_DEFINE(TAO_RT_NOTIFY_TEST,TAO_Notify_Tests_RT_Application_Command,TAO_Notify_Tests_Name::application_command_factory)
