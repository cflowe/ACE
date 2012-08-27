// -*- C++ -*-
//
// $Id: MCast.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

//------------------------------------------------------------
// TAO_AV_UDP_MCast_Flow_Handler
//-----------------------------------------------------------

ACE_INLINE ACE_SOCK_Dgram_Mcast *
TAO_AV_UDP_MCast_Flow_Handler::get_mcast_socket (void) const
{
  return this->dgram_mcast_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
