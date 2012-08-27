/* -*- C++ -*- */

//=============================================================================
/**
 *  @file    exception_cs.h
 *
 *  $Id: exception_cs.h 90393 2010-06-03 13:47:12Z parsons $
 *
 *  Visitor for Exceptions.
 *  For code generation in client stubs.
 *
 *
 *  @author Aniruddha Gokhale
 */
//=============================================================================

#ifndef _BE_VISITOR_EXCEPTION_EXCEPTION_CS_H_
#define _BE_VISITOR_EXCEPTION_EXCEPTION_CS_H_

/**
 * @class be_visitor_exception_cs
 *
 * @brief be_visitor_exception_cs
 *
 * This is a concrete visitor to generate the client stubs for exception
 */
class be_visitor_exception_cs : public be_visitor_exception
{
public:
  be_visitor_exception_cs (be_visitor_context *ctx);
  ~be_visitor_exception_cs (void);

  virtual int visit_exception (be_exception *node);
};

#endif /* _BE_VISITOR_EXCEPTION_EXCEPTION_CS_H_ */
