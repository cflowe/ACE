// -*- C++ -*-
//
// $Id: Delivery_Request.inl 69353 2005-11-14 22:03:50Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO_Notify
{

ACE_INLINE
void
Delivery_Request::set_delivery_type (ACE_CDR::Octet type)
{
  this->delivery_type_ = type;
}

ACE_INLINE
void
Delivery_Request::set_destination_id (IdVec & destination_id)
{
  this->destination_id_ = destination_id;
}

} // namespace TAO_Notify


TAO_END_VERSIONED_NAMESPACE_DECL
