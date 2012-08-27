// $Id: Resource_Factory.h 32904 2000-05-31 17:29:37Z irfan $

#include "tao/default_resource.h"
#include "Alt_Resource_Factory.h"

class Alt_Resource_Factory_Export My_Resource_Factory : public TAO_Default_Resource_Factory
{
public:
  ACE_Reactor_Impl *allocate_reactor_impl (void) const;
};

ACE_FACTORY_DECLARE (Alt_Resource_Factory, My_Resource_Factory)
