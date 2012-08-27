// -*- C++ -*-
//
// $Id: ESF_Proxy_List.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<class PROXY> ACE_INLINE ACE_Unbounded_Set_Iterator<PROXY*>
TAO_ESF_Proxy_List<PROXY>::begin (void)
{
  return this->impl_.begin ();
}

template<class PROXY> ACE_INLINE ACE_Unbounded_Set_Iterator<PROXY*>
TAO_ESF_Proxy_List<PROXY>::end (void)
{
  return this->impl_.end ();
}

template<class PROXY> ACE_INLINE size_t
TAO_ESF_Proxy_List<PROXY>::size (void) const
{
  return this->impl_.size ();
}

TAO_END_VERSIONED_NAMESPACE_DECL
