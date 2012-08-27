/**
 * @file ORB_Task.inl
 *
` * $Id: ORB_Task.inl 43799 2002-03-04 16:56:37Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE CORBA::ORB_ptr
ORB_Task::operator-> (void) const
{
  return this->orb_.in ();
}
