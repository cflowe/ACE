// $Id: test_i.inl 73791 2006-07-27 20:54:56Z wotte $

ACE_INLINE
Callback_i::Callback_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}

ACE_INLINE
Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb,
                                  int no_iterations)
  :  orb_ (CORBA::ORB::_duplicate (orb)),
     flag_ (0),
     callback_ (0),
     no_iterations_ (no_iterations)
{
}
