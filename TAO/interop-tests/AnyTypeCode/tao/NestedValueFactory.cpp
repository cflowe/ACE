//$Id: NestedValueFactory.cpp 97289 2013-08-13 13:54:46Z mesnier_p $

#include "NestedValueFactory.h"
#include "NestedValueImpl.h"

CORBA::ValueBase*
Demo_NestedValueFactory::create_for_unmarshal (void)
{
  return new Demo_NestedValueImpl ();
}
