// -*- C++ -*-
//
// $Id: Base_Transport_Property.inl 74385 2006-08-31 11:22:59Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_Base_Transport_Property::TAO_Base_Transport_Property (void)
{
}

ACE_INLINE
TAO_Base_Transport_Property::
    TAO_Base_Transport_Property (TAO_Endpoint *endpoint,
                                 CORBA::Boolean flag)
  : TAO_Transport_Descriptor_Interface (endpoint,
                                         flag)
{
}

ACE_INLINE
TAO_Base_Transport_Property::TAO_Base_Transport_Property (
    const TAO_Base_Transport_Property &rhs)
  : TAO_Transport_Descriptor_Interface (rhs.endpoint_->duplicate (),
                                        true)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL