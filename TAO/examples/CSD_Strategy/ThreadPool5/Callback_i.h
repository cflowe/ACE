// $Id: Callback_i.h 77003 2007-02-12 09:23:36Z johnnyw $
#ifndef CALLBACK_I_H
#define CALLBACK_I_H

#include "CallbackS.h"


class Callback_i : public virtual POA_Callback
{
  public:

    Callback_i();

    virtual ~Callback_i();

    virtual void test_method (
    );
};


#endif
