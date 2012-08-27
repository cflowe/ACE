// $Id: Deployment_Scheduler.inl 90791 2010-06-23 11:29:20Z johnnyw $
#ifndef DEPLOYMENT_SCHEDULER_INL
#define DEPLOYMENT_SCHEDULER_INL

namespace DAnCE
{
  ACE_INLINE
  void Deployment_Scheduler::activate_scheduler (size_t threads)
    {
      this->multithread_ = threads > 0;
      if (this->multithread_)
        this->activate (THR_DETACHED,
                        threads);
    }

  ACE_INLINE
  bool Deployment_Scheduler::multithreaded (void)
    {
      return this->multithread_;
    }

  ACE_INLINE
  bool Deployment_Scheduler::work_pending (void)
    {
      return !this->event_queue_.is_empty ();
    }
}

#endif
