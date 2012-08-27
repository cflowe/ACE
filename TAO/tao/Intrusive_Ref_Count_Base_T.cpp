// $Id: Intrusive_Ref_Count_Base_T.cpp 71473 2006-03-10 07:19:20Z jtc $

#ifndef TAO_INTRUSIVE_REF_COUNT_BASE_T_CPP
#define TAO_INTRUSIVE_REF_COUNT_BASE_T_CPP

#include "tao/Intrusive_Ref_Count_Base_T.h"

#if !defined (__ACE_INLINE__)
#include "tao/Intrusive_Ref_Count_Base_T.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template <typename T>
TAO_Intrusive_Ref_Count_Base<T>::~TAO_Intrusive_Ref_Count_Base()
{
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_INTRUSIVE_REF_COUNT_BASE_T_CPP */
