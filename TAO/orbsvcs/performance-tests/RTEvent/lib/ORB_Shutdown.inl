// -*- C++ -*-

/**
 * @file ORB_Shutdown.inl
 *
 * $Id: ORB_Shutdown.inl 76626 2007-01-26 13:50:03Z elliott_c $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE void
ORB_Shutdown::operator () (CORBA::ORB_ptr orb)
{
  try
    {
      orb->shutdown (0);
    }
  catch (const CORBA::Exception&){ };
}
