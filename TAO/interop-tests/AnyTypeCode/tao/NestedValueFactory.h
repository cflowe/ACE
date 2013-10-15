// -*- C++ -*-
//$Id: NestedValueFactory.h 97289 2013-08-13 13:54:46Z mesnier_p $

#ifndef NESTEDVALUEFACTORY_H
#define NESTEDVALUEFACTORY_H

#include "DemoC.h"

class Demo_NestedValueFactory : public virtual CORBA::ValueFactoryBase
{
  virtual CORBA::ValueBase* create_for_unmarshal();
};

#endif
