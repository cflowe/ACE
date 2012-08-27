// -*- C++ -*-
//
// $Id: PICurrent.inl 69198 2005-11-04 09:26:56Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE PortableInterceptor::SlotId
TAO::PICurrent::slot_count (void) const
{
  return this->slot_count_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
