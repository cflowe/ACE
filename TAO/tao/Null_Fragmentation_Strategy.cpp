// $Id: Null_Fragmentation_Strategy.cpp 76687 2007-01-29 19:18:13Z johnnyw $

#include "tao/Null_Fragmentation_Strategy.h"

TAO_Null_Fragmentation_Strategy::~TAO_Null_Fragmentation_Strategy (void)
{
}

int
TAO_Null_Fragmentation_Strategy::fragment (TAO_OutputCDR &,
                                           ACE_CDR::ULong,
                                           ACE_CDR::ULong)
{
  return 0;
}
