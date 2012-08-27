// $Id: test_i.inl 75262 2006-11-08 08:31:58Z johnnyw $

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb)),
     vlong_ (0)
{
}
