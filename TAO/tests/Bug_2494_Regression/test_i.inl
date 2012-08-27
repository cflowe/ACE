// $Id: test_i.inl 71962 2006-04-05 22:46:56Z mitza $

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}
