// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file    ClientEngine.h
 *
 *  $Id: ClientEngine.h 80166 2007-12-03 13:53:49Z sowayaa $
 *
 *  @author  Tim Bradley <bradley_t@ociweb.com>
 */
//=============================================================================

#ifndef CLIENT_ENGINE_H
#define CLIENT_ENGINE_H

#include "CSD_PT_TestInf_Export.h"
#include "tao/Intrusive_Ref_Count_Base_T.h"
#include "tao/Intrusive_Ref_Count_Handle_T.h"
#include "tao/Environment.h"
#include "ace/Synch.h"
#include "ace/CORBA_macros.h"


class ClientEngine;
typedef TAO_Intrusive_Ref_Count_Handle<ClientEngine> ClientEngine_Handle;


class CSD_PT_TestInf_Export ClientEngine : public TAO_Intrusive_Ref_Count_Base<TAO_SYNCH_MUTEX>
{
  public:

    ClientEngine();
    virtual ~ClientEngine();

    virtual bool execute(unsigned num_loops) = 0;
};

#endif
