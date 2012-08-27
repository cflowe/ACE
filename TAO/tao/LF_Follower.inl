// -*- C++ -*-
//
// $Id: LF_Follower.inl 69150 2005-11-02 07:13:04Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_Leader_Follower &
TAO_LF_Follower::leader_follower (void)
{
  return this->leader_follower_;
}

ACE_INLINE int
TAO_LF_Follower::wait (ACE_Time_Value *tv)
{
  return this->condition_.wait (tv);
}

TAO_END_VERSIONED_NAMESPACE_DECL
