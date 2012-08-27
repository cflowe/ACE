// $Id: LocalObject.cpp 92559 2010-11-12 12:28:03Z johnnyw $

#include "dds4ccm/impl/LocalObject.h"

namespace CIAO
{
  namespace DDS4CCM
  {
    LocalObject::LocalObject (void)
    {
    }

    LocalObject::~LocalObject (void)
    {
    }

    ::CORBA::Object_ptr
    LocalObject::_get_component (void)
    {
      return CORBA::Object::_duplicate (this->component_.in ());
    }

    void
    LocalObject::_set_component (::CORBA::Object_ptr component)
    {
      this->component_ = ::CORBA::Object::_duplicate (component);
    }
  }
}
