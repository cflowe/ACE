// $Id: common.h 90302 2010-05-26 10:27:29Z vzykov $

#include "ace/ace_wchar.h"

#define FIRST_ORB_NAME "first_orb"
#define SECOND_ORB_NAME "second_orb"

typedef int (*orbs_check_callback)(void);

int do_main (int argc, ACE_TCHAR *argv[], orbs_check_callback check);
