/**
 * @file RTServer_Setup.inl
 *
 * $Id: RTServer_Setup.inl 43909 2002-03-09 00:13:51Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE PortableServer::POA_ptr
RTServer_Setup::poa (void)
{
  return PortableServer::POA::_duplicate (this->poa_.in ());
}
