// $Id: Message_i.h 91742 2010-09-13 18:23:17Z johnnyw $

#include "MessageC.h"
#include "tao/corba.h"


class MessageImpl : public virtual OBV_Message,
                    public virtual CORBA::DefaultValueRefCountBase
{
  public:
    MessageImpl ();
    MessageImpl (const char *user, const char *subject, const char *text);

    virtual char *user ();
    virtual void user (const char *);

    virtual char *subject ();
    virtual void subject (const char *);

    virtual char *text ();
    virtual void text (const char *);

    virtual void print ();
};
