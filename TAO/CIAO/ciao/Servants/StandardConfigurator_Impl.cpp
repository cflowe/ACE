// $Id: StandardConfigurator_Impl.cpp 89805 2010-04-08 10:14:44Z johnnyw $

#include "StandardConfigurator_Impl.h"
#include "Servant_Impl_Base.h"

#if !defined (CCM_LW)

namespace CIAO
{
  StandardConfigurator_Impl::StandardConfigurator_Impl (
        Connector_Servant_Impl_Base* servant)
    : component_ (servant)
  {
  }

  StandardConfigurator_Impl::~StandardConfigurator_Impl (void)
  {
  }

  void
  StandardConfigurator_Impl::set_configuration (
    const Components::ConfigValues &descr)
  {
    this->component_->set_attributes (descr);
  }

  void
  StandardConfigurator_Impl::configure (Components::CCMObject_ptr)
  {
  }
}

#endif

