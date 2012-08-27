// $Id: Method_Request_Updates_T.cpp 71526 2006-03-14 06:14:35Z jtc $

#ifndef TAO_Notify_Method_Request_Updates_T_CPP
#define TAO_Notify_Method_Request_Updates_T_CPP

#include "orbsvcs/Notify/Method_Request_Updates_T.h"

#if ! defined (__ACE_INLINE__)
#include "orbsvcs/Notify/Method_Request_Updates_T.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template <class SEQ, class PROXY, class SEQ_PARAM, class PROXY_PARAM>
TAO_Notify_Method_Request_Updates_T<SEQ, PROXY, SEQ_PARAM, PROXY_PARAM>::TAO_Notify_Method_Request_Updates_T (SEQ_PARAM added, SEQ_PARAM removed,
                                                                                                      PROXY_PARAM proxy)
  : added_ (added), removed_ (removed), proxy_ (proxy)
{
}

template <class SEQ, class PROXY, class SEQ_PARAM, class PROXY_PARAM>
TAO_Notify_Method_Request_Updates_T<SEQ, PROXY, SEQ_PARAM, PROXY_PARAM>::~TAO_Notify_Method_Request_Updates_T ()
{
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_Notify_Method_Request_Updates_T_CPP */
