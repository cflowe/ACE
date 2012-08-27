// $Id: test_i.inl 88064 2009-12-10 12:42:52Z mcorino $

ACE_INLINE
Callback_i::Callback_i (CORBA::ORB_ptr orb, Simple_Server_ptr srv)
  :  orb_ (CORBA::ORB::_duplicate (orb)),
     server_ (Simple_Server::_duplicate (srv))
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
