// -*- C++ -*-
//
// $Id: Fixed_TypeCode.inl 72138 2006-04-19 09:23:57Z jwillemsen $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template <class RefCountPolicy>
ACE_INLINE
TAO::TypeCode::Fixed<RefCountPolicy>::Fixed (CORBA::UShort digits,
                                             CORBA::UShort scale)
  : ::CORBA::TypeCode (CORBA::tk_fixed)
  , RefCountPolicy ()
  , digits_ (digits)
  , scale_ (scale)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
