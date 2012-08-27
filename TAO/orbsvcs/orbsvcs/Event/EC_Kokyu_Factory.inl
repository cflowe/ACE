// -*- C++ -*-
//
// $Id: EC_Kokyu_Factory.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_EC_Kokyu_Factory::TAO_EC_Kokyu_Factory (void)
  :  TAO_EC_Default_Factory (),
     disp_sched_policy_ (ACE_SCHED_FIFO),
     disp_sched_scope_ (ACE_SCOPE_THREAD)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
