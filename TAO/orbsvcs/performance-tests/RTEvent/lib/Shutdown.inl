/**
 * @file Shutdown.inl
 *
 * $Id: Shutdown.inl 76626 2007-01-26 13:50:03Z elliott_c $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

template<class Client> ACE_INLINE void
Shutdown<Client>::operator () (Client *client)
{
  try
    {
      client->shutdown ();
    }
  catch (const CORBA::Exception&){ };
}
