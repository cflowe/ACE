// -*- C++ -*-
//
// $Id: Non_Servant_Upcall.inl 69198 2005-11-04 09:26:56Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    ACE_INLINE ::TAO_Root_POA &
    Non_Servant_Upcall::poa (void) const
    {
      return this->poa_;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL
