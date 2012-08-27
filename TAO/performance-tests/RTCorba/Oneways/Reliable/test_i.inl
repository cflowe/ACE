// $Id: test_i.inl 73791 2006-07-27 20:54:56Z wotte $

ACE_INLINE
Test_i::Test_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}
