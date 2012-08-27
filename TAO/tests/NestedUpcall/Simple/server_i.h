// $Id: server_i.h 77008 2007-02-12 11:52:38Z johnnyw $

#include "testS.h"

class server_i : public POA_server
{
public:
  server_i (int quiet,
            CORBA::ORB_ptr orb);

  void ping (CORBA::UShort time_to_live);

  void start (client_ptr c,
              CORBA::UShort time_to_live);

  void shutdown (void);

private:
  int quiet_;
  // Be quiet.

  client_var client_;
  // Pointer to server.

  CORBA::ORB_var orb_;
  // Pointer to orb.
};
