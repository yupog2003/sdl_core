#ifndef NSRPC2COMMUNICATION_APPLINKCORE_ACTIVATEAPP_INCLUDE
#define NSRPC2COMMUNICATION_APPLINKCORE_ACTIVATEAPP_INCLUDE

#include <string>
#include "JSONHandler/RPC2Request.h"


/*
  interface	NsRPC2Communication::AppLinkCore
  version	1.2
  generated at	Mon Nov 19 08:20:05 2012
  source stamp	Mon Nov 19 07:04:40 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace AppLinkCore
  {

    class ActivateApp : public ::NsRPC2Communication::RPC2Request
    {
    public:
    
      ActivateApp(const ActivateApp& c);
      ActivateApp(void);
    
      ActivateApp& operator =(const ActivateApp&);
    
      virtual ~ActivateApp(void);
    
      bool checkIntegrity(void);
    
// getters
      const std::string& get_appName(void);


// setters
/// appName <= 100
      bool set_appName(const std::string& appName);


    private:

      friend class ActivateAppMarshaller;

      std::string appName;

    };
  }
}

#endif
