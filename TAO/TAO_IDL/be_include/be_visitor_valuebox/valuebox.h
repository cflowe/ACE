/* -*- c++ -*- */

//=============================================================================
/**
 *  @file    valuebox.h
 *
 *  $Id: valuebox.h 88828 2010-02-04 09:09:22Z johnnyw $
 *
 *  Concrete visitor for the Valuebox node.
 *
 *
 *  @author Gary Maxey
 */
//=============================================================================


#ifndef _BE_VISITOR_VALUEBOX_H_
#define _BE_VISITOR_VALUEBOX_H_

/**
 * @class be_visitor_valuebox
 *
 * @brief be_visitor_valuebox
 *
 * This is a concrete visitor to generate code for valueboxes.
 */
class be_visitor_valuebox : public be_visitor_decl
{
public:
  /// constructor
  be_visitor_valuebox (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_valuebox (void);

  /// visit attribute. We provide code for this method in the derived class
  virtual int visit_valuebox (be_valuebox *node);
};

#endif /* _BE_VISITOR_VALUEBOX_H_ */
