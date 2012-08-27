/**
 * @file Implicit_Deactivator.inl
 *
 * $Id: Implicit_Deactivator.inl 43909 2002-03-09 00:13:51Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE void
Implicit_Deactivator::release (void)
{
  this->id_ = 0;
}
