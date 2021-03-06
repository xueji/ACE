
// -*- C++ -*-
// $Id: CSD_TP_Foo_A_Export.h 68816 2005-10-19 00:27:51Z dai_y $
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl -s CSD_TP_Foo_A
// ------------------------------
#ifndef CSD_TP_FOO_A_EXPORT_H
#define CSD_TP_FOO_A_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (CSD_TP_FOO_A_HAS_DLL)
#  define CSD_TP_FOO_A_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && CSD_TP_FOO_A_HAS_DLL */

#if !defined (CSD_TP_FOO_A_HAS_DLL)
#  define CSD_TP_FOO_A_HAS_DLL 1
#endif /* ! CSD_TP_FOO_A_HAS_DLL */

#if defined (CSD_TP_FOO_A_HAS_DLL) && (CSD_TP_FOO_A_HAS_DLL == 1)
#  if defined (CSD_TP_FOO_A_BUILD_DLL)
#    define CSD_TP_Foo_A_Export ACE_Proper_Export_Flag
#    define CSD_TP_FOO_A_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define CSD_TP_FOO_A_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* CSD_TP_FOO_A_BUILD_DLL */
#    define CSD_TP_Foo_A_Export ACE_Proper_Import_Flag
#    define CSD_TP_FOO_A_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define CSD_TP_FOO_A_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* CSD_TP_FOO_A_BUILD_DLL */
#else /* CSD_TP_FOO_A_HAS_DLL == 1 */
#  define CSD_TP_Foo_A_Export
#  define CSD_TP_FOO_A_SINGLETON_DECLARATION(T)
#  define CSD_TP_FOO_A_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* CSD_TP_FOO_A_HAS_DLL == 1 */

// Set CSD_TP_FOO_A_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (CSD_TP_FOO_A_NTRACE)
#  if (ACE_NTRACE == 1)
#    define CSD_TP_FOO_A_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define CSD_TP_FOO_A_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !CSD_TP_FOO_A_NTRACE */

#if (CSD_TP_FOO_A_NTRACE == 1)
#  define CSD_TP_FOO_A_TRACE(X)
#else /* (CSD_TP_FOO_A_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define CSD_TP_FOO_A_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (CSD_TP_FOO_A_NTRACE == 1) */

#endif /* CSD_TP_FOO_A_EXPORT_H */

// End of auto generated file.
