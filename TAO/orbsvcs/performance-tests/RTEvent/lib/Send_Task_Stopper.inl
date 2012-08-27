/**
 * @file Send_Task_Stopper.inl
 *
` * $Id: Send_Task_Stopper.inl 43869 2002-03-08 01:43:52Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE
Send_Task_Stopper::Send_Task_Stopper (int priority,
                                      int scheduling_class,
                                      Send_Task *task)
  : Task_Activator<Send_Task> (priority, scheduling_class, 1,
                               task)
{
}
