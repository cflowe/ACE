/* -*- C++ -*- */
//=============================================================================
/**
 *  @file   Notify_Sequence_Push_Consumer.h
 *
 *  $Id: Notify_Sequence_Push_Consumer.h 93650 2011-03-28 08:44:53Z johnnyw $
 *
 * A sequence push consumer implementation.
 *
 *
 *  @author Chad Elliott <elliott_c@ociweb.com>
 */
//=============================================================================

#ifndef TAO_NOTIFY_SEQUENCE_PUSH_CONSUMER_H
#define TAO_NOTIFY_SEQUENCE_PUSH_CONSUMER_H

#include "Notify_SequencePushConsumer.h"

class Notify_Test_Client;

class Notify_Sequence_Push_Consumer : public TAO_Notify_Tests_SequencePushConsumer
{
public:
  Notify_Sequence_Push_Consumer (const char* name,
                                 unsigned int low,
                                 unsigned int high,
                                 Notify_Test_Client& client);

  ~Notify_Sequence_Push_Consumer ();

  void _connect (CosNotifyChannelAdmin::ConsumerAdmin_ptr consumer_admin);

private:
  void push_structured_events(const CosNotification::EventBatch&);

  ACE_CString name_;
  unsigned int low_;
  unsigned int high_;
  unsigned int count_;
  Notify_Test_Client& client_;
};

#endif /* TAO_NOTIFY_SEQUENCE_PUSH_CONSUMER_H */
