#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/UI/AddSubMenuResponse.h"
#include "../../../../../Marshaller.h"

/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Mon Nov 19 08:20:05 2012
  source stamp	Mon Nov 19 07:04:40 2012
  author	robok0der
*/

using namespace NsRPC2Communication::UI;


AddSubMenuResponse& AddSubMenuResponse::operator =(const AddSubMenuResponse& c)
{
  return *this;
}


AddSubMenuResponse::~AddSubMenuResponse(void)
{
}


AddSubMenuResponse::AddSubMenuResponse(void) : 
  RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__ADDSUBMENURESPONSE)
{
}


AddSubMenuResponse::AddSubMenuResponse(const AddSubMenuResponse& c) : RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__ADDSUBMENURESPONSE,c.getId(),c.getResult())
{
  *this=c;
}


bool AddSubMenuResponse::checkIntegrity(void)
{
  return AddSubMenuResponseMarshaller::checkIntegrity(*this);
}
