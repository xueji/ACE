// $Id: Best_Effort.h 91982 2010-09-23 20:43:54Z wotte $
/**
 * @file Best_Effort.h
 * @author William R. Otte <wotte@dre.vanderbilt.edu>
 *
 * Interceptors which implement a Best Effort error handling mechanism.
 */

#ifndef DEPLOYMENT_INTERCEPTORS_H
#define DEPLOYMENT_INTERCEPTORS_H

#include "dance/DAnCE_DeploymentInterceptors_Base_Impl.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/LocalObject.h"
#include "DAnCE_Error_Interceptors_export.h"

namespace DAnCE
{
  class DAnCE_Error_Interceptors_Export Best_Effort
    : public virtual DAnCE::DeploymentInterceptor_Base
  {
  public:
    // Constructor

    Best_Effort (void);

    // Destructor
    virtual ~Best_Effort (void);

    virtual
      void post_install (const ::Deployment::DeploymentPlan & plan,
                                  ::CORBA::ULong index,
                                  const ::CORBA::Any & reference,
                                  const ::CORBA::Any & exception_thrown);

    virtual
      void post_connect (const ::Deployment::DeploymentPlan & plan,
                                  ::CORBA::ULong connectionRef,
                                  const ::CORBA::Any & exceptionThrown);


    virtual
      void post_configured (const ::Deployment::DeploymentPlan & plan,
                                     ::CORBA::ULong instanceRef,
                                     const ::CORBA::Any & exception_thrown);

    virtual
      void post_activate (const ::Deployment::DeploymentPlan & plan,
                                   ::CORBA::ULong instanceRef,
                                   const ::CORBA::Any & exception_thrown);

    virtual
      void post_passivate (const ::Deployment::DeploymentPlan & plan,
                                    ::CORBA::ULong instanceRef,
                                    const ::CORBA::Any & exception_thrown);

    virtual
      void post_remove (const ::Deployment::DeploymentPlan & plan,
                                 ::CORBA::ULong instanceRef,
                                 const ::CORBA::Any & exception_thrown);
    virtual
      void configure(const Deployment::Properties&);

  private:
  };
}

extern "C"
{
  ::DAnCE::DeploymentInterceptor_ptr
  DAnCE_Error_Interceptors_Export create_DAnCE_Best_Effort (void);
}

#endif
