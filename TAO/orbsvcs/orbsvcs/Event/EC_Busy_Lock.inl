// -*- C++ -*-
//
// $Id: EC_Busy_Lock.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<class T> ACE_INLINE
TAO_EC_Busy_Lock_Adapter<T>::TAO_EC_Busy_Lock_Adapter (T* adaptee)
  :  adaptee_ (adaptee)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
