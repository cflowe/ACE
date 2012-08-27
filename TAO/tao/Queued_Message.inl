// $Id: Queued_Message.inl 80306 2007-12-18 12:10:07Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_Queued_Message *
TAO_Queued_Message::next (void) const
{
  return this->next_;
}

ACE_INLINE TAO_Queued_Message *
TAO_Queued_Message::prev (void) const
{
  return this->prev_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
