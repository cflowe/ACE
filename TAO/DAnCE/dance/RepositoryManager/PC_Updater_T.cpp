// $Id: PC_Updater_T.cpp 74768 2006-10-16 09:02:12Z johnnyw $
#ifndef PC_UPDATER_T_C
#define PC_UPDATER_T_C
#include "PC_Updater.h"
#include "PC_Updater_T.h"

namespace PC_Updater_T
{
  /// Dumps a sequence
  template <typename SEQUENCE>
  void update_sequence (SEQUENCE &seq, PC_Updater* updater)
  {
    CORBA::ULong const size = seq.length ();

    for (CORBA::ULong i = 0; i < size; ++i)
      updater->update (seq[i]);
  }
}

#endif /* PC_Updater_C */
