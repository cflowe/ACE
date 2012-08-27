// $Id: ping_i.inl 73791 2006-07-27 20:54:56Z wotte $

ACE_INLINE
PingObject_i::PingObject_i (CORBA::ORB_ptr orb,
                            PortableServer::POA_ptr poa)
  :  orb_ (CORBA::ORB::_duplicate (orb)),
     poa_ (PortableServer::POA::_duplicate (poa))
{
}
