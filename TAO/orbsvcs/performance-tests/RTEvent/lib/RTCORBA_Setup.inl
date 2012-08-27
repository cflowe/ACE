/**
 * @file RTCORBA_Setup.inl
 *
 * $Id: RTCORBA_Setup.inl 43799 2002-03-04 16:56:37Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE const RTCORBA::ThreadpoolLanes &
RTCORBA_Setup::lanes (void) const
{
  return this->lanes_;
}

ACE_INLINE RTCORBA::Priority
RTCORBA_Setup::process_priority (void) const
{
  return this->process_priority_;
}
