// $Id: test_i.inl 85228 2009-05-01 07:10:33Z dai_y $

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}
