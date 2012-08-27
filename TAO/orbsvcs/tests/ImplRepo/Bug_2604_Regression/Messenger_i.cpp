// $Id: Messenger_i.cpp 84680 2009-03-02 15:46:22Z vzykov $
#include "Messenger_i.h"

CORBA::Boolean
Messenger_i::send_message (const char *user_name, const char *subject,
                           char *& message)
{
  ACE_DEBUG ((LM_DEBUG,
              ACE_TEXT ("Message from: %C\nSubject: %C\nMessage: %C\n"),
              user_name, subject, message));
  const char *reply = "A reply from the server.";
  CORBA::string_free (message);
  message = CORBA::string_dup (reply);
  if (++this->count_ == 6)
    {
      this->orb_->shutdown (0);
    }
  return true;
}
