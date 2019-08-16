#include "steam_defs.h"
#include "steamworks_sdk_145/steam_api.h"
#include "steamworks_sdk_145/steamnetworkingtypes.h"
#include "steamworks_sdk_145/isteamnetworkingsockets.h"
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_145
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets003.h"
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets003_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr * localAddress)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP((const SteamNetworkingIPAddr *)localAddress);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets003_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr * address)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress((const SteamNetworkingIPAddr *)address);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets003_CreateListenSocketP2P(void *linux_side, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nVirtualPort);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets003_ConnectP2P(void *linux_side, const SteamNetworkingIdentity * identityRemote, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectP2P((const SteamNetworkingIdentity *)identityRemote, (int)nVirtualPort);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets003_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    return ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets003_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets003_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char * pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets003_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags)
{
    return ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets003_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_GetQuickConnectionStatus(void *linux_side, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetQuickConnectionStatus((HSteamNetConnection)hConn, (SteamNetworkingQuickConnectionStatus *)pStats);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets003_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_CreateSocketPair(void *linux_side, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_GetIdentity(void *linux_side, SteamNetworkingIdentity * pIdentity)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets003_InitAuthentication(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->InitAuthentication();
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets003_GetAuthenticationStatus(void *linux_side, SteamNetAuthenticationStatus_t * pDetails)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetAuthenticationStatus((SteamNetAuthenticationStatus_t *)pDetails);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets003_ReceivedRelayAuthTicket(void *linux_side, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets003_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer((const SteamNetworkingIdentity *)identityGameServer, (int)nVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets003_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity * identityTarget, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer((const SteamNetworkingIdentity *)identityTarget, (int)nVirtualPort);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets003_GetHostedDedicatedServerPort(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets003_GetHostedDedicatedServerPOPID(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets003_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress * pRouting)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets003_CreateHostedDedicatedServerListenSocket(void *linux_side, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nVirtualPort);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets003_GetGameCoordinatorServerLogin(void *linux_side, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetGameCoordinatorServerLogin((SteamDatagramGameCoordinatorServerLogin *)pLoginInfo, (int *)pcbSignedBlob, (void *)pBlob);
}

#ifdef __cplusplus
}
#endif
