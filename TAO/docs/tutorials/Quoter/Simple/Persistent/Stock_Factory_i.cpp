//
// $Id: Stock_Factory_i.cpp 78900 2007-07-15 13:05:48Z sowayaa $
//

#include "Stock_Factory_i.h"

Quoter_Stock_Factory_i::Quoter_Stock_Factory_i ()
  :  rhat_ ("RHAT", "RedHat, Inc.", 210),
     msft_ ("MSFT", "Microsoft, Inc.", 91)
{
}

Quoter::Stock_ptr
Quoter_Stock_Factory_i::get_stock (const char *symbol)
{
  if (ACE_OS::strcmp (symbol, "RHAT") == 0) {
    return this->rhat_._this ();
  } else if (ACE_OS::strcmp (symbol, "MSFT") == 0) {
    return this->msft_._this ();
  }
  throw Quoter::Invalid_Stock_Symbol ();
}
