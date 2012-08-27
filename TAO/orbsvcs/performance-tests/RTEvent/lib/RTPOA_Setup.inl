/**
 * @file RTPOA_Setup.inl
 *
 * $Id: RTPOA_Setup.inl 43799 2002-03-04 16:56:37Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE PortableServer::POA_ptr
RTPOA_Setup::poa (void)
{
  return PortableServer::POA::_duplicate (this->poa_.in ());
}
