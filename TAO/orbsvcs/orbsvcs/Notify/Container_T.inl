// -*- C++ -*-
//
// $Id: Container_T.inl 76599 2007-01-25 19:45:38Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<class TYPE> ACE_INLINE typename TAO_Notify_Container_T<TYPE>::COLLECTION*
TAO_Notify_Container_T<TYPE>:: collection (void)
{
  return this->collection_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
