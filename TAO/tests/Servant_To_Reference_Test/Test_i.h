//
// $Id: Test_i.h 95052 2011-11-17 10:11:20Z mcorino $
//

#ifndef HELLO_H
#define HELLO_H
#include /**/ "ace/pre.h"

#include "TestS.h"

class One_Impl
  : public virtual POA_Test::One
{
public:
  /// Constructor
  One_Impl (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual char * get_string (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

class Two_Impl
  : public virtual POA_Test::Two
{
public:
  /// Constructor
  Two_Impl (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual char * get_string (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

class Three_Impl
  : public virtual POA_Test::Three
{
public:
  /// Constructor
  Three_Impl (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual char * get_string (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */
