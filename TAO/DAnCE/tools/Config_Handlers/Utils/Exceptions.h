// $Id: Exceptions.h 91657 2010-09-08 15:03:12Z wotte $
/**
 * @file Exceptions.h
 * @author William Otte <wotte@dre.vanderbilt.edu>
 *
 * Defines exceptions that may be thrown during the XSC<=>IDL translation process.
 */
#include <string>

namespace DAnCE
{
  namespace Config_Handlers
  {
    struct Parse_Error
    {
      Parse_Error (const std::basic_string<ACE_TCHAR> &reason)
        : reason_ (reason)
      {
      }

      std::basic_string<ACE_TCHAR> reason_;
    };

    struct Plan_Error
    {
      Plan_Error (const std::basic_string<ACE_TCHAR> &reason)
        : reason_ (reason)
      {
      }

      std::basic_string<ACE_TCHAR> reason_;
    };

  }
}




