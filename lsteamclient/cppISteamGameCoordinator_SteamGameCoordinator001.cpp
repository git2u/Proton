#include "steam_defs.h"
#include "steamworks_sdk_145/steam_api.h"
#include "steamworks_sdk_145/steamnetworkingtypes.h"
#include "steamworks_sdk_145/isteamgamecoordinator.h"
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_145
#include "struct_converters.h"
#include "cppISteamGameCoordinator_SteamGameCoordinator001.h"
EGCResults cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage(void *linux_side, uint32 unMsgType, const void * pubData, uint32 cubData)
{
    return ((ISteamGameCoordinator*)linux_side)->SendMessage((uint32)unMsgType, (const void *)pubData, (uint32)cubData);
}

bool cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(void *linux_side, uint32 * pcubMsgSize)
{
    return ((ISteamGameCoordinator*)linux_side)->IsMessageAvailable((uint32 *)pcubMsgSize);
}

EGCResults cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(void *linux_side, uint32 * punMsgType, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    return ((ISteamGameCoordinator*)linux_side)->RetrieveMessage((uint32 *)punMsgType, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize);
}

#ifdef __cplusplus
}
#endif
