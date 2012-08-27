// $Id: test_i.inl 77463 2007-02-28 21:31:26Z zhangw $

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb)),
     vlong_ (0)
{
}
