// -*- C++ -*-
// $Id: DataListenerControl_T.h 92569 2010-11-12 15:44:50Z johnnyw $

#ifndef DATALISTENERCONTROL_T_H_
#define DATALISTENERCONTROL_T_H_

#include "dds4ccm/idl/dds4ccm_DataListenerControlEC.h"
#include "dds4ccm/impl/LocalObject.h"

#include "ace/Copy_Disabled.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

template <typename BASE_TYPE>
class CCM_DDS_DataListenerControl_T
  : public virtual BASE_TYPE,
    public virtual ::CIAO::DDS4CCM::LocalObject,
    private ACE_Copy_Disabled
{
public:
  /// Constructor
  CCM_DDS_DataListenerControl_T (void);

  /// Destructor
  virtual ~CCM_DDS_DataListenerControl_T (void);

  /// Set the mode
  virtual ::CCM_DDS::ListenerMode mode (void);

  /// Get the mode
  virtual void mode (::CCM_DDS::ListenerMode mode);

  /// Set the max_delivered_data
  virtual ::CCM_DDS::DataNumber_t max_delivered_data (void);

  /// Get the max_delivered_data
  virtual void max_delivered_data (::CCM_DDS::DataNumber_t max_delivered_data);

protected:
  ACE_Atomic_Op <TAO_SYNCH_MUTEX, ::CCM_DDS::ListenerMode> mode_;
  ACE_Atomic_Op <TAO_SYNCH_MUTEX, ::CCM_DDS::DataNumber_t> max_delivered_data_;
};

#include "dds4ccm/impl/DataListenerControl_T.cpp"

#endif /* DATALISTENERCONTROL_T_H_ */

