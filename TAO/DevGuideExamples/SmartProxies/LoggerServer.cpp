// $Id: LoggerServer.cpp 91825 2010-09-17 09:10:22Z johnnyw $

// LoggerServer.cpp

#include "Logger_i.h"
#include <iostream>
#include <fstream>
#include "ace/Get_Opt.h"

const ACE_TCHAR *ior_output_file = ACE_TEXT ("Logger.ior");

int
parse_args (int argc, ACE_TCHAR *argv[])
{
  ACE_Get_Opt get_opts (argc, argv, ACE_TEXT("o:"));
  int c;

  while ((c = get_opts ()) != -1)
    switch (c)
      {
      case 'o':
        ior_output_file = get_opts.opt_arg ();
        break;

      case '?':
      default:
        ACE_ERROR_RETURN ((LM_ERROR,
                           "usage:  %s "
                           "-o <iorfile>"
                           "\n",
                           argv [0]),
                          -1);
      }
  // Indicates successful parsing of the command line
  return 0;
}

int
ACE_TMAIN (int argc, ACE_TCHAR *argv [])
{
  try {
    // Initialize the ORB.
    CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);

    if (parse_args (argc, argv) != 0)
      return 1;

    // Get a reference to Root POA.
    CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");
    PortableServer::POA_var poa = PortableServer::POA::_narrow(obj.in());

    // Activate the POA manager.
    PortableServer::POAManager_var mgr = poa->the_POAManager();
    mgr->activate();

    // Create a Logger_i servant.
    PortableServer::Servant_var<Logger_i> logger_servant = new Logger_i;

    // Register the servant with the RootPOA, obtain its object reference,
    // stringify it, and write it to a file.
    PortableServer::ObjectId_var oid = poa->activate_object(logger_servant.in());
    CORBA::Object_var logger_obj = poa->id_to_reference(oid.in());
    CORBA::String_var str = orb->object_to_string(logger_obj.in());
    std::ofstream iorFile(ACE_TEXT_ALWAYS_CHAR(ior_output_file));
    iorFile << str.in() << std::endl;
    iorFile.close();
    std::cout << "IOR written to file " << ACE_TEXT_ALWAYS_CHAR(ior_output_file) << std::endl;

    // Accept requests from clients.
    orb->run();

    // Release resources.
    orb->destroy();
  }
  catch(const CORBA::Exception& ex) {
    std::cerr << "Caught a CORBA exception:" << ex << std::endl;
    return 1;
  }
  return 0;
}
