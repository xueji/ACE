// -*- C++ -*-

//=============================================================================
/**
 *  @file    DII_CORBA_methods.h
 *
 *  $Id: DII_CORBA_methods.h 91262 2010-08-03 14:02:36Z parsons $
 *
 *  Declarations of DII methods in the CORBA namespace.
 *
 *  @author Ossama Othman <ossama@dre.vanderbilt.edu>
 */
//=============================================================================

#ifndef TAO_DII_CORBA_METHODS_H
#define TAO_DII_CORBA_METHODS_H

#include /**/ "ace/pre.h"

#include "tao/DynamicInterface/dynamicinterface_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/CORBA_methods.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif

#define TAO_EXPORT_MACRO TAO_DynamicInterface_Export

#include /**/ "ace/post.h"

#endif  /* TAO_DII_CORBA_METHODS_H */
