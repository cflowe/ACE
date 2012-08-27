// -*- C++ -*-
//
// $Id: EC_Priority_Scheduling.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_EC_Priority_Scheduling::TAO_EC_Priority_Scheduling (
       RtecScheduler::Scheduler_ptr scheduler)
  :  scheduler_ (RtecScheduler::Scheduler::_duplicate (scheduler))
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
