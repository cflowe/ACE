/**
 * @file Auto_Disconnect.inl
 *
 * $Id: Auto_Disconnect.inl 76626 2007-01-26 13:50:03Z elliott_c $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */
#include "ace/CORBA_macros.h"

template<class Client> ACE_INLINE void
Disconnect<Client>::operator () (Client *client)
{
  try
    {
      client->disconnect ();
    }
  catch (const CORBA::Exception&){ };
}

template<class Client> ACE_INLINE
Auto_Disconnect<Client>::Auto_Disconnect (Client *client)
  :  ACE_Utils::Auto_Functor<Client,Disconnect<Client> > (client)
{
}
