// $Id: EventSequenceSupplier_i.h 83415 2008-10-23 08:18:15Z johnnyw $

#ifndef _EVENTSUPPLIER_I_H_
#define _EVENTSUPPLIER_I_H_

#include "orbsvcs/CosNotifyChannelAdminS.h"

class EventSequenceSupplier_i : public POA_CosNotifyComm::SequencePushSupplier
{
public:
    // Constructor
    EventSequenceSupplier_i(CORBA::ORB_ptr orb);
    virtual void disconnect_sequence_push_supplier ();

    virtual void subscription_change (
        const CosNotification::EventTypeSeq & added,
        const CosNotification::EventTypeSeq & removed
      );
private:
    CORBA::ORB_var orb_;
};

#endif
