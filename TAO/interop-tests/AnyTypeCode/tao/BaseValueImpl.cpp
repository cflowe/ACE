//$Id: BaseValueImpl.cpp 97289 2013-08-13 13:54:46Z mesnier_p $

#include "BaseValueImpl.h"

Demo_BaseValueImpl::Demo_BaseValueImpl()
{
}

Demo_BaseValueImpl::~Demo_BaseValueImpl()
{
}

CORBA::ValueBase*
Demo_BaseValueImpl::_copy_value()
{
  Demo_BaseValueImpl *baseValueImpl = new Demo_BaseValueImpl ();
  baseValueImpl->str (str ());
  return baseValueImpl;
}

