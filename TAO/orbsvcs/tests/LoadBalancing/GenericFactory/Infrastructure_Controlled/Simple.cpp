// $Id: Simple.cpp 91675 2010-09-08 19:09:19Z johnnyw $

#include "Simple.h"

Simple::Simple (void)
{
}

char *
Simple::get_string (void)
{
  return CORBA::string_dup ("TAO Load Balancing Works!");
}
