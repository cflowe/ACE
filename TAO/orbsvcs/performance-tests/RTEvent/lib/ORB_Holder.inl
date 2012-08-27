/**
 * @file ORB_Holder.inl
 *
 * $Id: ORB_Holder.inl 43709 2002-02-27 09:36:16Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE CORBA::ORB_ptr
ORB_Holder::orb (void)
{
  return CORBA::ORB::_duplicate (this->orb_.in ());
}

ACE_INLINE
ORB_Holder::operator CORBA::ORB_ptr (void) const
{
  return this->orb_.in ();
}

ACE_INLINE CORBA::ORB_ptr
ORB_Holder::operator-> (void) const
{
  return this->orb_.in ();
}
