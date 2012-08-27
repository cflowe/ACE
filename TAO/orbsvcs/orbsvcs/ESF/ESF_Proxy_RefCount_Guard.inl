// -*- C++ -*-
//
// $Id: ESF_Proxy_RefCount_Guard.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<class EC, class P> ACE_INLINE
TAO_ESF_Proxy_RefCount_Guard<EC,P>::
    TAO_ESF_Proxy_RefCount_Guard (CORBA::ULong &refcount,
                                  EC *ec,
                                  P *proxy)
  :  refcount_ (refcount),
     event_channel_ (ec),
     proxy_ (proxy)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
