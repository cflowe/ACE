/**
 * @file Task_Activator.inl
 *
` * $Id: Task_Activator.inl 43799 2002-03-04 16:56:37Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

template<class Task> ACE_INLINE void
Task_Activator<Task>::release ()
{
  this->task_ = 0;
}
