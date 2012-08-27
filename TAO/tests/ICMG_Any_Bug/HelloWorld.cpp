//
// $Id: HelloWorld.cpp 91649 2010-09-08 13:44:26Z johnnyw $
//

#include "HelloWorld.h"

HelloWorld::HelloWorld (void)
{
}

char *
HelloWorld::get_string (void)
{
  return CORBA::string_dup ("TAO Any Implementation Works!");
}
