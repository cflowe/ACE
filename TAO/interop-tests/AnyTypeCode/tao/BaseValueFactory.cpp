// $Id: BaseValueFactory.cpp 97289 2013-08-13 13:54:46Z mesnier_p $
#include "BaseValueFactory.h"
#include "BaseValueImpl.h"

CORBA::ValueBase*
Demo_BaseValueFactory::create_for_unmarshal()
{
  return new Demo_BaseValueImpl();
}

Demo::BaseValue*
Demo_BaseValueFactory::create(const char *str)
{
  Demo_BaseValueImpl *baseValueImpl = new Demo_BaseValueImpl();
  baseValueImpl->str(str);
  return baseValueImpl;
}
