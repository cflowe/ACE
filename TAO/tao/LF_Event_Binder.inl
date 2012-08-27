// -*- C++ -*-
//
// $Id: LF_Event_Binder.inl 82657 2008-08-25 23:32:27Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_LF_Event_Binder::TAO_LF_Event_Binder (TAO_LF_Event *event,
                                          TAO_LF_Follower *follower)
  : event_ (event)
  , follower_ (follower)
{
  this->event_->bind (follower);
}

TAO_END_VERSIONED_NAMESPACE_DECL
