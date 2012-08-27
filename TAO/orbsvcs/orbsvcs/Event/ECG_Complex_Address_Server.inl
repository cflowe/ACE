// -*- C++ -*-
//
// $Id: ECG_Complex_Address_Server.inl 92388 2010-10-28 07:57:07Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE PortableServer::Servant_var<TAO_ECG_Complex_Address_Server>
TAO_ECG_Complex_Address_Server::create (int is_source_mapping)
{
  PortableServer::Servant_var<TAO_ECG_Complex_Address_Server> s;
  ACE_NEW_RETURN (s,
                  TAO_ECG_Complex_Address_Server (is_source_mapping),
                  s);
  return s;
}

TAO_END_VERSIONED_NAMESPACE_DECL
