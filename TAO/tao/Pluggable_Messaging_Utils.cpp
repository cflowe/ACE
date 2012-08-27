//$Id: Pluggable_Messaging_Utils.cpp 91628 2010-09-07 11:11:12Z johnnyw $

#include "tao/Pluggable_Messaging_Utils.h"
#include "tao/ORB_Core.h"

#if !defined (__ACE_INLINE__)
#include "tao/Pluggable_Messaging_Utils.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Pluggable_Reply_Params::TAO_Pluggable_Reply_Params (TAO_Transport *t)
  : input_cdr_ (0)
  , transport_ (t)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
