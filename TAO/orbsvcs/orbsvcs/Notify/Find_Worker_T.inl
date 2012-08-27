// -*- C++ -*-
//
// $Id: Find_Worker_T.inl 76589 2007-01-25 18:04:11Z elliott_c $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<class TYPE, class INTERFACE, class INTERFACE_PTR, class EXCEPTION> ACE_INLINE void
TAO_Notify_Find_Worker_T<TYPE,INTERFACE,INTERFACE_PTR,EXCEPTION>::work (TYPE* type)
{
  if (type->id () == this->id_)
    this->result_ = type;
}

TAO_END_VERSIONED_NAMESPACE_DECL
