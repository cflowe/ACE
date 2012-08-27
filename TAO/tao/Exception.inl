// -*- C++ -*-
//
// $Id: Exception.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE CORBA::Exception *
CORBA::Exception::_downcast (CORBA::Exception * x)
{
  return x;
}

ACE_INLINE CORBA::Exception const *
CORBA::Exception::_downcast (CORBA::Exception const * x)
{
  return x;
}

TAO_END_VERSIONED_NAMESPACE_DECL
