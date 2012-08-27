// -*- C++ -*-
//
// $Id: Any_Basic_Impl_T.inl 91816 2010-09-17 08:35:56Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<typename T>
ACE_INLINE
CORBA::Boolean
TAO::Any_Basic_Impl_T<T>::demarshal_value (TAO_InputCDR &cdr)
{
  return (cdr >> this->value_);
}

TAO_END_VERSIONED_NAMESPACE_DECL
