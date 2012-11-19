/**
* \file ALRPCNotification.cpp
* \brief ALRPCNotification class source file.
* \author PVyshnevska
*/


#include "JSONHandler/ALRPCNotification.h"

using namespace NsAppLinkRPC;

ALRPCNotification::ALRPCNotification(void) :
ALRPCMessage(0,NOTIFICATION)
{
}


ALRPCNotification::ALRPCNotification( unsigned int protocolVersion) :
ALRPCMessage(protocolVersion,NOTIFICATION)
{
}

ALRPCNotification::ALRPCNotification( unsigned int protocolVersion, int methodId ) :
ALRPCMessage(protocolVersion,NOTIFICATION, methodId)
{
}


ALRPCNotification::~ALRPCNotification()
{
}
