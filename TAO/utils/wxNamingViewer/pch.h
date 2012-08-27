// $Id: pch.h 66167 2005-05-27 20:33:55Z michel_j $
// pch.h

#ifndef i_pch_h
#define i_pch_h

#include "ace/config-all.h"
#include "wx/wxprec.h"

#ifdef WX_PRECOMP
#include "tao/corba.h"
#endif

#ifdef __BORLANDC__
    #pragma hdrstop
#endif
#ifndef WX_PRECOMP
    #include "wx/wx.h"
    #include "tao/corba.h"
#endif

#endif
