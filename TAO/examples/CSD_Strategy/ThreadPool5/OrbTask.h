// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file    OrbTask.h
 *
 *  $Id: OrbTask.h 68816 2005-10-19 00:27:51Z dai_y $
 *
 *  @author  Tim Bradley <bradley_t@ociweb.com>
 */
//=============================================================================

#ifndef ORB_TASK_H
#define ORB_TASK_H

#include "ace/Task.h"
#include "tao/ORB.h"

class OrbTask : public ACE_Task_Base
{
  public:

    OrbTask(CORBA::ORB_ptr orb, unsigned num_threads = 1);
    virtual ~OrbTask();

    virtual int open(void* x = 0);
    virtual int svc();
    virtual int close(u_long);


  private:

    CORBA::ORB_var orb_;
    unsigned       num_threads_;
};

#endif
