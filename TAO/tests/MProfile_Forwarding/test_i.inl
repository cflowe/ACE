// $Id: test_i.inl 75478 2006-11-22 13:58:29Z jtc $

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)

  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}
