// $Id: Client_i.cpp 96998 2013-04-12 12:12:17Z mcorino $

#include "Client_i.h"

Client::~Client () {}

void Client::reply (const char * msg)
{
  this->reply_count_++;
  ACE_DEBUG ((LM_DEBUG, "(%P|%t) Client::reply -> %s\n", msg));
}
