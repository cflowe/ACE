// $Id: EchoEventSupplier_i.h 78900 2007-07-15 13:05:48Z sowayaa $

// EchoEventSupplier_i.h
// Implements a PushSupplier.

#ifndef _EchoEventSupplier_i_h_
#define _EchoEventSupplier_i_h_

#include <orbsvcs/RtecEventCommS.h>    // for POA_CosEventComm::PushSupplier

class EchoEventSupplier_i : public virtual POA_RtecEventComm::PushSupplier
{
  public:
    // Constructor
    EchoEventSupplier_i(CORBA::ORB_ptr orb);

    virtual void disconnect_push_supplier();

  private:
    CORBA::ORB_var orb_;
};

#endif // _EchoEventSupplier_i_h_
