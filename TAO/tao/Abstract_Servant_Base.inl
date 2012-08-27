// $Id: Abstract_Servant_Base.inl 79109 2007-07-31 07:23:49Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_Abstract_ServantBase::TAO_Abstract_ServantBase (void)
{
  // No-Op.
}

ACE_INLINE
TAO_Abstract_ServantBase::TAO_Abstract_ServantBase
  (const TAO_Abstract_ServantBase &)
{
  // No-Op
}

ACE_INLINE
TAO_Abstract_ServantBase &
TAO_Abstract_ServantBase::operator= (const TAO_Abstract_ServantBase&)
{
  return *this;
}

TAO_END_VERSIONED_NAMESPACE_DECL
