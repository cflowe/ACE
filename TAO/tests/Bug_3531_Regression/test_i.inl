// $Id: test_i.inl 84402 2009-02-11 13:41:22Z johnnyw $

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb)),
     lock_ (),
     cond_ (lock_),
     timer_registed_ (false)
{
}
