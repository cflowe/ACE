// -*- C++ -*-
//
// $Id: MCAST_Parser.inl 79237 2007-08-07 09:48:21Z johnnyw $

#if (TAO_HAS_MCAST_PARSER == 1)

#include "tao/default_ports.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_MCAST_Parser::TAO_MCAST_Parser (void)
  : mcast_address_ ()
  , mcast_port_ (TAO_DEFAULT_NAME_SERVER_REQUEST_PORT)
  , mcast_nic_ ()
  , mcast_ttl_ (1)
  , service_name_ ()
{
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_HAS_MCAST_PARSER == 1 */
