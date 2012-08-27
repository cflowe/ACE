/* -*- C++ -*- */
// $Id: tao_imr.cpp 65388 2005-04-12 22:18:49Z michel_j $

#include "tao_imr_i.h"

int
ACE_TMAIN (int argc, ACE_TCHAR *argv[])
{
  TAO_IMR_i tao_imr_i;

  if (tao_imr_i.init (argc, argv) != 0)
    return 1;

  return tao_imr_i.run ();
}
