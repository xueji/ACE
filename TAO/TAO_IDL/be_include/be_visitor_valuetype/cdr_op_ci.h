/* -*- c++ -*- */

//=============================================================================
/**
 *  @file    cdr_op_ci.h
 *
 *  $Id: cdr_op_ci.h 88828 2010-02-04 09:09:22Z johnnyw $
 *
 *  Concrete visitor for valuetypes.
 *  This one provides code generation for the CDR operators.
 *
 *
 *  @author Torsten Kuepper <kuepper2@lfa.uni-wuppertal.de>
 */
//=============================================================================


#ifndef _BE_VISITOR_VALUETYPE_CDR_OP_CI_H_
#define _BE_VISITOR_VALUETYPE_CDR_OP_CI_H_

/**
 * @class be_visitor_valuetype_cdr_op_ci
 *
 * @brief be_visitor_valuetype_cdr_op_ci
 *
 * This is a concrete visitor for valuetype that generates the CDR operator
 * implementations
 */
class be_visitor_valuetype_cdr_op_ci : public be_visitor_valuetype
{

public:
  /// constructor
  be_visitor_valuetype_cdr_op_ci (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_valuetype_cdr_op_ci (void);

  /// visit valuetype
  virtual int visit_valuetype (be_valuetype *node);

  /// visit field
  virtual int visit_field (be_field *node);

  /// visit array
  virtual int visit_array (be_array *node);

  /// visit sequence
  virtual int visit_sequence (be_sequence *node);
};

#endif /* _BE_VISITOR_VALUETYPE_CDR_OP_CI_H_ */
