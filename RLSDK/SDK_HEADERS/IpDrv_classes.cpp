/*
#############################################################################################
# Rocket League (6/5/2024) SDK
# Generated with the UE3SDKGenerator v2.2.7
# ========================================================================================= #
# File: IpDrv_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/itsbrank/UE3SDKGenerator, www.twitter.com/itsbrank
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function IpDrv.AdHocDelegates.EventAdHocDestroyed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAdHocDestroyed()
{
	static UFunction* uFnEventAdHocDestroyed = nullptr;

	if (!uFnEventAdHocDestroyed)
	{
		uFnEventAdHocDestroyed = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocDestroyed");
	}

	UAdHocDelegates_execEventAdHocDestroyed_Params EventAdHocDestroyed_Params;

	this->ProcessEvent(uFnEventAdHocDestroyed, &EventAdHocDestroyed_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocFinalized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAdHocFinalized()
{
	static UFunction* uFnEventAdHocFinalized = nullptr;

	if (!uFnEventAdHocFinalized)
	{
		uFnEventAdHocFinalized = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocFinalized");
	}

	UAdHocDelegates_execEventAdHocFinalized_Params EventAdHocFinalized_Params;

	this->ProcessEvent(uFnEventAdHocFinalized, &EventAdHocFinalized_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventStationDisconnected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventStationDisconnected()
{
	static UFunction* uFnEventStationDisconnected = nullptr;

	if (!uFnEventStationDisconnected)
	{
		uFnEventStationDisconnected = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventStationDisconnected");
	}

	UAdHocDelegates_execEventStationDisconnected_Params EventStationDisconnected_Params;

	this->ProcessEvent(uFnEventStationDisconnected, &EventStationDisconnected_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventStationConnected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventStationConnected()
{
	static UFunction* uFnEventStationConnected = nullptr;

	if (!uFnEventStationConnected)
	{
		uFnEventStationConnected = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventStationConnected");
	}

	UAdHocDelegates_execEventStationConnected_Params EventStationConnected_Params;

	this->ProcessEvent(uFnEventStationConnected, &EventStationConnected_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventBecomeStation
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventBecomeStation()
{
	static UFunction* uFnEventBecomeStation = nullptr;

	if (!uFnEventBecomeStation)
	{
		uFnEventBecomeStation = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventBecomeStation");
	}

	UAdHocDelegates_execEventBecomeStation_Params EventBecomeStation_Params;

	this->ProcessEvent(uFnEventBecomeStation, &EventBecomeStation_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAccessPointCreated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAccessPointCreated()
{
	static UFunction* uFnEventAccessPointCreated = nullptr;

	if (!uFnEventAccessPointCreated)
	{
		uFnEventAccessPointCreated = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAccessPointCreated");
	}

	UAdHocDelegates_execEventAccessPointCreated_Params EventAccessPointCreated_Params;

	this->ProcessEvent(uFnEventAccessPointCreated, &EventAccessPointCreated_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocInitialized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAdHocInitialized()
{
	static UFunction* uFnEventAdHocInitialized = nullptr;

	if (!uFnEventAdHocInitialized)
	{
		uFnEventAdHocInitialized = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocInitialized");
	}

	UAdHocDelegates_execEventAdHocInitialized_Params EventAdHocInitialized_Params;

	this->ProcessEvent(uFnEventAdHocInitialized, &EventAdHocInitialized_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocError
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UError*                  Error                          (CPF_Parm)

void UAdHocDelegates::EventAdHocError(class UError* Error)
{
	static UFunction* uFnEventAdHocError = nullptr;

	if (!uFnEventAdHocError)
	{
		uFnEventAdHocError = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocError");
	}

	UAdHocDelegates_execEventAdHocError_Params EventAdHocError_Params;
	memcpy_s(&EventAdHocError_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnEventAdHocError, &EventAdHocError_Params, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// TArray<struct FAdHocAccessPointInfo> Ahapis                         (CPF_Parm | CPF_NeedCtorLink)

void UAdHocDelegates::EventAdHocOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis)
{
	static UFunction* uFnEventAdHocOnNetworkChanged = nullptr;

	if (!uFnEventAdHocOnNetworkChanged)
	{
		uFnEventAdHocOnNetworkChanged = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged");
	}

	UAdHocDelegates_execEventAdHocOnNetworkChanged_Params EventAdHocOnNetworkChanged_Params;
	memcpy_s(&EventAdHocOnNetworkChanged_Params.Ahapis, 0x10, &Ahapis, 0x10);

	this->ProcessEvent(uFnEventAdHocOnNetworkChanged, &EventAdHocOnNetworkChanged_Params, nullptr);
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    OutRegisteredPlayers           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& OutRegisteredPlayers)
{
	static UFunction* uFnGetRegisteredPlayers = nullptr;

	if (!uFnGetRegisteredPlayers)
	{
		uFnGetRegisteredPlayers = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");
	}

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params GetRegisteredPlayers_Params;
	memcpy_s(&GetRegisteredPlayers_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&GetRegisteredPlayers_Params.OutRegisteredPlayers, 0x10, &OutRegisteredPlayers, 0x10);

	this->ProcessEvent(uFnGetRegisteredPlayers, &GetRegisteredPlayers_Params, nullptr);

	memcpy_s(&OutRegisteredPlayers, 0x10, &GetRegisteredPlayers_Params.OutRegisteredPlayers, 0x10);
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsPlayerInSession = nullptr;

	if (!uFnIsPlayerInSession)
	{
		uFnIsPlayerInSession = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");
	}

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params IsPlayerInSession_Params;
	memcpy_s(&IsPlayerInSession_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&IsPlayerInSession_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnIsPlayerInSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlayerInSession, &IsPlayerInSession_Params, nullptr);

	uFnIsPlayerInSession->FunctionFlags |= 0x400;

	return IsPlayerInSession_Params.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Country                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, class FString Country)
{
	static UFunction* uFnOnPlayerCountryRetrieved = nullptr;

	if (!uFnOnPlayerCountryRetrieved)
	{
		uFnOnPlayerCountryRetrieved = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved");
	}

	UOnlineSubsystemCommonImpl_execOnPlayerCountryRetrieved_Params OnPlayerCountryRetrieved_Params;
	memcpy_s(&OnPlayerCountryRetrieved_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&OnPlayerCountryRetrieved_Params.Country, 0x10, &Country, 0x10);

	this->ProcessEvent(uFnOnPlayerCountryRetrieved, &OnPlayerCountryRetrieved_Params, nullptr);
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FWordFilterResult       Result                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::OnSanitizeStringComplete(struct FWordFilterResult Result)
{
	static UFunction* uFnOnSanitizeStringComplete = nullptr;

	if (!uFnOnSanitizeStringComplete)
	{
		uFnOnSanitizeStringComplete = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete");
	}

	UOnlineSubsystemCommonImpl_execOnSanitizeStringComplete_Params OnSanitizeStringComplete_Params;
	memcpy_s(&OnSanitizeStringComplete_Params.Result, 0x38, &Result, 0x38);

	this->ProcessEvent(uFnOnSanitizeStringComplete, &OnSanitizeStringComplete_Params, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.TriggerAvatarCallbacks
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Avatar                         (CPF_Parm)

void UAvatarDownloadComponent::TriggerAvatarCallbacks(class UAvatarDownload* Avatar)
{
	static UFunction* uFnTriggerAvatarCallbacks = nullptr;

	if (!uFnTriggerAvatarCallbacks)
	{
		uFnTriggerAvatarCallbacks = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.TriggerAvatarCallbacks");
	}

	UAvatarDownloadComponent_execTriggerAvatarCallbacks_Params TriggerAvatarCallbacks_Params;
	memcpy_s(&TriggerAvatarCallbacks_Params.Avatar, 0x8, &Avatar, 0x8);

	this->ProcessEvent(uFnTriggerAvatarCallbacks, &TriggerAvatarCallbacks_Params, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.HandleOnlineImageDownloaded
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FOnlineImageDownload    ImageInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::HandleOnlineImageDownloaded(struct FOnlineImageDownload ImageInfo)
{
	static UFunction* uFnHandleOnlineImageDownloaded = nullptr;

	if (!uFnHandleOnlineImageDownloaded)
	{
		uFnHandleOnlineImageDownloaded = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.HandleOnlineImageDownloaded");
	}

	UAvatarDownloadComponent_execHandleOnlineImageDownloaded_Params HandleOnlineImageDownloaded_Params;
	memcpy_s(&HandleOnlineImageDownloaded_Params.ImageInfo, 0x40, &ImageInfo, 0x40);

	this->ProcessEvent(uFnHandleOnlineImageDownloaded, &HandleOnlineImageDownloaded_Params, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.GetAvatar
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Size                           (CPF_Parm)

class UAvatarDownload* UAvatarDownloadComponent::GetAvatar(struct FUniqueNetId PlayerID, uint8_t Size)
{
	static UFunction* uFnGetAvatar = nullptr;

	if (!uFnGetAvatar)
	{
		uFnGetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.GetAvatar");
	}

	UAvatarDownloadComponent_execGetAvatar_Params GetAvatar_Params;
	memcpy_s(&GetAvatar_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAvatar_Params.Size, 0x1, &Size, 0x1);

	this->ProcessEvent(uFnGetAvatar, &GetAvatar_Params, nullptr);

	return GetAvatar_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadComponent.ClearPendingDownloads
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadComponent::ClearPendingDownloads()
{
	static UFunction* uFnClearPendingDownloads = nullptr;

	if (!uFnClearPendingDownloads)
	{
		uFnClearPendingDownloads = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.ClearPendingDownloads");
	}

	UAvatarDownloadComponent_execClearPendingDownloads_Params ClearPendingDownloads_Params;

	this->ProcessEvent(uFnClearPendingDownloads, &ClearPendingDownloads_Params, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.CleanupAvatars
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadComponent::CleanupAvatars()
{
	static UFunction* uFnCleanupAvatars = nullptr;

	if (!uFnCleanupAvatars)
	{
		uFnCleanupAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.CleanupAvatars");
	}

	UAvatarDownloadComponent_execCleanupAvatars_Params CleanupAvatars_Params;

	this->ProcessEvent(uFnCleanupAvatars, &CleanupAvatars_Params, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.DownloadAvatar
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Size                           (CPF_Parm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::DownloadAvatar(struct FUniqueNetId PlayerID, uint8_t Size, class FString URL)
{
	static UFunction* uFnDownloadAvatar = nullptr;

	if (!uFnDownloadAvatar)
	{
		uFnDownloadAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.DownloadAvatar");
	}

	UAvatarDownloadComponent_execDownloadAvatar_Params DownloadAvatar_Params;
	memcpy_s(&DownloadAvatar_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&DownloadAvatar_Params.Size, 0x1, &Size, 0x1);
	memcpy_s(&DownloadAvatar_Params.URL, 0x10, &URL, 0x10);

	this->ProcessEvent(uFnDownloadAvatar, &DownloadAvatar_Params, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.StoreNewAvatars
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    NewPlayerIDs                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::StoreNewAvatars(uint8_t Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& NewPlayerIDs)
{
	static UFunction* uFnStoreNewAvatars = nullptr;

	if (!uFnStoreNewAvatars)
	{
		uFnStoreNewAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.StoreNewAvatars");
	}

	UAvatarDownloadComponent_execStoreNewAvatars_Params StoreNewAvatars_Params;
	memcpy_s(&StoreNewAvatars_Params.Size, 0x1, &Size, 0x1);
	memcpy_s(&StoreNewAvatars_Params.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);
	memcpy_s(&StoreNewAvatars_Params.NewPlayerIDs, 0x10, &NewPlayerIDs, 0x10);

	uFnStoreNewAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStoreNewAvatars, &StoreNewAvatars_Params, nullptr);

	uFnStoreNewAvatars->FunctionFlags |= 0x400;

	memcpy_s(&NewPlayerIDs, 0x10, &StoreNewAvatars_Params.NewPlayerIDs, 0x10);
};

// Function IpDrv.AvatarDownloadComponent.ProcessOldRequests
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        SizeType                       (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    InPlayerIDs                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    NewRequestIDs                  (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::ProcessOldRequests(uint8_t SizeType, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& InPlayerIDs, TArray<struct FUniqueNetId>& NewRequestIDs)
{
	static UFunction* uFnProcessOldRequests = nullptr;

	if (!uFnProcessOldRequests)
	{
		uFnProcessOldRequests = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.ProcessOldRequests");
	}

	UAvatarDownloadComponent_execProcessOldRequests_Params ProcessOldRequests_Params;
	memcpy_s(&ProcessOldRequests_Params.SizeType, 0x1, &SizeType, 0x1);
	memcpy_s(&ProcessOldRequests_Params.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);
	memcpy_s(&ProcessOldRequests_Params.InPlayerIDs, 0x10, &InPlayerIDs, 0x10);
	memcpy_s(&ProcessOldRequests_Params.NewRequestIDs, 0x10, &NewRequestIDs, 0x10);

	uFnProcessOldRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnProcessOldRequests, &ProcessOldRequests_Params, nullptr);

	uFnProcessOldRequests->FunctionFlags |= 0x400;

	memcpy_s(&InPlayerIDs, 0x10, &ProcessOldRequests_Params.InPlayerIDs, 0x10);
	memcpy_s(&NewRequestIDs, 0x10, &ProcessOldRequests_Params.NewRequestIDs, 0x10);
};

// Function IpDrv.AvatarDownloadComponent.TryAddAvatarTextureCallback
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

bool UAvatarDownloadComponent::TryAddAvatarTextureCallback(struct FUniqueNetId PlayerNetId, uint8_t Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate)
{
	static UFunction* uFnTryAddAvatarTextureCallback = nullptr;

	if (!uFnTryAddAvatarTextureCallback)
	{
		uFnTryAddAvatarTextureCallback = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.TryAddAvatarTextureCallback");
	}

	UAvatarDownloadComponent_execTryAddAvatarTextureCallback_Params TryAddAvatarTextureCallback_Params;
	memcpy_s(&TryAddAvatarTextureCallback_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	memcpy_s(&TryAddAvatarTextureCallback_Params.Size, 0x1, &Size, 0x1);
	memcpy_s(&TryAddAvatarTextureCallback_Params.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);

	uFnTryAddAvatarTextureCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTryAddAvatarTextureCallback, &TryAddAvatarTextureCallback_Params, nullptr);

	uFnTryAddAvatarTextureCallback->FunctionFlags |= 0x400;

	return TryAddAvatarTextureCallback_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.ContainsImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

bool UAvatarDownloadMap::ContainsImage(class FString Key)
{
	static UFunction* uFnContainsImage = nullptr;

	if (!uFnContainsImage)
	{
		uFnContainsImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ContainsImage");
	}

	UAvatarDownloadMap_execContainsImage_Params ContainsImage_Params;
	memcpy_s(&ContainsImage_Params.Key, 0x10, &Key, 0x10);

	uFnContainsImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnContainsImage, &ContainsImage_Params, nullptr);

	uFnContainsImage->FunctionFlags |= 0x400;

	return ContainsImage_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.ContainsAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UAvatarDownloadMap::ContainsAvatar(struct FAvatarKey& Key)
{
	static UFunction* uFnContainsAvatar = nullptr;

	if (!uFnContainsAvatar)
	{
		uFnContainsAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ContainsAvatar");
	}

	UAvatarDownloadMap_execContainsAvatar_Params ContainsAvatar_Params;
	memcpy_s(&ContainsAvatar_Params.Key, 0x50, &Key, 0x50);

	uFnContainsAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnContainsAvatar, &ContainsAvatar_Params, nullptr);

	uFnContainsAvatar->FunctionFlags |= 0x400;

	memcpy_s(&Key, 0x50, &ContainsAvatar_Params.Key, 0x50);

	return ContainsAvatar_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.OnAvatarReceivedImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Avatar                         (CPF_Parm)

void UAvatarDownloadMap::OnAvatarReceivedImage(class UAvatarDownload* Avatar)
{
	static UFunction* uFnOnAvatarReceivedImage = nullptr;

	if (!uFnOnAvatarReceivedImage)
	{
		uFnOnAvatarReceivedImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.OnAvatarReceivedImage");
	}

	UAvatarDownloadMap_execOnAvatarReceivedImage_Params OnAvatarReceivedImage_Params;
	memcpy_s(&OnAvatarReceivedImage_Params.Avatar, 0x8, &Avatar, 0x8);

	uFnOnAvatarReceivedImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnAvatarReceivedImage, &OnAvatarReceivedImage_Params, nullptr);

	uFnOnAvatarReceivedImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.RemoveImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UAvatarDownloadMap::RemoveImage(class FString Key)
{
	static UFunction* uFnRemoveImage = nullptr;

	if (!uFnRemoveImage)
	{
		uFnRemoveImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.RemoveImage");
	}

	UAvatarDownloadMap_execRemoveImage_Params RemoveImage_Params;
	memcpy_s(&RemoveImage_Params.Key, 0x10, &Key, 0x10);

	uFnRemoveImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRemoveImage, &RemoveImage_Params, nullptr);

	uFnRemoveImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.RemoveAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadMap::RemoveAvatar(struct FAvatarKey& Key)
{
	static UFunction* uFnRemoveAvatar = nullptr;

	if (!uFnRemoveAvatar)
	{
		uFnRemoveAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.RemoveAvatar");
	}

	UAvatarDownloadMap_execRemoveAvatar_Params RemoveAvatar_Params;
	memcpy_s(&RemoveAvatar_Params.Key, 0x50, &Key, 0x50);

	uFnRemoveAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRemoveAvatar, &RemoveAvatar_Params, nullptr);

	uFnRemoveAvatar->FunctionFlags |= 0x400;

	memcpy_s(&Key, 0x50, &RemoveAvatar_Params.Key, 0x50);
};

// Function IpDrv.AvatarDownloadMap.RemoveAllNetIDs
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadMap::RemoveAllNetIDs(struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnRemoveAllNetIDs = nullptr;

	if (!uFnRemoveAllNetIDs)
	{
		uFnRemoveAllNetIDs = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.RemoveAllNetIDs");
	}

	UAvatarDownloadMap_execRemoveAllNetIDs_Params RemoveAllNetIDs_Params;
	memcpy_s(&RemoveAllNetIDs_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnRemoveAllNetIDs->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRemoveAllNetIDs, &RemoveAllNetIDs_Params, nullptr);

	uFnRemoveAllNetIDs->FunctionFlags |= 0x400;

	memcpy_s(&PlayerID, 0x48, &RemoveAllNetIDs_Params.PlayerID, 0x48);
};

// Function IpDrv.AvatarDownloadMap.ClearAvatarsPendingImages
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::ClearAvatarsPendingImages()
{
	static UFunction* uFnClearAvatarsPendingImages = nullptr;

	if (!uFnClearAvatarsPendingImages)
	{
		uFnClearAvatarsPendingImages = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ClearAvatarsPendingImages");
	}

	UAvatarDownloadMap_execClearAvatarsPendingImages_Params ClearAvatarsPendingImages_Params;

	uFnClearAvatarsPendingImages->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearAvatarsPendingImages, &ClearAvatarsPendingImages_Params, nullptr);

	uFnClearAvatarsPendingImages->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.ClearImages
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::ClearImages()
{
	static UFunction* uFnClearImages = nullptr;

	if (!uFnClearImages)
	{
		uFnClearImages = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ClearImages");
	}

	UAvatarDownloadMap_execClearImages_Params ClearImages_Params;

	uFnClearImages->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearImages, &ClearImages_Params, nullptr);

	uFnClearImages->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.ClearAvatars
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::ClearAvatars()
{
	static UFunction* uFnClearAvatars = nullptr;

	if (!uFnClearAvatars)
	{
		uFnClearAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ClearAvatars");
	}

	UAvatarDownloadMap_execClearAvatars_Params ClearAvatars_Params;

	uFnClearAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearAvatars, &ClearAvatars_Params, nullptr);

	uFnClearAvatars->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.Clear
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::Clear()
{
	static UFunction* uFnClear = nullptr;

	if (!uFnClear)
	{
		uFnClear = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.Clear");
	}

	UAvatarDownloadMap_execClear_Params Clear_Params;

	uFnClear->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClear, &Clear_Params, nullptr);

	uFnClear->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.TryGetImage
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                OutValue                       (CPF_Parm | CPF_OutParm)

bool UAvatarDownloadMap::TryGetImage(class FString Key, class UTexture*& OutValue)
{
	static UFunction* uFnTryGetImage = nullptr;

	if (!uFnTryGetImage)
	{
		uFnTryGetImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.TryGetImage");
	}

	UAvatarDownloadMap_execTryGetImage_Params TryGetImage_Params;
	memcpy_s(&TryGetImage_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&TryGetImage_Params.OutValue, 0x8, &OutValue, 0x8);

	uFnTryGetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTryGetImage, &TryGetImage_Params, nullptr);

	uFnTryGetImage->FunctionFlags |= 0x400;

	memcpy_s(&OutValue, 0x8, &TryGetImage_Params.OutValue, 0x8);

	return TryGetImage_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.TryGetAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class UAvatarDownload*         OutValue                       (CPF_Parm | CPF_OutParm)

bool UAvatarDownloadMap::TryGetAvatar(struct FAvatarKey& Key, class UAvatarDownload*& OutValue)
{
	static UFunction* uFnTryGetAvatar = nullptr;

	if (!uFnTryGetAvatar)
	{
		uFnTryGetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.TryGetAvatar");
	}

	UAvatarDownloadMap_execTryGetAvatar_Params TryGetAvatar_Params;
	memcpy_s(&TryGetAvatar_Params.Key, 0x50, &Key, 0x50);
	memcpy_s(&TryGetAvatar_Params.OutValue, 0x8, &OutValue, 0x8);

	uFnTryGetAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTryGetAvatar, &TryGetAvatar_Params, nullptr);

	uFnTryGetAvatar->FunctionFlags |= 0x400;

	memcpy_s(&Key, 0x50, &TryGetAvatar_Params.Key, 0x50);
	memcpy_s(&OutValue, 0x8, &TryGetAvatar_Params.OutValue, 0x8);

	return TryGetAvatar_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.GetAvatarsPendingImage
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// TArray<class UAvatarDownload*> OutAvatars                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadMap::GetAvatarsPendingImage(class FString Key, TArray<class UAvatarDownload*>& OutAvatars)
{
	static UFunction* uFnGetAvatarsPendingImage = nullptr;

	if (!uFnGetAvatarsPendingImage)
	{
		uFnGetAvatarsPendingImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.GetAvatarsPendingImage");
	}

	UAvatarDownloadMap_execGetAvatarsPendingImage_Params GetAvatarsPendingImage_Params;
	memcpy_s(&GetAvatarsPendingImage_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&GetAvatarsPendingImage_Params.OutAvatars, 0x10, &OutAvatars, 0x10);

	uFnGetAvatarsPendingImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAvatarsPendingImage, &GetAvatarsPendingImage_Params, nullptr);

	uFnGetAvatarsPendingImage->FunctionFlags |= 0x400;

	memcpy_s(&OutAvatars, 0x10, &GetAvatarsPendingImage_Params.OutAvatars, 0x10);
};

// Function IpDrv.AvatarDownloadMap.GetImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

class UTexture* UAvatarDownloadMap::GetImage(class FString Key)
{
	static UFunction* uFnGetImage = nullptr;

	if (!uFnGetImage)
	{
		uFnGetImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.GetImage");
	}

	UAvatarDownloadMap_execGetImage_Params GetImage_Params;
	memcpy_s(&GetImage_Params.Key, 0x10, &Key, 0x10);

	uFnGetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetImage, &GetImage_Params, nullptr);

	uFnGetImage->FunctionFlags |= 0x400;

	return GetImage_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.GetAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UAvatarDownload* UAvatarDownloadMap::GetAvatar(struct FAvatarKey& Key)
{
	static UFunction* uFnGetAvatar = nullptr;

	if (!uFnGetAvatar)
	{
		uFnGetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.GetAvatar");
	}

	UAvatarDownloadMap_execGetAvatar_Params GetAvatar_Params;
	memcpy_s(&GetAvatar_Params.Key, 0x50, &Key, 0x50);

	uFnGetAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAvatar, &GetAvatar_Params, nullptr);

	uFnGetAvatar->FunctionFlags |= 0x400;

	memcpy_s(&Key, 0x50, &GetAvatar_Params.Key, 0x50);

	return GetAvatar_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.AddAvatarPendingImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Avatar                         (CPF_Parm)

void UAvatarDownloadMap::AddAvatarPendingImage(class UAvatarDownload* Avatar)
{
	static UFunction* uFnAddAvatarPendingImage = nullptr;

	if (!uFnAddAvatarPendingImage)
	{
		uFnAddAvatarPendingImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.AddAvatarPendingImage");
	}

	UAvatarDownloadMap_execAddAvatarPendingImage_Params AddAvatarPendingImage_Params;
	memcpy_s(&AddAvatarPendingImage_Params.Avatar, 0x8, &Avatar, 0x8);

	uFnAddAvatarPendingImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddAvatarPendingImage, &AddAvatarPendingImage_Params, nullptr);

	uFnAddAvatarPendingImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.SetImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                Value                          (CPF_Parm)

void UAvatarDownloadMap::SetImage(class FString URL, class UTexture* Value)
{
	static UFunction* uFnSetImage = nullptr;

	if (!uFnSetImage)
	{
		uFnSetImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.SetImage");
	}

	UAvatarDownloadMap_execSetImage_Params SetImage_Params;
	memcpy_s(&SetImage_Params.URL, 0x10, &URL, 0x10);
	memcpy_s(&SetImage_Params.Value, 0x8, &Value, 0x8);

	uFnSetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetImage, &SetImage_Params, nullptr);

	uFnSetImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.SetAvatar
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Value                          (CPF_Parm)

void UAvatarDownloadMap::SetAvatar(class UAvatarDownload* Value)
{
	static UFunction* uFnSetAvatar = nullptr;

	if (!uFnSetAvatar)
	{
		uFnSetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.SetAvatar");
	}

	UAvatarDownloadMap_execSetAvatar_Params SetAvatar_Params;
	memcpy_s(&SetAvatar_Params.Value, 0x8, &Value, 0x8);

	uFnSetAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetAvatar, &SetAvatar_Params, nullptr);

	uFnSetAvatar->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.CountAvatars
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UAvatarDownloadMap::CountAvatars()
{
	static UFunction* uFnCountAvatars = nullptr;

	if (!uFnCountAvatars)
	{
		uFnCountAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.CountAvatars");
	}

	UAvatarDownloadMap_execCountAvatars_Params CountAvatars_Params;

	uFnCountAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCountAvatars, &CountAvatars_Params, nullptr);

	uFnCountAvatars->FunctionFlags |= 0x400;

	return CountAvatars_Params.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.AllValues
// [0x00424405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        MaxValues                      (CPF_OptionalParm | CPF_Parm)
// class UAvatarDownload*         OutAvatar                      (CPF_Parm | CPF_OutParm)

void UAvatarDownloadMap::AllValues(int32_t StartIndex, int32_t MaxValues, class UAvatarDownload*& OutAvatar)
{
	static UFunction* uFnAllValues = nullptr;

	if (!uFnAllValues)
	{
		uFnAllValues = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.AllValues");
	}

	UAvatarDownloadMap_execAllValues_Params AllValues_Params;
	memcpy_s(&AllValues_Params.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&AllValues_Params.MaxValues, 0x4, &MaxValues, 0x4);
	memcpy_s(&AllValues_Params.OutAvatar, 0x8, &OutAvatar, 0x8);

	uFnAllValues->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllValues, &AllValues_Params, nullptr);

	uFnAllValues->FunctionFlags |= 0x400;

	memcpy_s(&OutAvatar, 0x8, &AllValues_Params.OutAvatar, 0x8);
};

// Function IpDrv.HttpRequestCurl.ProcessRequest
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestCurl::ProcessRequest()
{
	static UFunction* uFnProcessRequest = nullptr;

	if (!uFnProcessRequest)
	{
		uFnProcessRequest = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.ProcessRequest");
	}

	UHttpRequestCurl_execProcessRequest_Params ProcessRequest_Params;

	uFnProcessRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnProcessRequest, &ProcessRequest_Params, nullptr);

	uFnProcessRequest->FunctionFlags |= 0x400;

	return ProcessRequest_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetHeader
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  HeaderValue                    (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetHeader(class FString HeaderName, class FString HeaderValue)
{
	static UFunction* uFnSetHeader = nullptr;

	if (!uFnSetHeader)
	{
		uFnSetHeader = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetHeader");
	}

	UHttpRequestCurl_execSetHeader_Params SetHeader_Params;
	memcpy_s(&SetHeader_Params.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&SetHeader_Params.HeaderValue, 0x10, &HeaderValue, 0x10);

	uFnSetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetHeader, &SetHeader_Params, nullptr);

	uFnSetHeader->FunctionFlags |= 0x400;

	return SetHeader_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetContentAsString
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ContentString                  (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetContentAsString(class FString ContentString)
{
	static UFunction* uFnSetContentAsString = nullptr;

	if (!uFnSetContentAsString)
	{
		uFnSetContentAsString = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetContentAsString");
	}

	UHttpRequestCurl_execSetContentAsString_Params SetContentAsString_Params;
	memcpy_s(&SetContentAsString_Params.ContentString, 0x10, &ContentString, 0x10);

	uFnSetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetContentAsString, &SetContentAsString_Params, nullptr);

	uFnSetContentAsString->FunctionFlags |= 0x400;

	return SetContentAsString_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetContent
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<uint8_t>                ContentPayload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetContent(TArray<uint8_t>& ContentPayload)
{
	static UFunction* uFnSetContent = nullptr;

	if (!uFnSetContent)
	{
		uFnSetContent = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetContent");
	}

	UHttpRequestCurl_execSetContent_Params SetContent_Params;
	memcpy_s(&SetContent_Params.ContentPayload, 0x10, &ContentPayload, 0x10);

	uFnSetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetContent, &SetContent_Params, nullptr);

	uFnSetContent->FunctionFlags |= 0x400;

	memcpy_s(&ContentPayload, 0x10, &SetContent_Params.ContentPayload, 0x10);

	return SetContent_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetURL
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetURL(class FString URL)
{
	static UFunction* uFnSetURL = nullptr;

	if (!uFnSetURL)
	{
		uFnSetURL = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetURL");
	}

	UHttpRequestCurl_execSetURL_Params SetURL_Params;
	memcpy_s(&SetURL_Params.URL, 0x10, &URL, 0x10);

	uFnSetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetURL, &SetURL_Params, nullptr);

	uFnSetURL->FunctionFlags |= 0x400;

	return SetURL_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetVerb
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Verb                           (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetVerb(class FString Verb)
{
	static UFunction* uFnSetVerb = nullptr;

	if (!uFnSetVerb)
	{
		uFnSetVerb = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetVerb");
	}

	UHttpRequestCurl_execSetVerb_Params SetVerb_Params;
	memcpy_s(&SetVerb_Params.Verb, 0x10, &Verb, 0x10);

	uFnSetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetVerb, &SetVerb_Params, nullptr);

	uFnSetVerb->FunctionFlags |= 0x400;

	return SetVerb_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetVerb
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestCurl::GetVerb()
{
	static UFunction* uFnGetVerb = nullptr;

	if (!uFnGetVerb)
	{
		uFnGetVerb = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetVerb");
	}

	UHttpRequestCurl_execGetVerb_Params GetVerb_Params;

	uFnGetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVerb, &GetVerb_Params, nullptr);

	uFnGetVerb->FunctionFlags |= 0x400;

	return GetVerb_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContent
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<uint8_t>                Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpRequestCurl::GetContent(TArray<uint8_t>& Content)
{
	static UFunction* uFnGetContent = nullptr;

	if (!uFnGetContent)
	{
		uFnGetContent = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetContent");
	}

	UHttpRequestCurl_execGetContent_Params GetContent_Params;
	memcpy_s(&GetContent_Params.Content, 0x10, &Content, 0x10);

	uFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContent, &GetContent_Params, nullptr);

	uFnGetContent->FunctionFlags |= 0x400;

	memcpy_s(&Content, 0x10, &GetContent_Params.Content, 0x10);
};

// Function IpDrv.HttpRequestCurl.GetURL
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestCurl::GetURL()
{
	static UFunction* uFnGetURL = nullptr;

	if (!uFnGetURL)
	{
		uFnGetURL = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetURL");
	}

	UHttpRequestCurl_execGetURL_Params GetURL_Params;

	uFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetURL, &GetURL_Params, nullptr);

	uFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContentLength
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpRequestCurl::GetContentLength()
{
	static UFunction* uFnGetContentLength = nullptr;

	if (!uFnGetContentLength)
	{
		uFnGetContentLength = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetContentLength");
	}

	UHttpRequestCurl_execGetContentLength_Params GetContentLength_Params;

	uFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContentLength, &GetContentLength_Params, nullptr);

	uFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContentType
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestCurl::GetContentType()
{
	static UFunction* uFnGetContentType = nullptr;

	if (!uFnGetContentType)
	{
		uFnGetContentType = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetContentType");
	}

	UHttpRequestCurl_execGetContentType_Params GetContentType_Params;

	uFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContentType, &GetContentType_Params, nullptr);

	uFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetURLParameter
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpRequestCurl::GetURLParameter(class FString ParameterName)
{
	static UFunction* uFnGetURLParameter = nullptr;

	if (!uFnGetURLParameter)
	{
		uFnGetURLParameter = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetURLParameter");
	}

	UHttpRequestCurl_execGetURLParameter_Params GetURLParameter_Params;
	memcpy_s(&GetURLParameter_Params.ParameterName, 0x10, &ParameterName, 0x10);

	uFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetURLParameter, &GetURLParameter_Params, nullptr);

	uFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetHeaders
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UHttpRequestCurl::GetHeaders()
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetHeaders");
	}

	UHttpRequestCurl_execGetHeaders_Params GetHeaders_Params;

	uFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);

	uFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Params.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetHeader
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpRequestCurl::GetHeader(class FString HeaderName)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetHeader");
	}

	UHttpRequestCurl_execGetHeader_Params GetHeader_Params;
	memcpy_s(&GetHeader_Params.HeaderName, 0x10, &HeaderName, 0x10);

	uFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);

	uFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetResponseCode
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpResponseCurl::GetResponseCode()
{
	static UFunction* uFnGetResponseCode = nullptr;

	if (!uFnGetResponseCode)
	{
		uFnGetResponseCode = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetResponseCode");
	}

	UHttpResponseCurl_execGetResponseCode_Params GetResponseCode_Params;

	uFnGetResponseCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetResponseCode, &GetResponseCode_Params, nullptr);

	uFnGetResponseCode->FunctionFlags |= 0x400;

	return GetResponseCode_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentAsString
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseCurl::GetContentAsString()
{
	static UFunction* uFnGetContentAsString = nullptr;

	if (!uFnGetContentAsString)
	{
		uFnGetContentAsString = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContentAsString");
	}

	UHttpResponseCurl_execGetContentAsString_Params GetContentAsString_Params;

	uFnGetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContentAsString, &GetContentAsString_Params, nullptr);

	uFnGetContentAsString->FunctionFlags |= 0x400;

	return GetContentAsString_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContent
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<uint8_t>                Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpResponseCurl::GetContent(TArray<uint8_t>& Content)
{
	static UFunction* uFnGetContent = nullptr;

	if (!uFnGetContent)
	{
		uFnGetContent = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContent");
	}

	UHttpResponseCurl_execGetContent_Params GetContent_Params;
	memcpy_s(&GetContent_Params.Content, 0x10, &Content, 0x10);

	uFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContent, &GetContent_Params, nullptr);

	uFnGetContent->FunctionFlags |= 0x400;

	memcpy_s(&Content, 0x10, &GetContent_Params.Content, 0x10);
};

// Function IpDrv.HttpResponseCurl.GetURL
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseCurl::GetURL()
{
	static UFunction* uFnGetURL = nullptr;

	if (!uFnGetURL)
	{
		uFnGetURL = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetURL");
	}

	UHttpResponseCurl_execGetURL_Params GetURL_Params;

	uFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetURL, &GetURL_Params, nullptr);

	uFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentLength
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpResponseCurl::GetContentLength()
{
	static UFunction* uFnGetContentLength = nullptr;

	if (!uFnGetContentLength)
	{
		uFnGetContentLength = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContentLength");
	}

	UHttpResponseCurl_execGetContentLength_Params GetContentLength_Params;

	uFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContentLength, &GetContentLength_Params, nullptr);

	uFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentType
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseCurl::GetContentType()
{
	static UFunction* uFnGetContentType = nullptr;

	if (!uFnGetContentType)
	{
		uFnGetContentType = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContentType");
	}

	UHttpResponseCurl_execGetContentType_Params GetContentType_Params;

	uFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContentType, &GetContentType_Params, nullptr);

	uFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetURLParameter
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpResponseCurl::GetURLParameter(class FString ParameterName)
{
	static UFunction* uFnGetURLParameter = nullptr;

	if (!uFnGetURLParameter)
	{
		uFnGetURLParameter = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetURLParameter");
	}

	UHttpResponseCurl_execGetURLParameter_Params GetURLParameter_Params;
	memcpy_s(&GetURLParameter_Params.ParameterName, 0x10, &ParameterName, 0x10);

	uFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetURLParameter, &GetURLParameter_Params, nullptr);

	uFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetHeaders
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UHttpResponseCurl::GetHeaders()
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetHeaders");
	}

	UHttpResponseCurl_execGetHeaders_Params GetHeaders_Params;

	uFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);

	uFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Params.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetHeader
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpResponseCurl::GetHeader(class FString HeaderName)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetHeader");
	}

	UHttpResponseCurl_execGetHeader_Params GetHeader_Params;
	memcpy_s(&GetHeader_Params.HeaderName, 0x10, &HeaderName, 0x10);

	uFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);

	uFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Params.ReturnValue;
};

// Function IpDrv.ImageDecoder.RequestDecodeImage
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  RequestURL                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        ImageType                      (CPF_Parm)
// struct FScriptDelegate         FinishedCallback               (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                ImageData                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UImageDecoder::RequestDecodeImage(class FString RequestURL, uint8_t ImageType, struct FScriptDelegate FinishedCallback, TArray<uint8_t>& ImageData)
{
	static UFunction* uFnRequestDecodeImage = nullptr;

	if (!uFnRequestDecodeImage)
	{
		uFnRequestDecodeImage = UFunction::FindFunction("Function IpDrv.ImageDecoder.RequestDecodeImage");
	}

	UImageDecoder_execRequestDecodeImage_Params RequestDecodeImage_Params;
	memcpy_s(&RequestDecodeImage_Params.RequestURL, 0x10, &RequestURL, 0x10);
	memcpy_s(&RequestDecodeImage_Params.ImageType, 0x1, &ImageType, 0x1);
	memcpy_s(&RequestDecodeImage_Params.FinishedCallback, 0x18, &FinishedCallback, 0x18);
	memcpy_s(&RequestDecodeImage_Params.ImageData, 0x10, &ImageData, 0x10);

	uFnRequestDecodeImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestDecodeImage, &RequestDecodeImage_Params, nullptr);

	uFnRequestDecodeImage->FunctionFlags |= 0x400;

	memcpy_s(&ImageData, 0x10, &RequestDecodeImage_Params.ImageData, 0x10);
};

// Function IpDrv.ImageDecoder.ImageDecodedDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  RequestURL                     (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            Image                          (CPF_Parm | CPF_NeedCtorLink)

void UImageDecoder::ImageDecodedDelegate(class FString RequestURL, struct FImageLayout Image)
{
	static UFunction* uFnImageDecodedDelegate = nullptr;

	if (!uFnImageDecodedDelegate)
	{
		uFnImageDecodedDelegate = UFunction::FindFunction("Function IpDrv.ImageDecoder.ImageDecodedDelegate");
	}

	UImageDecoder_execImageDecodedDelegate_Params ImageDecodedDelegate_Params;
	memcpy_s(&ImageDecodedDelegate_Params.RequestURL, 0x10, &RequestURL, 0x10);
	memcpy_s(&ImageDecodedDelegate_Params.Image, 0x18, &Image, 0x18);

	this->ProcessEvent(uFnImageDecodedDelegate, &ImageDecodedDelegate_Params, nullptr);
};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AInternetLink::eventResolveFailed()
{
	static UFunction* uFnResolveFailed = nullptr;

	if (!uFnResolveFailed)
	{
		uFnResolveFailed = UFunction::FindFunction("Function IpDrv.InternetLink.ResolveFailed");
	}

	AInternetLink_eventResolveFailed_Params ResolveFailed_Params;

	this->ProcessEvent(uFnResolveFailed, &ResolveFailed_Params, nullptr);
};

// Function IpDrv.InternetLink.Resolved
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FIpAddr                 Addr                           (CPF_Parm)

void AInternetLink::eventResolved(struct FIpAddr Addr)
{
	static UFunction* uFnResolved = nullptr;

	if (!uFnResolved)
	{
		uFnResolved = UFunction::FindFunction("Function IpDrv.InternetLink.Resolved");
	}

	AInternetLink_eventResolved_Params Resolved_Params;
	memcpy_s(&Resolved_Params.Addr, 0x14, &Addr, 0x14);

	this->ProcessEvent(uFnResolved, &Resolved_Params, nullptr);
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FIpAddr                 Arg                            (CPF_Parm | CPF_OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr& Arg)
{
	static UFunction* uFnGetLocalIP = nullptr;

	if (!uFnGetLocalIP)
	{
		uFnGetLocalIP = UFunction::FindFunction("Function IpDrv.InternetLink.GetLocalIP");
	}

	AInternetLink_execGetLocalIP_Params GetLocalIP_Params;
	memcpy_s(&GetLocalIP_Params.Arg, 0x14, &Arg, 0x14);

	uFnGetLocalIP->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetLocalIP, &GetLocalIP_Params, nullptr);

	uFnGetLocalIP->FunctionFlags |= 0x400;

	memcpy_s(&Arg, 0x14, &GetLocalIP_Params.Arg, 0x14);
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 Addr                           (CPF_Parm | CPF_OutParm)

bool AInternetLink::StringToIpAddr(class FString Str, struct FIpAddr& Addr)
{
	static UFunction* uFnStringToIpAddr = nullptr;

	if (!uFnStringToIpAddr)
	{
		uFnStringToIpAddr = UFunction::FindFunction("Function IpDrv.InternetLink.StringToIpAddr");
	}

	AInternetLink_execStringToIpAddr_Params StringToIpAddr_Params;
	memcpy_s(&StringToIpAddr_Params.Str, 0x10, &Str, 0x10);
	memcpy_s(&StringToIpAddr_Params.Addr, 0x14, &Addr, 0x14);

	uFnStringToIpAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStringToIpAddr, &StringToIpAddr_Params, nullptr);

	uFnStringToIpAddr->FunctionFlags |= 0x400;

	memcpy_s(&Addr, 0x14, &StringToIpAddr_Params.Addr, 0x14);

	return StringToIpAddr_Params.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FIpAddr                 Arg                            (CPF_Parm)

class FString AInternetLink::IpAddrToString(struct FIpAddr Arg)
{
	static UFunction* uFnIpAddrToString = nullptr;

	if (!uFnIpAddrToString)
	{
		uFnIpAddrToString = UFunction::FindFunction("Function IpDrv.InternetLink.IpAddrToString");
	}

	AInternetLink_execIpAddrToString_Params IpAddrToString_Params;
	memcpy_s(&IpAddrToString_Params.Arg, 0x14, &Arg, 0x14);

	uFnIpAddrToString->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIpAddrToString, &IpAddrToString_Params, nullptr);

	uFnIpAddrToString->FunctionFlags |= 0x400;

	return IpAddrToString_Params.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AInternetLink::GetLastError()
{
	static UFunction* uFnGetLastError = nullptr;

	if (!uFnGetLastError)
	{
		uFnGetLastError = UFunction::FindFunction("Function IpDrv.InternetLink.GetLastError");
	}

	AInternetLink_execGetLastError_Params GetLastError_Params;

	uFnGetLastError->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetLastError, &GetLastError_Params, nullptr);

	uFnGetLastError->FunctionFlags |= 0x400;

	return GetLastError_Params.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Domain                         (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AInternetLink::Resolve(class FString Domain)
{
	static UFunction* uFnResolve = nullptr;

	if (!uFnResolve)
	{
		uFnResolve = UFunction::FindFunction("Function IpDrv.InternetLink.Resolve");
	}

	AInternetLink_execResolve_Params Resolve_Params;
	memcpy_s(&Resolve_Params.Domain, 0x10, &Domain, 0x10);

	uFnResolve->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnResolve, &Resolve_Params, nullptr);

	uFnResolve->FunctionFlags |= 0x400;
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  Addr                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int32_t                        PortNum                        (CPF_Parm | CPF_OutParm)
// class FString                  LevelName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  EntryName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AInternetLink::ParseURL(class FString URL, class FString& Addr, int32_t& PortNum, class FString& LevelName, class FString& EntryName)
{
	static UFunction* uFnParseURL = nullptr;

	if (!uFnParseURL)
	{
		uFnParseURL = UFunction::FindFunction("Function IpDrv.InternetLink.ParseURL");
	}

	AInternetLink_execParseURL_Params ParseURL_Params;
	memcpy_s(&ParseURL_Params.URL, 0x10, &URL, 0x10);
	memcpy_s(&ParseURL_Params.Addr, 0x10, &Addr, 0x10);
	memcpy_s(&ParseURL_Params.PortNum, 0x4, &PortNum, 0x4);
	memcpy_s(&ParseURL_Params.LevelName, 0x10, &LevelName, 0x10);
	memcpy_s(&ParseURL_Params.EntryName, 0x10, &EntryName, 0x10);

	uFnParseURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnParseURL, &ParseURL_Params, nullptr);

	uFnParseURL->FunctionFlags |= 0x400;

	memcpy_s(&Addr, 0x10, &ParseURL_Params.Addr, 0x10);
	memcpy_s(&PortNum, 0x4, &ParseURL_Params.PortNum, 0x4);
	memcpy_s(&LevelName, 0x10, &ParseURL_Params.LevelName, 0x10);
	memcpy_s(&EntryName, 0x10, &ParseURL_Params.EntryName, 0x10);

	return ParseURL_Params.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AInternetLink::IsDataPending()
{
	static UFunction* uFnIsDataPending = nullptr;

	if (!uFnIsDataPending)
	{
		uFnIsDataPending = UFunction::FindFunction("Function IpDrv.InternetLink.IsDataPending");
	}

	AInternetLink_execIsDataPending_Params IsDataPending_Params;

	uFnIsDataPending->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsDataPending, &IsDataPending_Params, nullptr);

	uFnIsDataPending->FunctionFlags |= 0x400;

	return IsDataPending_Params.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void ATcpLink::eventReceivedBinary(int32_t Count, uint8_t B)
{
	static UFunction* uFnReceivedBinary = nullptr;

	if (!uFnReceivedBinary)
	{
		uFnReceivedBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedBinary");
	}

	ATcpLink_eventReceivedBinary_Params ReceivedBinary_Params;
	memcpy_s(&ReceivedBinary_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReceivedBinary_Params.B, 0xFF, &B, 0xFF);

	this->ProcessEvent(uFnReceivedBinary, &ReceivedBinary_Params, nullptr);
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Line                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedLine(class FString Line)
{
	static UFunction* uFnReceivedLine = nullptr;

	if (!uFnReceivedLine)
	{
		uFnReceivedLine = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedLine");
	}

	ATcpLink_eventReceivedLine_Params ReceivedLine_Params;
	memcpy_s(&ReceivedLine_Params.Line, 0x10, &Line, 0x10);

	this->ProcessEvent(uFnReceivedLine, &ReceivedLine_Params, nullptr);
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedText(class FString Text)
{
	static UFunction* uFnReceivedText = nullptr;

	if (!uFnReceivedText)
	{
		uFnReceivedText = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedText");
	}

	ATcpLink_eventReceivedText_Params ReceivedText_Params;
	memcpy_s(&ReceivedText_Params.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(uFnReceivedText, &ReceivedText_Params, nullptr);
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ATcpLink::eventClosed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function IpDrv.TcpLink.Closed");
	}

	ATcpLink_eventClosed_Params Closed_Params;

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function IpDrv.TcpLink.Opened
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ATcpLink::eventOpened()
{
	static UFunction* uFnOpened = nullptr;

	if (!uFnOpened)
	{
		uFnOpened = UFunction::FindFunction("Function IpDrv.TcpLink.Opened");
	}

	ATcpLink_eventOpened_Params Opened_Params;

	this->ProcessEvent(uFnOpened, &Opened_Params, nullptr);
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ATcpLink::eventAccepted()
{
	static UFunction* uFnAccepted = nullptr;

	if (!uFnAccepted)
	{
		uFnAccepted = UFunction::FindFunction("Function IpDrv.TcpLink.Accepted");
	}

	ATcpLink_eventAccepted_Params Accepted_Params;

	this->ProcessEvent(uFnAccepted, &Accepted_Params, nullptr);
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm | CPF_OutParm)

int32_t ATcpLink::ReadBinary(int32_t Count, uint8_t& B)
{
	static UFunction* uFnReadBinary = nullptr;

	if (!uFnReadBinary)
	{
		uFnReadBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReadBinary");
	}

	ATcpLink_execReadBinary_Params ReadBinary_Params;
	memcpy_s(&ReadBinary_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReadBinary_Params.B, 0xFF, &B, 0xFF);

	uFnReadBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadBinary, &ReadBinary_Params, nullptr);

	uFnReadBinary->FunctionFlags |= 0x400;

	memcpy_s(&B, 0xFF, &ReadBinary_Params.B, 0xFF);

	return ReadBinary_Params.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t ATcpLink::ReadText(class FString& Str)
{
	static UFunction* uFnReadText = nullptr;

	if (!uFnReadText)
	{
		uFnReadText = UFunction::FindFunction("Function IpDrv.TcpLink.ReadText");
	}

	ATcpLink_execReadText_Params ReadText_Params;
	memcpy_s(&ReadText_Params.Str, 0x10, &Str, 0x10);

	uFnReadText->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadText, &ReadText_Params, nullptr);

	uFnReadText->FunctionFlags |= 0x400;

	memcpy_s(&Str, 0x10, &ReadText_Params.Str, 0x10);

	return ReadText_Params.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

int32_t ATcpLink::SendBinary(int32_t Count, uint8_t B)
{
	static UFunction* uFnSendBinary = nullptr;

	if (!uFnSendBinary)
	{
		uFnSendBinary = UFunction::FindFunction("Function IpDrv.TcpLink.SendBinary");
	}

	ATcpLink_execSendBinary_Params SendBinary_Params;
	memcpy_s(&SendBinary_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&SendBinary_Params.B, 0xFF, &B, 0xFF);

	uFnSendBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendBinary, &SendBinary_Params, nullptr);

	uFnSendBinary->FunctionFlags |= 0x400;

	return SendBinary_Params.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int32_t ATcpLink::SendText(class FString Str)
{
	static UFunction* uFnSendText = nullptr;

	if (!uFnSendText)
	{
		uFnSendText = UFunction::FindFunction("Function IpDrv.TcpLink.SendText");
	}

	ATcpLink_execSendText_Params SendText_Params;
	memcpy_s(&SendText_Params.Str, 0x10, &Str, 0x10);

	uFnSendText->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendText, &SendText_Params, nullptr);

	uFnSendText->FunctionFlags |= 0x400;

	return SendText_Params.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::IsConnected()
{
	static UFunction* uFnIsConnected = nullptr;

	if (!uFnIsConnected)
	{
		uFnIsConnected = UFunction::FindFunction("Function IpDrv.TcpLink.IsConnected");
	}

	ATcpLink_execIsConnected_Params IsConnected_Params;

	uFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsConnected, &IsConnected_Params, nullptr);

	uFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Close()
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function IpDrv.TcpLink.Close");
	}

	ATcpLink_execClose_Params Close_Params;

	uFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClose, &Close_Params, nullptr);

	uFnClose->FunctionFlags |= 0x400;

	return Close_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 Addr                           (CPF_Parm)

bool ATcpLink::Open(struct FIpAddr Addr)
{
	static UFunction* uFnOpen = nullptr;

	if (!uFnOpen)
	{
		uFnOpen = UFunction::FindFunction("Function IpDrv.TcpLink.Open");
	}

	ATcpLink_execOpen_Params Open_Params;
	memcpy_s(&Open_Params.Addr, 0x14, &Addr, 0x14);

	uFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOpen, &Open_Params, nullptr);

	uFnOpen->FunctionFlags |= 0x400;

	return Open_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Listen()
{
	static UFunction* uFnListen = nullptr;

	if (!uFnListen)
	{
		uFnListen = UFunction::FindFunction("Function IpDrv.TcpLink.Listen");
	}

	ATcpLink_execListen_Params Listen_Params;

	uFnListen->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnListen, &Listen_Params, nullptr);

	uFnListen->FunctionFlags |= 0x400;

	return Listen_Params.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PortNum                        (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bUseNextAvailable              (CPF_OptionalParm | CPF_Parm)

int32_t ATcpLink::BindPort(int32_t PortNum, unsigned long bUseNextAvailable)
{
	static UFunction* uFnBindPort = nullptr;

	if (!uFnBindPort)
	{
		uFnBindPort = UFunction::FindFunction("Function IpDrv.TcpLink.BindPort");
	}

	ATcpLink_execBindPort_Params BindPort_Params;
	memcpy_s(&BindPort_Params.PortNum, 0x4, &PortNum, 0x4);
	BindPort_Params.bUseNextAvailable = bUseNextAvailable;

	uFnBindPort->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnBindPort, &BindPort_Params, nullptr);

	uFnBindPort->FunctionFlags |= 0x400;

	return BindPort_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetUserAuthURL(class FString McpId)
{
	static UFunction* uFnGetUserAuthURL = nullptr;

	if (!uFnGetUserAuthURL)
	{
		uFnGetUserAuthURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetUserAuthURL");
	}

	UMcpServiceBase_execGetUserAuthURL_Params GetUserAuthURL_Params;
	memcpy_s(&GetUserAuthURL_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnGetUserAuthURL, &GetUserAuthURL_Params, nullptr);

	return GetUserAuthURL_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetAppAccessURL()
{
	static UFunction* uFnGetAppAccessURL = nullptr;

	if (!uFnGetAppAccessURL)
	{
		uFnGetAppAccessURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetAppAccessURL");
	}

	UMcpServiceBase_execGetAppAccessURL_Params GetAppAccessURL_Params;

	this->ProcessEvent(uFnGetAppAccessURL, &GetAppAccessURL_Params, nullptr);

	return GetAppAccessURL_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetBaseURL()
{
	static UFunction* uFnGetBaseURL = nullptr;

	if (!uFnGetBaseURL)
	{
		uFnGetBaseURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetBaseURL");
	}

	UMcpServiceBase_execGetBaseURL_Params GetBaseURL_Params;

	this->ProcessEvent(uFnGetBaseURL, &GetBaseURL_Params, nullptr);

	return GetBaseURL_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpServiceBase::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.McpServiceBase.Init");
	}

	UMcpServiceBase_eventInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineMatchmakingStats* MMStats                        (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static UFunction* uFnUploadMatchmakingStats = nullptr;

	if (!uFnUploadMatchmakingStats)
	{
		uFnUploadMatchmakingStats = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");
	}

	UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Params UploadMatchmakingStats_Params;
	memcpy_s(&UploadMatchmakingStats_Params.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&UploadMatchmakingStats_Params.MMStats, 0x8, &MMStats, 0x8);

	uFnUploadMatchmakingStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUploadMatchmakingStats, &UploadMatchmakingStats_Params, nullptr);

	uFnUploadMatchmakingStats->FunctionFlags |= 0x400;

	return UploadMatchmakingStats_Params.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        NumPlayers                     (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers)
{
	static UFunction* uFnUpdatePlaylistPopulation = nullptr;

	if (!uFnUpdatePlaylistPopulation)
	{
		uFnUpdatePlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");
	}

	UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Params UpdatePlaylistPopulation_Params;
	memcpy_s(&UpdatePlaylistPopulation_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&UpdatePlaylistPopulation_Params.NumPlayers, 0x4, &NumPlayers, 0x4);

	uFnUpdatePlaylistPopulation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdatePlaylistPopulation, &UpdatePlaylistPopulation_Params, nullptr);

	uFnUpdatePlaylistPopulation->FunctionFlags |= 0x400;

	return UpdatePlaylistPopulation_Params.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(struct FUniqueNetId UniqueId, TArray<uint8_t>& Payload)
{
	static UFunction* uFnUploadGameplayEventsData = nullptr;

	if (!uFnUploadGameplayEventsData)
	{
		uFnUploadGameplayEventsData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");
	}

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Params UploadGameplayEventsData_Params;
	memcpy_s(&UploadGameplayEventsData_Params.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&UploadGameplayEventsData_Params.Payload, 0x10, &Payload, 0x10);

	uFnUploadGameplayEventsData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUploadGameplayEventsData, &UploadGameplayEventsData_Params, nullptr);

	uFnUploadGameplayEventsData->FunctionFlags |= 0x400;

	memcpy_s(&Payload, 0x10, &UploadGameplayEventsData_Params.Payload, 0x10);

	return UploadGameplayEventsData_Params.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PlayerNick                     (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(struct FUniqueNetId UniqueId, class FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnUploadPlayerData = nullptr;

	if (!uFnUploadPlayerData)
	{
		uFnUploadPlayerData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");
	}

	UOnlineEventsInterfaceMcp_execUploadPlayerData_Params UploadPlayerData_Params;
	memcpy_s(&UploadPlayerData_Params.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&UploadPlayerData_Params.PlayerNick, 0x10, &PlayerNick, 0x10);
	memcpy_s(&UploadPlayerData_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);
	memcpy_s(&UploadPlayerData_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);

	uFnUploadPlayerData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUploadPlayerData, &UploadPlayerData_Params, nullptr);

	uFnUploadPlayerData->FunctionFlags |= 0x400;

	return UploadPlayerData_Params.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        NewsType                       (CPF_Parm)

class FString UOnlineNewsInterfaceMcp::GetNews(uint8_t LocalUserNum, uint8_t NewsType)
{
	static UFunction* uFnGetNews = nullptr;

	if (!uFnGetNews)
	{
		uFnGetNews = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.GetNews");
	}

	UOnlineNewsInterfaceMcp_execGetNews_Params GetNews_Params;
	memcpy_s(&GetNews_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetNews_Params.NewsType, 0x1, &NewsType, 0x1);

	this->ProcessEvent(uFnGetNews, &GetNews_Params, nullptr);

	return GetNews_Params.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadGameNewsDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(struct FScriptDelegate ReadGameNewsDelegate)
{
	static UFunction* uFnClearReadNewsCompletedDelegate = nullptr;

	if (!uFnClearReadNewsCompletedDelegate)
	{
		uFnClearReadNewsCompletedDelegate = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate");
	}

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Params ClearReadNewsCompletedDelegate_Params;
	memcpy_s(&ClearReadNewsCompletedDelegate_Params.ReadGameNewsDelegate, 0x18, &ReadGameNewsDelegate, 0x18);

	this->ProcessEvent(uFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadNewsDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(struct FScriptDelegate ReadNewsDelegate)
{
	static UFunction* uFnAddReadNewsCompletedDelegate = nullptr;

	if (!uFnAddReadNewsCompletedDelegate)
	{
		uFnAddReadNewsCompletedDelegate = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate");
	}

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Params AddReadNewsCompletedDelegate_Params;
	memcpy_s(&AddReadNewsCompletedDelegate_Params.ReadNewsDelegate, 0x18, &ReadNewsDelegate, 0x18);

	this->ProcessEvent(uFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// uint8_t                        NewsType                       (CPF_Parm)

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(unsigned long bWasSuccessful, uint8_t NewsType)
{
	static UFunction* uFnOnReadNewsCompleted = nullptr;

	if (!uFnOnReadNewsCompleted)
	{
		uFnOnReadNewsCompleted = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted");
	}

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Params OnReadNewsCompleted_Params;
	OnReadNewsCompleted_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadNewsCompleted_Params.NewsType, 0x1, &NewsType, 0x1);

	this->ProcessEvent(uFnOnReadNewsCompleted, &OnReadNewsCompleted_Params, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        NewsType                       (CPF_Parm)

bool UOnlineNewsInterfaceMcp::ReadNews(uint8_t LocalUserNum, uint8_t NewsType)
{
	static UFunction* uFnReadNews = nullptr;

	if (!uFnReadNews)
	{
		uFnReadNews = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.ReadNews");
	}

	UOnlineNewsInterfaceMcp_execReadNews_Params ReadNews_Params;
	memcpy_s(&ReadNews_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadNews_Params.NewsType, 0x1, &NewsType, 0x1);

	uFnReadNews->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadNews, &ReadNews_Params, nullptr);

	uFnReadNews->FunctionFlags |= 0x400;

	return ReadNews_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UOnlineTitleFileDownloadBase::GetUrlForFile(class FString Filename)
{
	static UFunction* uFnGetUrlForFile = nullptr;

	if (!uFnGetUrlForFile)
	{
		uFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile");
	}

	UOnlineTitleFileDownloadBase_execGetUrlForFile_Params GetUrlForFile_Params;
	memcpy_s(&GetUrlForFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnGetUrlForFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUrlForFile, &GetUrlForFile_Params, nullptr);

	uFnGetUrlForFile->FunctionFlags |= 0x400;

	return GetUrlForFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate)
{
	static UFunction* uFnClearRequestTitleFileListCompleteDelegate = nullptr;

	if (!uFnClearRequestTitleFileListCompleteDelegate)
	{
		uFnClearRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Params ClearRequestTitleFileListCompleteDelegate_Params;
	memcpy_s(&ClearRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate, 0x18, &RequestTitleFileListDelegate, 0x18);

	this->ProcessEvent(uFnClearRequestTitleFileListCompleteDelegate, &ClearRequestTitleFileListCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate)
{
	static UFunction* uFnAddRequestTitleFileListCompleteDelegate = nullptr;

	if (!uFnAddRequestTitleFileListCompleteDelegate)
	{
		uFnAddRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Params AddRequestTitleFileListCompleteDelegate_Params;
	memcpy_s(&AddRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate, 0x18, &RequestTitleFileListDelegate, 0x18);

	this->ProcessEvent(uFnAddRequestTitleFileListCompleteDelegate, &AddRequestTitleFileListCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// TArray<class FString>          ResultStr                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnRequestTitleFileListComplete(unsigned long bWasSuccessful, TArray<class FString> ResultStr)
{
	static UFunction* uFnOnRequestTitleFileListComplete = nullptr;

	if (!uFnOnRequestTitleFileListComplete)
	{
		uFnOnRequestTitleFileListComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete");
	}

	UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Params OnRequestTitleFileListComplete_Params;
	OnRequestTitleFileListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRequestTitleFileListComplete_Params.ResultStr, 0x10, &ResultStr, 0x10);

	this->ProcessEvent(uFnOnRequestTitleFileListComplete, &OnRequestTitleFileListComplete_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::RequestTitleFileList()
{
	static UFunction* uFnRequestTitleFileList = nullptr;

	if (!uFnRequestTitleFileList)
	{
		uFnRequestTitleFileList = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList");
	}

	UOnlineTitleFileDownloadBase_execRequestTitleFileList_Params RequestTitleFileList_Params;

	this->ProcessEvent(uFnRequestTitleFileList, &RequestTitleFileList_Params, nullptr);

	return RequestTitleFileList_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFile(class FString Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile");
	}

	UOnlineTitleFileDownloadBase_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memcpy_s(&ClearDownloadedFile_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	return ClearDownloadedFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles");
	}

	UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;

	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	return ClearDownloadedFiles_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

uint8_t UOnlineTitleFileDownloadBase::GetTitleFileState(class FString Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState");
	}

	UOnlineTitleFileDownloadBase_execGetTitleFileState_Params GetTitleFileState_Params;
	memcpy_s(&GetTitleFileState_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return GetTitleFileState_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents");
	}

	UOnlineTitleFileDownloadBase_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memcpy_s(&GetTitleFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetTitleFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	memcpy_s(&FileContents, 0x10, &GetTitleFileContents_Params.FileContents, 0x10);

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        FileType                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineTitleFileDownloadBase::ReadTitleFile(class FString FileToRead, uint8_t FileType)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile");
	}

	UOnlineTitleFileDownloadBase_execReadTitleFile_Params ReadTitleFile_Params;
	memcpy_s(&ReadTitleFile_Params.FileToRead, 0x10, &FileToRead, 0x10);
	memcpy_s(&ReadTitleFile_Params.FileType, 0x1, &FileType, 0x1);

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	return ReadTitleFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnReadTitleFileComplete(unsigned long bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete");
	}

	UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(class FString Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile");
	}

	UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memcpy_s(&ClearDownloadedFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	uFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles");
	}

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;

	uFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	uFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

uint8_t UOnlineTitleFileDownloadMcp::GetTitleFileState(class FString Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState");
	}

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Params GetTitleFileState_Params;
	memcpy_s(&GetTitleFileState_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return GetTitleFileState_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents");
	}

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memcpy_s(&GetTitleFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetTitleFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	uFnGetTitleFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetTitleFileContents_Params.FileContents, 0x10);

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x400024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        FileType                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineTitleFileDownloadMcp::ReadTitleFile(class FString FileToRead, uint8_t FileType)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile");
	}

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Params ReadTitleFile_Params;
	memcpy_s(&ReadTitleFile_Params.FileToRead, 0x10, &FileToRead, 0x10);
	memcpy_s(&ReadTitleFile_Params.FileType, 0x1, &FileType, 0x1);

	uFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	uFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UOnlineTitleFileDownloadWeb::GetUrlForFile(class FString Filename)
{
	static UFunction* uFnGetUrlForFile = nullptr;

	if (!uFnGetUrlForFile)
	{
		uFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile");
	}

	UOnlineTitleFileDownloadWeb_execGetUrlForFile_Params GetUrlForFile_Params;
	memcpy_s(&GetUrlForFile_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnGetUrlForFile, &GetUrlForFile_Params, nullptr);

	return GetUrlForFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* uFnOnFileListReceived = nullptr;

	if (!uFnOnFileListReceived)
	{
		uFnOnFileListReceived = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived");
	}

	UOnlineTitleFileDownloadWeb_execOnFileListReceived_Params OnFileListReceived_Params;
	memcpy_s(&OnFileListReceived_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnFileListReceived_Params.Response, 0x8, &Response, 0x8);
	OnFileListReceived_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFileListReceived, &OnFileListReceived_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::RequestTitleFileList()
{
	static UFunction* uFnRequestTitleFileList = nullptr;

	if (!uFnRequestTitleFileList)
	{
		uFnRequestTitleFileList = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList");
	}

	UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Params RequestTitleFileList_Params;

	this->ProcessEvent(uFnRequestTitleFileList, &RequestTitleFileList_Params, nullptr);

	return RequestTitleFileList_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFile(class FString Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile");
	}

	UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memcpy_s(&ClearDownloadedFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	uFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles");
	}

	UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;

	uFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	uFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

uint8_t UOnlineTitleFileDownloadWeb::GetTitleFileState(class FString Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState");
	}

	UOnlineTitleFileDownloadWeb_execGetTitleFileState_Params GetTitleFileState_Params;
	memcpy_s(&GetTitleFileState_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return GetTitleFileState_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents");
	}

	UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memcpy_s(&GetTitleFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetTitleFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	uFnGetTitleFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetTitleFileContents_Params.FileContents, 0x10);

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// class FString                  FileRead                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadWeb::TriggerDelegates(unsigned long bSuccess, class FString FileRead)
{
	static UFunction* uFnTriggerDelegates = nullptr;

	if (!uFnTriggerDelegates)
	{
		uFnTriggerDelegates = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates");
	}

	UOnlineTitleFileDownloadWeb_execTriggerDelegates_Params TriggerDelegates_Params;
	TriggerDelegates_Params.bSuccess = bSuccess;
	memcpy_s(&TriggerDelegates_Params.FileRead, 0x10, &FileRead, 0x10);

	uFnTriggerDelegates->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTriggerDelegates, &TriggerDelegates_Params, nullptr);

	uFnTriggerDelegates->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* uFnOnFileDownloadComplete = nullptr;

	if (!uFnOnFileDownloadComplete)
	{
		uFnOnFileDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete");
	}

	UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Params OnFileDownloadComplete_Params;
	memcpy_s(&OnFileDownloadComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnFileDownloadComplete_Params.Response, 0x8, &Response, 0x8);
	OnFileDownloadComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFileDownloadComplete, &OnFileDownloadComplete_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x400024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        FileType                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineTitleFileDownloadWeb::ReadTitleFile(class FString FileToRead, uint8_t FileType)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile");
	}

	UOnlineTitleFileDownloadWeb_execReadTitleFile_Params ReadTitleFile_Params;
	memcpy_s(&ReadTitleFile_Params.FileToRead, 0x10, &FileToRead, 0x10);
	memcpy_s(&ReadTitleFile_Params.FileType, 0x1, &FileType, 0x1);

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	return ReadTitleFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        FileCompressionType            (CPF_Parm)
// TArray<uint8_t>                CompressedFileContents         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<uint8_t>                UncompressedFileContents       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::UncompressTitleFileContents(uint8_t FileCompressionType, TArray<uint8_t>& CompressedFileContents, TArray<uint8_t>& UncompressedFileContents)
{
	static UFunction* uFnUncompressTitleFileContents = nullptr;

	if (!uFnUncompressTitleFileContents)
	{
		uFnUncompressTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents");
	}

	UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Params UncompressTitleFileContents_Params;
	memcpy_s(&UncompressTitleFileContents_Params.FileCompressionType, 0x1, &FileCompressionType, 0x1);
	memcpy_s(&UncompressTitleFileContents_Params.CompressedFileContents, 0x10, &CompressedFileContents, 0x10);
	memcpy_s(&UncompressTitleFileContents_Params.UncompressedFileContents, 0x10, &UncompressedFileContents, 0x10);

	uFnUncompressTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUncompressTitleFileContents, &UncompressTitleFileContents_Params, nullptr);

	uFnUncompressTitleFileContents->FunctionFlags |= 0x400;

	memcpy_s(&CompressedFileContents, 0x10, &UncompressTitleFileContents_Params.CompressedFileContents, 0x10);
	memcpy_s(&UncompressedFileContents, 0x10, &UncompressTitleFileContents_Params.UncompressedFileContents, 0x10);

	return UncompressTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::DeleteTitleFile(class FString Filename)
{
	static UFunction* uFnDeleteTitleFile = nullptr;

	if (!uFnDeleteTitleFile)
	{
		uFnDeleteTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFile");
	}

	UTitleFileDownloadCache_execDeleteTitleFile_Params DeleteTitleFile_Params;
	memcpy_s(&DeleteTitleFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnDeleteTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeleteTitleFile, &DeleteTitleFile_Params, nullptr);

	uFnDeleteTitleFile->FunctionFlags |= 0x400;

	return DeleteTitleFile_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxAgeSeconds                  (CPF_Parm)

bool UTitleFileDownloadCache::DeleteTitleFiles(float MaxAgeSeconds)
{
	static UFunction* uFnDeleteTitleFiles = nullptr;

	if (!uFnDeleteTitleFiles)
	{
		uFnDeleteTitleFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles");
	}

	UTitleFileDownloadCache_execDeleteTitleFiles_Params DeleteTitleFiles_Params;
	memcpy_s(&DeleteTitleFiles_Params.MaxAgeSeconds, 0x4, &MaxAgeSeconds, 0x4);

	uFnDeleteTitleFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeleteTitleFiles, &DeleteTitleFiles_Params, nullptr);

	uFnDeleteTitleFiles->FunctionFlags |= 0x400;

	return DeleteTitleFiles_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::ClearCachedFile(class FString Filename)
{
	static UFunction* uFnClearCachedFile = nullptr;

	if (!uFnClearCachedFile)
	{
		uFnClearCachedFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFile");
	}

	UTitleFileDownloadCache_execClearCachedFile_Params ClearCachedFile_Params;
	memcpy_s(&ClearCachedFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnClearCachedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearCachedFile, &ClearCachedFile_Params, nullptr);

	uFnClearCachedFile->FunctionFlags |= 0x400;

	return ClearCachedFile_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFiles()
{
	static UFunction* uFnClearCachedFiles = nullptr;

	if (!uFnClearCachedFiles)
	{
		uFnClearCachedFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFiles");
	}

	UTitleFileDownloadCache_execClearCachedFiles_Params ClearCachedFiles_Params;

	uFnClearCachedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearCachedFiles, &ClearCachedFiles_Params, nullptr);

	uFnClearCachedFiles->FunctionFlags |= 0x400;

	return ClearCachedFiles_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UTitleFileDownloadCache::GetTitleFileLogicalName(class FString Filename)
{
	static UFunction* uFnGetTitleFileLogicalName = nullptr;

	if (!uFnGetTitleFileLogicalName)
	{
		uFnGetTitleFileLogicalName = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName");
	}

	UTitleFileDownloadCache_execGetTitleFileLogicalName_Params GetTitleFileLogicalName_Params;
	memcpy_s(&GetTitleFileLogicalName_Params.Filename, 0x10, &Filename, 0x10);

	uFnGetTitleFileLogicalName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileLogicalName, &GetTitleFileLogicalName_Params, nullptr);

	uFnGetTitleFileLogicalName->FunctionFlags |= 0x400;

	return GetTitleFileLogicalName_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UTitleFileDownloadCache::GetTitleFileHash(class FString Filename)
{
	static UFunction* uFnGetTitleFileHash = nullptr;

	if (!uFnGetTitleFileHash)
	{
		uFnGetTitleFileHash = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileHash");
	}

	UTitleFileDownloadCache_execGetTitleFileHash_Params GetTitleFileHash_Params;
	memcpy_s(&GetTitleFileHash_Params.Filename, 0x10, &Filename, 0x10);

	uFnGetTitleFileHash->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileHash, &GetTitleFileHash_Params, nullptr);

	uFnGetTitleFileHash->FunctionFlags |= 0x400;

	return GetTitleFileHash_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

uint8_t UTitleFileDownloadCache::GetTitleFileState(class FString Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileState");
	}

	UTitleFileDownloadCache_execGetTitleFileState_Params GetTitleFileState_Params;
	memcpy_s(&GetTitleFileState_Params.Filename, 0x10, &Filename, 0x10);

	uFnGetTitleFileState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	uFnGetTitleFileState->FunctionFlags |= 0x400;

	return GetTitleFileState_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileContents");
	}

	UTitleFileDownloadCache_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memcpy_s(&GetTitleFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetTitleFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	uFnGetTitleFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetTitleFileContents_Params.FileContents, 0x10);

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate)
{
	static UFunction* uFnClearSaveTitleFileCompleteDelegate = nullptr;

	if (!uFnClearSaveTitleFileCompleteDelegate)
	{
		uFnClearSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Params ClearSaveTitleFileCompleteDelegate_Params;
	memcpy_s(&ClearSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate, 0x18, &SaveCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearSaveTitleFileCompleteDelegate, &ClearSaveTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate)
{
	static UFunction* uFnAddSaveTitleFileCompleteDelegate = nullptr;

	if (!uFnAddSaveTitleFileCompleteDelegate)
	{
		uFnAddSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Params AddSaveTitleFileCompleteDelegate_Params;
	memcpy_s(&AddSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate, 0x18, &SaveCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddSaveTitleFileCompleteDelegate, &AddSaveTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnSaveTitleFileComplete(unsigned long bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnSaveTitleFileComplete = nullptr;

	if (!uFnOnSaveTitleFileComplete)
	{
		uFnOnSaveTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnSaveTitleFileComplete_Params OnSaveTitleFileComplete_Params;
	OnSaveTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnSaveTitleFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnSaveTitleFileComplete, &OnSaveTitleFileComplete_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  LogicalName                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::SaveTitleFile(class FString Filename, class FString LogicalName, TArray<uint8_t> FileContents)
{
	static UFunction* uFnSaveTitleFile = nullptr;

	if (!uFnSaveTitleFile)
	{
		uFnSaveTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.SaveTitleFile");
	}

	UTitleFileDownloadCache_execSaveTitleFile_Params SaveTitleFile_Params;
	memcpy_s(&SaveTitleFile_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&SaveTitleFile_Params.LogicalName, 0x10, &LogicalName, 0x10);
	memcpy_s(&SaveTitleFile_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnSaveTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSaveTitleFile, &SaveTitleFile_Params, nullptr);

	uFnSaveTitleFile->FunctionFlags |= 0x400;

	return SaveTitleFile_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate)
{
	static UFunction* uFnClearLoadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearLoadTitleFileCompleteDelegate)
	{
		uFnClearLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Params ClearLoadTitleFileCompleteDelegate_Params;
	memcpy_s(&ClearLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate, 0x18, &LoadCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearLoadTitleFileCompleteDelegate, &ClearLoadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate)
{
	static UFunction* uFnAddLoadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddLoadTitleFileCompleteDelegate)
	{
		uFnAddLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Params AddLoadTitleFileCompleteDelegate_Params;
	memcpy_s(&AddLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate, 0x18, &LoadCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddLoadTitleFileCompleteDelegate, &AddLoadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnLoadTitleFileComplete(unsigned long bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnLoadTitleFileComplete = nullptr;

	if (!uFnOnLoadTitleFileComplete)
	{
		uFnOnLoadTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnLoadTitleFileComplete_Params OnLoadTitleFileComplete_Params;
	OnLoadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadTitleFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnLoadTitleFileComplete, &OnLoadTitleFileComplete_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::LoadTitleFile(class FString Filename)
{
	static UFunction* uFnLoadTitleFile = nullptr;

	if (!uFnLoadTitleFile)
	{
		uFnLoadTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.LoadTitleFile");
	}

	UTitleFileDownloadCache_execLoadTitleFile_Params LoadTitleFile_Params;
	memcpy_s(&LoadTitleFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnLoadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLoadTitleFile, &LoadTitleFile_Params, nullptr);

	uFnLoadTitleFile->FunctionFlags |= 0x400;

	return LoadTitleFile_Params.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageBase::CacheMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCacheMessageContents = nullptr;

	if (!uFnCacheMessageContents)
	{
		uFnCacheMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.CacheMessageContents");
	}

	UMcpMessageBase_execCacheMessageContents_Params CacheMessageContents_Params;
	memcpy_s(&CacheMessageContents_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&CacheMessageContents_Params.MessageContents, 0x10, &MessageContents, 0x10);

	this->ProcessEvent(uFnCacheMessageContents, &CacheMessageContents_Params, nullptr);

	memcpy_s(&MessageContents, 0x10, &CacheMessageContents_Params.MessageContents, 0x10);

	return CacheMessageContents_Params.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::CacheMessage(struct FMcpMessage Message)
{
	static UFunction* uFnCacheMessage = nullptr;

	if (!uFnCacheMessage)
	{
		uFnCacheMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.CacheMessage");
	}

	UMcpMessageBase_execCacheMessage_Params CacheMessage_Params;
	memcpy_s(&CacheMessage_Params.Message, 0x68, &Message, 0x68);

	this->ProcessEvent(uFnCacheMessage, &CacheMessage_Params, nullptr);
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                MessageContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageBase::GetMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnGetMessageContents = nullptr;

	if (!uFnGetMessageContents)
	{
		uFnGetMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.GetMessageContents");
	}

	UMcpMessageBase_execGetMessageContents_Params GetMessageContents_Params;
	memcpy_s(&GetMessageContents_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&GetMessageContents_Params.MessageContents, 0x10, &MessageContents, 0x10);

	this->ProcessEvent(uFnGetMessageContents, &GetMessageContents_Params, nullptr);

	memcpy_s(&MessageContents, 0x10, &GetMessageContents_Params.MessageContents, 0x10);

	return GetMessageContents_Params.ReturnValue;
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessageContentsComplete(class FString MessageId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryMessageContentsComplete = nullptr;

	if (!uFnOnQueryMessageContentsComplete)
	{
		uFnOnQueryMessageContentsComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete");
	}

	UMcpMessageBase_execOnQueryMessageContentsComplete_Params OnQueryMessageContentsComplete_Params;
	memcpy_s(&OnQueryMessageContentsComplete_Params.MessageId, 0x10, &MessageId, 0x10);
	OnQueryMessageContentsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMessageContentsComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryMessageContentsComplete, &OnQueryMessageContentsComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessageContents(class FString MessageId)
{
	static UFunction* uFnQueryMessageContents = nullptr;

	if (!uFnQueryMessageContents)
	{
		uFnQueryMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.QueryMessageContents");
	}

	UMcpMessageBase_execQueryMessageContents_Params QueryMessageContents_Params;
	memcpy_s(&QueryMessageContents_Params.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(uFnQueryMessageContents, &QueryMessageContents_Params, nullptr);
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageBase::GetMessageList(class FString ToUniqueUserId, struct FMcpMessageList& MessageList)
{
	static UFunction* uFnGetMessageList = nullptr;

	if (!uFnGetMessageList)
	{
		uFnGetMessageList = UFunction::FindFunction("Function IpDrv.McpMessageBase.GetMessageList");
	}

	UMcpMessageBase_execGetMessageList_Params GetMessageList_Params;
	memcpy_s(&GetMessageList_Params.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);
	memcpy_s(&GetMessageList_Params.MessageList, 0x20, &MessageList, 0x20);

	this->ProcessEvent(uFnGetMessageList, &GetMessageList_Params, nullptr);

	memcpy_s(&MessageList, 0x20, &GetMessageList_Params.MessageList, 0x20);
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessagesComplete(class FString UserId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryMessagesComplete = nullptr;

	if (!uFnOnQueryMessagesComplete)
	{
		uFnOnQueryMessagesComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnQueryMessagesComplete");
	}

	UMcpMessageBase_execOnQueryMessagesComplete_Params OnQueryMessagesComplete_Params;
	memcpy_s(&OnQueryMessagesComplete_Params.UserId, 0x10, &UserId, 0x10);
	OnQueryMessagesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMessagesComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryMessagesComplete, &OnQueryMessagesComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessages(class FString ToUniqueUserId)
{
	static UFunction* uFnQueryMessages = nullptr;

	if (!uFnQueryMessages)
	{
		uFnQueryMessages = UFunction::FindFunction("Function IpDrv.McpMessageBase.QueryMessages");
	}

	UMcpMessageBase_execQueryMessages_Params QueryMessages_Params;
	memcpy_s(&QueryMessages_Params.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);

	this->ProcessEvent(uFnQueryMessages, &QueryMessages_Params, nullptr);
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnDeleteMessageComplete(class FString MessageId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteMessageComplete = nullptr;

	if (!uFnOnDeleteMessageComplete)
	{
		uFnOnDeleteMessageComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnDeleteMessageComplete");
	}

	UMcpMessageBase_execOnDeleteMessageComplete_Params OnDeleteMessageComplete_Params;
	memcpy_s(&OnDeleteMessageComplete_Params.MessageId, 0x10, &MessageId, 0x10);
	OnDeleteMessageComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteMessageComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteMessageComplete, &OnDeleteMessageComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::DeleteMessage(class FString MessageId)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.DeleteMessage");
	}

	UMcpMessageBase_execDeleteMessage_Params DeleteMessage_Params;
	memcpy_s(&DeleteMessage_Params.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnCreateMessageComplete(struct FMcpMessage Message, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnCreateMessageComplete = nullptr;

	if (!uFnOnCreateMessageComplete)
	{
		uFnOnCreateMessageComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnCreateMessageComplete");
	}

	UMcpMessageBase_execOnCreateMessageComplete_Params OnCreateMessageComplete_Params;
	memcpy_s(&OnCreateMessageComplete_Params.Message, 0x68, &Message, 0x68);
	OnCreateMessageComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateMessageComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnCreateMessageComplete, &OnCreateMessageComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  FromUniqueUserId               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FromFriendlyName               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MessageType                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PushMessage                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ValidUntil                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ToUniqueUserIds                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<uint8_t>                MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageBase::CreateMessage(class FString FromUniqueUserId, class FString FromFriendlyName, class FString MessageType, class FString PushMessage, class FString ValidUntil, TArray<class FString>& ToUniqueUserIds, TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCreateMessage = nullptr;

	if (!uFnCreateMessage)
	{
		uFnCreateMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.CreateMessage");
	}

	UMcpMessageBase_execCreateMessage_Params CreateMessage_Params;
	memcpy_s(&CreateMessage_Params.FromUniqueUserId, 0x10, &FromUniqueUserId, 0x10);
	memcpy_s(&CreateMessage_Params.FromFriendlyName, 0x10, &FromFriendlyName, 0x10);
	memcpy_s(&CreateMessage_Params.MessageType, 0x10, &MessageType, 0x10);
	memcpy_s(&CreateMessage_Params.PushMessage, 0x10, &PushMessage, 0x10);
	memcpy_s(&CreateMessage_Params.ValidUntil, 0x10, &ValidUntil, 0x10);
	memcpy_s(&CreateMessage_Params.ToUniqueUserIds, 0x10, &ToUniqueUserIds, 0x10);
	memcpy_s(&CreateMessage_Params.MessageContents, 0x10, &MessageContents, 0x10);

	this->ProcessEvent(uFnCreateMessage, &CreateMessage_Params, nullptr);

	memcpy_s(&ToUniqueUserIds, 0x10, &CreateMessage_Params.ToUniqueUserIds, 0x10);
	memcpy_s(&MessageContents, 0x10, &CreateMessage_Params.MessageContents, 0x10);
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpMessageBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpMessageBase* UMcpMessageBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpMessageBase.CreateInstance");
	}

	UMcpMessageBase_execCreateInstance_Params CreateInstance_Params;

	UMcpMessageBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::CacheMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCacheMessageContents = nullptr;

	if (!uFnCacheMessageContents)
	{
		uFnCacheMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.CacheMessageContents");
	}

	UMcpMessageManager_execCacheMessageContents_Params CacheMessageContents_Params;
	memcpy_s(&CacheMessageContents_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&CacheMessageContents_Params.MessageContents, 0x10, &MessageContents, 0x10);

	this->ProcessEvent(uFnCacheMessageContents, &CacheMessageContents_Params, nullptr);

	memcpy_s(&MessageContents, 0x10, &CacheMessageContents_Params.MessageContents, 0x10);

	return CacheMessageContents_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessage             Message                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::GetMessageById(class FString MessageId, struct FMcpMessage& Message)
{
	static UFunction* uFnGetMessageById = nullptr;

	if (!uFnGetMessageById)
	{
		uFnGetMessageById = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageById");
	}

	UMcpMessageManager_execGetMessageById_Params GetMessageById_Params;
	memcpy_s(&GetMessageById_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&GetMessageById_Params.Message, 0x68, &Message, 0x68);

	this->ProcessEvent(uFnGetMessageById, &GetMessageById_Params, nullptr);

	memcpy_s(&Message, 0x68, &GetMessageById_Params.Message, 0x68);

	return GetMessageById_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x400820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::CacheMessage(struct FMcpMessage Message)
{
	static UFunction* uFnCacheMessage = nullptr;

	if (!uFnCacheMessage)
	{
		uFnCacheMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.CacheMessage");
	}

	UMcpMessageManager_execCacheMessage_Params CacheMessage_Params;
	memcpy_s(&CacheMessage_Params.Message, 0x68, &Message, 0x68);

	this->ProcessEvent(uFnCacheMessage, &CacheMessage_Params, nullptr);
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                MessageContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::GetMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnGetMessageContents = nullptr;

	if (!uFnGetMessageContents)
	{
		uFnGetMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageContents");
	}

	UMcpMessageManager_execGetMessageContents_Params GetMessageContents_Params;
	memcpy_s(&GetMessageContents_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&GetMessageContents_Params.MessageContents, 0x10, &MessageContents, 0x10);

	this->ProcessEvent(uFnGetMessageContents, &GetMessageContents_Params, nullptr);

	memcpy_s(&MessageContents, 0x10, &GetMessageContents_Params.MessageContents, 0x10);

	return GetMessageContents_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryMessageContentsRequestComplete = nullptr;

	if (!uFnOnQueryMessageContentsRequestComplete)
	{
		uFnOnQueryMessageContentsRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete");
	}

	UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Params OnQueryMessageContentsRequestComplete_Params;
	memcpy_s(&OnQueryMessageContentsRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryMessageContentsRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryMessageContentsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryMessageContentsRequestComplete, &OnQueryMessageContentsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessageContents(class FString MessageId)
{
	static UFunction* uFnQueryMessageContents = nullptr;

	if (!uFnQueryMessageContents)
	{
		uFnQueryMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.QueryMessageContents");
	}

	UMcpMessageManager_execQueryMessageContents_Params QueryMessageContents_Params;
	memcpy_s(&QueryMessageContents_Params.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(uFnQueryMessageContents, &QueryMessageContents_Params, nullptr);
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::GetMessageList(class FString ToUniqueUserId, struct FMcpMessageList& MessageList)
{
	static UFunction* uFnGetMessageList = nullptr;

	if (!uFnGetMessageList)
	{
		uFnGetMessageList = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageList");
	}

	UMcpMessageManager_execGetMessageList_Params GetMessageList_Params;
	memcpy_s(&GetMessageList_Params.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);
	memcpy_s(&GetMessageList_Params.MessageList, 0x20, &MessageList, 0x20);

	this->ProcessEvent(uFnGetMessageList, &GetMessageList_Params, nullptr);

	memcpy_s(&MessageList, 0x20, &GetMessageList_Params.MessageList, 0x20);
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryMessagesRequestComplete = nullptr;

	if (!uFnOnQueryMessagesRequestComplete)
	{
		uFnOnQueryMessagesRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete");
	}

	UMcpMessageManager_execOnQueryMessagesRequestComplete_Params OnQueryMessagesRequestComplete_Params;
	memcpy_s(&OnQueryMessagesRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryMessagesRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryMessagesRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryMessagesRequestComplete, &OnQueryMessagesRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessages(class FString ToUniqueUserId)
{
	static UFunction* uFnQueryMessages = nullptr;

	if (!uFnQueryMessages)
	{
		uFnQueryMessages = UFunction::FindFunction("Function IpDrv.McpMessageManager.QueryMessages");
	}

	UMcpMessageManager_execQueryMessages_Params QueryMessages_Params;
	memcpy_s(&QueryMessages_Params.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);

	this->ProcessEvent(uFnQueryMessages, &QueryMessages_Params, nullptr);
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteMessageRequestComplete = nullptr;

	if (!uFnOnDeleteMessageRequestComplete)
	{
		uFnOnDeleteMessageRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete");
	}

	UMcpMessageManager_execOnDeleteMessageRequestComplete_Params OnDeleteMessageRequestComplete_Params;
	memcpy_s(&OnDeleteMessageRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDeleteMessageRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnDeleteMessageRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteMessageRequestComplete, &OnDeleteMessageRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::DeleteMessage(class FString MessageId)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.DeleteMessage");
	}

	UMcpMessageManager_execDeleteMessage_Params DeleteMessage_Params;
	memcpy_s(&DeleteMessage_Params.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   CreateMessageRequest           (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnCreateMessageRequestComplete = nullptr;

	if (!uFnOnCreateMessageRequestComplete)
	{
		uFnOnCreateMessageRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete");
	}

	UMcpMessageManager_execOnCreateMessageRequestComplete_Params OnCreateMessageRequestComplete_Params;
	memcpy_s(&OnCreateMessageRequestComplete_Params.CreateMessageRequest, 0x8, &CreateMessageRequest, 0x8);
	memcpy_s(&OnCreateMessageRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnCreateMessageRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateMessageRequestComplete, &OnCreateMessageRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x400C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  FromUniqueUserId               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FromFriendlyName               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MessageType                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PushMessage                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ValidUntil                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ToUniqueUserIds                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<uint8_t>                MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::CreateMessage(class FString FromUniqueUserId, class FString FromFriendlyName, class FString MessageType, class FString PushMessage, class FString ValidUntil, TArray<class FString>& ToUniqueUserIds, TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCreateMessage = nullptr;

	if (!uFnCreateMessage)
	{
		uFnCreateMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.CreateMessage");
	}

	UMcpMessageManager_execCreateMessage_Params CreateMessage_Params;
	memcpy_s(&CreateMessage_Params.FromUniqueUserId, 0x10, &FromUniqueUserId, 0x10);
	memcpy_s(&CreateMessage_Params.FromFriendlyName, 0x10, &FromFriendlyName, 0x10);
	memcpy_s(&CreateMessage_Params.MessageType, 0x10, &MessageType, 0x10);
	memcpy_s(&CreateMessage_Params.PushMessage, 0x10, &PushMessage, 0x10);
	memcpy_s(&CreateMessage_Params.ValidUntil, 0x10, &ValidUntil, 0x10);
	memcpy_s(&CreateMessage_Params.ToUniqueUserIds, 0x10, &ToUniqueUserIds, 0x10);
	memcpy_s(&CreateMessage_Params.MessageContents, 0x10, &MessageContents, 0x10);

	this->ProcessEvent(uFnCreateMessage, &CreateMessage_Params, nullptr);

	memcpy_s(&ToUniqueUserIds, 0x10, &CreateMessage_Params.ToUniqueUserIds, 0x10);
	memcpy_s(&MessageContents, 0x10, &CreateMessage_Params.MessageContents, 0x10);
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                UncompressedMessageContents    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::eventFinishedAsyncUncompression(unsigned long bWasSuccessful, class FString MessageId, TArray<uint8_t>& UncompressedMessageContents)
{
	static UFunction* uFnFinishedAsyncUncompression = nullptr;

	if (!uFnFinishedAsyncUncompression)
	{
		uFnFinishedAsyncUncompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.FinishedAsyncUncompression");
	}

	UMcpMessageManager_eventFinishedAsyncUncompression_Params FinishedAsyncUncompression_Params;
	FinishedAsyncUncompression_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&FinishedAsyncUncompression_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&FinishedAsyncUncompression_Params.UncompressedMessageContents, 0x10, &UncompressedMessageContents, 0x10);

	this->ProcessEvent(uFnFinishedAsyncUncompression, &FinishedAsyncUncompression_Params, nullptr);

	memcpy_s(&UncompressedMessageContents, 0x10, &FinishedAsyncUncompression_Params.UncompressedMessageContents, 0x10);
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        MessageCompressionType         (CPF_Parm)
// TArray<uint8_t>                MessageContent                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::StartAsyncUncompression(class FString MessageId, uint8_t MessageCompressionType, TArray<uint8_t>& MessageContent)
{
	static UFunction* uFnStartAsyncUncompression = nullptr;

	if (!uFnStartAsyncUncompression)
	{
		uFnStartAsyncUncompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.StartAsyncUncompression");
	}

	UMcpMessageManager_execStartAsyncUncompression_Params StartAsyncUncompression_Params;
	memcpy_s(&StartAsyncUncompression_Params.MessageId, 0x10, &MessageId, 0x10);
	memcpy_s(&StartAsyncUncompression_Params.MessageCompressionType, 0x1, &MessageCompressionType, 0x1);
	memcpy_s(&StartAsyncUncompression_Params.MessageContent, 0x10, &MessageContent, 0x10);

	uFnStartAsyncUncompression->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartAsyncUncompression, &StartAsyncUncompression_Params, nullptr);

	uFnStartAsyncUncompression->FunctionFlags |= 0x400;

	memcpy_s(&MessageContent, 0x10, &StartAsyncUncompression_Params.MessageContent, 0x10);

	return StartAsyncUncompression_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        MessageCompressionType         (CPF_Parm)
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// TArray<uint8_t>                MessageContent                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::StartAsyncCompression(uint8_t MessageCompressionType, class UHttpRequestInterface* Request, TArray<uint8_t>& MessageContent)
{
	static UFunction* uFnStartAsyncCompression = nullptr;

	if (!uFnStartAsyncCompression)
	{
		uFnStartAsyncCompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.StartAsyncCompression");
	}

	UMcpMessageManager_execStartAsyncCompression_Params StartAsyncCompression_Params;
	memcpy_s(&StartAsyncCompression_Params.MessageCompressionType, 0x1, &MessageCompressionType, 0x1);
	memcpy_s(&StartAsyncCompression_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&StartAsyncCompression_Params.MessageContent, 0x10, &MessageContent, 0x10);

	uFnStartAsyncCompression->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartAsyncCompression, &StartAsyncCompression_Params, nullptr);

	uFnStartAsyncCompression->FunctionFlags |= 0x400;

	memcpy_s(&MessageContent, 0x10, &StartAsyncCompression_Params.MessageContent, 0x10);

	return StartAsyncCompression_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpUserCloudFileDownload::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates");
	}

	UMcpUserCloudFileDownload_execClearAllDelegates_Params ClearAllDelegates_Params;

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallDeleteUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnCallDeleteUserFileCompleteDelegates = nullptr;

	if (!uFnCallDeleteUserFileCompleteDelegates)
	{
		uFnCallDeleteUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Params CallDeleteUserFileCompleteDelegates_Params;
	CallDeleteUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallDeleteUserFileCompleteDelegates_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&CallDeleteUserFileCompleteDelegates_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnCallDeleteUserFileCompleteDelegates, &CallDeleteUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnDeleteUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestDeleteUserFileComplete = nullptr;

	if (!uFnOnHTTPRequestDeleteUserFileComplete)
	{
		uFnOnHTTPRequestDeleteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Params OnHTTPRequestDeleteUserFileComplete_Params;
	memcpy_s(&OnHTTPRequestDeleteUserFileComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestDeleteUserFileComplete_Params.Response, 0x8, &Response, 0x8);
	OnHTTPRequestDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestDeleteUserFileComplete, &OnHTTPRequestDeleteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldCloudDelete             (CPF_Parm)
// unsigned long                  bShouldLocallyDelete           (CPF_Parm)

bool UMcpUserCloudFileDownload::DeleteUserFile(class FString UserId, class FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.DeleteUserFile");
	}

	UMcpUserCloudFileDownload_execDeleteUserFile_Params DeleteUserFile_Params;
	memcpy_s(&DeleteUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&DeleteUserFile_Params.Filename, 0x10, &Filename, 0x10);
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);

	return DeleteUserFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallWriteUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnCallWriteUserFileCompleteDelegates = nullptr;

	if (!uFnCallWriteUserFileCompleteDelegates)
	{
		uFnCallWriteUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Params CallWriteUserFileCompleteDelegates_Params;
	CallWriteUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallWriteUserFileCompleteDelegates_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&CallWriteUserFileCompleteDelegates_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnCallWriteUserFileCompleteDelegates, &CallWriteUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnWriteUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestWriteUserFileComplete = nullptr;

	if (!uFnOnHTTPRequestWriteUserFileComplete)
	{
		uFnOnHTTPRequestWriteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Params OnHTTPRequestWriteUserFileComplete_Params;
	memcpy_s(&OnHTTPRequestWriteUserFileComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestWriteUserFileComplete_Params.Response, 0x8, &Response, 0x8);
	OnHTTPRequestWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestWriteUserFileComplete, &OnHTTPRequestWriteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// int32_t                        UserIdx                        (CPF_Parm | CPF_OutParm)
// int32_t                        FileIdx                        (CPF_Parm | CPF_OutParm)

void UMcpUserCloudFileDownload::GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int32_t& UserIdx, int32_t& FileIdx)
{
	static UFunction* uFnGetUserFileIndexForRequest = nullptr;

	if (!uFnGetUserFileIndexForRequest)
	{
		uFnGetUserFileIndexForRequest = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest");
	}

	UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Params GetUserFileIndexForRequest_Params;
	memcpy_s(&GetUserFileIndexForRequest_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&GetUserFileIndexForRequest_Params.UserIdx, 0x4, &UserIdx, 0x4);
	memcpy_s(&GetUserFileIndexForRequest_Params.FileIdx, 0x4, &FileIdx, 0x4);

	this->ProcessEvent(uFnGetUserFileIndexForRequest, &GetUserFileIndexForRequest_Params, nullptr);

	memcpy_s(&UserIdx, 0x4, &GetUserFileIndexForRequest_Params.UserIdx, 0x4);
	memcpy_s(&FileIdx, 0x4, &GetUserFileIndexForRequest_Params.FileIdx, 0x4);
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.WriteUserFile");
	}

	UMcpUserCloudFileDownload_execWriteUserFile_Params WriteUserFile_Params;
	memcpy_s(&WriteUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFile_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&WriteUserFile_Params.FileContents, 0x10, &FileContents, 0x10);

	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);

	memcpy_s(&FileContents, 0x10, &WriteUserFile_Params.FileContents, 0x10);

	return WriteUserFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallReadUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnCallReadUserFileCompleteDelegates = nullptr;

	if (!uFnCallReadUserFileCompleteDelegates)
	{
		uFnCallReadUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Params CallReadUserFileCompleteDelegates_Params;
	CallReadUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallReadUserFileCompleteDelegates_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&CallReadUserFileCompleteDelegates_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnCallReadUserFileCompleteDelegates, &CallReadUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnReadUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnReadUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestReadUserFileComplete = nullptr;

	if (!uFnOnHTTPRequestReadUserFileComplete)
	{
		uFnOnHTTPRequestReadUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Params OnHTTPRequestReadUserFileComplete_Params;
	memcpy_s(&OnHTTPRequestReadUserFileComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestReadUserFileComplete_Params.Response, 0x8, &Response, 0x8);
	OnHTTPRequestReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestReadUserFileComplete, &OnHTTPRequestReadUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ReadUserFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ReadUserFile");
	}

	UMcpUserCloudFileDownload_execReadUserFile_Params ReadUserFile_Params;
	memcpy_s(&ReadUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ReadUserFile_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);

	return ReadUserFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetUserFileList");
	}

	UMcpUserCloudFileDownload_execGetUserFileList_Params GetUserFileList_Params;
	memcpy_s(&GetUserFileList_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetUserFileList_Params.UserFiles, 0x10, &UserFiles, 0x10);

	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);

	memcpy_s(&UserFiles, 0x10, &GetUserFileList_Params.UserFiles, 0x10);
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallEnumerateUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId)
{
	static UFunction* uFnCallEnumerateUserFileCompleteDelegates = nullptr;

	if (!uFnCallEnumerateUserFileCompleteDelegates)
	{
		uFnCallEnumerateUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Params CallEnumerateUserFileCompleteDelegates_Params;
	CallEnumerateUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallEnumerateUserFileCompleteDelegates_Params.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(uFnCallEnumerateUserFileCompleteDelegates, &CallEnumerateUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, class FString UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete");
	}

	UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestEnumerateUserFilesComplete = nullptr;

	if (!uFnOnHTTPRequestEnumerateUserFilesComplete)
	{
		uFnOnHTTPRequestEnumerateUserFilesComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Params OnHTTPRequestEnumerateUserFilesComplete_Params;
	memcpy_s(&OnHTTPRequestEnumerateUserFilesComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestEnumerateUserFilesComplete_Params.Response, 0x8, &Response, 0x8);
	OnHTTPRequestEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestEnumerateUserFilesComplete, &OnHTTPRequestEnumerateUserFilesComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::EnumerateUserFiles(class FString UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles");
	}

	UMcpUserCloudFileDownload_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memcpy_s(&EnumerateUserFiles_Params.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ClearFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearFile");
	}

	UMcpUserCloudFileDownload_execClearFile_Params ClearFile_Params;
	memcpy_s(&ClearFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ClearFile_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);

	return ClearFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ClearFiles(class FString UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearFiles");
	}

	UMcpUserCloudFileDownload_execClearFiles_Params ClearFiles_Params;
	memcpy_s(&ClearFiles_Params.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);

	return ClearFiles_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetFileContents");
	}

	UMcpUserCloudFileDownload_execGetFileContents_Params GetFileContents_Params;
	memcpy_s(&GetFileContents_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);

	memcpy_s(&FileContents, 0x10, &GetFileContents_Params.FileContents, 0x10);

	return GetFileContents_Params.ReturnValue;
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMeshBeacon::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeacon.DestroyBeacon");
	}

	UMeshBeacon_eventDestroyBeacon_Params DestroyBeacon_Params;

	uFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);

	uFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

bool UMeshBeaconClient::SendHostNewGameSessionResponse(unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnSendHostNewGameSessionResponse = nullptr;

	if (!uFnSendHostNewGameSessionResponse)
	{
		uFnSendHostNewGameSessionResponse = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse");
	}

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Params SendHostNewGameSessionResponse_Params;
	SendHostNewGameSessionResponse_Params.bSuccess = bSuccess;
	memcpy_s(&SendHostNewGameSessionResponse_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&SendHostNewGameSessionResponse_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&SendHostNewGameSessionResponse_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	uFnSendHostNewGameSessionResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Params, nullptr);

	uFnSendHostNewGameSessionResponse->FunctionFlags |= 0x400;

	memcpy_s(&PlatformSpecificInfo, 0x50, &SendHostNewGameSessionResponse_Params.PlatformSpecificInfo, 0x50);

	return SendHostNewGameSessionResponse_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FPlayerMember>   Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players)
{
	static UFunction* uFnOnCreateNewSessionRequestReceived = nullptr;

	if (!uFnOnCreateNewSessionRequestReceived)
	{
		uFnOnCreateNewSessionRequestReceived = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived");
	}

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Params OnCreateNewSessionRequestReceived_Params;
	memcpy_s(&OnCreateNewSessionRequestReceived_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnCreateNewSessionRequestReceived_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&OnCreateNewSessionRequestReceived_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Params, nullptr);

	memcpy_s(&Players, 0x10, &OnCreateNewSessionRequestReceived_Params.Players, 0x10);
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconClient::OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnOnTravelRequestReceived = nullptr;

	if (!uFnOnTravelRequestReceived)
	{
		uFnOnTravelRequestReceived = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnTravelRequestReceived");
	}

	UMeshBeaconClient_execOnTravelRequestReceived_Params OnTravelRequestReceived_Params;
	memcpy_s(&OnTravelRequestReceived_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnTravelRequestReceived_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&OnTravelRequestReceived_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	this->ProcessEvent(uFnOnTravelRequestReceived, &OnTravelRequestReceived_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, 0x50, &OnTravelRequestReceived_Params.PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        TestType                       (CPF_Parm)
// uint8_t                        TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconClient::OnReceivedBandwidthTestResults(uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& BandwidthStats)
{
	static UFunction* uFnOnReceivedBandwidthTestResults = nullptr;

	if (!uFnOnReceivedBandwidthTestResults)
	{
		uFnOnReceivedBandwidthTestResults = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults");
	}

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Params OnReceivedBandwidthTestResults_Params;
	memcpy_s(&OnReceivedBandwidthTestResults_Params.TestType, 0x1, &TestType, 0x1);
	memcpy_s(&OnReceivedBandwidthTestResults_Params.TestResult, 0x1, &TestResult, 0x1);
	memcpy_s(&OnReceivedBandwidthTestResults_Params.BandwidthStats, 0xC, &BandwidthStats, 0xC);

	this->ProcessEvent(uFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Params, nullptr);

	memcpy_s(&BandwidthStats, 0xC, &OnReceivedBandwidthTestResults_Params.BandwidthStats, 0xC);
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        TestType                       (CPF_Parm)

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(uint8_t TestType)
{
	static UFunction* uFnOnReceivedBandwidthTestRequest = nullptr;

	if (!uFnOnReceivedBandwidthTestRequest)
	{
		uFnOnReceivedBandwidthTestRequest = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest");
	}

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Params OnReceivedBandwidthTestRequest_Params;
	memcpy_s(&OnReceivedBandwidthTestRequest_Params.TestType, 0x1, &TestType, 0x1);

	this->ProcessEvent(uFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Params, nullptr);
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ConnectionResult               (CPF_Parm)

void UMeshBeaconClient::OnConnectionRequestResult(uint8_t ConnectionResult)
{
	static UFunction* uFnOnConnectionRequestResult = nullptr;

	if (!uFnOnConnectionRequestResult)
	{
		uFnOnConnectionRequestResult = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnConnectionRequestResult");
	}

	UMeshBeaconClient_execOnConnectionRequestResult_Params OnConnectionRequestResult_Params;
	memcpy_s(&OnConnectionRequestResult_Params.ConnectionResult, 0x1, &ConnectionResult, 0x1);

	this->ProcessEvent(uFnOnConnectionRequestResult, &OnConnectionRequestResult_Params, nullptr);
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        TestType                       (CPF_Parm)
// int32_t                        TestBufferSize                 (CPF_Parm)

bool UMeshBeaconClient::BeginBandwidthTest(uint8_t TestType, int32_t TestBufferSize)
{
	static UFunction* uFnBeginBandwidthTest = nullptr;

	if (!uFnBeginBandwidthTest)
	{
		uFnBeginBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.BeginBandwidthTest");
	}

	UMeshBeaconClient_execBeginBandwidthTest_Params BeginBandwidthTest_Params;
	memcpy_s(&BeginBandwidthTest_Params.TestType, 0x1, &TestType, 0x1);
	memcpy_s(&BeginBandwidthTest_Params.TestBufferSize, 0x4, &TestBufferSize, 0x4);

	uFnBeginBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnBeginBandwidthTest, &BeginBandwidthTest_Params, nullptr);

	uFnBeginBandwidthTest->FunctionFlags |= 0x400;

	return BeginBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bRegisterSecureAddress         (CPF_Parm)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FClientConnectionRequest ClientRequest                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconClient::RequestConnection(unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult& DesiredHost, struct FClientConnectionRequest& ClientRequest)
{
	static UFunction* uFnRequestConnection = nullptr;

	if (!uFnRequestConnection)
	{
		uFnRequestConnection = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.RequestConnection");
	}

	UMeshBeaconClient_execRequestConnection_Params RequestConnection_Params;
	RequestConnection_Params.bRegisterSecureAddress = bRegisterSecureAddress;
	memcpy_s(&RequestConnection_Params.DesiredHost, 0x10, &DesiredHost, 0x10);
	memcpy_s(&RequestConnection_Params.ClientRequest, 0x70, &ClientRequest, 0x70);

	uFnRequestConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestConnection, &RequestConnection_Params, nullptr);

	uFnRequestConnection->FunctionFlags |= 0x400;

	memcpy_s(&DesiredHost, 0x10, &RequestConnection_Params.DesiredHost, 0x10);
	memcpy_s(&ClientRequest, 0x70, &RequestConnection_Params.ClientRequest, 0x70);

	return RequestConnection_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconClient::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.DestroyBeacon");
	}

	UMeshBeaconClient_eventDestroyBeacon_Params DestroyBeacon_Params;

	uFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);

	uFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSucceeded                     (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnOnReceivedClientCreateNewSessionResult = nullptr;

	if (!uFnOnReceivedClientCreateNewSessionResult)
	{
		uFnOnReceivedClientCreateNewSessionResult = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult");
	}

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Params OnReceivedClientCreateNewSessionResult_Params;
	OnReceivedClientCreateNewSessionResult_Params.bSucceeded = bSucceeded;
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	this->ProcessEvent(uFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, 0x50, &OnReceivedClientCreateNewSessionResult_Params.PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FPlayerMember>   Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconHost::RequestClientCreateNewSession(struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players)
{
	static UFunction* uFnRequestClientCreateNewSession = nullptr;

	if (!uFnRequestClientCreateNewSession)
	{
		uFnRequestClientCreateNewSession = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession");
	}

	UMeshBeaconHost_execRequestClientCreateNewSession_Params RequestClientCreateNewSession_Params;
	memcpy_s(&RequestClientCreateNewSession_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	memcpy_s(&RequestClientCreateNewSession_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RequestClientCreateNewSession_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&RequestClientCreateNewSession_Params.Players, 0x10, &Players, 0x10);

	uFnRequestClientCreateNewSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Params, nullptr);

	uFnRequestClientCreateNewSession->FunctionFlags |= 0x400;

	memcpy_s(&Players, 0x10, &RequestClientCreateNewSession_Params.Players, 0x10);

	return RequestClientCreateNewSession_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnTellClientsToTravel = nullptr;

	if (!uFnTellClientsToTravel)
	{
		uFnTellClientsToTravel = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.TellClientsToTravel");
	}

	UMeshBeaconHost_execTellClientsToTravel_Params TellClientsToTravel_Params;
	memcpy_s(&TellClientsToTravel_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&TellClientsToTravel_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&TellClientsToTravel_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	uFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTellClientsToTravel, &TellClientsToTravel_Params, nullptr);

	uFnTellClientsToTravel->FunctionFlags |= 0x400;

	memcpy_s(&PlatformSpecificInfo, 0x50, &TellClientsToTravel_Params.PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static UFunction* uFnOnAllPendingPlayersConnected = nullptr;

	if (!uFnOnAllPendingPlayersConnected)
	{
		uFnOnAllPendingPlayersConnected = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected");
	}

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Params OnAllPendingPlayersConnected_Params;

	this->ProcessEvent(uFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconHost::AllPlayersConnected(TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnAllPlayersConnected = nullptr;

	if (!uFnAllPlayersConnected)
	{
		uFnAllPlayersConnected = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.AllPlayersConnected");
	}

	UMeshBeaconHost_execAllPlayersConnected_Params AllPlayersConnected_Params;
	memcpy_s(&AllPlayersConnected_Params.Players, 0x10, &Players, 0x10);

	uFnAllPlayersConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllPlayersConnected, &AllPlayersConnected_Params, nullptr);

	uFnAllPlayersConnected->FunctionFlags |= 0x400;

	memcpy_s(&Players, 0x10, &AllPlayersConnected_Params.Players, 0x10);

	return AllPlayersConnected_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)

int32_t UMeshBeaconHost::GetConnectionIndexForPlayer(struct FUniqueNetId PlayerNetId)
{
	static UFunction* uFnGetConnectionIndexForPlayer = nullptr;

	if (!uFnGetConnectionIndexForPlayer)
	{
		uFnGetConnectionIndexForPlayer = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer");
	}

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Params GetConnectionIndexForPlayer_Params;
	memcpy_s(&GetConnectionIndexForPlayer_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);

	uFnGetConnectionIndexForPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Params, nullptr);

	uFnGetConnectionIndexForPlayer->FunctionFlags |= 0x400;

	return GetConnectionIndexForPlayer_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconHost::SetPendingPlayerConnections(TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnSetPendingPlayerConnections = nullptr;

	if (!uFnSetPendingPlayerConnections)
	{
		uFnSetPendingPlayerConnections = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections");
	}

	UMeshBeaconHost_execSetPendingPlayerConnections_Params SetPendingPlayerConnections_Params;
	memcpy_s(&SetPendingPlayerConnections_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Params, nullptr);

	memcpy_s(&Players, 0x10, &SetPendingPlayerConnections_Params.Players, 0x10);
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        TestType                       (CPF_Parm)
// uint8_t                        TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::OnFinishedBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& BandwidthStats)
{
	static UFunction* uFnOnFinishedBandwidthTest = nullptr;

	if (!uFnOnFinishedBandwidthTest)
	{
		uFnOnFinishedBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest");
	}

	UMeshBeaconHost_execOnFinishedBandwidthTest_Params OnFinishedBandwidthTest_Params;
	memcpy_s(&OnFinishedBandwidthTest_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	memcpy_s(&OnFinishedBandwidthTest_Params.TestType, 0x1, &TestType, 0x1);
	memcpy_s(&OnFinishedBandwidthTest_Params.TestResult, 0x1, &TestResult, 0x1);
	memcpy_s(&OnFinishedBandwidthTest_Params.BandwidthStats, 0xC, &BandwidthStats, 0xC);

	this->ProcessEvent(uFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Params, nullptr);

	memcpy_s(&BandwidthStats, 0xC, &OnFinishedBandwidthTest_Params.BandwidthStats, 0xC);
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        TestType                       (CPF_Parm)

void UMeshBeaconHost::OnStartedBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType)
{
	static UFunction* uFnOnStartedBandwidthTest = nullptr;

	if (!uFnOnStartedBandwidthTest)
	{
		uFnOnStartedBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest");
	}

	UMeshBeaconHost_execOnStartedBandwidthTest_Params OnStartedBandwidthTest_Params;
	memcpy_s(&OnStartedBandwidthTest_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	memcpy_s(&OnStartedBandwidthTest_Params.TestType, 0x1, &TestType, 0x1);

	this->ProcessEvent(uFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FClientMeshBeaconConnection NewClientConnection            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& NewClientConnection)
{
	static UFunction* uFnOnReceivedClientConnectionRequest = nullptr;

	if (!uFnOnReceivedClientConnectionRequest)
	{
		uFnOnReceivedClientConnectionRequest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest");
	}

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Params OnReceivedClientConnectionRequest_Params;
	memcpy_s(&OnReceivedClientConnectionRequest_Params.NewClientConnection, 0xB8, &NewClientConnection, 0xB8);

	this->ProcessEvent(uFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Params, nullptr);

	memcpy_s(&NewClientConnection, 0xB8, &OnReceivedClientConnectionRequest_Params.NewClientConnection, 0xB8);
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnabled                       (CPF_Parm)

void UMeshBeaconHost::AllowBandwidthTesting(unsigned long bEnabled)
{
	static UFunction* uFnAllowBandwidthTesting = nullptr;

	if (!uFnAllowBandwidthTesting)
	{
		uFnAllowBandwidthTesting = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.AllowBandwidthTesting");
	}

	UMeshBeaconHost_execAllowBandwidthTesting_Params AllowBandwidthTesting_Params;
	AllowBandwidthTesting_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnAllowBandwidthTesting, &AllowBandwidthTesting_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static UFunction* uFnCancelPendingBandwidthTests = nullptr;

	if (!uFnCancelPendingBandwidthTests)
	{
		uFnCancelPendingBandwidthTests = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests");
	}

	UMeshBeaconHost_execCancelPendingBandwidthTests_Params CancelPendingBandwidthTests_Params;

	uFnCancelPendingBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Params, nullptr);

	uFnCancelPendingBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static UFunction* uFnHasPendingBandwidthTest = nullptr;

	if (!uFnHasPendingBandwidthTest)
	{
		uFnHasPendingBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest");
	}

	UMeshBeaconHost_execHasPendingBandwidthTest_Params HasPendingBandwidthTest_Params;

	uFnHasPendingBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Params, nullptr);

	uFnHasPendingBandwidthTest->FunctionFlags |= 0x400;

	return HasPendingBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static UFunction* uFnCancelInProgressBandwidthTests = nullptr;

	if (!uFnCancelInProgressBandwidthTests)
	{
		uFnCancelInProgressBandwidthTests = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests");
	}

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Params CancelInProgressBandwidthTests_Params;

	uFnCancelInProgressBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Params, nullptr);

	uFnCancelInProgressBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static UFunction* uFnHasInProgressBandwidthTest = nullptr;

	if (!uFnHasInProgressBandwidthTest)
	{
		uFnHasInProgressBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest");
	}

	UMeshBeaconHost_execHasInProgressBandwidthTest_Params HasInProgressBandwidthTest_Params;

	uFnHasInProgressBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Params, nullptr);

	uFnHasInProgressBandwidthTest->FunctionFlags |= 0x400;

	return HasInProgressBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        TestType                       (CPF_Parm)
// int32_t                        TestBufferSize                 (CPF_Parm)

bool UMeshBeaconHost::RequestClientBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType, int32_t TestBufferSize)
{
	static UFunction* uFnRequestClientBandwidthTest = nullptr;

	if (!uFnRequestClientBandwidthTest)
	{
		uFnRequestClientBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest");
	}

	UMeshBeaconHost_execRequestClientBandwidthTest_Params RequestClientBandwidthTest_Params;
	memcpy_s(&RequestClientBandwidthTest_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	memcpy_s(&RequestClientBandwidthTest_Params.TestType, 0x1, &TestType, 0x1);
	memcpy_s(&RequestClientBandwidthTest_Params.TestBufferSize, 0x4, &TestBufferSize, 0x4);

	uFnRequestClientBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Params, nullptr);

	uFnRequestClientBandwidthTest->FunctionFlags |= 0x400;

	return RequestClientBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.DestroyBeacon");
	}

	UMeshBeaconHost_eventDestroyBeacon_Params DestroyBeacon_Params;

	uFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);

	uFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            InOwningPlayerId               (CPF_Parm | CPF_NeedCtorLink)

bool UMeshBeaconHost::InitHostBeacon(struct FUniqueNetId InOwningPlayerId)
{
	static UFunction* uFnInitHostBeacon = nullptr;

	if (!uFnInitHostBeacon)
	{
		uFnInitHostBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.InitHostBeacon");
	}

	UMeshBeaconHost_execInitHostBeacon_Params InitHostBeacon_Params;
	memcpy_s(&InitHostBeacon_Params.InOwningPlayerId, 0x48, &InOwningPlayerId, 0x48);

	uFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitHostBeacon, &InitHostBeacon_Params, nullptr);

	uFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UOnlineAuthInterfaceImpl::RequestAccountAuthorization(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestAccountAuthorization = nullptr;

	if (!uFnRequestAccountAuthorization)
	{
		uFnRequestAccountAuthorization = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization");
	}

	UOnlineAuthInterfaceImpl_execRequestAccountAuthorization_Params RequestAccountAuthorization_Params;
	memcpy_s(&RequestAccountAuthorization_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAccountAuthorization_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRequestAccountAuthorization, &RequestAccountAuthorization_Params, nullptr);

	return RequestAccountAuthorization_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  Token                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnAccountAuthorization(class FString Token)
{
	static UFunction* uFnOnAccountAuthorization = nullptr;

	if (!uFnOnAccountAuthorization)
	{
		uFnOnAccountAuthorization = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization");
	}

	UOnlineAuthInterfaceImpl_execOnAccountAuthorization_Params OnAccountAuthorization_Params;
	memcpy_s(&OnAccountAuthorization_Params.Token, 0x10, &Token, 0x10);

	this->ProcessEvent(uFnOnAccountAuthorization, &OnAccountAuthorization_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bLoggedIn                      (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnLoginChanged(unsigned long bLoggedIn)
{
	static UFunction* uFnOnLoginChanged = nullptr;

	if (!uFnOnLoginChanged)
	{
		uFnOnLoginChanged = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged");
	}

	UOnlineAuthInterfaceImpl_execOnLoginChanged_Params OnLoginChanged_Params;
	OnLoginChanged_Params.bLoggedIn = bLoggedIn;

	this->ProcessEvent(uFnOnLoginChanged, &OnLoginChanged_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestMtxCode = nullptr;

	if (!uFnRequestMtxCode)
	{
		uFnRequestMtxCode = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode");
	}

	UOnlineAuthInterfaceImpl_execRequestMtxCode_Params RequestMtxCode_Params;
	memcpy_s(&RequestMtxCode_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestMtxCode_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRequestMtxCode, &RequestMtxCode_Params, nullptr);

	return RequestMtxCode_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestAuthTicket = nullptr;

	if (!uFnRequestAuthTicket)
	{
		uFnRequestAuthTicket = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket");
	}

	UOnlineAuthInterfaceImpl_execRequestAuthTicket_Params RequestAuthTicket_Params;
	memcpy_s(&RequestAuthTicket_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAuthTicket_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRequestAuthTicket, &RequestAuthTicket_Params, nullptr);

	return RequestAuthTicket_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::RequiresAuthTicket()
{
	static UFunction* uFnRequiresAuthTicket = nullptr;

	if (!uFnRequiresAuthTicket)
	{
		uFnRequiresAuthTicket = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket");
	}

	UOnlineAuthInterfaceImpl_execRequiresAuthTicket_Params RequiresAuthTicket_Params;

	this->ProcessEvent(uFnRequiresAuthTicket, &RequiresAuthTicket_Params, nullptr);

	return RequiresAuthTicket_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnReceivedAuthCode(unsigned long bSuccess, class FString Code)
{
	static UFunction* uFnOnReceivedAuthCode = nullptr;

	if (!uFnOnReceivedAuthCode)
	{
		uFnOnReceivedAuthCode = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode");
	}

	UOnlineAuthInterfaceImpl_execOnReceivedAuthCode_Params OnReceivedAuthCode_Params;
	OnReceivedAuthCode_Params.bSuccess = bSuccess;
	memcpy_s(&OnReceivedAuthCode_Params.Code, 0x10, &Code, 0x10);

	this->ProcessEvent(uFnOnReceivedAuthCode, &OnReceivedAuthCode_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::GetServerAddr(struct FIpAddr& OutServerIP, int32_t& OutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr");
	}

	UOnlineAuthInterfaceImpl_execGetServerAddr_Params GetServerAddr_Params;
	memcpy_s(&GetServerAddr_Params.OutServerIP, 0x14, &OutServerIP, 0x14);
	memcpy_s(&GetServerAddr_Params.OutServerPort, 0x4, &OutServerPort, 0x4);

	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);

	memcpy_s(&OutServerIP, 0x14, &GetServerAddr_Params.OutServerIP, 0x14);
	memcpy_s(&OutServerPort, 0x4, &GetServerAddr_Params.OutServerPort, 0x4);

	return GetServerAddr_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId");
	}

	UOnlineAuthInterfaceImpl_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memcpy_s(&GetServerUniqueId_Params.OutServerUID, 0x48, &OutServerUID, 0x48);

	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);

	memcpy_s(&OutServerUID, 0x48, &GetServerUniqueId_Params.OutServerUID, 0x48);

	return GetServerUniqueId_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindLocalServerAuthSession = nullptr;

	if (!uFnFindLocalServerAuthSession)
	{
		uFnFindLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Params FindLocalServerAuthSession_Params;
	memcpy_s(&FindLocalServerAuthSession_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&FindLocalServerAuthSession_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnFindLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindLocalServerAuthSession, &FindLocalServerAuthSession_Params, nullptr);

	uFnFindLocalServerAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &FindLocalServerAuthSession_Params.OutSessionInfo, 0x68);

	return FindLocalServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindServerAuthSession = nullptr;

	if (!uFnFindServerAuthSession)
	{
		uFnFindServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindServerAuthSession_Params FindServerAuthSession_Params;
	memcpy_s(&FindServerAuthSession_Params.ServerConnection, 0x8, &ServerConnection, 0x8);
	memcpy_s(&FindServerAuthSession_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnFindServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindServerAuthSession, &FindServerAuthSession_Params, nullptr);

	uFnFindServerAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &FindServerAuthSession_Params.OutSessionInfo, 0x68);

	return FindServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindLocalClientAuthSession = nullptr;

	if (!uFnFindLocalClientAuthSession)
	{
		uFnFindLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Params FindLocalClientAuthSession_Params;
	memcpy_s(&FindLocalClientAuthSession_Params.ServerConnection, 0x8, &ServerConnection, 0x8);
	memcpy_s(&FindLocalClientAuthSession_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnFindLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindLocalClientAuthSession, &FindLocalClientAuthSession_Params, nullptr);

	uFnFindLocalClientAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &FindLocalClientAuthSession_Params.OutSessionInfo, 0x68);

	return FindLocalClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindClientAuthSession = nullptr;

	if (!uFnFindClientAuthSession)
	{
		uFnFindClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindClientAuthSession_Params FindClientAuthSession_Params;
	memcpy_s(&FindClientAuthSession_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&FindClientAuthSession_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnFindClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindClientAuthSession, &FindClientAuthSession_Params, nullptr);

	uFnFindClientAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &FindClientAuthSession_Params.OutSessionInfo, 0x68);

	return FindClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions(struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllLocalServerAuthSessions = nullptr;

	if (!uFnAllLocalServerAuthSessions)
	{
		uFnAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Params AllLocalServerAuthSessions_Params;
	memcpy_s(&AllLocalServerAuthSessions_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnAllLocalServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllLocalServerAuthSessions, &AllLocalServerAuthSessions_Params, nullptr);

	uFnAllLocalServerAuthSessions->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &AllLocalServerAuthSessions_Params.OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllServerAuthSessions(struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllServerAuthSessions = nullptr;

	if (!uFnAllServerAuthSessions)
	{
		uFnAllServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Params AllServerAuthSessions_Params;
	memcpy_s(&AllServerAuthSessions_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnAllServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllServerAuthSessions, &AllServerAuthSessions_Params, nullptr);

	uFnAllServerAuthSessions->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &AllServerAuthSessions_Params.OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions(struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllLocalClientAuthSessions = nullptr;

	if (!uFnAllLocalClientAuthSessions)
	{
		uFnAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Params AllLocalClientAuthSessions_Params;
	memcpy_s(&AllLocalClientAuthSessions_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnAllLocalClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllLocalClientAuthSessions, &AllLocalClientAuthSessions_Params, nullptr);

	uFnAllLocalClientAuthSessions->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &AllLocalClientAuthSessions_Params.OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllClientAuthSessions(struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllClientAuthSessions = nullptr;

	if (!uFnAllClientAuthSessions)
	{
		uFnAllClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Params AllClientAuthSessions_Params;
	memcpy_s(&AllClientAuthSessions_Params.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	uFnAllClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllClientAuthSessions, &AllClientAuthSessions_Params, nullptr);

	uFnAllClientAuthSessions->FunctionFlags |= 0x400;

	memcpy_s(&OutSessionInfo, 0x68, &AllClientAuthSessions_Params.OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllRemoteServerAuthSessions()
{
	static UFunction* uFnEndAllRemoteServerAuthSessions = nullptr;

	if (!uFnEndAllRemoteServerAuthSessions)
	{
		uFnEndAllRemoteServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Params EndAllRemoteServerAuthSessions_Params;

	uFnEndAllRemoteServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndAllRemoteServerAuthSessions, &EndAllRemoteServerAuthSessions_Params, nullptr);

	uFnEndAllRemoteServerAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllLocalServerAuthSessions()
{
	static UFunction* uFnEndAllLocalServerAuthSessions = nullptr;

	if (!uFnEndAllLocalServerAuthSessions)
	{
		uFnEndAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Params EndAllLocalServerAuthSessions_Params;

	uFnEndAllLocalServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndAllLocalServerAuthSessions, &EndAllLocalServerAuthSessions_Params, nullptr);

	uFnEndAllLocalServerAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP)
{
	static UFunction* uFnEndRemoteServerAuthSession = nullptr;

	if (!uFnEndRemoteServerAuthSession)
	{
		uFnEndRemoteServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Params EndRemoteServerAuthSession_Params;
	memcpy_s(&EndRemoteServerAuthSession_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&EndRemoteServerAuthSession_Params.ServerIP, 0x14, &ServerIP, 0x14);

	uFnEndRemoteServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndRemoteServerAuthSession, &EndRemoteServerAuthSession_Params, nullptr);

	uFnEndRemoteServerAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP)
{
	static UFunction* uFnEndLocalServerAuthSession = nullptr;

	if (!uFnEndLocalServerAuthSession)
	{
		uFnEndLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Params EndLocalServerAuthSession_Params;
	memcpy_s(&EndLocalServerAuthSession_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&EndLocalServerAuthSession_Params.ClientIP, 0x14, &ClientIP, 0x14);

	uFnEndLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndLocalServerAuthSession, &EndLocalServerAuthSession_Params, nullptr);

	uFnEndLocalServerAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&VerifyServerAuthSession_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&VerifyServerAuthSession_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);

	return VerifyServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memcpy_s(&CreateServerAuthSession_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&CreateServerAuthSession_Params.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&CreateServerAuthSession_Params.ClientPort, 0x4, &ClientPort, 0x4);
	memcpy_s(&CreateServerAuthSession_Params.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);

	memcpy_s(&OutAuthTicketUID, 0x4, &CreateServerAuthSession_Params.OutAuthTicketUID, 0x4);

	return CreateServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllRemoteClientAuthSessions()
{
	static UFunction* uFnEndAllRemoteClientAuthSessions = nullptr;

	if (!uFnEndAllRemoteClientAuthSessions)
	{
		uFnEndAllRemoteClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Params EndAllRemoteClientAuthSessions_Params;

	uFnEndAllRemoteClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndAllRemoteClientAuthSessions, &EndAllRemoteClientAuthSessions_Params, nullptr);

	uFnEndAllRemoteClientAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllLocalClientAuthSessions()
{
	static UFunction* uFnEndAllLocalClientAuthSessions = nullptr;

	if (!uFnEndAllLocalClientAuthSessions)
	{
		uFnEndAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Params EndAllLocalClientAuthSessions_Params;

	uFnEndAllLocalClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndAllLocalClientAuthSessions, &EndAllLocalClientAuthSessions_Params, nullptr);

	uFnEndAllLocalClientAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP)
{
	static UFunction* uFnEndRemoteClientAuthSession = nullptr;

	if (!uFnEndRemoteClientAuthSession)
	{
		uFnEndRemoteClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Params EndRemoteClientAuthSession_Params;
	memcpy_s(&EndRemoteClientAuthSession_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&EndRemoteClientAuthSession_Params.ClientIP, 0x14, &ClientIP, 0x14);

	uFnEndRemoteClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndRemoteClientAuthSession, &EndRemoteClientAuthSession_Params, nullptr);

	uFnEndRemoteClientAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort)
{
	static UFunction* uFnEndLocalClientAuthSession = nullptr;

	if (!uFnEndLocalClientAuthSession)
	{
		uFnEndLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Params EndLocalClientAuthSession_Params;
	memcpy_s(&EndLocalClientAuthSession_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&EndLocalClientAuthSession_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&EndLocalClientAuthSession_Params.ServerPort, 0x4, &ServerPort, 0x4);

	uFnEndLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndLocalClientAuthSession, &EndLocalClientAuthSession_Params, nullptr);

	uFnEndLocalClientAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&VerifyClientAuthSession_Params.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&VerifyClientAuthSession_Params.ClientPort, 0x4, &ClientPort, 0x4);
	memcpy_s(&VerifyClientAuthSession_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);

	return VerifyClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// unsigned long                  bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, unsigned long bSecure, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
	memcpy_s(&CreateClientAuthSession_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&CreateClientAuthSession_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&CreateClientAuthSession_Params.ServerPort, 0x4, &ServerPort, 0x4);
	CreateClientAuthSession_Params.bSecure = bSecure;
	memcpy_s(&CreateClientAuthSession_Params.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);

	memcpy_s(&OutAuthTicketUID, 0x4, &CreateClientAuthSession_Params.OutAuthTicketUID, 0x4);

	return CreateClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest()
{
	static UFunction* uFnSendServerAuthRetryRequest = nullptr;

	if (!uFnSendServerAuthRetryRequest)
	{
		uFnSendServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Params SendServerAuthRetryRequest_Params;

	uFnSendServerAuthRetryRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendServerAuthRetryRequest, &SendServerAuthRetryRequest_Params, nullptr);

	uFnSendServerAuthRetryRequest->FunctionFlags |= 0x400;

	return SendServerAuthRetryRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest(class UPlayer* ClientConnection)
{
	static UFunction* uFnSendClientAuthEndSessionRequest = nullptr;

	if (!uFnSendClientAuthEndSessionRequest)
	{
		uFnSendClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Params SendClientAuthEndSessionRequest_Params;
	memcpy_s(&SendClientAuthEndSessionRequest_Params.ClientConnection, 0x8, &ClientConnection, 0x8);

	uFnSendClientAuthEndSessionRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendClientAuthEndSessionRequest, &SendClientAuthEndSessionRequest_Params, nullptr);

	uFnSendClientAuthEndSessionRequest->FunctionFlags |= 0x400;

	return SendClientAuthEndSessionRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID)
{
	static UFunction* uFnSendServerAuthResponse = nullptr;

	if (!uFnSendServerAuthResponse)
	{
		uFnSendServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Params SendServerAuthResponse_Params;
	memcpy_s(&SendServerAuthResponse_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&SendServerAuthResponse_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	uFnSendServerAuthResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendServerAuthResponse, &SendServerAuthResponse_Params, nullptr);

	uFnSendServerAuthResponse->FunctionFlags |= 0x400;

	return SendServerAuthResponse_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse(int32_t AuthTicketUID)
{
	static UFunction* uFnSendClientAuthResponse = nullptr;

	if (!uFnSendClientAuthResponse)
	{
		uFnSendClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Params SendClientAuthResponse_Params;
	memcpy_s(&SendClientAuthResponse_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	uFnSendClientAuthResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendClientAuthResponse, &SendClientAuthResponse_Params, nullptr);

	uFnSendClientAuthResponse->FunctionFlags |= 0x400;

	return SendClientAuthResponse_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest(struct FUniqueNetId ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memcpy_s(&SendServerAuthRequest_Params.ServerUID, 0x48, &ServerUID, 0x48);

	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);

	return SendServerAuthRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memcpy_s(&SendClientAuthRequest_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, 0x48, &ClientUID, 0x48);

	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);

	return SendClientAuthRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate)
{
	static UFunction* uFnClearServerConnectionCloseDelegate = nullptr;

	if (!uFnClearServerConnectionCloseDelegate)
	{
		uFnClearServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Params ClearServerConnectionCloseDelegate_Params;
	memcpy_s(&ClearServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate, 0x18, &ServerConnectionCloseDelegate, 0x18);

	this->ProcessEvent(uFnClearServerConnectionCloseDelegate, &ClearServerConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate)
{
	static UFunction* uFnAddServerConnectionCloseDelegate = nullptr;

	if (!uFnAddServerConnectionCloseDelegate)
	{
		uFnAddServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Params AddServerConnectionCloseDelegate_Params;
	memcpy_s(&AddServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate, 0x18, &ServerConnectionCloseDelegate, 0x18);

	this->ProcessEvent(uFnAddServerConnectionCloseDelegate, &AddServerConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerConnectionClose(class UPlayer* ServerConnection)
{
	static UFunction* uFnOnServerConnectionClose = nullptr;

	if (!uFnOnServerConnectionClose)
	{
		uFnOnServerConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose");
	}

	UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Params OnServerConnectionClose_Params;
	memcpy_s(&OnServerConnectionClose_Params.ServerConnection, 0x8, &ServerConnection, 0x8);

	this->ProcessEvent(uFnOnServerConnectionClose, &OnServerConnectionClose_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate)
{
	static UFunction* uFnClearClientConnectionCloseDelegate = nullptr;

	if (!uFnClearClientConnectionCloseDelegate)
	{
		uFnClearClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Params ClearClientConnectionCloseDelegate_Params;
	memcpy_s(&ClearClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate, 0x18, &ClientConnectionCloseDelegate, 0x18);

	this->ProcessEvent(uFnClearClientConnectionCloseDelegate, &ClearClientConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate)
{
	static UFunction* uFnAddClientConnectionCloseDelegate = nullptr;

	if (!uFnAddClientConnectionCloseDelegate)
	{
		uFnAddClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Params AddClientConnectionCloseDelegate_Params;
	memcpy_s(&AddClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate, 0x18, &ClientConnectionCloseDelegate, 0x18);

	this->ProcessEvent(uFnAddClientConnectionCloseDelegate, &AddClientConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientConnectionClose(class UPlayer* ClientConnection)
{
	static UFunction* uFnOnClientConnectionClose = nullptr;

	if (!uFnOnClientConnectionClose)
	{
		uFnOnClientConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose");
	}

	UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Params OnClientConnectionClose_Params;
	memcpy_s(&OnClientConnectionClose_Params.ClientConnection, 0x8, &ClientConnection, 0x8);

	this->ProcessEvent(uFnOnClientConnectionClose, &OnClientConnectionClose_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate)
{
	static UFunction* uFnClearServerAuthRetryRequestDelegate = nullptr;

	if (!uFnClearServerAuthRetryRequestDelegate)
	{
		uFnClearServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Params ClearServerAuthRetryRequestDelegate_Params;
	memcpy_s(&ClearServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate, 0x18, &ServerAuthRetryRequestDelegate, 0x18);

	this->ProcessEvent(uFnClearServerAuthRetryRequestDelegate, &ClearServerAuthRetryRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate)
{
	static UFunction* uFnAddServerAuthRetryRequestDelegate = nullptr;

	if (!uFnAddServerAuthRetryRequestDelegate)
	{
		uFnAddServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Params AddServerAuthRetryRequestDelegate_Params;
	memcpy_s(&AddServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate, 0x18, &ServerAuthRetryRequestDelegate, 0x18);

	this->ProcessEvent(uFnAddServerAuthRetryRequestDelegate, &AddServerAuthRetryRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest(class UPlayer* ClientConnection)
{
	static UFunction* uFnOnServerAuthRetryRequest = nullptr;

	if (!uFnOnServerAuthRetryRequest)
	{
		uFnOnServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Params OnServerAuthRetryRequest_Params;
	memcpy_s(&OnServerAuthRetryRequest_Params.ClientConnection, 0x8, &ClientConnection, 0x8);

	this->ProcessEvent(uFnOnServerAuthRetryRequest, &OnServerAuthRetryRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate)
{
	static UFunction* uFnClearClientAuthEndSessionRequestDelegate = nullptr;

	if (!uFnClearClientAuthEndSessionRequestDelegate)
	{
		uFnClearClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Params ClearClientAuthEndSessionRequestDelegate_Params;
	memcpy_s(&ClearClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate, 0x18, &ClientAuthEndSessionRequestDelegate, 0x18);

	this->ProcessEvent(uFnClearClientAuthEndSessionRequestDelegate, &ClearClientAuthEndSessionRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate)
{
	static UFunction* uFnAddClientAuthEndSessionRequestDelegate = nullptr;

	if (!uFnAddClientAuthEndSessionRequestDelegate)
	{
		uFnAddClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Params AddClientAuthEndSessionRequestDelegate_Params;
	memcpy_s(&AddClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate, 0x18, &ClientAuthEndSessionRequestDelegate, 0x18);

	this->ProcessEvent(uFnAddClientAuthEndSessionRequestDelegate, &AddClientAuthEndSessionRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest(class UPlayer* ServerConnection)
{
	static UFunction* uFnOnClientAuthEndSessionRequest = nullptr;

	if (!uFnOnClientAuthEndSessionRequest)
	{
		uFnOnClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Params OnClientAuthEndSessionRequest_Params;
	memcpy_s(&OnClientAuthEndSessionRequest_Params.ServerConnection, 0x8, &ServerConnection, 0x8);

	this->ProcessEvent(uFnOnClientAuthEndSessionRequest, &OnClientAuthEndSessionRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate)
{
	static UFunction* uFnClearServerAuthCompleteDelegate = nullptr;

	if (!uFnClearServerAuthCompleteDelegate)
	{
		uFnClearServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Params ClearServerAuthCompleteDelegate_Params;
	memcpy_s(&ClearServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate, 0x18, &ServerAuthCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearServerAuthCompleteDelegate, &ClearServerAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate)
{
	static UFunction* uFnAddServerAuthCompleteDelegate = nullptr;

	if (!uFnAddServerAuthCompleteDelegate)
	{
		uFnAddServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Params AddServerAuthCompleteDelegate_Params;
	memcpy_s(&AddServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate, 0x18, &ServerAuthCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddServerAuthCompleteDelegate, &AddServerAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// class FString                  ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnServerAuthComplete(unsigned long bSuccess, struct FUniqueNetId ServerUID, class UPlayer* ServerConnection, class FString ExtraInfo)
{
	static UFunction* uFnOnServerAuthComplete = nullptr;

	if (!uFnOnServerAuthComplete)
	{
		uFnOnServerAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Params OnServerAuthComplete_Params;
	OnServerAuthComplete_Params.bSuccess = bSuccess;
	memcpy_s(&OnServerAuthComplete_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&OnServerAuthComplete_Params.ServerConnection, 0x8, &ServerConnection, 0x8);
	memcpy_s(&OnServerAuthComplete_Params.ExtraInfo, 0x10, &ExtraInfo, 0x10);

	this->ProcessEvent(uFnOnServerAuthComplete, &OnServerAuthComplete_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate)
{
	static UFunction* uFnClearClientAuthCompleteDelegate = nullptr;

	if (!uFnClearClientAuthCompleteDelegate)
	{
		uFnClearClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Params ClearClientAuthCompleteDelegate_Params;
	memcpy_s(&ClearClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate, 0x18, &ClientAuthCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearClientAuthCompleteDelegate, &ClearClientAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate)
{
	static UFunction* uFnAddClientAuthCompleteDelegate = nullptr;

	if (!uFnAddClientAuthCompleteDelegate)
	{
		uFnAddClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Params AddClientAuthCompleteDelegate_Params;
	memcpy_s(&AddClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate, 0x18, &ClientAuthCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddClientAuthCompleteDelegate, &AddClientAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// class FString                  ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnClientAuthComplete(unsigned long bSuccess, struct FUniqueNetId ClientUID, class UPlayer* ClientConnection, class FString ExtraInfo)
{
	static UFunction* uFnOnClientAuthComplete = nullptr;

	if (!uFnOnClientAuthComplete)
	{
		uFnOnClientAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Params OnClientAuthComplete_Params;
	OnClientAuthComplete_Params.bSuccess = bSuccess;
	memcpy_s(&OnClientAuthComplete_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&OnClientAuthComplete_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&OnClientAuthComplete_Params.ExtraInfo, 0x10, &ExtraInfo, 0x10);

	this->ProcessEvent(uFnOnClientAuthComplete, &OnClientAuthComplete_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate)
{
	static UFunction* uFnClearServerAuthResponseDelegate = nullptr;

	if (!uFnClearServerAuthResponseDelegate)
	{
		uFnClearServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Params ClearServerAuthResponseDelegate_Params;
	memcpy_s(&ClearServerAuthResponseDelegate_Params.ServerAuthResponseDelegate, 0x18, &ServerAuthResponseDelegate, 0x18);

	this->ProcessEvent(uFnClearServerAuthResponseDelegate, &ClearServerAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate)
{
	static UFunction* uFnAddServerAuthResponseDelegate = nullptr;

	if (!uFnAddServerAuthResponseDelegate)
	{
		uFnAddServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Params AddServerAuthResponseDelegate_Params;
	memcpy_s(&AddServerAuthResponseDelegate_Params.ServerAuthResponseDelegate, 0x18, &ServerAuthResponseDelegate, 0x18);

	this->ProcessEvent(uFnAddServerAuthResponseDelegate, &AddServerAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthResponse(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnOnServerAuthResponse = nullptr;

	if (!uFnOnServerAuthResponse)
	{
		uFnOnServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Params OnServerAuthResponse_Params;
	memcpy_s(&OnServerAuthResponse_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&OnServerAuthResponse_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&OnServerAuthResponse_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(uFnOnServerAuthResponse, &OnServerAuthResponse_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate)
{
	static UFunction* uFnClearClientAuthResponseDelegate = nullptr;

	if (!uFnClearClientAuthResponseDelegate)
	{
		uFnClearClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Params ClearClientAuthResponseDelegate_Params;
	memcpy_s(&ClearClientAuthResponseDelegate_Params.ClientAuthResponseDelegate, 0x18, &ClientAuthResponseDelegate, 0x18);

	this->ProcessEvent(uFnClearClientAuthResponseDelegate, &ClearClientAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate)
{
	static UFunction* uFnAddClientAuthResponseDelegate = nullptr;

	if (!uFnAddClientAuthResponseDelegate)
	{
		uFnAddClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Params AddClientAuthResponseDelegate_Params;
	memcpy_s(&AddClientAuthResponseDelegate_Params.ClientAuthResponseDelegate, 0x18, &ClientAuthResponseDelegate, 0x18);

	this->ProcessEvent(uFnAddClientAuthResponseDelegate, &AddClientAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthResponse(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t AuthTicketUID)
{
	static UFunction* uFnOnClientAuthResponse = nullptr;

	if (!uFnOnClientAuthResponse)
	{
		uFnOnClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Params OnClientAuthResponse_Params;
	memcpy_s(&OnClientAuthResponse_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&OnClientAuthResponse_Params.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&OnClientAuthResponse_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(uFnOnClientAuthResponse, &OnClientAuthResponse_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate)
{
	static UFunction* uFnClearServerAuthRequestDelegate = nullptr;

	if (!uFnClearServerAuthRequestDelegate)
	{
		uFnClearServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Params ClearServerAuthRequestDelegate_Params;
	memcpy_s(&ClearServerAuthRequestDelegate_Params.ServerAuthRequestDelegate, 0x18, &ServerAuthRequestDelegate, 0x18);

	this->ProcessEvent(uFnClearServerAuthRequestDelegate, &ClearServerAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate)
{
	static UFunction* uFnAddServerAuthRequestDelegate = nullptr;

	if (!uFnAddServerAuthRequestDelegate)
	{
		uFnAddServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Params AddServerAuthRequestDelegate_Params;
	memcpy_s(&AddServerAuthRequestDelegate_Params.ServerAuthRequestDelegate, 0x18, &ServerAuthRequestDelegate, 0x18);

	this->ProcessEvent(uFnAddServerAuthRequestDelegate, &AddServerAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort)
{
	static UFunction* uFnOnServerAuthRequest = nullptr;

	if (!uFnOnServerAuthRequest)
	{
		uFnOnServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Params OnServerAuthRequest_Params;
	memcpy_s(&OnServerAuthRequest_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&OnServerAuthRequest_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&OnServerAuthRequest_Params.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&OnServerAuthRequest_Params.ClientPort, 0x4, &ClientPort, 0x4);

	this->ProcessEvent(uFnOnServerAuthRequest, &OnServerAuthRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate)
{
	static UFunction* uFnClearClientAuthRequestDelegate = nullptr;

	if (!uFnClearClientAuthRequestDelegate)
	{
		uFnClearClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Params ClearClientAuthRequestDelegate_Params;
	memcpy_s(&ClearClientAuthRequestDelegate_Params.ClientAuthRequestDelegate, 0x18, &ClientAuthRequestDelegate, 0x18);

	this->ProcessEvent(uFnClearClientAuthRequestDelegate, &ClearClientAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate)
{
	static UFunction* uFnAddClientAuthRequestDelegate = nullptr;

	if (!uFnAddClientAuthRequestDelegate)
	{
		uFnAddClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Params AddClientAuthRequestDelegate_Params;
	memcpy_s(&AddClientAuthRequestDelegate_Params.ClientAuthRequestDelegate, 0x18, &ClientAuthRequestDelegate, 0x18);

	this->ProcessEvent(uFnAddClientAuthRequestDelegate, &AddClientAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// unsigned long                  bSecure                        (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthRequest(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, unsigned long bSecure)
{
	static UFunction* uFnOnClientAuthRequest = nullptr;

	if (!uFnOnClientAuthRequest)
	{
		uFnOnClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Params OnClientAuthRequest_Params;
	memcpy_s(&OnClientAuthRequest_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&OnClientAuthRequest_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&OnClientAuthRequest_Params.ServerPort, 0x4, &ServerPort, 0x4);
	OnClientAuthRequest_Params.bSecure = bSecure;

	this->ProcessEvent(uFnOnClientAuthRequest, &OnClientAuthRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate)
{
	static UFunction* uFnClearAuthReadyDelegate = nullptr;

	if (!uFnClearAuthReadyDelegate)
	{
		uFnClearAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Params ClearAuthReadyDelegate_Params;
	memcpy_s(&ClearAuthReadyDelegate_Params.AuthReadyDelegate, 0x18, &AuthReadyDelegate, 0x18);

	this->ProcessEvent(uFnClearAuthReadyDelegate, &ClearAuthReadyDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate)
{
	static UFunction* uFnAddAuthReadyDelegate = nullptr;

	if (!uFnAddAuthReadyDelegate)
	{
		uFnAddAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Params AddAuthReadyDelegate_Params;
	memcpy_s(&AddAuthReadyDelegate_Params.AuthReadyDelegate, 0x18, &AuthReadyDelegate, 0x18);

	this->ProcessEvent(uFnAddAuthReadyDelegate, &AddAuthReadyDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::OnAuthReady()
{
	static UFunction* uFnOnAuthReady = nullptr;

	if (!uFnOnAuthReady)
	{
		uFnOnAuthReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady");
	}

	UOnlineAuthInterfaceImpl_execOnAuthReady_Params OnAuthReady_Params;

	this->ProcessEvent(uFnOnAuthReady, &OnAuthReady_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::IsReady()
{
	static UFunction* uFnIsReady = nullptr;

	if (!uFnIsReady)
	{
		uFnIsReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.IsReady");
	}

	UOnlineAuthInterfaceImpl_execIsReady_Params IsReady_Params;

	this->ProcessEvent(uFnIsReady, &IsReady_Params, nullptr);

	return IsReady_Params.ReturnValue;
};

// Function IpDrv.OnlineFriendsInterfaceImpl.GetActivePlatformId
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            AccountId                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceImpl::GetActivePlatformId(uint8_t LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId)
{
	static UFunction* uFnGetActivePlatformId = nullptr;

	if (!uFnGetActivePlatformId)
	{
		uFnGetActivePlatformId = UFunction::FindFunction("Function IpDrv.OnlineFriendsInterfaceImpl.GetActivePlatformId");
	}

	UOnlineFriendsInterfaceImpl_execGetActivePlatformId_Params GetActivePlatformId_Params;
	memcpy_s(&GetActivePlatformId_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetActivePlatformId_Params.AccountId, 0x48, &AccountId, 0x48);
	memcpy_s(&GetActivePlatformId_Params.PlatformId, 0x48, &PlatformId, 0x48);

	this->ProcessEvent(uFnGetActivePlatformId, &GetActivePlatformId_Params, nullptr);

	memcpy_s(&PlatformId, 0x48, &GetActivePlatformId_Params.PlatformId, 0x48);

	return GetActivePlatformId_Params.ReturnValue;
};

// Function IpDrv.OnlineFriendsInterfaceImpl.RequestLinkedAccounts
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    AccountIds                     (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceImpl::RequestLinkedAccounts(uint8_t LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestLinkedAccounts = nullptr;

	if (!uFnRequestLinkedAccounts)
	{
		uFnRequestLinkedAccounts = UFunction::FindFunction("Function IpDrv.OnlineFriendsInterfaceImpl.RequestLinkedAccounts");
	}

	UOnlineFriendsInterfaceImpl_execRequestLinkedAccounts_Params RequestLinkedAccounts_Params;
	memcpy_s(&RequestLinkedAccounts_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RequestLinkedAccounts_Params.AccountIds, 0x10, &AccountIds, 0x10);
	memcpy_s(&RequestLinkedAccounts_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRequestLinkedAccounts, &RequestLinkedAccounts_Params, nullptr);

	return RequestLinkedAccounts_Params.ReturnValue;
};

// Function IpDrv.OnlineFriendsInterfaceImpl.OnReceivedLinkedAccount
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// TArray<struct FLinkedAccountData> LinkedAccountData              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineFriendsInterfaceImpl::OnReceivedLinkedAccount(unsigned long bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData)
{
	static UFunction* uFnOnReceivedLinkedAccount = nullptr;

	if (!uFnOnReceivedLinkedAccount)
	{
		uFnOnReceivedLinkedAccount = UFunction::FindFunction("Function IpDrv.OnlineFriendsInterfaceImpl.OnReceivedLinkedAccount");
	}

	UOnlineFriendsInterfaceImpl_execOnReceivedLinkedAccount_Params OnReceivedLinkedAccount_Params;
	OnReceivedLinkedAccount_Params.bSuccess = bSuccess;
	memcpy_s(&OnReceivedLinkedAccount_Params.LinkedAccountData, 0x10, &LinkedAccountData, 0x10);

	this->ProcessEvent(uFnOnReceivedLinkedAccount, &OnReceivedLinkedAccount_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GamePlayersChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGamePlayersChangedDelegate(struct FScriptDelegate GamePlayersChangedDelegate)
{
	static UFunction* uFnClearGamePlayersChangedDelegate = nullptr;

	if (!uFnClearGamePlayersChangedDelegate)
	{
		uFnClearGamePlayersChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearGamePlayersChangedDelegate_Params ClearGamePlayersChangedDelegate_Params;
	memcpy_s(&ClearGamePlayersChangedDelegate_Params.GamePlayersChangedDelegate, 0x18, &GamePlayersChangedDelegate, 0x18);

	this->ProcessEvent(uFnClearGamePlayersChangedDelegate, &ClearGamePlayersChangedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GamePlayersChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGamePlayersChangedDelegate(struct FScriptDelegate GamePlayersChangedDelegate)
{
	static UFunction* uFnAddGamePlayersChangedDelegate = nullptr;

	if (!uFnAddGamePlayersChangedDelegate)
	{
		uFnAddGamePlayersChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddGamePlayersChangedDelegate_Params AddGamePlayersChangedDelegate_Params;
	memcpy_s(&AddGamePlayersChangedDelegate_Params.GamePlayersChangedDelegate, 0x18, &GamePlayersChangedDelegate, 0x18);

	this->ProcessEvent(uFnAddGamePlayersChangedDelegate, &AddGamePlayersChangedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::OnGamePlayersChanged(struct FName SessionName, TArray<struct FUniqueNetId> Players)
{
	static UFunction* uFnOnGamePlayersChanged = nullptr;

	if (!uFnOnGamePlayersChanged)
	{
		uFnOnGamePlayersChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged");
	}

	UOnlineGameInterfaceImpl_execOnGamePlayersChanged_Params OnGamePlayersChanged_Params;
	memcpy_s(&OnGamePlayersChanged_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnGamePlayersChanged_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnOnGamePlayersChanged, &OnGamePlayersChanged_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ServerAddress                  (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Visibility                     (CPF_Parm)

void UOnlineGameInterfaceImpl::SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, class FString ServerAddress, uint8_t Visibility)
{
	static UFunction* uFnSetFriendJoinLocation = nullptr;

	if (!uFnSetFriendJoinLocation)
	{
		uFnSetFriendJoinLocation = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation");
	}

	UOnlineGameInterfaceImpl_execSetFriendJoinLocation_Params SetFriendJoinLocation_Params;
	memcpy_s(&SetFriendJoinLocation_Params.JoinablePlayerID, 0x48, &JoinablePlayerID, 0x48);
	memcpy_s(&SetFriendJoinLocation_Params.ServerAddress, 0x10, &ServerAddress, 0x10);
	memcpy_s(&SetFriendJoinLocation_Params.Visibility, 0x1, &Visibility, 0x1);

	this->ProcessEvent(uFnSetFriendJoinLocation, &SetFriendJoinLocation_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         OldDelegate                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearReportMatchmakingInfoDelegate(struct FScriptDelegate OldDelegate)
{
	static UFunction* uFnClearReportMatchmakingInfoDelegate = nullptr;

	if (!uFnClearReportMatchmakingInfoDelegate)
	{
		uFnClearReportMatchmakingInfoDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate");
	}

	UOnlineGameInterfaceImpl_execClearReportMatchmakingInfoDelegate_Params ClearReportMatchmakingInfoDelegate_Params;
	memcpy_s(&ClearReportMatchmakingInfoDelegate_Params.OldDelegate, 0x18, &OldDelegate, 0x18);

	this->ProcessEvent(uFnClearReportMatchmakingInfoDelegate, &ClearReportMatchmakingInfoDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         NewDelegate                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddReportMatchmakingInfoDelegate(struct FScriptDelegate NewDelegate)
{
	static UFunction* uFnAddReportMatchmakingInfoDelegate = nullptr;

	if (!uFnAddReportMatchmakingInfoDelegate)
	{
		uFnAddReportMatchmakingInfoDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate");
	}

	UOnlineGameInterfaceImpl_execAddReportMatchmakingInfoDelegate_Params AddReportMatchmakingInfoDelegate_Params;
	memcpy_s(&AddReportMatchmakingInfoDelegate_Params.NewDelegate, 0x18, &NewDelegate, 0x18);

	this->ProcessEvent(uFnAddReportMatchmakingInfoDelegate, &AddReportMatchmakingInfoDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  NewInfo                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::EventReportMatchmakingInfo(class FString NewInfo)
{
	static UFunction* uFnEventReportMatchmakingInfo = nullptr;

	if (!uFnEventReportMatchmakingInfo)
	{
		uFnEventReportMatchmakingInfo = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo");
	}

	UOnlineGameInterfaceImpl_execEventReportMatchmakingInfo_Params EventReportMatchmakingInfo_Params;
	memcpy_s(&EventReportMatchmakingInfo_Params.NewInfo, 0x10, &NewInfo, 0x10);

	this->ProcessEvent(uFnEventReportMatchmakingInfo, &EventReportMatchmakingInfo_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate)
{
	static UFunction* uFnClearQosStatusChangedDelegate = nullptr;

	if (!uFnClearQosStatusChangedDelegate)
	{
		uFnClearQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Params ClearQosStatusChangedDelegate_Params;
	memcpy_s(&ClearQosStatusChangedDelegate_Params.QosStatusChangedDelegate, 0x18, &QosStatusChangedDelegate, 0x18);

	this->ProcessEvent(uFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate)
{
	static UFunction* uFnAddQosStatusChangedDelegate = nullptr;

	if (!uFnAddQosStatusChangedDelegate)
	{
		uFnAddQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Params AddQosStatusChangedDelegate_Params;
	memcpy_s(&AddQosStatusChangedDelegate_Params.QosStatusChangedDelegate, 0x18, &QosStatusChangedDelegate, 0x18);

	this->ProcessEvent(uFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        NumComplete                    (CPF_Parm)
// int32_t                        NumTotal                       (CPF_Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal)
{
	static UFunction* uFnOnQosStatusChanged = nullptr;

	if (!uFnOnQosStatusChanged)
	{
		uFnOnQosStatusChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");
	}

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params OnQosStatusChanged_Params;
	memcpy_s(&OnQosStatusChanged_Params.NumComplete, 0x4, &NumComplete, 0x4);
	memcpy_s(&OnQosStatusChanged_Params.NumTotal, 0x4, &NumTotal, 0x4);

	this->ProcessEvent(uFnOnQosStatusChanged, &OnQosStatusChanged_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo)
{
	static UFunction* uFnBindPlatformSpecificSessionToSearch = nullptr;

	if (!uFnBindPlatformSpecificSessionToSearch)
	{
		uFnBindPlatformSpecificSessionToSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");
	}

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Params BindPlatformSpecificSessionToSearch_Params;
	memcpy_s(&BindPlatformSpecificSessionToSearch_Params.SearchingPlayerNum, 0x1, &SearchingPlayerNum, 0x1);
	memcpy_s(&BindPlatformSpecificSessionToSearch_Params.SearchSettings, 0x8, &SearchSettings, 0x8);
	memcpy_s(&BindPlatformSpecificSessionToSearch_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	uFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Params, nullptr);

	uFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnReadPlatformSpecificSessionInfoBySessionName = nullptr;

	if (!uFnReadPlatformSpecificSessionInfoBySessionName)
	{
		uFnReadPlatformSpecificSessionInfoBySessionName = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");
	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Params ReadPlatformSpecificSessionInfoBySessionName_Params;
	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	this->ProcessEvent(uFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, 0x50, &ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfoBySessionName_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& DesiredGame, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnReadPlatformSpecificSessionInfo = nullptr;

	if (!uFnReadPlatformSpecificSessionInfo)
	{
		uFnReadPlatformSpecificSessionInfo = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");
	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Params ReadPlatformSpecificSessionInfo_Params;
	memcpy_s(&ReadPlatformSpecificSessionInfo_Params.DesiredGame, 0x10, &DesiredGame, 0x10);
	memcpy_s(&ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	uFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Params, nullptr);

	uFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;

	memcpy_s(&DesiredGame, 0x10, &ReadPlatformSpecificSessionInfo_Params.DesiredGame, 0x10);
	memcpy_s(&PlatformSpecificInfo, 0x50, &ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfo_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, 0x4, &NumberToQuery, 0x4);

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearJoinMigratedOnlineGameCompleteDelegate)
	{
		uFnClearJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Params ClearJoinMigratedOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate, 0x18, &JoinMigratedOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddJoinMigratedOnlineGameCompleteDelegate)
	{
		uFnAddJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Params AddJoinMigratedOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate, 0x18, &JoinMigratedOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnJoinMigratedOnlineGameComplete = nullptr;

	if (!uFnOnJoinMigratedOnlineGameComplete)
	{
		uFnOnJoinMigratedOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Params OnJoinMigratedOnlineGameComplete_Params;
	memcpy_s(&OnJoinMigratedOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnJoinMigratedOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(uint8_t PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame)
{
	static UFunction* uFnJoinMigratedOnlineGame = nullptr;

	if (!uFnJoinMigratedOnlineGame)
	{
		uFnJoinMigratedOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");
	}

	UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Params JoinMigratedOnlineGame_Params;
	memcpy_s(&JoinMigratedOnlineGame_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&JoinMigratedOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&JoinMigratedOnlineGame_Params.DesiredGame, 0x10, &DesiredGame, 0x10);

	this->ProcessEvent(uFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Params, nullptr);

	memcpy_s(&DesiredGame, 0x10, &JoinMigratedOnlineGame_Params.DesiredGame, 0x10);

	return JoinMigratedOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearMigrateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearMigrateOnlineGameCompleteDelegate)
	{
		uFnClearMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Params ClearMigrateOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate, 0x18, &MigrateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddMigrateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddMigrateOnlineGameCompleteDelegate)
	{
		uFnAddMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Params AddMigrateOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate, 0x18, &MigrateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnMigrateOnlineGameComplete = nullptr;

	if (!uFnOnMigrateOnlineGameComplete)
	{
		uFnOnMigrateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Params OnMigrateOnlineGameComplete_Params;
	memcpy_s(&OnMigrateOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnMigrateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        HostingPlayerNum               (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(uint8_t HostingPlayerNum, struct FName SessionName)
{
	static UFunction* uFnMigrateOnlineGame = nullptr;

	if (!uFnMigrateOnlineGame)
	{
		uFnMigrateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execMigrateOnlineGame_Params MigrateOnlineGame_Params;
	memcpy_s(&MigrateOnlineGame_Params.HostingPlayerNum, 0x1, &HostingPlayerNum, 0x1);
	memcpy_s(&MigrateOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnMigrateOnlineGame, &MigrateOnlineGame_Params, nullptr);

	return MigrateOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate)
{
	static UFunction* uFnClearRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!uFnClearRecalculateSkillRatingCompleteDelegate)
	{
		uFnClearRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Params ClearRecalculateSkillRatingCompleteDelegate_Params;
	memcpy_s(&ClearRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingGameCompleteDelegate, 0x18, &RecalculateSkillRatingGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingCompleteDelegate)
{
	static UFunction* uFnAddRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!uFnAddRecalculateSkillRatingCompleteDelegate)
	{
		uFnAddRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Params AddRecalculateSkillRatingCompleteDelegate_Params;
	memcpy_s(&AddRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingCompleteDelegate, 0x18, &RecalculateSkillRatingCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRecalculateSkillRatingComplete = nullptr;

	if (!uFnOnRecalculateSkillRatingComplete)
	{
		uFnOnRecalculateSkillRatingComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");
	}

	UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Params OnRecalculateSkillRatingComplete_Params;
	memcpy_s(&OnRecalculateSkillRatingComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnRecalculateSkillRatingComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(struct FName SessionName, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecalculateSkillRating = nullptr;

	if (!uFnRecalculateSkillRating)
	{
		uFnRecalculateSkillRating = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");
	}

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Params RecalculateSkillRating_Params;
	memcpy_s(&RecalculateSkillRating_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RecalculateSkillRating_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnRecalculateSkillRating, &RecalculateSkillRating_Params, nullptr);

	memcpy_s(&Players, 0x10, &RecalculateSkillRating_Params.Players, 0x10);

	return RecalculateSkillRating_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");
	}

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AcceptGameInvite_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	return AcceptGameInvite_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* uFnClearGameInviteAcceptedDelegate = nullptr;

	if (!uFnClearGameInviteAcceptedDelegate)
	{
		uFnClearGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Params ClearGameInviteAcceptedDelegate_Params;
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, 0x18, &GameInviteAcceptedDelegate, 0x18);

	this->ProcessEvent(uFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* uFnAddGameInviteAcceptedDelegate = nullptr;

	if (!uFnAddGameInviteAcceptedDelegate)
	{
		uFnAddGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Params AddGameInviteAcceptedDelegate_Params;
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, 0x18, &GameInviteAcceptedDelegate, 0x18);

	this->ProcessEvent(uFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ErrorString                    (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(class FString ErrorString, struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memcpy_s(&OnGameInviteAccepted_Params.ErrorString, 0x10, &ErrorString, 0x10);
	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, 0x10, &InviteResult, 0x10);

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&InviteResult, 0x10, &OnGameInviteAccepted_Params.InviteResult, 0x10);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FName                   SessionName                    (CPF_Parm)

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers(struct FName SessionName)
{
	static UFunction* uFnGetArbitratedPlayers = nullptr;

	if (!uFnGetArbitratedPlayers)
	{
		uFnGetArbitratedPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");
	}

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Params GetArbitratedPlayers_Params;
	memcpy_s(&GetArbitratedPlayers_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnGetArbitratedPlayers, &GetArbitratedPlayers_Params, nullptr);

	return GetArbitratedPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* uFnClearArbitrationRegistrationCompleteDelegate = nullptr;

	if (!uFnClearArbitrationRegistrationCompleteDelegate)
	{
		uFnClearArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Params ClearArbitrationRegistrationCompleteDelegate_Params;
	memcpy_s(&ClearArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate, 0x18, &ArbitrationRegistrationCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* uFnAddArbitrationRegistrationCompleteDelegate = nullptr;

	if (!uFnAddArbitrationRegistrationCompleteDelegate)
	{
		uFnAddArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Params AddArbitrationRegistrationCompleteDelegate_Params;
	memcpy_s(&AddArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate, 0x18, &ArbitrationRegistrationCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnArbitrationRegistrationComplete = nullptr;

	if (!uFnOnArbitrationRegistrationComplete)
	{
		uFnOnArbitrationRegistrationComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");
	}

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Params OnArbitrationRegistrationComplete_Params;
	memcpy_s(&OnArbitrationRegistrationComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnArbitrationRegistrationComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(struct FName SessionName)
{
	static UFunction* uFnRegisterForArbitration = nullptr;

	if (!uFnRegisterForArbitration)
	{
		uFnRegisterForArbitration = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");
	}

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Params RegisterForArbitration_Params;
	memcpy_s(&RegisterForArbitration_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnRegisterForArbitration, &RegisterForArbitration_Params, nullptr);

	return RegisterForArbitration_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearEndOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearEndOnlineGameCompleteDelegate)
	{
		uFnClearEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Params ClearEndOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate, 0x18, &EndOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddEndOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddEndOnlineGameCompleteDelegate)
	{
		uFnAddEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Params AddEndOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate, 0x18, &EndOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnEndOnlineGameComplete = nullptr;

	if (!uFnOnEndOnlineGameComplete)
	{
		uFnOnEndOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params OnEndOnlineGameComplete_Params;
	memcpy_s(&OnEndOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnEndOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::EndOnlineGame(struct FName SessionName)
{
	static UFunction* uFnEndOnlineGame = nullptr;

	if (!uFnEndOnlineGame)
	{
		uFnEndOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");
	}

	UOnlineGameInterfaceImpl_execEndOnlineGame_Params EndOnlineGame_Params;
	memcpy_s(&EndOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);

	uFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndOnlineGame, &EndOnlineGame_Params, nullptr);

	uFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearStartOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearStartOnlineGameCompleteDelegate)
	{
		uFnClearStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Params ClearStartOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate, 0x18, &StartOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddStartOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddStartOnlineGameCompleteDelegate)
	{
		uFnAddStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Params AddStartOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate, 0x18, &StartOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnStartOnlineGameComplete = nullptr;

	if (!uFnOnStartOnlineGameComplete)
	{
		uFnOnStartOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params OnStartOnlineGameComplete_Params;
	memcpy_s(&OnStartOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnStartOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(struct FName SessionName)
{
	static UFunction* uFnStartOnlineGame = nullptr;

	if (!uFnStartOnlineGame)
	{
		uFnStartOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");
	}

	UOnlineGameInterfaceImpl_execStartOnlineGame_Params StartOnlineGame_Params;
	memcpy_s(&StartOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);

	uFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartOnlineGame, &StartOnlineGame_Params, nullptr);

	uFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, 0x48, &PlayerID, 0x48);
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnUnregisterPlayers = nullptr;

	if (!uFnUnregisterPlayers)
	{
		uFnUnregisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");
	}

	UOnlineGameInterfaceImpl_execUnregisterPlayers_Params UnregisterPlayers_Params;
	memcpy_s(&UnregisterPlayers_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayers_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnUnregisterPlayers, &UnregisterPlayers_Params, nullptr);

	memcpy_s(&Players, 0x10, &UnregisterPlayers_Params.Players, 0x10);

	return UnregisterPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");
	}

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memcpy_s(&UnregisterPlayer_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);

	return UnregisterPlayer_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, 0x48, &PlayerID, 0x48);
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RegisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRegisterPlayers = nullptr;

	if (!uFnRegisterPlayers)
	{
		uFnRegisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");
	}

	UOnlineGameInterfaceImpl_execRegisterPlayers_Params RegisterPlayers_Params;
	memcpy_s(&RegisterPlayers_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayers_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnRegisterPlayers, &RegisterPlayers_Params, nullptr);

	memcpy_s(&Players, 0x10, &RegisterPlayers_Params.Players, 0x10);

	return RegisterPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");
	}

	UOnlineGameInterfaceImpl_execRegisterPlayer_Params RegisterPlayer_Params;
	memcpy_s(&RegisterPlayer_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);

	return RegisterPlayer_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class FString                  ConnectInfo                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(struct FName SessionName, class FString& ConnectInfo)
{
	static UFunction* uFnGetResolvedConnectString = nullptr;

	if (!uFnGetResolvedConnectString)
	{
		uFnGetResolvedConnectString = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");
	}

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Params GetResolvedConnectString_Params;
	memcpy_s(&GetResolvedConnectString_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&GetResolvedConnectString_Params.ConnectInfo, 0x10, &ConnectInfo, 0x10);

	uFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetResolvedConnectString, &GetResolvedConnectString_Params, nullptr);

	uFnGetResolvedConnectString->FunctionFlags |= 0x400;

	memcpy_s(&ConnectInfo, 0x10, &GetResolvedConnectString_Params.ConnectInfo, 0x10);

	return GetResolvedConnectString_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearJoinOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearJoinOnlineGameCompleteDelegate)
	{
		uFnClearJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Params ClearJoinOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate, 0x18, &JoinOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddJoinOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddJoinOnlineGameCompleteDelegate)
	{
		uFnAddJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Params AddJoinOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate, 0x18, &JoinOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnJoinOnlineGameComplete = nullptr;

	if (!uFnOnJoinOnlineGameComplete)
	{
		uFnOnJoinOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params OnJoinOnlineGameComplete_Params;
	memcpy_s(&OnJoinOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnJoinOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGame(uint8_t PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame)
{
	static UFunction* uFnJoinOnlineGame = nullptr;

	if (!uFnJoinOnlineGame)
	{
		uFnJoinOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");
	}

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Params JoinOnlineGame_Params;
	memcpy_s(&JoinOnlineGame_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&JoinOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&JoinOnlineGame_Params.DesiredGame, 0x10, &DesiredGame, 0x10);

	uFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnJoinOnlineGame, &JoinOnlineGame_Params, nullptr);

	uFnJoinOnlineGame->FunctionFlags |= 0x400;

	memcpy_s(&DesiredGame, 0x10, &JoinOnlineGame_Params.DesiredGame, 0x10);

	return JoinOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* uFnFreeSearchResults = nullptr;

	if (!uFnFreeSearchResults)
	{
		uFnFreeSearchResults = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");
	}

	UOnlineGameInterfaceImpl_execFreeSearchResults_Params FreeSearchResults_Params;
	memcpy_s(&FreeSearchResults_Params.Search, 0x8, &Search, 0x8);

	uFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFreeSearchResults, &FreeSearchResults_Params, nullptr);

	uFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnClearCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnClearCancelFindOnlineGamesCompleteDelegate)
	{
		uFnClearCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Params ClearCancelFindOnlineGamesCompleteDelegate_Params;
	memcpy_s(&ClearCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate, 0x18, &CancelFindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnAddCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnAddCancelFindOnlineGamesCompleteDelegate)
	{
		uFnAddCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Params AddCancelFindOnlineGamesCompleteDelegate_Params;
	memcpy_s(&AddCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate, 0x18, &CancelFindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnCancelFindOnlineGamesComplete = nullptr;

	if (!uFnOnCancelFindOnlineGamesComplete)
	{
		uFnOnCancelFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params OnCancelFindOnlineGamesComplete_Params;
	OnCancelFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static UFunction* uFnCancelFindOnlineGames = nullptr;

	if (!uFnCancelFindOnlineGames)
	{
		uFnCancelFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");
	}

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Params CancelFindOnlineGames_Params;

	uFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCancelFindOnlineGames, &CancelFindOnlineGames_Params, nullptr);

	uFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnClearFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnClearFindOnlineGamesCompleteDelegate)
	{
		uFnClearFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Params ClearFindOnlineGamesCompleteDelegate_Params;
	memcpy_s(&ClearFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate, 0x18, &FindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnAddFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnAddFindOnlineGamesCompleteDelegate)
	{
		uFnAddFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Params AddFindOnlineGamesCompleteDelegate_Params;
	memcpy_s(&AddFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate, 0x18, &FindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)

bool UOnlineGameInterfaceImpl::FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static UFunction* uFnFindOnlineGames = nullptr;

	if (!uFnFindOnlineGames)
	{
		uFnFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");
	}

	UOnlineGameInterfaceImpl_execFindOnlineGames_Params FindOnlineGames_Params;
	memcpy_s(&FindOnlineGames_Params.SearchingPlayerNum, 0x1, &SearchingPlayerNum, 0x1);
	memcpy_s(&FindOnlineGames_Params.SearchSettings, 0x8, &SearchSettings, 0x8);

	uFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindOnlineGames, &FindOnlineGames_Params, nullptr);

	uFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearDestroyOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearDestroyOnlineGameCompleteDelegate)
	{
		uFnClearDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Params ClearDestroyOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate, 0x18, &DestroyOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddDestroyOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddDestroyOnlineGameCompleteDelegate)
	{
		uFnAddDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Params AddDestroyOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate, 0x18, &DestroyOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDestroyOnlineGameComplete = nullptr;

	if (!uFnOnDestroyOnlineGameComplete)
	{
		uFnOnDestroyOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params OnDestroyOnlineGameComplete_Params;
	memcpy_s(&OnDestroyOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnDestroyOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(struct FName SessionName)
{
	static UFunction* uFnDestroyOnlineGame = nullptr;

	if (!uFnDestroyOnlineGame)
	{
		uFnDestroyOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");
	}

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Params DestroyOnlineGame_Params;
	memcpy_s(&DestroyOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);

	uFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyOnlineGame, &DestroyOnlineGame_Params, nullptr);

	uFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearUpdateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearUpdateOnlineGameCompleteDelegate)
	{
		uFnClearUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Params ClearUpdateOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate, 0x18, &UpdateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddUpdateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddUpdateOnlineGameCompleteDelegate)
	{
		uFnAddUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Params AddUpdateOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate, 0x18, &UpdateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUpdateOnlineGameComplete = nullptr;

	if (!uFnOnUpdateOnlineGameComplete)
	{
		uFnOnUpdateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params OnUpdateOnlineGameComplete_Params;
	memcpy_s(&OnUpdateOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnUpdateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memcpy_s(&UpdateOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearCreateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearCreateOnlineGameCompleteDelegate)
	{
		uFnClearCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Params ClearCreateOnlineGameCompleteDelegate_Params;
	memcpy_s(&ClearCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate, 0x18, &CreateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddCreateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddCreateOnlineGameCompleteDelegate)
	{
		uFnAddCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Params AddCreateOnlineGameCompleteDelegate_Params;
	memcpy_s(&AddCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate, 0x18, &CreateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnCreateOnlineGameComplete = nullptr;

	if (!uFnOnCreateOnlineGameComplete)
	{
		uFnOnCreateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params OnCreateOnlineGameComplete_Params;
	memcpy_s(&OnCreateOnlineGameComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnCreateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        HostingPlayerNum               (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     NewGameSettings                (CPF_Parm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(uint8_t HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static UFunction* uFnCreateOnlineGame = nullptr;

	if (!uFnCreateOnlineGame)
	{
		uFnCreateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Params CreateOnlineGame_Params;
	memcpy_s(&CreateOnlineGame_Params.HostingPlayerNum, 0x1, &HostingPlayerNum, 0x1);
	memcpy_s(&CreateOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&CreateOnlineGame_Params.NewGameSettings, 0x8, &NewGameSettings, 0x8);

	uFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateOnlineGame, &CreateOnlineGame_Params, nullptr);

	uFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSearch*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static UFunction* uFnGetGameSearch = nullptr;

	if (!uFnGetGameSearch)
	{
		uFnGetGameSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch");
	}

	UOnlineGameInterfaceImpl_execGetGameSearch_Params GetGameSearch_Params;

	this->ProcessEvent(uFnGetGameSearch, &GetGameSearch_Params, nullptr);

	return GetGameSearch_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(struct FName SessionName)
{
	static UFunction* uFnGetGameSettings = nullptr;

	if (!uFnGetGameSettings)
	{
		uFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings");
	}

	UOnlineGameInterfaceImpl_execGetGameSettings_Params GetGameSettings_Params;
	memcpy_s(&GetGameSettings_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnGetGameSettings, &GetGameSettings_Params, nullptr);

	return GetGameSettings_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnFindOnlineGamesComplete = nullptr;

	if (!uFnOnFindOnlineGamesComplete)
	{
		uFnOnFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params OnFindOnlineGamesComplete_Params;
	OnFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.GetImageType
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ContentType                    (CPF_Parm | CPF_NeedCtorLink)

uint8_t UOnlineImageDownloaderWeb::GetImageType(class FString ContentType)
{
	static UFunction* uFnGetImageType = nullptr;

	if (!uFnGetImageType)
	{
		uFnGetImageType = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetImageType");
	}

	UOnlineImageDownloaderWeb_execGetImageType_Params GetImageType_Params;
	memcpy_s(&GetImageType_Params.ContentType, 0x10, &ContentType, 0x10);

	uFnGetImageType->FunctionFlags |= ~0x400;

	UOnlineImageDownloaderWeb::StaticClass()->ProcessEvent(uFnGetImageType, &GetImageType_Params, nullptr);

	uFnGetImageType->FunctionFlags |= 0x400;

	return GetImageType_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownload
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  NewURL                         (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InternalCallbackOnComplete     (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ExternalCallback               (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bSupportSRGB                   (CPF_Parm)

void UOnlineImageDownloaderWeb::QueueURLForDownload(class FString NewURL, struct FScriptDelegate InternalCallbackOnComplete, struct FScriptDelegate ExternalCallback, unsigned long bSupportSRGB)
{
	static UFunction* uFnQueueURLForDownload = nullptr;

	if (!uFnQueueURLForDownload)
	{
		uFnQueueURLForDownload = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownload");
	}

	UOnlineImageDownloaderWeb_execQueueURLForDownload_Params QueueURLForDownload_Params;
	memcpy_s(&QueueURLForDownload_Params.NewURL, 0x10, &NewURL, 0x10);
	memcpy_s(&QueueURLForDownload_Params.InternalCallbackOnComplete, 0x18, &InternalCallbackOnComplete, 0x18);
	memcpy_s(&QueueURLForDownload_Params.ExternalCallback, 0x18, &ExternalCallback, 0x18);
	QueueURLForDownload_Params.bSupportSRGB = bSupportSRGB;

	this->ProcessEvent(uFnQueueURLForDownload, &QueueURLForDownload_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UOnlineImageDownloaderWeb::DebugDraw(class UCanvas* Canvas)
{
	static UFunction* uFnDebugDraw = nullptr;

	if (!uFnDebugDraw)
	{
		uFnDebugDraw = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DebugDraw");
	}

	UOnlineImageDownloaderWeb_execDebugDraw_Params DebugDraw_Params;
	memcpy_s(&DebugDraw_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDebugDraw, &DebugDraw_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlineImageDownloaderWeb::OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* uFnOnDownloadComplete = nullptr;

	if (!uFnOnDownloadComplete)
	{
		uFnOnDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete");
	}

	UOnlineImageDownloaderWeb_execOnDownloadComplete_Params OnDownloadComplete_Params;
	memcpy_s(&OnDownloadComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDownloadComplete_Params.Response, 0x8, &Response, 0x8);
	OnDownloadComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnDownloadComplete, &OnDownloadComplete_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::DownloadNextImage()
{
	static UFunction* uFnDownloadNextImage = nullptr;

	if (!uFnDownloadNextImage)
	{
		uFnDownloadNextImage = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage");
	}

	UOnlineImageDownloaderWeb_execDownloadNextImage_Params DownloadNextImage_Params;

	this->ProcessEvent(uFnDownloadNextImage, &DownloadNextImage_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00424002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FinishedCallback               (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bSupportSRGB                   (CPF_OptionalParm | CPF_Parm)
// TArray<class FString>          URLs                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::RequestOnlineImages(struct FScriptDelegate FinishedCallback, unsigned long bSupportSRGB, TArray<class FString>& URLs)
{
	static UFunction* uFnRequestOnlineImages = nullptr;

	if (!uFnRequestOnlineImages)
	{
		uFnRequestOnlineImages = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages");
	}

	UOnlineImageDownloaderWeb_execRequestOnlineImages_Params RequestOnlineImages_Params;
	memcpy_s(&RequestOnlineImages_Params.FinishedCallback, 0x18, &FinishedCallback, 0x18);
	RequestOnlineImages_Params.bSupportSRGB = bSupportSRGB;
	memcpy_s(&RequestOnlineImages_Params.URLs, 0x10, &URLs, 0x10);

	this->ProcessEvent(uFnRequestOnlineImages, &RequestOnlineImages_Params, nullptr);

	memcpy_s(&URLs, 0x10, &RequestOnlineImages_Params.URLs, 0x10);
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture(class FString URL)
{
	static UFunction* uFnGetOnlineImageTexture = nullptr;

	if (!uFnGetOnlineImageTexture)
	{
		uFnGetOnlineImageTexture = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture");
	}

	UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Params GetOnlineImageTexture_Params;
	memcpy_s(&GetOnlineImageTexture_Params.URL, 0x10, &URL, 0x10);

	this->ProcessEvent(uFnGetOnlineImageTexture, &GetOnlineImageTexture_Params, nullptr);

	return GetOnlineImageTexture_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearQueue
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearQueue()
{
	static UFunction* uFnClearQueue = nullptr;

	if (!uFnClearQueue)
	{
		uFnClearQueue = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearQueue");
	}

	UOnlineImageDownloaderWeb_execClearQueue_Params ClearQueue_Params;

	uFnClearQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearQueue, &ClearQueue_Params, nullptr);

	uFnClearQueue->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.Dequeue
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineImageDownloaderWeb::Dequeue()
{
	static UFunction* uFnDequeue = nullptr;

	if (!uFnDequeue)
	{
		uFnDequeue = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.Dequeue");
	}

	UOnlineImageDownloaderWeb_execDequeue_Params Dequeue_Params;

	uFnDequeue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDequeue, &Dequeue_Params, nullptr);

	uFnDequeue->FunctionFlags |= 0x400;

	return Dequeue_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.Enqueue
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::Enqueue(class FString URL)
{
	static UFunction* uFnEnqueue = nullptr;

	if (!uFnEnqueue)
	{
		uFnEnqueue = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.Enqueue");
	}

	UOnlineImageDownloaderWeb_execEnqueue_Params Enqueue_Params;
	memcpy_s(&Enqueue_Params.URL, 0x10, &URL, 0x10);

	uFnEnqueue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEnqueue, &Enqueue_Params, nullptr);

	uFnEnqueue->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearActiveDownloads
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearActiveDownloads()
{
	static UFunction* uFnClearActiveDownloads = nullptr;

	if (!uFnClearActiveDownloads)
	{
		uFnClearActiveDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearActiveDownloads");
	}

	UOnlineImageDownloaderWeb_execClearActiveDownloads_Params ClearActiveDownloads_Params;

	uFnClearActiveDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearActiveDownloads, &ClearActiveDownloads_Params, nullptr);

	uFnClearActiveDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearCompletedDownloads
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearCompletedDownloads()
{
	static UFunction* uFnClearCompletedDownloads = nullptr;

	if (!uFnClearCompletedDownloads)
	{
		uFnClearCompletedDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearCompletedDownloads");
	}

	UOnlineImageDownloaderWeb_execClearCompletedDownloads_Params ClearCompletedDownloads_Params;

	uFnClearCompletedDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearCompletedDownloads, &ClearCompletedDownloads_Params, nullptr);

	uFnClearCompletedDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded_Native
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  RequestedURL                   (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            DecodedImage                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::HandleImageDecoded_Native(class FString RequestedURL, struct FImageLayout& DecodedImage)
{
	static UFunction* uFnHandleImageDecoded_Native = nullptr;

	if (!uFnHandleImageDecoded_Native)
	{
		uFnHandleImageDecoded_Native = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded_Native");
	}

	UOnlineImageDownloaderWeb_execHandleImageDecoded_Native_Params HandleImageDecoded_Native_Params;
	memcpy_s(&HandleImageDecoded_Native_Params.RequestedURL, 0x10, &RequestedURL, 0x10);
	memcpy_s(&HandleImageDecoded_Native_Params.DecodedImage, 0x18, &DecodedImage, 0x18);

	uFnHandleImageDecoded_Native->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandleImageDecoded_Native, &HandleImageDecoded_Native_Params, nullptr);

	uFnHandleImageDecoded_Native->FunctionFlags |= 0x400;

	memcpy_s(&DecodedImage, 0x18, &HandleImageDecoded_Native_Params.DecodedImage, 0x18);
};

// Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded
// [0x00440003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  RequestedURL                   (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            DecodedImage                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::HandleImageDecoded(class FString RequestedURL, struct FImageLayout& DecodedImage)
{
	static UFunction* uFnHandleImageDecoded = nullptr;

	if (!uFnHandleImageDecoded)
	{
		uFnHandleImageDecoded = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded");
	}

	UOnlineImageDownloaderWeb_execHandleImageDecoded_Params HandleImageDecoded_Params;
	memcpy_s(&HandleImageDecoded_Params.RequestedURL, 0x10, &RequestedURL, 0x10);
	memcpy_s(&HandleImageDecoded_Params.DecodedImage, 0x18, &DecodedImage, 0x18);

	this->ProcessEvent(uFnHandleImageDecoded, &HandleImageDecoded_Params, nullptr);

	memcpy_s(&DecodedImage, 0x18, &HandleImageDecoded_Params.DecodedImage, 0x18);
};

// Function IpDrv.OnlineImageDownloaderWeb.RequeueFailedURL
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::RequeueFailedURL(class FString URL)
{
	static UFunction* uFnRequeueFailedURL = nullptr;

	if (!uFnRequeueFailedURL)
	{
		uFnRequeueFailedURL = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.RequeueFailedURL");
	}

	UOnlineImageDownloaderWeb_execRequeueFailedURL_Params RequeueFailedURL_Params;
	memcpy_s(&RequeueFailedURL_Params.URL, 0x10, &URL, 0x10);

	uFnRequeueFailedURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequeueFailedURL, &RequeueFailedURL_Params, nullptr);

	uFnRequeueFailedURL->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextQueuedURL
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::DownloadNextQueuedURL()
{
	static UFunction* uFnDownloadNextQueuedURL = nullptr;

	if (!uFnDownloadNextQueuedURL)
	{
		uFnDownloadNextQueuedURL = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextQueuedURL");
	}

	UOnlineImageDownloaderWeb_execDownloadNextQueuedURL_Params DownloadNextQueuedURL_Params;

	uFnDownloadNextQueuedURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDownloadNextQueuedURL, &DownloadNextQueuedURL_Params, nullptr);

	uFnDownloadNextQueuedURL->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.UpdateActiveDownloadFromResponse
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// struct FScriptDelegate         OnDecodedCallback              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::UpdateActiveDownloadFromResponse(class FString URL, class UHttpResponseInterface* Response, struct FScriptDelegate OnDecodedCallback)
{
	static UFunction* uFnUpdateActiveDownloadFromResponse = nullptr;

	if (!uFnUpdateActiveDownloadFromResponse)
	{
		uFnUpdateActiveDownloadFromResponse = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.UpdateActiveDownloadFromResponse");
	}

	UOnlineImageDownloaderWeb_execUpdateActiveDownloadFromResponse_Params UpdateActiveDownloadFromResponse_Params;
	memcpy_s(&UpdateActiveDownloadFromResponse_Params.URL, 0x10, &URL, 0x10);
	memcpy_s(&UpdateActiveDownloadFromResponse_Params.Response, 0x8, &Response, 0x8);
	memcpy_s(&UpdateActiveDownloadFromResponse_Params.OnDecodedCallback, 0x18, &OnDecodedCallback, 0x18);

	uFnUpdateActiveDownloadFromResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateActiveDownloadFromResponse, &UpdateActiveDownloadFromResponse_Params, nullptr);

	uFnUpdateActiveDownloadFromResponse->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.MarkActiveDownloadFailed
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::MarkActiveDownloadFailed(class FString URL)
{
	static UFunction* uFnMarkActiveDownloadFailed = nullptr;

	if (!uFnMarkActiveDownloadFailed)
	{
		uFnMarkActiveDownloadFailed = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.MarkActiveDownloadFailed");
	}

	UOnlineImageDownloaderWeb_execMarkActiveDownloadFailed_Params MarkActiveDownloadFailed_Params;
	memcpy_s(&MarkActiveDownloadFailed_Params.URL, 0x10, &URL, 0x10);

	uFnMarkActiveDownloadFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMarkActiveDownloadFailed, &MarkActiveDownloadFailed_Params, nullptr);

	uFnMarkActiveDownloadFailed->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownloadInternal
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  NewURL                         (CPF_Parm | CPF_NeedCtorLink)
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UTexture2DDynamic*       TextureHolder                  (CPF_Parm)
// struct FScriptDelegate         OnDecodedCallback              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::QueueURLForDownloadInternal(class FString NewURL, class UHttpRequestInterface* Request, class UTexture2DDynamic* TextureHolder, struct FScriptDelegate OnDecodedCallback)
{
	static UFunction* uFnQueueURLForDownloadInternal = nullptr;

	if (!uFnQueueURLForDownloadInternal)
	{
		uFnQueueURLForDownloadInternal = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownloadInternal");
	}

	UOnlineImageDownloaderWeb_execQueueURLForDownloadInternal_Params QueueURLForDownloadInternal_Params;
	memcpy_s(&QueueURLForDownloadInternal_Params.NewURL, 0x10, &NewURL, 0x10);
	memcpy_s(&QueueURLForDownloadInternal_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&QueueURLForDownloadInternal_Params.TextureHolder, 0x8, &TextureHolder, 0x8);
	memcpy_s(&QueueURLForDownloadInternal_Params.OnDecodedCallback, 0x18, &OnDecodedCallback, 0x18);

	uFnQueueURLForDownloadInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnQueueURLForDownloadInternal, &QueueURLForDownloadInternal_Params, nullptr);

	uFnQueueURLForDownloadInternal->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.AddCallbackToDownload
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         NewCallback                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::AddCallbackToDownload(class FString URL, struct FScriptDelegate NewCallback)
{
	static UFunction* uFnAddCallbackToDownload = nullptr;

	if (!uFnAddCallbackToDownload)
	{
		uFnAddCallbackToDownload = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.AddCallbackToDownload");
	}

	UOnlineImageDownloaderWeb_execAddCallbackToDownload_Params AddCallbackToDownload_Params;
	memcpy_s(&AddCallbackToDownload_Params.URL, 0x10, &URL, 0x10);
	memcpy_s(&AddCallbackToDownload_Params.NewCallback, 0x18, &NewCallback, 0x18);

	uFnAddCallbackToDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddCallbackToDownload, &AddCallbackToDownload_Params, nullptr);

	uFnAddCallbackToDownload->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.GetDownload
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FOnlineImageDownload    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

struct FOnlineImageDownload UOnlineImageDownloaderWeb::GetDownload(class FString URL)
{
	static UFunction* uFnGetDownload = nullptr;

	if (!uFnGetDownload)
	{
		uFnGetDownload = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetDownload");
	}

	UOnlineImageDownloaderWeb_execGetDownload_Params GetDownload_Params;
	memcpy_s(&GetDownload_Params.URL, 0x10, &URL, 0x10);

	uFnGetDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetDownload, &GetDownload_Params, nullptr);

	uFnGetDownload->FunctionFlags |= 0x400;

	return GetDownload_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLQueued
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::IsURLQueued(class FString URL)
{
	static UFunction* uFnIsURLQueued = nullptr;

	if (!uFnIsURLQueued)
	{
		uFnIsURLQueued = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.IsURLQueued");
	}

	UOnlineImageDownloaderWeb_execIsURLQueued_Params IsURLQueued_Params;
	memcpy_s(&IsURLQueued_Params.URL, 0x10, &URL, 0x10);

	uFnIsURLQueued->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsURLQueued, &IsURLQueued_Params, nullptr);

	uFnIsURLQueued->FunctionFlags |= 0x400;

	return IsURLQueued_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLActive
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::IsURLActive(class FString URL)
{
	static UFunction* uFnIsURLActive = nullptr;

	if (!uFnIsURLActive)
	{
		uFnIsURLActive = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.IsURLActive");
	}

	UOnlineImageDownloaderWeb_execIsURLActive_Params IsURLActive_Params;
	memcpy_s(&IsURLActive_Params.URL, 0x10, &URL, 0x10);

	uFnIsURLActive->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsURLActive, &IsURLActive_Params, nullptr);

	uFnIsURLActive->FunctionFlags |= 0x400;

	return IsURLActive_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLFail
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::DidURLFail(class FString URL)
{
	static UFunction* uFnDidURLFail = nullptr;

	if (!uFnDidURLFail)
	{
		uFnDidURLFail = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DidURLFail");
	}

	UOnlineImageDownloaderWeb_execDidURLFail_Params DidURLFail_Params;
	memcpy_s(&DidURLFail_Params.URL, 0x10, &URL, 0x10);

	uFnDidURLFail->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDidURLFail, &DidURLFail_Params, nullptr);

	uFnDidURLFail->FunctionFlags |= 0x400;

	return DidURLFail_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLSucceed
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::DidURLSucceed(class FString URL)
{
	static UFunction* uFnDidURLSucceed = nullptr;

	if (!uFnDidURLSucceed)
	{
		uFnDidURLSucceed = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DidURLSucceed");
	}

	UOnlineImageDownloaderWeb_execDidURLSucceed_Params DidURLSucceed_Params;
	memcpy_s(&DidURLSucceed_Params.URL, 0x10, &URL, 0x10);

	uFnDidURLSucceed->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDidURLSucceed, &DidURLSucceed_Params, nullptr);

	uFnDidURLSucceed->FunctionFlags |= 0x400;

	return DidURLSucceed_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLTracked
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::IsURLTracked(class FString URL)
{
	static UFunction* uFnIsURLTracked = nullptr;

	if (!uFnIsURLTracked)
	{
		uFnIsURLTracked = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.IsURLTracked");
	}

	UOnlineImageDownloaderWeb_execIsURLTracked_Params IsURLTracked_Params;
	memcpy_s(&IsURLTracked_Params.URL, 0x10, &URL, 0x10);

	uFnIsURLTracked->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsURLTracked, &IsURLTracked_Params, nullptr);

	uFnIsURLTracked->FunctionFlags |= 0x400;

	return IsURLTracked_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.AllValues
// [0x00444405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_NetMulticast | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        MaxValues                      (CPF_OptionalParm | CPF_Parm)
// struct FOnlineImageDownload    OutImage                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::AllValues(int32_t StartIndex, int32_t MaxValues, struct FOnlineImageDownload& OutImage)
{
	static UFunction* uFnAllValues = nullptr;

	if (!uFnAllValues)
	{
		uFnAllValues = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.AllValues");
	}

	UOnlineImageDownloaderWeb_execAllValues_Params AllValues_Params;
	memcpy_s(&AllValues_Params.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&AllValues_Params.MaxValues, 0x4, &MaxValues, 0x4);
	memcpy_s(&AllValues_Params.OutImage, 0x40, &OutImage, 0x40);

	uFnAllValues->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllValues, &AllValues_Params, nullptr);

	uFnAllValues->FunctionFlags |= 0x400;

	memcpy_s(&OutImage, 0x40, &AllValues_Params.OutImage, 0x40);
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearPendingDownloads()
{
	static UFunction* uFnClearPendingDownloads = nullptr;

	if (!uFnClearPendingDownloads)
	{
		uFnClearPendingDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads");
	}

	UOnlineImageDownloaderWeb_execClearPendingDownloads_Params ClearPendingDownloads_Params;

	uFnClearPendingDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearPendingDownloads, &ClearPendingDownloads_Params, nullptr);

	uFnClearPendingDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearAllDownloads()
{
	static UFunction* uFnClearAllDownloads = nullptr;

	if (!uFnClearAllDownloads)
	{
		uFnClearAllDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads");
	}

	UOnlineImageDownloaderWeb_execClearAllDownloads_Params ClearAllDownloads_Params;

	uFnClearAllDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearAllDownloads, &ClearAllDownloads_Params, nullptr);

	uFnClearAllDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.EventImageDecoded
// [0x00540001] (FUNC_Final | FUNC_Private | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  RequestURL                     (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            Image                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::EventImageDecoded(class FString RequestURL, struct FImageLayout& Image)
{
	static UFunction* uFnEventImageDecoded = nullptr;

	if (!uFnEventImageDecoded)
	{
		uFnEventImageDecoded = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.EventImageDecoded");
	}

	UOnlineImageDownloaderWeb_execEventImageDecoded_Params EventImageDecoded_Params;
	memcpy_s(&EventImageDecoded_Params.RequestURL, 0x10, &RequestURL, 0x10);
	memcpy_s(&EventImageDecoded_Params.Image, 0x18, &Image, 0x18);

	this->ProcessEvent(uFnEventImageDecoded, &EventImageDecoded_Params, nullptr);

	memcpy_s(&Image, 0x18, &EventImageDecoded_Params.Image, 0x18);
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageFinished
// [0x00180001] (FUNC_Final | FUNC_Protected | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FOnlineImageDownload    ImageInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::OnOnlineImageFinished(struct FOnlineImageDownload ImageInfo)
{
	static UFunction* uFnOnOnlineImageFinished = nullptr;

	if (!uFnOnOnlineImageFinished)
	{
		uFnOnOnlineImageFinished = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageFinished");
	}

	UOnlineImageDownloaderWeb_execOnOnlineImageFinished_Params OnOnlineImageFinished_Params;
	memcpy_s(&OnOnlineImageFinished_Params.ImageInfo, 0x40, &ImageInfo, 0x40);

	this->ProcessEvent(uFnOnOnlineImageFinished, &OnOnlineImageFinished_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.Construct
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::eventConstruct()
{
	static UFunction* uFnConstruct = nullptr;

	if (!uFnConstruct)
	{
		uFnConstruct = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.Construct");
	}

	UOnlineImageDownloaderWeb_eventConstruct_Params Construct_Params;

	this->ProcessEvent(uFnConstruct, &Construct_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearHostStartPlayTogetherDelegate = nullptr;

	if (!uFnClearHostStartPlayTogetherDelegate)
	{
		uFnClearHostStartPlayTogetherDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearHostStartPlayTogetherDelegate_Params ClearHostStartPlayTogetherDelegate_Params;
	memcpy_s(&ClearHostStartPlayTogetherDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearHostStartPlayTogetherDelegate, &ClearHostStartPlayTogetherDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddHostStartPlayTogetherDelegate = nullptr;

	if (!uFnAddHostStartPlayTogetherDelegate)
	{
		uFnAddHostStartPlayTogetherDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddHostStartPlayTogetherDelegate_Params AddHostStartPlayTogetherDelegate_Params;
	memcpy_s(&AddHostStartPlayTogetherDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddHostStartPlayTogetherDelegate, &AddHostStartPlayTogetherDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineLobbyInterfaceImpl::OnHostStartPlayTogether(uint8_t LocalUserNum)
{
	static UFunction* uFnOnHostStartPlayTogether = nullptr;

	if (!uFnOnHostStartPlayTogether)
	{
		uFnOnHostStartPlayTogether = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether");
	}

	UOnlineLobbyInterfaceImpl_execOnHostStartPlayTogether_Params OnHostStartPlayTogether_Params;
	memcpy_s(&OnHostStartPlayTogether_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnHostStartPlayTogether, &OnHostStartPlayTogether_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyErrorDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate)
{
	static UFunction* uFnClearLobbyErrorDelegate = nullptr;

	if (!uFnClearLobbyErrorDelegate)
	{
		uFnClearLobbyErrorDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyErrorDelegate_Params ClearLobbyErrorDelegate_Params;
	memcpy_s(&ClearLobbyErrorDelegate_Params.LobbyErrorDelegate, 0x18, &LobbyErrorDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyErrorDelegate, &ClearLobbyErrorDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyErrorDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate)
{
	static UFunction* uFnAddLobbyErrorDelegate = nullptr;

	if (!uFnAddLobbyErrorDelegate)
	{
		uFnAddLobbyErrorDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyErrorDelegate_Params AddLobbyErrorDelegate_Params;
	memcpy_s(&AddLobbyErrorDelegate_Params.LobbyErrorDelegate, 0x18, &LobbyErrorDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyErrorDelegate, &AddLobbyErrorDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyError(class FString Error)
{
	static UFunction* uFnOnLobbyError = nullptr;

	if (!uFnOnLobbyError)
	{
		uFnOnLobbyError = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyError_Params OnLobbyError_Params;
	memcpy_s(&OnLobbyError_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnLobbyError, &OnLobbyError_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<struct FLobbyMember>    Members                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::eventGetLobbyMembers(struct FUniqueLobbyId& LobbyId, TArray<struct FLobbyMember>& Members)
{
	static UFunction* uFnGetLobbyMembers = nullptr;

	if (!uFnGetLobbyMembers)
	{
		uFnGetLobbyMembers = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers");
	}

	UOnlineLobbyInterfaceImpl_eventGetLobbyMembers_Params GetLobbyMembers_Params;
	memcpy_s(&GetLobbyMembers_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&GetLobbyMembers_Params.Members, 0x10, &Members, 0x10);

	this->ProcessEvent(uFnGetLobbyMembers, &GetLobbyMembers_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &GetLobbyMembers_Params.LobbyId, 0x10);
	memcpy_s(&Members, 0x10, &GetLobbyMembers_Params.Members, 0x10);

	return GetLobbyMembers_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCretedeDelegate(struct FScriptDelegate LobbySessionCreatedDelegate)
{
	static UFunction* uFnClearLobbySessionCretedeDelegate = nullptr;

	if (!uFnClearLobbySessionCretedeDelegate)
	{
		uFnClearLobbySessionCretedeDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbySessionCretedeDelegate_Params ClearLobbySessionCretedeDelegate_Params;
	memcpy_s(&ClearLobbySessionCretedeDelegate_Params.LobbySessionCreatedDelegate, 0x18, &LobbySessionCreatedDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbySessionCretedeDelegate, &ClearLobbySessionCretedeDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate)
{
	static UFunction* uFnClearLobbySessionCreatedDelegate = nullptr;

	if (!uFnClearLobbySessionCreatedDelegate)
	{
		uFnClearLobbySessionCreatedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbySessionCreatedDelegate_Params ClearLobbySessionCreatedDelegate_Params;
	memcpy_s(&ClearLobbySessionCreatedDelegate_Params.LobbySessionCreatedDelegate, 0x18, &LobbySessionCreatedDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbySessionCreatedDelegate, &ClearLobbySessionCreatedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate)
{
	static UFunction* uFnAddLobbySessionCreatedDelegate = nullptr;

	if (!uFnAddLobbySessionCreatedDelegate)
	{
		uFnAddLobbySessionCreatedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbySessionCreatedDelegate_Params AddLobbySessionCreatedDelegate_Params;
	memcpy_s(&AddLobbySessionCreatedDelegate_Params.LobbySessionCreatedDelegate, 0x18, &LobbySessionCreatedDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbySessionCreatedDelegate, &AddLobbySessionCreatedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineLobbyInterfaceImpl::eventTriggerLobbySessionCreatedDelegates()
{
	static UFunction* uFnTriggerLobbySessionCreatedDelegates = nullptr;

	if (!uFnTriggerLobbySessionCreatedDelegates)
	{
		uFnTriggerLobbySessionCreatedDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbySessionCreatedDelegates_Params TriggerLobbySessionCreatedDelegates_Params;

	this->ProcessEvent(uFnTriggerLobbySessionCreatedDelegates, &TriggerLobbySessionCreatedDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineLobbyInterfaceImpl::OnLobbySessionCreated()
{
	static UFunction* uFnOnLobbySessionCreated = nullptr;

	if (!uFnOnLobbySessionCreated)
	{
		uFnOnLobbySessionCreated = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbySessionCreated_Params OnLobbySessionCreated_Params;

	this->ProcessEvent(uFnOnLobbySessionCreated, &OnLobbySessionCreated_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

int32_t UOnlineLobbyInterfaceImpl::eventGetLobbyIndex(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnGetLobbyIndex = nullptr;

	if (!uFnGetLobbyIndex)
	{
		uFnGetLobbyIndex = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex");
	}

	UOnlineLobbyInterfaceImpl_eventGetLobbyIndex_Params GetLobbyIndex_Params;
	memcpy_s(&GetLobbyIndex_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnGetLobbyIndex, &GetLobbyIndex_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &GetLobbyIndex_Params.LobbyId, 0x10);

	return GetLobbyIndex_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PartyMember                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::RemoveLocalPlayerFromSession(struct FUniqueNetId& PartyMember)
{
	static UFunction* uFnRemoveLocalPlayerFromSession = nullptr;

	if (!uFnRemoveLocalPlayerFromSession)
	{
		uFnRemoveLocalPlayerFromSession = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession");
	}

	UOnlineLobbyInterfaceImpl_execRemoveLocalPlayerFromSession_Params RemoveLocalPlayerFromSession_Params;
	memcpy_s(&RemoveLocalPlayerFromSession_Params.PartyMember, 0x48, &PartyMember, 0x48);

	this->ProcessEvent(uFnRemoveLocalPlayerFromSession, &RemoveLocalPlayerFromSession_Params, nullptr);

	memcpy_s(&PartyMember, 0x48, &RemoveLocalPlayerFromSession_Params.PartyMember, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NewPartyMember                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLocalPartyMemberToSession(struct FUniqueNetId& NewPartyMember)
{
	static UFunction* uFnAddLocalPartyMemberToSession = nullptr;

	if (!uFnAddLocalPartyMemberToSession)
	{
		uFnAddLocalPartyMemberToSession = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession");
	}

	UOnlineLobbyInterfaceImpl_execAddLocalPartyMemberToSession_Params AddLocalPartyMemberToSession_Params;
	memcpy_s(&AddLocalPartyMemberToSession_Params.NewPartyMember, 0x48, &NewPartyMember, 0x48);

	this->ProcessEvent(uFnAddLocalPartyMemberToSession, &AddLocalPartyMemberToSession_Params, nullptr);

	memcpy_s(&NewPartyMember, 0x48, &AddLocalPartyMemberToSession_Params.NewPartyMember, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::KickPlayer(uint8_t Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnKickPlayer = nullptr;

	if (!uFnKickPlayer)
	{
		uFnKickPlayer = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer");
	}

	UOnlineLobbyInterfaceImpl_execKickPlayer_Params KickPlayer_Params;
	memcpy_s(&KickPlayer_Params.Reason, 0x1, &Reason, 0x1);
	memcpy_s(&KickPlayer_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&KickPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnKickPlayer, &KickPlayer_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &KickPlayer_Params.LobbyId, 0x10);
	memcpy_s(&PlayerID, 0x48, &KickPlayer_Params.PlayerID, 0x48);

	return KickPlayer_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Const | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI");
	}

	UOnlineLobbyInterfaceImpl_execShowInviteUI_Params ShowInviteUI_Params;
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowInviteUI_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &ShowInviteUI_Params.LobbyId, 0x10);

	return ShowInviteUI_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// uint8_t                        Reason                         (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyDestroyedDelegates(int32_t LobbyIndex, uint8_t Reason)
{
	static UFunction* uFnTriggerLobbyDestroyedDelegates = nullptr;

	if (!uFnTriggerLobbyDestroyedDelegates)
	{
		uFnTriggerLobbyDestroyedDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyDestroyedDelegates_Params TriggerLobbyDestroyedDelegates_Params;
	memcpy_s(&TriggerLobbyDestroyedDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyDestroyedDelegates_Params.Reason, 0x1, &Reason, 0x1);

	this->ProcessEvent(uFnTriggerLobbyDestroyedDelegates, &TriggerLobbyDestroyedDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyDestroyedDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate)
{
	static UFunction* uFnClearLobbyDestroyedDelegate = nullptr;

	if (!uFnClearLobbyDestroyedDelegate)
	{
		uFnClearLobbyDestroyedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyDestroyedDelegate_Params ClearLobbyDestroyedDelegate_Params;
	memcpy_s(&ClearLobbyDestroyedDelegate_Params.LobbyDestroyedDelegate, 0x18, &LobbyDestroyedDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyDestroyedDelegate, &ClearLobbyDestroyedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyDestroyedDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate)
{
	static UFunction* uFnAddLobbyDestroyedDelegate = nullptr;

	if (!uFnAddLobbyDestroyedDelegate)
	{
		uFnAddLobbyDestroyedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyDestroyedDelegate_Params AddLobbyDestroyedDelegate_Params;
	memcpy_s(&AddLobbyDestroyedDelegate_Params.LobbyDestroyedDelegate, 0x18, &LobbyDestroyedDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyDestroyedDelegate, &AddLobbyDestroyedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::OnLobbyDestroyed(uint8_t Reason, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnOnLobbyDestroyed = nullptr;

	if (!uFnOnLobbyDestroyed)
	{
		uFnOnLobbyDestroyed = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyDestroyed_Params OnLobbyDestroyed_Params;
	memcpy_s(&OnLobbyDestroyed_Params.Reason, 0x1, &Reason, 0x1);
	memcpy_s(&OnLobbyDestroyed_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnOnLobbyDestroyed, &OnLobbyDestroyed_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &OnLobbyDestroyed_Params.LobbyId, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate)
{
	static UFunction* uFnClearLobbyInviteDelegate = nullptr;

	if (!uFnClearLobbyInviteDelegate)
	{
		uFnClearLobbyInviteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyInviteDelegate_Params ClearLobbyInviteDelegate_Params;
	memcpy_s(&ClearLobbyInviteDelegate_Params.LobbyInviteDelegate, 0x18, &LobbyInviteDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyInviteDelegate, &ClearLobbyInviteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate)
{
	static UFunction* uFnAddLobbyInviteDelegate = nullptr;

	if (!uFnAddLobbyInviteDelegate)
	{
		uFnAddLobbyInviteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyInviteDelegate_Params AddLobbyInviteDelegate_Params;
	memcpy_s(&AddLobbyInviteDelegate_Params.LobbyInviteDelegate, 0x18, &LobbyInviteDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyInviteDelegate, &AddLobbyInviteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAccepted                      (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            FriendId                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyInvite(unsigned long bAccepted, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& FriendId)
{
	static UFunction* uFnOnLobbyInvite = nullptr;

	if (!uFnOnLobbyInvite)
	{
		uFnOnLobbyInvite = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyInvite_Params OnLobbyInvite_Params;
	OnLobbyInvite_Params.bAccepted = bAccepted;
	memcpy_s(&OnLobbyInvite_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&OnLobbyInvite_Params.FriendId, 0x48, &FriendId, 0x48);

	this->ProcessEvent(uFnOnLobbyInvite, &OnLobbyInvite_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &OnLobbyInvite_Params.LobbyId, 0x10);
	memcpy_s(&FriendId, 0x48, &OnLobbyInvite_Params.FriendId, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnInviteToLobby = nullptr;

	if (!uFnInviteToLobby)
	{
		uFnInviteToLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby");
	}

	UOnlineLobbyInterfaceImpl_execInviteToLobby_Params InviteToLobby_Params;
	memcpy_s(&InviteToLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&InviteToLobby_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnInviteToLobby, &InviteToLobby_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &InviteToLobby_Params.LobbyId, 0x10);
	memcpy_s(&PlayerID, 0x48, &InviteToLobby_Params.PlayerID, 0x48);

	return InviteToLobby_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CanInviteToLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnCanInviteToLobby = nullptr;

	if (!uFnCanInviteToLobby)
	{
		uFnCanInviteToLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.CanInviteToLobby");
	}

	UOnlineLobbyInterfaceImpl_execCanInviteToLobby_Params CanInviteToLobby_Params;
	memcpy_s(&CanInviteToLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&CanInviteToLobby_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnCanInviteToLobby, &CanInviteToLobby_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &CanInviteToLobby_Params.LobbyId, 0x10);
	memcpy_s(&PlayerID, 0x48, &CanInviteToLobby_Params.PlayerID, 0x48);

	return CanInviteToLobby_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner)
{
	static UFunction* uFnSetLobbyOwner = nullptr;

	if (!uFnSetLobbyOwner)
	{
		uFnSetLobbyOwner = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner");
	}

	UOnlineLobbyInterfaceImpl_execSetLobbyOwner_Params SetLobbyOwner_Params;
	memcpy_s(&SetLobbyOwner_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyOwner_Params.NewOwner, 0x48, &NewOwner, 0x48);

	this->ProcessEvent(uFnSetLobbyOwner, &SetLobbyOwner_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SetLobbyOwner_Params.LobbyId, 0x10);
	memcpy_s(&NewOwner, 0x48, &SetLobbyOwner_Params.NewOwner, 0x48);

	return SetLobbyOwner_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bLocked                        (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyLock = nullptr;

	if (!uFnSetLobbyLock)
	{
		uFnSetLobbyLock = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock");
	}

	UOnlineLobbyInterfaceImpl_execSetLobbyLock_Params SetLobbyLock_Params;
	SetLobbyLock_Params.bLocked = bLocked;
	memcpy_s(&SetLobbyLock_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnSetLobbyLock, &SetLobbyLock_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SetLobbyLock_Params.LobbyId, 0x10);

	return SetLobbyLock_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::SetLobbyServer(class FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSetLobbyServer = nullptr;

	if (!uFnSetLobbyServer)
	{
		uFnSetLobbyServer = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer");
	}

	UOnlineLobbyInterfaceImpl_execSetLobbyServer_Params SetLobbyServer_Params;
	memcpy_s(&SetLobbyServer_Params.ServerIP, 0x10, &ServerIP, 0x10);
	memcpy_s(&SetLobbyServer_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyServer_Params.ServerUID, 0x48, &ServerUID, 0x48);

	this->ProcessEvent(uFnSetLobbyServer, &SetLobbyServer_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SetLobbyServer_Params.LobbyId, 0x10);
	memcpy_s(&ServerUID, 0x48, &SetLobbyServer_Params.ServerUID, 0x48);

	return SetLobbyServer_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::RemoveLobbySetting(class FString Key, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnRemoveLobbySetting = nullptr;

	if (!uFnRemoveLobbySetting)
	{
		uFnRemoveLobbySetting = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting");
	}

	UOnlineLobbyInterfaceImpl_execRemoveLobbySetting_Params RemoveLobbySetting_Params;
	memcpy_s(&RemoveLobbySetting_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&RemoveLobbySetting_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnRemoveLobbySetting, &RemoveLobbySetting_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &RemoveLobbySetting_Params.LobbyId, 0x10);

	return RemoveLobbySetting_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SetLobbySetting(class FString Key, class FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbySetting = nullptr;

	if (!uFnSetLobbySetting)
	{
		uFnSetLobbySetting = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting");
	}

	UOnlineLobbyInterfaceImpl_execSetLobbySetting_Params SetLobbySetting_Params;
	memcpy_s(&SetLobbySetting_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbySetting_Params.Value, 0x10, &Value, 0x10);
	memcpy_s(&SetLobbySetting_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnSetLobbySetting, &SetLobbySetting_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SetLobbySetting_Params.LobbyId, 0x10);

	return SetLobbySetting_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId)
{
	static UFunction* uFnGetLobbyAdmin = nullptr;

	if (!uFnGetLobbyAdmin)
	{
		uFnGetLobbyAdmin = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin");
	}

	UOnlineLobbyInterfaceImpl_execGetLobbyAdmin_Params GetLobbyAdmin_Params;
	memcpy_s(&GetLobbyAdmin_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&GetLobbyAdmin_Params.AdminId, 0x48, &AdminId, 0x48);

	this->ProcessEvent(uFnGetLobbyAdmin, &GetLobbyAdmin_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &GetLobbyAdmin_Params.LobbyId, 0x10);
	memcpy_s(&AdminId, 0x48, &GetLobbyAdmin_Params.AdminId, 0x48);

	return GetLobbyAdmin_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate)
{
	static UFunction* uFnClearLobbyJoinGameDelegate = nullptr;

	if (!uFnClearLobbyJoinGameDelegate)
	{
		uFnClearLobbyJoinGameDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyJoinGameDelegate_Params ClearLobbyJoinGameDelegate_Params;
	memcpy_s(&ClearLobbyJoinGameDelegate_Params.LobbyJoinGameDelegate, 0x18, &LobbyJoinGameDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyJoinGameDelegate, &ClearLobbyJoinGameDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate)
{
	static UFunction* uFnAddLobbyJoinGameDelegate = nullptr;

	if (!uFnAddLobbyJoinGameDelegate)
	{
		uFnAddLobbyJoinGameDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyJoinGameDelegate_Params AddLobbyJoinGameDelegate_Params;
	memcpy_s(&AddLobbyJoinGameDelegate_Params.LobbyJoinGameDelegate, 0x18, &LobbyJoinGameDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyJoinGameDelegate, &AddLobbyJoinGameDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            ServerId                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyJoinGameDelegates(int32_t LobbyIndex, class FString ServerIP, struct FUniqueNetId& ServerId)
{
	static UFunction* uFnTriggerLobbyJoinGameDelegates = nullptr;

	if (!uFnTriggerLobbyJoinGameDelegates)
	{
		uFnTriggerLobbyJoinGameDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyJoinGameDelegates_Params TriggerLobbyJoinGameDelegates_Params;
	memcpy_s(&TriggerLobbyJoinGameDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyJoinGameDelegates_Params.ServerIP, 0x10, &ServerIP, 0x10);
	memcpy_s(&TriggerLobbyJoinGameDelegates_Params.ServerId, 0x48, &ServerId, 0x48);

	this->ProcessEvent(uFnTriggerLobbyJoinGameDelegates, &TriggerLobbyJoinGameDelegates_Params, nullptr);

	memcpy_s(&ServerId, 0x48, &TriggerLobbyJoinGameDelegates_Params.ServerId, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FUniqueNetId            ServerId                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyJoinGame(class FString ServerIP, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueNetId& ServerId)
{
	static UFunction* uFnOnLobbyJoinGame = nullptr;

	if (!uFnOnLobbyJoinGame)
	{
		uFnOnLobbyJoinGame = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyJoinGame_Params OnLobbyJoinGame_Params;
	memcpy_s(&OnLobbyJoinGame_Params.ServerIP, 0x10, &ServerIP, 0x10);
	memcpy_s(&OnLobbyJoinGame_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&OnLobbyJoinGame_Params.ServerId, 0x48, &ServerId, 0x48);

	this->ProcessEvent(uFnOnLobbyJoinGame, &OnLobbyJoinGame_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnLobbyJoinGame_Params.LobbyInfo, 0x30);
	memcpy_s(&ServerId, 0x48, &OnLobbyJoinGame_Params.ServerId, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate)
{
	static UFunction* uFnClearLobbyReceiveBinaryDataDelegate = nullptr;

	if (!uFnClearLobbyReceiveBinaryDataDelegate)
	{
		uFnClearLobbyReceiveBinaryDataDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyReceiveBinaryDataDelegate_Params ClearLobbyReceiveBinaryDataDelegate_Params;
	memcpy_s(&ClearLobbyReceiveBinaryDataDelegate_Params.LobbyReceiveBinaryDataDelegate, 0x18, &LobbyReceiveBinaryDataDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyReceiveBinaryDataDelegate, &ClearLobbyReceiveBinaryDataDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate)
{
	static UFunction* uFnAddLobbyReceiveBinaryDataDelegate = nullptr;

	if (!uFnAddLobbyReceiveBinaryDataDelegate)
	{
		uFnAddLobbyReceiveBinaryDataDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyReceiveBinaryDataDelegate_Params AddLobbyReceiveBinaryDataDelegate_Params;
	memcpy_s(&AddLobbyReceiveBinaryDataDelegate_Params.LobbyReceiveBinaryDataDelegate, 0x18, &LobbyReceiveBinaryDataDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyReceiveBinaryDataDelegate, &AddLobbyReceiveBinaryDataDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyReceiveBinaryDataDelegates(int32_t LobbyIndex, int32_t MemberIndex)
{
	static UFunction* uFnTriggerLobbyReceiveBinaryDataDelegates = nullptr;

	if (!uFnTriggerLobbyReceiveBinaryDataDelegates)
	{
		uFnTriggerLobbyReceiveBinaryDataDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveBinaryDataDelegates_Params TriggerLobbyReceiveBinaryDataDelegates_Params;
	memcpy_s(&TriggerLobbyReceiveBinaryDataDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyReceiveBinaryDataDelegates_Params.MemberIndex, 0x4, &MemberIndex, 0x4);

	this->ProcessEvent(uFnTriggerLobbyReceiveBinaryDataDelegates, &TriggerLobbyReceiveBinaryDataDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        MemberIndex                    (CPF_Parm)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<uint8_t>                Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveBinaryData(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<uint8_t>& Data)
{
	static UFunction* uFnOnLobbyReceiveBinaryData = nullptr;

	if (!uFnOnLobbyReceiveBinaryData)
	{
		uFnOnLobbyReceiveBinaryData = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyReceiveBinaryData_Params OnLobbyReceiveBinaryData_Params;
	memcpy_s(&OnLobbyReceiveBinaryData_Params.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&OnLobbyReceiveBinaryData_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&OnLobbyReceiveBinaryData_Params.Data, 0x10, &Data, 0x10);

	this->ProcessEvent(uFnOnLobbyReceiveBinaryData, &OnLobbyReceiveBinaryData_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnLobbyReceiveBinaryData_Params.LobbyInfo, 0x30);
	memcpy_s(&Data, 0x10, &OnLobbyReceiveBinaryData_Params.Data, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<uint8_t>                Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<uint8_t>& Data)
{
	static UFunction* uFnSendLobbyBinaryData = nullptr;

	if (!uFnSendLobbyBinaryData)
	{
		uFnSendLobbyBinaryData = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData");
	}

	UOnlineLobbyInterfaceImpl_execSendLobbyBinaryData_Params SendLobbyBinaryData_Params;
	memcpy_s(&SendLobbyBinaryData_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SendLobbyBinaryData_Params.Data, 0x10, &Data, 0x10);

	this->ProcessEvent(uFnSendLobbyBinaryData, &SendLobbyBinaryData_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SendLobbyBinaryData_Params.LobbyId, 0x10);
	memcpy_s(&Data, 0x10, &SendLobbyBinaryData_Params.Data, 0x10);

	return SendLobbyBinaryData_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate)
{
	static UFunction* uFnClearLobbyReceiveMessageDelegate = nullptr;

	if (!uFnClearLobbyReceiveMessageDelegate)
	{
		uFnClearLobbyReceiveMessageDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyReceiveMessageDelegate_Params ClearLobbyReceiveMessageDelegate_Params;
	memcpy_s(&ClearLobbyReceiveMessageDelegate_Params.LobbyReceiveMessageDelegate, 0x18, &LobbyReceiveMessageDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyReceiveMessageDelegate, &ClearLobbyReceiveMessageDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate)
{
	static UFunction* uFnAddLobbyReceiveMessageDelegate = nullptr;

	if (!uFnAddLobbyReceiveMessageDelegate)
	{
		uFnAddLobbyReceiveMessageDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyReceiveMessageDelegate_Params AddLobbyReceiveMessageDelegate_Params;
	memcpy_s(&AddLobbyReceiveMessageDelegate_Params.LobbyReceiveMessageDelegate, 0x18, &LobbyReceiveMessageDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyReceiveMessageDelegate, &AddLobbyReceiveMessageDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyReceiveMessageDelegates(int32_t LobbyIndex, int32_t MemberIndex, class FString Type, class FString Message)
{
	static UFunction* uFnTriggerLobbyReceiveMessageDelegates = nullptr;

	if (!uFnTriggerLobbyReceiveMessageDelegates)
	{
		uFnTriggerLobbyReceiveMessageDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveMessageDelegates_Params TriggerLobbyReceiveMessageDelegates_Params;
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.Type, 0x10, &Type, 0x10);
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnTriggerLobbyReceiveMessageDelegates, &TriggerLobbyReceiveMessageDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        MemberIndex                    (CPF_Parm)
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveMessage(int32_t MemberIndex, class FString Type, class FString Message, struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* uFnOnLobbyReceiveMessage = nullptr;

	if (!uFnOnLobbyReceiveMessage)
	{
		uFnOnLobbyReceiveMessage = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyReceiveMessage_Params OnLobbyReceiveMessage_Params;
	memcpy_s(&OnLobbyReceiveMessage_Params.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&OnLobbyReceiveMessage_Params.Type, 0x10, &Type, 0x10);
	memcpy_s(&OnLobbyReceiveMessage_Params.Message, 0x10, &Message, 0x10);
	memcpy_s(&OnLobbyReceiveMessage_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);

	this->ProcessEvent(uFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnLobbyReceiveMessage_Params.LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SendLobbyMessage(class FString Message, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSendLobbyMessage = nullptr;

	if (!uFnSendLobbyMessage)
	{
		uFnSendLobbyMessage = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage");
	}

	UOnlineLobbyInterfaceImpl_execSendLobbyMessage_Params SendLobbyMessage_Params;
	memcpy_s(&SendLobbyMessage_Params.Message, 0x10, &Message, 0x10);
	memcpy_s(&SendLobbyMessage_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnSendLobbyMessage, &SendLobbyMessage_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SendLobbyMessage_Params.LobbyId, 0x10);

	return SendLobbyMessage_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate)
{
	static UFunction* uFnClearLobbyMemberStatusUpdateDelegate = nullptr;

	if (!uFnClearLobbyMemberStatusUpdateDelegate)
	{
		uFnClearLobbyMemberStatusUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyMemberStatusUpdateDelegate_Params ClearLobbyMemberStatusUpdateDelegate_Params;
	memcpy_s(&ClearLobbyMemberStatusUpdateDelegate_Params.LobbyMemberStatusUpdateDelegate, 0x18, &LobbyMemberStatusUpdateDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyMemberStatusUpdateDelegate, &ClearLobbyMemberStatusUpdateDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate)
{
	static UFunction* uFnAddLobbyMemberStatusUpdateDelegate = nullptr;

	if (!uFnAddLobbyMemberStatusUpdateDelegate)
	{
		uFnAddLobbyMemberStatusUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyMemberStatusUpdateDelegate_Params AddLobbyMemberStatusUpdateDelegate_Params;
	memcpy_s(&AddLobbyMemberStatusUpdateDelegate_Params.LobbyMemberStatusUpdateDelegate, 0x18, &LobbyMemberStatusUpdateDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyMemberStatusUpdateDelegate, &AddLobbyMemberStatusUpdateDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// int32_t                        InstigatorIndex                (CPF_Parm)
// class FString                  Status                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyMemberStatusUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, class FString Status)
{
	static UFunction* uFnTriggerLobbyMemberStatusUpdateDelegates = nullptr;

	if (!uFnTriggerLobbyMemberStatusUpdateDelegates)
	{
		uFnTriggerLobbyMemberStatusUpdateDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberStatusUpdateDelegates_Params TriggerLobbyMemberStatusUpdateDelegates_Params;
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.InstigatorIndex, 0x4, &InstigatorIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.Status, 0x10, &Status, 0x10);

	this->ProcessEvent(uFnTriggerLobbyMemberStatusUpdateDelegates, &TriggerLobbyMemberStatusUpdateDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        MemberIndex                    (CPF_Parm)
// int32_t                        InstigatorIndex                (CPF_Parm)
// class FString                  Status                         (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyMemberStatusUpdate(int32_t MemberIndex, int32_t InstigatorIndex, class FString Status, struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* uFnOnLobbyMemberStatusUpdate = nullptr;

	if (!uFnOnLobbyMemberStatusUpdate)
	{
		uFnOnLobbyMemberStatusUpdate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyMemberStatusUpdate_Params OnLobbyMemberStatusUpdate_Params;
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.InstigatorIndex, 0x4, &InstigatorIndex, 0x4);
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.Status, 0x10, &Status, 0x10);
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);

	this->ProcessEvent(uFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnLobbyMemberStatusUpdate_Params.LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate)
{
	static UFunction* uFnClearLobbyMemberSettingsUpdateDelegate = nullptr;

	if (!uFnClearLobbyMemberSettingsUpdateDelegate)
	{
		uFnClearLobbyMemberSettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbyMemberSettingsUpdateDelegate_Params ClearLobbyMemberSettingsUpdateDelegate_Params;
	memcpy_s(&ClearLobbyMemberSettingsUpdateDelegate_Params.LobbyMemberSettingsUpdateDelegate, 0x18, &LobbyMemberSettingsUpdateDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbyMemberSettingsUpdateDelegate, &ClearLobbyMemberSettingsUpdateDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate)
{
	static UFunction* uFnAddLobbyMemberSettingsUpdateDelegate = nullptr;

	if (!uFnAddLobbyMemberSettingsUpdateDelegate)
	{
		uFnAddLobbyMemberSettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbyMemberSettingsUpdateDelegate_Params AddLobbyMemberSettingsUpdateDelegate_Params;
	memcpy_s(&AddLobbyMemberSettingsUpdateDelegate_Params.LobbyMemberSettingsUpdateDelegate, 0x18, &LobbyMemberSettingsUpdateDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbyMemberSettingsUpdateDelegate, &AddLobbyMemberSettingsUpdateDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyMemberSettingsUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex)
{
	static UFunction* uFnTriggerLobbyMemberSettingsUpdateDelegates = nullptr;

	if (!uFnTriggerLobbyMemberSettingsUpdateDelegates)
	{
		uFnTriggerLobbyMemberSettingsUpdateDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberSettingsUpdateDelegates_Params TriggerLobbyMemberSettingsUpdateDelegates_Params;
	memcpy_s(&TriggerLobbyMemberSettingsUpdateDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberSettingsUpdateDelegates_Params.MemberIndex, 0x4, &MemberIndex, 0x4);

	this->ProcessEvent(uFnTriggerLobbyMemberSettingsUpdateDelegates, &TriggerLobbyMemberSettingsUpdateDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        MemberIndex                    (CPF_Parm)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyMemberSettingsUpdate(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* uFnOnLobbyMemberSettingsUpdate = nullptr;

	if (!uFnOnLobbyMemberSettingsUpdate)
	{
		uFnOnLobbyMemberSettingsUpdate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbyMemberSettingsUpdate_Params OnLobbyMemberSettingsUpdate_Params;
	memcpy_s(&OnLobbyMemberSettingsUpdate_Params.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&OnLobbyMemberSettingsUpdate_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);

	this->ProcessEvent(uFnOnLobbyMemberSettingsUpdate, &OnLobbyMemberSettingsUpdate_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnLobbyMemberSettingsUpdate_Params.LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate)
{
	static UFunction* uFnClearLobbySettingsUpdateDelegate = nullptr;

	if (!uFnClearLobbySettingsUpdateDelegate)
	{
		uFnClearLobbySettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearLobbySettingsUpdateDelegate_Params ClearLobbySettingsUpdateDelegate_Params;
	memcpy_s(&ClearLobbySettingsUpdateDelegate_Params.LobbySettingsUpdateDelegate, 0x18, &LobbySettingsUpdateDelegate, 0x18);

	this->ProcessEvent(uFnClearLobbySettingsUpdateDelegate, &ClearLobbySettingsUpdateDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate)
{
	static UFunction* uFnAddLobbySettingsUpdateDelegate = nullptr;

	if (!uFnAddLobbySettingsUpdateDelegate)
	{
		uFnAddLobbySettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddLobbySettingsUpdateDelegate_Params AddLobbySettingsUpdateDelegate_Params;
	memcpy_s(&AddLobbySettingsUpdateDelegate_Params.LobbySettingsUpdateDelegate, 0x18, &LobbySettingsUpdateDelegate, 0x18);

	this->ProcessEvent(uFnAddLobbySettingsUpdateDelegate, &AddLobbySettingsUpdateDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LobbyIndex                     (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbySettingsUpdateDelegates(int32_t LobbyIndex)
{
	static UFunction* uFnTriggerLobbySettingsUpdateDelegates = nullptr;

	if (!uFnTriggerLobbySettingsUpdateDelegates)
	{
		uFnTriggerLobbySettingsUpdateDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbySettingsUpdateDelegates_Params TriggerLobbySettingsUpdateDelegates_Params;
	memcpy_s(&TriggerLobbySettingsUpdateDelegates_Params.LobbyIndex, 0x4, &LobbyIndex, 0x4);

	this->ProcessEvent(uFnTriggerLobbySettingsUpdateDelegates, &TriggerLobbySettingsUpdateDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbySettingsUpdate(struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* uFnOnLobbySettingsUpdate = nullptr;

	if (!uFnOnLobbySettingsUpdate)
	{
		uFnOnLobbySettingsUpdate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate");
	}

	UOnlineLobbyInterfaceImpl_execOnLobbySettingsUpdate_Params OnLobbySettingsUpdate_Params;
	memcpy_s(&OnLobbySettingsUpdate_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);

	this->ProcessEvent(uFnOnLobbySettingsUpdate, &OnLobbySettingsUpdate_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnLobbySettingsUpdate_Params.LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyUserSetting(class FString Key, class FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyUserSetting = nullptr;

	if (!uFnSetLobbyUserSetting)
	{
		uFnSetLobbyUserSetting = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting");
	}

	UOnlineLobbyInterfaceImpl_execSetLobbyUserSetting_Params SetLobbyUserSetting_Params;
	memcpy_s(&SetLobbyUserSetting_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbyUserSetting_Params.Value, 0x10, &Value, 0x10);
	memcpy_s(&SetLobbyUserSetting_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnSetLobbyUserSetting, &SetLobbyUserSetting_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &SetLobbyUserSetting_Params.LobbyId, 0x10);

	return SetLobbyUserSetting_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::LeaveLobby(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnLeaveLobby = nullptr;

	if (!uFnLeaveLobby)
	{
		uFnLeaveLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby");
	}

	UOnlineLobbyInterfaceImpl_execLeaveLobby_Params LeaveLobby_Params;
	memcpy_s(&LeaveLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnLeaveLobby, &LeaveLobby_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &LeaveLobby_Params.LobbyId, 0x10);

	return LeaveLobby_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate)
{
	static UFunction* uFnClearJoinLobbyCompleteDelegate = nullptr;

	if (!uFnClearJoinLobbyCompleteDelegate)
	{
		uFnClearJoinLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearJoinLobbyCompleteDelegate_Params ClearJoinLobbyCompleteDelegate_Params;
	memcpy_s(&ClearJoinLobbyCompleteDelegate_Params.JoinLobbyCompleteDelegate, 0x18, &JoinLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearJoinLobbyCompleteDelegate, &ClearJoinLobbyCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate)
{
	static UFunction* uFnAddJoinLobbyCompleteDelegate = nullptr;

	if (!uFnAddJoinLobbyCompleteDelegate)
	{
		uFnAddJoinLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddJoinLobbyCompleteDelegate_Params AddJoinLobbyCompleteDelegate_Params;
	memcpy_s(&AddJoinLobbyCompleteDelegate_Params.JoinLobbyCompleteDelegate, 0x18, &JoinLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddJoinLobbyCompleteDelegate, &AddJoinLobbyCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyUID                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::eventTriggerJoinLobbyCompleteDelegates(unsigned long bWasSuccessful, class FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID)
{
	static UFunction* uFnTriggerJoinLobbyCompleteDelegates = nullptr;

	if (!uFnTriggerJoinLobbyCompleteDelegates)
	{
		uFnTriggerJoinLobbyCompleteDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerJoinLobbyCompleteDelegates_Params TriggerJoinLobbyCompleteDelegates_Params;
	TriggerJoinLobbyCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Params.Error, 0x10, &Error, 0x10);
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Params.LobbyUID, 0x10, &LobbyUID, 0x10);

	this->ProcessEvent(uFnTriggerJoinLobbyCompleteDelegates, &TriggerJoinLobbyCompleteDelegates_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &TriggerJoinLobbyCompleteDelegates_Params.LobbyInfo, 0x30);
	memcpy_s(&LobbyUID, 0x10, &TriggerJoinLobbyCompleteDelegates_Params.LobbyUID, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyUID                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::OnJoinLobbyComplete(unsigned long bWasSuccessful, class FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID)
{
	static UFunction* uFnOnJoinLobbyComplete = nullptr;

	if (!uFnOnJoinLobbyComplete)
	{
		uFnOnJoinLobbyComplete = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete");
	}

	UOnlineLobbyInterfaceImpl_execOnJoinLobbyComplete_Params OnJoinLobbyComplete_Params;
	OnJoinLobbyComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnJoinLobbyComplete_Params.Error, 0x10, &Error, 0x10);
	memcpy_s(&OnJoinLobbyComplete_Params.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&OnJoinLobbyComplete_Params.LobbyUID, 0x10, &LobbyUID, 0x10);

	this->ProcessEvent(uFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Params, nullptr);

	memcpy_s(&LobbyInfo, 0x30, &OnJoinLobbyComplete_Params.LobbyInfo, 0x30);
	memcpy_s(&LobbyUID, 0x10, &OnJoinLobbyComplete_Params.LobbyUID, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnJoinLobby = nullptr;

	if (!uFnJoinLobby)
	{
		uFnJoinLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby");
	}

	UOnlineLobbyInterfaceImpl_execJoinLobby_Params JoinLobby_Params;
	memcpy_s(&JoinLobby_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&JoinLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnJoinLobby, &JoinLobby_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &JoinLobby_Params.LobbyId, 0x10);

	return JoinLobby_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate)
{
	static UFunction* uFnClearFindLobbiesCompleteDelegate = nullptr;

	if (!uFnClearFindLobbiesCompleteDelegate)
	{
		uFnClearFindLobbiesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearFindLobbiesCompleteDelegate_Params ClearFindLobbiesCompleteDelegate_Params;
	memcpy_s(&ClearFindLobbiesCompleteDelegate_Params.FindLobbiesCompleteDelegate, 0x18, &FindLobbiesCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearFindLobbiesCompleteDelegate, &ClearFindLobbiesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate)
{
	static UFunction* uFnAddFindLobbiesCompleteDelegate = nullptr;

	if (!uFnAddFindLobbiesCompleteDelegate)
	{
		uFnAddFindLobbiesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddFindLobbiesCompleteDelegate_Params AddFindLobbiesCompleteDelegate_Params;
	memcpy_s(&AddFindLobbiesCompleteDelegate_Params.FindLobbiesCompleteDelegate, 0x18, &FindLobbiesCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddFindLobbiesCompleteDelegate, &AddFindLobbiesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerFindLobbiesCompleteDelegates(unsigned long bWasSuccessful)
{
	static UFunction* uFnTriggerFindLobbiesCompleteDelegates = nullptr;

	if (!uFnTriggerFindLobbiesCompleteDelegates)
	{
		uFnTriggerFindLobbiesCompleteDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates");
	}

	UOnlineLobbyInterfaceImpl_eventTriggerFindLobbiesCompleteDelegates_Params TriggerFindLobbiesCompleteDelegates_Params;
	TriggerFindLobbiesCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnTriggerFindLobbiesCompleteDelegates, &TriggerFindLobbiesCompleteDelegates_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// TArray<struct FBasicLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnFindLobbiesComplete(unsigned long bWasSuccessful, TArray<struct FBasicLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnFindLobbiesComplete = nullptr;

	if (!uFnOnFindLobbiesComplete)
	{
		uFnOnFindLobbiesComplete = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete");
	}

	UOnlineLobbyInterfaceImpl_execOnFindLobbiesComplete_Params OnFindLobbiesComplete_Params;
	OnFindLobbiesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnFindLobbiesComplete_Params.LobbyList, 0x10, &LobbyList, 0x10);

	this->ProcessEvent(uFnOnFindLobbiesComplete, &OnFindLobbiesComplete_Params, nullptr);

	memcpy_s(&LobbyList, 0x10, &OnFindLobbiesComplete_Params.LobbyList, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceImpl::UpdateFoundLobbies(struct FUniqueLobbyId LobbyId)
{
	static UFunction* uFnUpdateFoundLobbies = nullptr;

	if (!uFnUpdateFoundLobbies)
	{
		uFnUpdateFoundLobbies = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies");
	}

	UOnlineLobbyInterfaceImpl_execUpdateFoundLobbies_Params UpdateFoundLobbies_Params;
	memcpy_s(&UpdateFoundLobbies_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnUpdateFoundLobbies, &UpdateFoundLobbies_Params, nullptr);

	return UpdateFoundLobbies_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MinSlots                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        Distance                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceImpl::FindLobbies(int32_t MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int32_t MinSlots, uint8_t Distance)
{
	static UFunction* uFnFindLobbies = nullptr;

	if (!uFnFindLobbies)
	{
		uFnFindLobbies = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies");
	}

	UOnlineLobbyInterfaceImpl_execFindLobbies_Params FindLobbies_Params;
	memcpy_s(&FindLobbies_Params.MaxResults, 0x4, &MaxResults, 0x4);
	memcpy_s(&FindLobbies_Params.Filters, 0x10, &Filters, 0x10);
	memcpy_s(&FindLobbies_Params.SortFilters, 0x10, &SortFilters, 0x10);
	memcpy_s(&FindLobbies_Params.MinSlots, 0x4, &MinSlots, 0x4);
	memcpy_s(&FindLobbies_Params.Distance, 0x1, &Distance, 0x1);

	this->ProcessEvent(uFnFindLobbies, &FindLobbies_Params, nullptr);

	return FindLobbies_Params.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate)
{
	static UFunction* uFnClearCreateLobbyCompleteDelegate = nullptr;

	if (!uFnClearCreateLobbyCompleteDelegate)
	{
		uFnClearCreateLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execClearCreateLobbyCompleteDelegate_Params ClearCreateLobbyCompleteDelegate_Params;
	memcpy_s(&ClearCreateLobbyCompleteDelegate_Params.CreateLobbyCompleteDelegate, 0x18, &CreateLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearCreateLobbyCompleteDelegate, &ClearCreateLobbyCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate)
{
	static UFunction* uFnAddCreateLobbyCompleteDelegate = nullptr;

	if (!uFnAddCreateLobbyCompleteDelegate)
	{
		uFnAddCreateLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate");
	}

	UOnlineLobbyInterfaceImpl_execAddCreateLobbyCompleteDelegate_Params AddCreateLobbyCompleteDelegate_Params;
	memcpy_s(&AddCreateLobbyCompleteDelegate_Params.CreateLobbyCompleteDelegate, 0x18, &CreateLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddCreateLobbyCompleteDelegate, &AddCreateLobbyCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::OnCreateLobbyComplete(unsigned long bWasSuccessful, class FString Error, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnOnCreateLobbyComplete = nullptr;

	if (!uFnOnCreateLobbyComplete)
	{
		uFnOnCreateLobbyComplete = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete");
	}

	UOnlineLobbyInterfaceImpl_execOnCreateLobbyComplete_Params OnCreateLobbyComplete_Params;
	OnCreateLobbyComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateLobbyComplete_Params.Error, 0x10, &Error, 0x10);
	memcpy_s(&OnCreateLobbyComplete_Params.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(uFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &OnCreateLobbyComplete_Params.LobbyId, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        MaxPlayers                     (CPF_Parm)
// uint8_t                        Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, uint8_t Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static UFunction* uFnCreateLobby = nullptr;

	if (!uFnCreateLobby)
	{
		uFnCreateLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby");
	}

	UOnlineLobbyInterfaceImpl_execCreateLobby_Params CreateLobby_Params;
	memcpy_s(&CreateLobby_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&CreateLobby_Params.MaxPlayers, 0x4, &MaxPlayers, 0x4);
	memcpy_s(&CreateLobby_Params.Type, 0x1, &Type, 0x1);
	memcpy_s(&CreateLobby_Params.InitialSettings, 0x10, &InitialSettings, 0x10);

	this->ProcessEvent(uFnCreateLobby, &CreateLobby_Params, nullptr);

	return CreateLobby_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AuthWithNintendoAccountToken
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  NintendoAccountToken           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceImpl::AuthWithNintendoAccountToken(uint8_t LocalUserNum, class FString& NintendoAccountToken)
{
	static UFunction* uFnAuthWithNintendoAccountToken = nullptr;

	if (!uFnAuthWithNintendoAccountToken)
	{
		uFnAuthWithNintendoAccountToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.AuthWithNintendoAccountToken");
	}

	UOnlinePersistentAuthInterfaceImpl_execAuthWithNintendoAccountToken_Params AuthWithNintendoAccountToken_Params;
	memcpy_s(&AuthWithNintendoAccountToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AuthWithNintendoAccountToken_Params.NintendoAccountToken, 0x10, &NintendoAccountToken, 0x10);

	this->ProcessEvent(uFnAuthWithNintendoAccountToken, &AuthWithNintendoAccountToken_Params, nullptr);

	memcpy_s(&NintendoAccountToken, 0x10, &AuthWithNintendoAccountToken_Params.NintendoAccountToken, 0x10);

	return AuthWithNintendoAccountToken_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetTimeUntilAuthExpiration
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

uint64_t UOnlinePersistentAuthInterfaceImpl::GetTimeUntilAuthExpiration(uint8_t LocalUserNum)
{
	static UFunction* uFnGetTimeUntilAuthExpiration = nullptr;

	if (!uFnGetTimeUntilAuthExpiration)
	{
		uFnGetTimeUntilAuthExpiration = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetTimeUntilAuthExpiration");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetTimeUntilAuthExpiration_Params GetTimeUntilAuthExpiration_Params;
	memcpy_s(&GetTimeUntilAuthExpiration_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetTimeUntilAuthExpiration, &GetTimeUntilAuthExpiration_Params, nullptr);

	return GetTimeUntilAuthExpiration_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetAuthExpirationTimestamp
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDateTime*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UDateTime* UOnlinePersistentAuthInterfaceImpl::GetAuthExpirationTimestamp(uint8_t LocalUserNum)
{
	static UFunction* uFnGetAuthExpirationTimestamp = nullptr;

	if (!uFnGetAuthExpirationTimestamp)
	{
		uFnGetAuthExpirationTimestamp = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetAuthExpirationTimestamp");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetAuthExpirationTimestamp_Params GetAuthExpirationTimestamp_Params;
	memcpy_s(&GetAuthExpirationTimestamp_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetAuthExpirationTimestamp, &GetAuthExpirationTimestamp_Params, nullptr);

	return GetAuthExpirationTimestamp_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.LaunchAccountPortal
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceImpl::LaunchAccountPortal(uint8_t LocalUserNum)
{
	static UFunction* uFnLaunchAccountPortal = nullptr;

	if (!uFnLaunchAccountPortal)
	{
		uFnLaunchAccountPortal = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.LaunchAccountPortal");
	}

	UOnlinePersistentAuthInterfaceImpl_execLaunchAccountPortal_Params LaunchAccountPortal_Params;
	memcpy_s(&LaunchAccountPortal_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnLaunchAccountPortal, &LaunchAccountPortal_Params, nullptr);

	return LaunchAccountPortal_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientSecret
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceImpl::GetClientSecret()
{
	static UFunction* uFnGetClientSecret = nullptr;

	if (!uFnGetClientSecret)
	{
		uFnGetClientSecret = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientSecret");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetClientSecret_Params GetClientSecret_Params;

	this->ProcessEvent(uFnGetClientSecret, &GetClientSecret_Params, nullptr);

	return GetClientSecret_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientID
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceImpl::GetClientID()
{
	static UFunction* uFnGetClientID = nullptr;

	if (!uFnGetClientID)
	{
		uFnGetClientID = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientID");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetClientID_Params GetClientID_Params;

	this->ProcessEvent(uFnGetClientID, &GetClientID_Params, nullptr);

	return GetClientID_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientCredentials
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceImpl::GetClientCredentials()
{
	static UFunction* uFnGetClientCredentials = nullptr;

	if (!uFnGetClientCredentials)
	{
		uFnGetClientCredentials = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientCredentials");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetClientCredentials_Params GetClientCredentials_Params;

	this->ProcessEvent(uFnGetClientCredentials, &GetClientCredentials_Params, nullptr);

	return GetClientCredentials_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetContinuanceToken
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePersistentAuthInterfaceImpl::GetContinuanceToken(uint8_t LocalUserNum)
{
	static UFunction* uFnGetContinuanceToken = nullptr;

	if (!uFnGetContinuanceToken)
	{
		uFnGetContinuanceToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetContinuanceToken");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetContinuanceToken_Params GetContinuanceToken_Params;
	memcpy_s(&GetContinuanceToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetContinuanceToken, &GetContinuanceToken_Params, nullptr);

	return GetContinuanceToken_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.UseRefreshToken
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  RefreshToken                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceImpl::UseRefreshToken(uint8_t LocalUserNum, class FString RefreshToken)
{
	static UFunction* uFnUseRefreshToken = nullptr;

	if (!uFnUseRefreshToken)
	{
		uFnUseRefreshToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.UseRefreshToken");
	}

	UOnlinePersistentAuthInterfaceImpl_execUseRefreshToken_Params UseRefreshToken_Params;
	memcpy_s(&UseRefreshToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UseRefreshToken_Params.RefreshToken, 0x10, &RefreshToken, 0x10);

	this->ProcessEvent(uFnUseRefreshToken, &UseRefreshToken_Params, nullptr);

	return UseRefreshToken_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetRefreshToken
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePersistentAuthInterfaceImpl::GetRefreshToken(uint8_t LocalUserNum)
{
	static UFunction* uFnGetRefreshToken = nullptr;

	if (!uFnGetRefreshToken)
	{
		uFnGetRefreshToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetRefreshToken");
	}

	UOnlinePersistentAuthInterfaceImpl_execGetRefreshToken_Params GetRefreshToken_Params;
	memcpy_s(&GetRefreshToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetRefreshToken, &GetRefreshToken_Params, nullptr);

	return GetRefreshToken_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.RequestPinGrantCode
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceImpl::RequestPinGrantCode(uint8_t LocalUserNum)
{
	static UFunction* uFnRequestPinGrantCode = nullptr;

	if (!uFnRequestPinGrantCode)
	{
		uFnRequestPinGrantCode = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.RequestPinGrantCode");
	}

	UOnlinePersistentAuthInterfaceImpl_execRequestPinGrantCode_Params RequestPinGrantCode_Params;
	memcpy_s(&RequestPinGrantCode_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnRequestPinGrantCode, &RequestPinGrantCode_Params, nullptr);

	return RequestPinGrantCode_Params.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearUnderageUserDetectedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::ClearUnderageUserDetectedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnClearUnderageUserDetectedDelegate = nullptr;

	if (!uFnClearUnderageUserDetectedDelegate)
	{
		uFnClearUnderageUserDetectedDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearUnderageUserDetectedDelegate");
	}

	UOnlinePersistentAuthInterfaceImpl_execClearUnderageUserDetectedDelegate_Params ClearUnderageUserDetectedDelegate_Params;
	memcpy_s(&ClearUnderageUserDetectedDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnClearUnderageUserDetectedDelegate, &ClearUnderageUserDetectedDelegate_Params, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddUnderageUserDetectedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::AddUnderageUserDetectedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnAddUnderageUserDetectedDelegate = nullptr;

	if (!uFnAddUnderageUserDetectedDelegate)
	{
		uFnAddUnderageUserDetectedDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddUnderageUserDetectedDelegate");
	}

	UOnlinePersistentAuthInterfaceImpl_execAddUnderageUserDetectedDelegate_Params AddUnderageUserDetectedDelegate_Params;
	memcpy_s(&AddUnderageUserDetectedDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnAddUnderageUserDetectedDelegate, &AddUnderageUserDetectedDelegate_Params, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnUnderageUserDetected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  ParentalConsentURL             (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::OnUnderageUserDetected(uint8_t LocalUserNum, class FString ParentalConsentURL)
{
	static UFunction* uFnOnUnderageUserDetected = nullptr;

	if (!uFnOnUnderageUserDetected)
	{
		uFnOnUnderageUserDetected = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnUnderageUserDetected");
	}

	UOnlinePersistentAuthInterfaceImpl_execOnUnderageUserDetected_Params OnUnderageUserDetected_Params;
	memcpy_s(&OnUnderageUserDetected_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnUnderageUserDetected_Params.ParentalConsentURL, 0x10, &ParentalConsentURL, 0x10);

	this->ProcessEvent(uFnOnUnderageUserDetected, &OnUnderageUserDetected_Params, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearRequestPinGrantCodeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::ClearRequestPinGrantCodeDelegate(uint8_t LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* uFnClearRequestPinGrantCodeDelegate = nullptr;

	if (!uFnClearRequestPinGrantCodeDelegate)
	{
		uFnClearRequestPinGrantCodeDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearRequestPinGrantCodeDelegate");
	}

	UOnlinePersistentAuthInterfaceImpl_execClearRequestPinGrantCodeDelegate_Params ClearRequestPinGrantCodeDelegate_Params;
	memcpy_s(&ClearRequestPinGrantCodeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearRequestPinGrantCodeDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnClearRequestPinGrantCodeDelegate, &ClearRequestPinGrantCodeDelegate_Params, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddRequestPinGrantCodeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::AddRequestPinGrantCodeDelegate(uint8_t LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* uFnAddRequestPinGrantCodeDelegate = nullptr;

	if (!uFnAddRequestPinGrantCodeDelegate)
	{
		uFnAddRequestPinGrantCodeDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddRequestPinGrantCodeDelegate");
	}

	UOnlinePersistentAuthInterfaceImpl_execAddRequestPinGrantCodeDelegate_Params AddRequestPinGrantCodeDelegate_Params;
	memcpy_s(&AddRequestPinGrantCodeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddRequestPinGrantCodeDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnAddRequestPinGrantCodeDelegate, &AddRequestPinGrantCodeDelegate_Params, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnReceievedPinGrantCode
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Result                         (CPF_Parm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        SecondsUntilExpiration         (CPF_Parm)

void UOnlinePersistentAuthInterfaceImpl::OnReceievedPinGrantCode(uint8_t Result, uint8_t LocalUserNum, class FString Code, class FString URL, int32_t SecondsUntilExpiration)
{
	static UFunction* uFnOnReceievedPinGrantCode = nullptr;

	if (!uFnOnReceievedPinGrantCode)
	{
		uFnOnReceievedPinGrantCode = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnReceievedPinGrantCode");
	}

	UOnlinePersistentAuthInterfaceImpl_execOnReceievedPinGrantCode_Params OnReceievedPinGrantCode_Params;
	memcpy_s(&OnReceievedPinGrantCode_Params.Result, 0x1, &Result, 0x1);
	memcpy_s(&OnReceievedPinGrantCode_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnReceievedPinGrantCode_Params.Code, 0x10, &Code, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Params.URL, 0x10, &URL, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Params.SecondsUntilExpiration, 0x4, &SecondsUntilExpiration, 0x4);

	this->ProcessEvent(uFnOnReceievedPinGrantCode, &OnReceievedPinGrantCode_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<uint8_t>                Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParseDataCenterId(TArray<uint8_t>& Data)
{
	static UFunction* uFnParseDataCenterId = nullptr;

	if (!uFnParseDataCenterId)
	{
		uFnParseDataCenterId = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ParseDataCenterId");
	}

	UOnlinePlaylistManager_execParseDataCenterId_Params ParseDataCenterId_Params;
	memcpy_s(&ParseDataCenterId_Params.Data, 0x10, &Data, 0x10);

	uFnParseDataCenterId->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnParseDataCenterId, &ParseDataCenterId_Params, nullptr);

	uFnParseDataCenterId->FunctionFlags |= 0x400;

	memcpy_s(&Data, 0x10, &ParseDataCenterId_Params.Data, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(unsigned long bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnReadDataCenterIdComplete = nullptr;

	if (!uFnOnReadDataCenterIdComplete)
	{
		uFnOnReadDataCenterIdComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete");
	}

	UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Params OnReadDataCenterIdComplete_Params;
	OnReadDataCenterIdComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadDataCenterIdComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadDataCenterIdComplete, &OnReadDataCenterIdComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::ReadDataCenterId()
{
	static UFunction* uFnReadDataCenterId = nullptr;

	if (!uFnReadDataCenterId)
	{
		uFnReadDataCenterId = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ReadDataCenterId");
	}

	UOnlinePlaylistManager_execReadDataCenterId_Params ReadDataCenterId_Params;

	this->ProcessEvent(uFnReadDataCenterId, &ReadDataCenterId_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        NumPlayers                     (CPF_Parm)

void UOnlinePlaylistManager::eventSendPlaylistPopulationUpdate(int32_t NumPlayers)
{
	static UFunction* uFnSendPlaylistPopulationUpdate = nullptr;

	if (!uFnSendPlaylistPopulationUpdate)
	{
		uFnSendPlaylistPopulationUpdate = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate");
	}

	UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Params SendPlaylistPopulationUpdate_Params;
	memcpy_s(&SendPlaylistPopulationUpdate_Params.NumPlayers, 0x4, &NumPlayers, 0x4);

	this->ProcessEvent(uFnSendPlaylistPopulationUpdate, &SendPlaylistPopulationUpdate_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        WorldwideTotal                 (CPF_Parm | CPF_OutParm)
// int32_t                        RegionTotal                    (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int32_t PlaylistId, int32_t& WorldwideTotal, int32_t& RegionTotal)
{
	static UFunction* uFnGetPopulationInfoFromPlaylist = nullptr;

	if (!uFnGetPopulationInfoFromPlaylist)
	{
		uFnGetPopulationInfoFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist");
	}

	UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Params GetPopulationInfoFromPlaylist_Params;
	memcpy_s(&GetPopulationInfoFromPlaylist_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetPopulationInfoFromPlaylist_Params.WorldwideTotal, 0x4, &WorldwideTotal, 0x4);
	memcpy_s(&GetPopulationInfoFromPlaylist_Params.RegionTotal, 0x4, &RegionTotal, 0x4);

	this->ProcessEvent(uFnGetPopulationInfoFromPlaylist, &GetPopulationInfoFromPlaylist_Params, nullptr);

	memcpy_s(&WorldwideTotal, 0x4, &GetPopulationInfoFromPlaylist_Params.WorldwideTotal, 0x4);
	memcpy_s(&RegionTotal, 0x4, &GetPopulationInfoFromPlaylist_Params.RegionTotal, 0x4);
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<uint8_t>                Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParsePlaylistPopulationData(TArray<uint8_t>& Data)
{
	static UFunction* uFnParsePlaylistPopulationData = nullptr;

	if (!uFnParsePlaylistPopulationData)
	{
		uFnParsePlaylistPopulationData = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData");
	}

	UOnlinePlaylistManager_execParsePlaylistPopulationData_Params ParsePlaylistPopulationData_Params;
	memcpy_s(&ParsePlaylistPopulationData_Params.Data, 0x10, &Data, 0x10);

	uFnParsePlaylistPopulationData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnParsePlaylistPopulationData, &ParsePlaylistPopulationData_Params, nullptr);

	uFnParsePlaylistPopulationData->FunctionFlags |= 0x400;

	memcpy_s(&Data, 0x10, &ParsePlaylistPopulationData_Params.Data, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static UFunction* uFnOnPlaylistPopulationDataUpdated = nullptr;

	if (!uFnOnPlaylistPopulationDataUpdated)
	{
		uFnOnPlaylistPopulationDataUpdated = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated");
	}

	UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Params OnPlaylistPopulationDataUpdated_Params;

	this->ProcessEvent(uFnOnPlaylistPopulationDataUpdated, &OnPlaylistPopulationDataUpdated_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(unsigned long bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnReadPlaylistPopulationComplete = nullptr;

	if (!uFnOnReadPlaylistPopulationComplete)
	{
		uFnOnReadPlaylistPopulationComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete");
	}

	UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Params OnReadPlaylistPopulationComplete_Params;
	OnReadPlaylistPopulationComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadPlaylistPopulationComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadPlaylistPopulationComplete, &OnReadPlaylistPopulationComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::ReadPlaylistPopulation()
{
	static UFunction* uFnReadPlaylistPopulation = nullptr;

	if (!uFnReadPlaylistPopulation)
	{
		uFnReadPlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation");
	}

	UOnlinePlaylistManager_execReadPlaylistPopulation_Params ReadPlaylistPopulation_Params;

	this->ProcessEvent(uFnReadPlaylistPopulation, &ReadPlaylistPopulation_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.Reset");
	}

	UOnlinePlaylistManager_execReset_Params Reset_Params;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlaylistId                     (CPF_Parm)
// TArray<int32_t>                ContentIds                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int32_t PlaylistId, TArray<int32_t>& ContentIds)
{
	static UFunction* uFnGetContentIdsFromPlaylist = nullptr;

	if (!uFnGetContentIdsFromPlaylist)
	{
		uFnGetContentIdsFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist");
	}

	UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Params GetContentIdsFromPlaylist_Params;
	memcpy_s(&GetContentIdsFromPlaylist_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetContentIdsFromPlaylist_Params.ContentIds, 0x10, &ContentIds, 0x10);

	this->ProcessEvent(uFnGetContentIdsFromPlaylist, &GetContentIdsFromPlaylist_Params, nullptr);

	memcpy_s(&ContentIds, 0x10, &GetContentIdsFromPlaylist_Params.ContentIds, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlaylistId                     (CPF_Parm)
// TArray<struct FName>           MapCycle                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int32_t PlaylistId, TArray<struct FName>& MapCycle)
{
	static UFunction* uFnGetMapCycleFromPlaylist = nullptr;

	if (!uFnGetMapCycleFromPlaylist)
	{
		uFnGetMapCycleFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist");
	}

	UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Params GetMapCycleFromPlaylist_Params;
	memcpy_s(&GetMapCycleFromPlaylist_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetMapCycleFromPlaylist_Params.MapCycle, 0x10, &MapCycle, 0x10);

	this->ProcessEvent(uFnGetMapCycleFromPlaylist, &GetMapCycleFromPlaylist_Params, nullptr);

	memcpy_s(&MapCycle, 0x10, &GetMapCycleFromPlaylist_Params.MapCycle, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        PlaylistId                     (CPF_Parm)

class FString UOnlinePlaylistManager::GetUrlFromPlaylist(int32_t PlaylistId)
{
	static UFunction* uFnGetUrlFromPlaylist = nullptr;

	if (!uFnGetUrlFromPlaylist)
	{
		uFnGetUrlFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist");
	}

	UOnlinePlaylistManager_execGetUrlFromPlaylist_Params GetUrlFromPlaylist_Params;
	memcpy_s(&GetUrlFromPlaylist_Params.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(uFnGetUrlFromPlaylist, &GetUrlFromPlaylist_Params, nullptr);

	return GetUrlFromPlaylist_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

int32_t UOnlinePlaylistManager::GetMatchType(int32_t PlaylistId)
{
	static UFunction* uFnGetMatchType = nullptr;

	if (!uFnGetMatchType)
	{
		uFnGetMatchType = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetMatchType");
	}

	UOnlinePlaylistManager_execGetMatchType_Params GetMatchType_Params;
	memcpy_s(&GetMatchType_Params.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(uFnGetMatchType, &GetMatchType_Params, nullptr);

	return GetMatchType_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int32_t PlaylistId)
{
	static UFunction* uFnIsPlaylistArbitrated = nullptr;

	if (!uFnIsPlaylistArbitrated)
	{
		uFnIsPlaylistArbitrated = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated");
	}

	UOnlinePlaylistManager_execIsPlaylistArbitrated_Params IsPlaylistArbitrated_Params;
	memcpy_s(&IsPlaylistArbitrated_Params.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(uFnIsPlaylistArbitrated, &IsPlaylistArbitrated_Params, nullptr);

	return IsPlaylistArbitrated_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        LoadBalanceId                  (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int32_t PlaylistId, int32_t& LoadBalanceId)
{
	static UFunction* uFnGetLoadBalanceIdFromPlaylist = nullptr;

	if (!uFnGetLoadBalanceIdFromPlaylist)
	{
		uFnGetLoadBalanceIdFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist");
	}

	UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Params GetLoadBalanceIdFromPlaylist_Params;
	memcpy_s(&GetLoadBalanceIdFromPlaylist_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetLoadBalanceIdFromPlaylist_Params.LoadBalanceId, 0x4, &LoadBalanceId, 0x4);

	this->ProcessEvent(uFnGetLoadBalanceIdFromPlaylist, &GetLoadBalanceIdFromPlaylist_Params, nullptr);

	memcpy_s(&LoadBalanceId, 0x4, &GetLoadBalanceIdFromPlaylist_Params.LoadBalanceId, 0x4);
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        TeamSize                       (CPF_Parm | CPF_OutParm)
// int32_t                        TeamCount                      (CPF_Parm | CPF_OutParm)
// int32_t                        MaxPartySize                   (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int32_t PlaylistId, int32_t& TeamSize, int32_t& TeamCount, int32_t& MaxPartySize)
{
	static UFunction* uFnGetTeamInfoFromPlaylist = nullptr;

	if (!uFnGetTeamInfoFromPlaylist)
	{
		uFnGetTeamInfoFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist");
	}

	UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Params GetTeamInfoFromPlaylist_Params;
	memcpy_s(&GetTeamInfoFromPlaylist_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetTeamInfoFromPlaylist_Params.TeamSize, 0x4, &TeamSize, 0x4);
	memcpy_s(&GetTeamInfoFromPlaylist_Params.TeamCount, 0x4, &TeamCount, 0x4);
	memcpy_s(&GetTeamInfoFromPlaylist_Params.MaxPartySize, 0x4, &MaxPartySize, 0x4);

	this->ProcessEvent(uFnGetTeamInfoFromPlaylist, &GetTeamInfoFromPlaylist_Params, nullptr);

	memcpy_s(&TeamSize, 0x4, &GetTeamInfoFromPlaylist_Params.TeamSize, 0x4);
	memcpy_s(&TeamCount, 0x4, &GetTeamInfoFromPlaylist_Params.TeamCount, 0x4);
	memcpy_s(&MaxPartySize, 0x4, &GetTeamInfoFromPlaylist_Params.MaxPartySize, 0x4);
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int32_t PlaylistId)
{
	static UFunction* uFnPlaylistSupportsDedicatedServers = nullptr;

	if (!uFnPlaylistSupportsDedicatedServers)
	{
		uFnPlaylistSupportsDedicatedServers = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers");
	}

	UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Params PlaylistSupportsDedicatedServers_Params;
	memcpy_s(&PlaylistSupportsDedicatedServers_Params.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(uFnPlaylistSupportsDedicatedServers, &PlaylistSupportsDedicatedServers_Params, nullptr);

	return PlaylistSupportsDedicatedServers_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::HasAnyGameSettings(int32_t PlaylistId)
{
	static UFunction* uFnHasAnyGameSettings = nullptr;

	if (!uFnHasAnyGameSettings)
	{
		uFnHasAnyGameSettings = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings");
	}

	UOnlinePlaylistManager_execHasAnyGameSettings_Params HasAnyGameSettings_Params;
	memcpy_s(&HasAnyGameSettings_Params.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(uFnHasAnyGameSettings, &HasAnyGameSettings_Params, nullptr);

	return HasAnyGameSettings_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        GameSettingsId                 (CPF_Parm)

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings(int32_t PlaylistId, int32_t GameSettingsId)
{
	static UFunction* uFnGetGameSettings = nullptr;

	if (!uFnGetGameSettings)
	{
		uFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetGameSettings");
	}

	UOnlinePlaylistManager_execGetGameSettings_Params GetGameSettings_Params;
	memcpy_s(&GetGameSettings_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetGameSettings_Params.GameSettingsId, 0x4, &GameSettingsId, 0x4);

	this->ProcessEvent(uFnGetGameSettings, &GetGameSettings_Params, nullptr);

	return GetGameSettings_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static UFunction* uFnFinalizePlaylistObjects = nullptr;

	if (!uFnFinalizePlaylistObjects)
	{
		uFnFinalizePlaylistObjects = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects");
	}

	UOnlinePlaylistManager_execFinalizePlaylistObjects_Params FinalizePlaylistObjects_Params;

	uFnFinalizePlaylistObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFinalizePlaylistObjects, &FinalizePlaylistObjects_Params, nullptr);

	uFnFinalizePlaylistObjects->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadTitleFileComplete(unsigned long bWasSuccessful, class FString Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete");
	}

	UOnlinePlaylistManager_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static UFunction* uFnShouldRefreshPlaylists = nullptr;

	if (!uFnShouldRefreshPlaylists)
	{
		uFnShouldRefreshPlaylists = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists");
	}

	UOnlinePlaylistManager_execShouldRefreshPlaylists_Params ShouldRefreshPlaylists_Params;

	uFnShouldRefreshPlaylists->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShouldRefreshPlaylists, &ShouldRefreshPlaylists_Params, nullptr);

	uFnShouldRefreshPlaylists->FunctionFlags |= 0x400;

	return ShouldRefreshPlaylists_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static UFunction* uFnDetermineFilesToDownload = nullptr;

	if (!uFnDetermineFilesToDownload)
	{
		uFnDetermineFilesToDownload = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload");
	}

	UOnlinePlaylistManager_execDetermineFilesToDownload_Params DetermineFilesToDownload_Params;

	uFnDetermineFilesToDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDetermineFilesToDownload, &DetermineFilesToDownload_Params, nullptr);

	uFnDetermineFilesToDownload->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::DownloadPlaylist()
{
	static UFunction* uFnDownloadPlaylist = nullptr;

	if (!uFnDownloadPlaylist)
	{
		uFnDownloadPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.DownloadPlaylist");
	}

	UOnlinePlaylistManager_execDownloadPlaylist_Params DownloadPlaylist_Params;

	this->ProcessEvent(uFnDownloadPlaylist, &DownloadPlaylist_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlaylistManager::OnReadPlaylistComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadPlaylistComplete = nullptr;

	if (!uFnOnReadPlaylistComplete)
	{
		uFnOnReadPlaylistComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete");
	}

	UOnlinePlaylistManager_execOnReadPlaylistComplete_Params OnReadPlaylistComplete_Params;
	OnReadPlaylistComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlaylistComplete, &OnReadPlaylistComplete_Params, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceImpl::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnClearMicroTxnResponseDelegate = nullptr;

	if (!uFnClearMicroTxnResponseDelegate)
	{
		uFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate");
	}

	UOnlinePurchaseInterfaceImpl_execClearMicroTxnResponseDelegate_Params ClearMicroTxnResponseDelegate_Params;
	memcpy_s(&ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(uFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceImpl::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnAddMicroTxnResponseDelegate = nullptr;

	if (!uFnAddMicroTxnResponseDelegate)
	{
		uFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate");
	}

	UOnlinePurchaseInterfaceImpl_execAddMicroTxnResponseDelegate_Params AddMicroTxnResponseDelegate_Params;
	memcpy_s(&AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(uFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAuthorized                    (CPF_Parm)
// uint64_t                       OrderId                        (CPF_Parm)

void UOnlinePurchaseInterfaceImpl::OnMicroTxnResponse(unsigned long bAuthorized, uint64_t OrderId)
{
	static UFunction* uFnOnMicroTxnResponse = nullptr;

	if (!uFnOnMicroTxnResponse)
	{
		uFnOnMicroTxnResponse = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse");
	}

	UOnlinePurchaseInterfaceImpl_execOnMicroTxnResponse_Params OnMicroTxnResponse_Params;
	OnMicroTxnResponse_Params.bAuthorized = bAuthorized;
	OnMicroTxnResponse_Params.OrderId = OrderId;

	this->ProcessEvent(uFnOnMicroTxnResponse, &OnMicroTxnResponse_Params, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Price                          (CPF_Parm)

class FString UOnlinePurchaseInterfaceImpl::FormatCurrency(class FString Currency, int32_t Price)
{
	static UFunction* uFnFormatCurrency = nullptr;

	if (!uFnFormatCurrency)
	{
		uFnFormatCurrency = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency");
	}

	UOnlinePurchaseInterfaceImpl_execFormatCurrency_Params FormatCurrency_Params;
	memcpy_s(&FormatCurrency_Params.Currency, 0x10, &Currency, 0x10);
	memcpy_s(&FormatCurrency_Params.Price, 0x4, &Price, 0x4);

	this->ProcessEvent(uFnFormatCurrency, &FormatCurrency_Params, nullptr);

	return FormatCurrency_Params.ReturnValue;
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceImpl::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* uFnGetAppPriceInfo = nullptr;

	if (!uFnGetAppPriceInfo)
	{
		uFnGetAppPriceInfo = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo");
	}

	UOnlinePurchaseInterfaceImpl_execGetAppPriceInfo_Params GetAppPriceInfo_Params;
	memcpy_s(&GetAppPriceInfo_Params.Callback, 0x18, &Callback, 0x18);
	memcpy_s(&GetAppPriceInfo_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAppPriceInfo_Params.AppNames, 0x10, &AppNames, 0x10);

	this->ProcessEvent(uFnGetAppPriceInfo, &GetAppPriceInfo_Params, nullptr);

	memcpy_s(&PlayerID, 0x48, &GetAppPriceInfo_Params.PlayerID, 0x48);
	memcpy_s(&AppNames, 0x10, &GetAppPriceInfo_Params.AppNames, 0x10);

	return GetAppPriceInfo_Params.ReturnValue;
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   AppName                        (CPF_Parm)
// class FString                  Price                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DiscountPrice                  (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        DiscountPercentage             (CPF_Parm)

void UOnlinePurchaseInterfaceImpl::EventGetAppPriceInfoComplete(struct FName AppName, class FString Price, class FString DiscountPrice, int32_t DiscountPercentage)
{
	static UFunction* uFnEventGetAppPriceInfoComplete = nullptr;

	if (!uFnEventGetAppPriceInfoComplete)
	{
		uFnEventGetAppPriceInfoComplete = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete");
	}

	UOnlinePurchaseInterfaceImpl_execEventGetAppPriceInfoComplete_Params EventGetAppPriceInfoComplete_Params;
	memcpy_s(&EventGetAppPriceInfoComplete_Params.AppName, 0x8, &AppName, 0x8);
	memcpy_s(&EventGetAppPriceInfoComplete_Params.Price, 0x10, &Price, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Params.DiscountPrice, 0x10, &DiscountPrice, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Params.DiscountPercentage, 0x4, &DiscountPercentage, 0x4);

	this->ProcessEvent(uFnEventGetAppPriceInfoComplete, &EventGetAppPriceInfoComplete_Params, nullptr);
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeacon::OnDestroyComplete()
{
	static UFunction* uFnOnDestroyComplete = nullptr;

	if (!uFnOnDestroyComplete)
	{
		uFnOnDestroyComplete = UFunction::FindFunction("Function IpDrv.PartyBeacon.OnDestroyComplete");
	}

	UPartyBeacon_execOnDestroyComplete_Params OnDestroyComplete_Params;

	this->ProcessEvent(uFnOnDestroyComplete, &OnDestroyComplete_Params, nullptr);
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UPartyBeacon::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeacon.DestroyBeacon");
	}

	UPartyBeacon_eventDestroyBeacon_Params DestroyBeacon_Params;

	uFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);

	uFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconClient::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.DestroyBeacon");
	}

	UPartyBeaconClient_eventDestroyBeacon_Params DestroyBeacon_Params;

	uFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);

	uFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            CancellingPartyLeader          (CPF_Parm | CPF_NeedCtorLink)

bool UPartyBeaconClient::CancelReservation(struct FUniqueNetId CancellingPartyLeader)
{
	static UFunction* uFnCancelReservation = nullptr;

	if (!uFnCancelReservation)
	{
		uFnCancelReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.CancelReservation");
	}

	UPartyBeaconClient_execCancelReservation_Params CancelReservation_Params;
	memcpy_s(&CancelReservation_Params.CancellingPartyLeader, 0x48, &CancellingPartyLeader, 0x48);

	uFnCancelReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCancelReservation, &CancelReservation_Params, nullptr);

	uFnCancelReservation->FunctionFlags |= 0x400;

	return CancelReservation_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<struct FPlayerReservation> PlayersToAdd                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UPartyBeaconClient::RequestReservationUpdate(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& PlayersToAdd)
{
	static UFunction* uFnRequestReservationUpdate = nullptr;

	if (!uFnRequestReservationUpdate)
	{
		uFnRequestReservationUpdate = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.RequestReservationUpdate");
	}

	UPartyBeaconClient_execRequestReservationUpdate_Params RequestReservationUpdate_Params;
	memcpy_s(&RequestReservationUpdate_Params.RequestingPartyLeader, 0x48, &RequestingPartyLeader, 0x48);
	memcpy_s(&RequestReservationUpdate_Params.DesiredHost, 0x10, &DesiredHost, 0x10);
	memcpy_s(&RequestReservationUpdate_Params.PlayersToAdd, 0x10, &PlayersToAdd, 0x10);

	uFnRequestReservationUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestReservationUpdate, &RequestReservationUpdate_Params, nullptr);

	uFnRequestReservationUpdate->FunctionFlags |= 0x400;

	memcpy_s(&DesiredHost, 0x10, &RequestReservationUpdate_Params.DesiredHost, 0x10);
	memcpy_s(&PlayersToAdd, 0x10, &RequestReservationUpdate_Params.PlayersToAdd, 0x10);

	return RequestReservationUpdate_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<struct FPlayerReservation> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UPartyBeaconClient::RequestReservation(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& Players)
{
	static UFunction* uFnRequestReservation = nullptr;

	if (!uFnRequestReservation)
	{
		uFnRequestReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.RequestReservation");
	}

	UPartyBeaconClient_execRequestReservation_Params RequestReservation_Params;
	memcpy_s(&RequestReservation_Params.RequestingPartyLeader, 0x48, &RequestingPartyLeader, 0x48);
	memcpy_s(&RequestReservation_Params.DesiredHost, 0x10, &DesiredHost, 0x10);
	memcpy_s(&RequestReservation_Params.Players, 0x10, &Players, 0x10);

	uFnRequestReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestReservation, &RequestReservation_Params, nullptr);

	uFnRequestReservation->FunctionFlags |= 0x400;

	memcpy_s(&DesiredHost, 0x10, &RequestReservation_Params.DesiredHost, 0x10);
	memcpy_s(&Players, 0x10, &RequestReservation_Params.Players, 0x10);

	return RequestReservation_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconClient::OnHostHasCancelled()
{
	static UFunction* uFnOnHostHasCancelled = nullptr;

	if (!uFnOnHostHasCancelled)
	{
		uFnOnHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostHasCancelled");
	}

	UPartyBeaconClient_execOnHostHasCancelled_Params OnHostHasCancelled_Params;

	this->ProcessEvent(uFnOnHostHasCancelled, &OnHostHasCancelled_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconClient::OnHostIsReady()
{
	static UFunction* uFnOnHostIsReady = nullptr;

	if (!uFnOnHostIsReady)
	{
		uFnOnHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostIsReady");
	}

	UPartyBeaconClient_execOnHostIsReady_Params OnHostIsReady_Params;

	this->ProcessEvent(uFnOnHostIsReady, &OnHostIsReady_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconClient::OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo)
{
	static UFunction* uFnOnTravelRequestReceived = nullptr;

	if (!uFnOnTravelRequestReceived)
	{
		uFnOnTravelRequestReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnTravelRequestReceived");
	}

	UPartyBeaconClient_execOnTravelRequestReceived_Params OnTravelRequestReceived_Params;
	memcpy_s(&OnTravelRequestReceived_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnTravelRequestReceived_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&OnTravelRequestReceived_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	this->ProcessEvent(uFnOnTravelRequestReceived, &OnTravelRequestReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReservationRemaining           (CPF_Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int32_t ReservationRemaining)
{
	static UFunction* uFnOnReservationCountUpdated = nullptr;

	if (!uFnOnReservationCountUpdated)
	{
		uFnOnReservationCountUpdated = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationCountUpdated");
	}

	UPartyBeaconClient_execOnReservationCountUpdated_Params OnReservationCountUpdated_Params;
	memcpy_s(&OnReservationCountUpdated_Params.ReservationRemaining, 0x4, &ReservationRemaining, 0x4);

	this->ProcessEvent(uFnOnReservationCountUpdated, &OnReservationCountUpdated_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReservationResult              (CPF_Parm)

void UPartyBeaconClient::OnReservationRequestComplete(uint8_t ReservationResult)
{
	static UFunction* uFnOnReservationRequestComplete = nullptr;

	if (!uFnOnReservationRequestComplete)
	{
		uFnOnReservationRequestComplete = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationRequestComplete");
	}

	UPartyBeaconClient_execOnReservationRequestComplete_Params OnReservationRequestComplete_Params;
	memcpy_s(&OnReservationRequestComplete_Params.ReservationResult, 0x1, &ReservationResult, 0x1);

	this->ProcessEvent(uFnOnReservationRequestComplete, &OnReservationRequestComplete_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static UFunction* uFnGetMaxAvailableTeamSize = nullptr;

	if (!uFnGetMaxAvailableTeamSize)
	{
		uFnGetMaxAvailableTeamSize = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize");
	}

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Params GetMaxAvailableTeamSize_Params;

	uFnGetMaxAvailableTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Params, nullptr);

	uFnGetMaxAvailableTeamSize->FunctionFlags |= 0x400;

	return GetMaxAvailableTeamSize_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FUniqueNetId>    PartyLeaders                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UPartyBeaconHost::GetPartyLeaders(TArray<struct FUniqueNetId>& PartyLeaders)
{
	static UFunction* uFnGetPartyLeaders = nullptr;

	if (!uFnGetPartyLeaders)
	{
		uFnGetPartyLeaders = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetPartyLeaders");
	}

	UPartyBeaconHost_execGetPartyLeaders_Params GetPartyLeaders_Params;
	memcpy_s(&GetPartyLeaders_Params.PartyLeaders, 0x10, &PartyLeaders, 0x10);

	this->ProcessEvent(uFnGetPartyLeaders, &GetPartyLeaders_Params, nullptr);

	memcpy_s(&PartyLeaders, 0x10, &GetPartyLeaders_Params.PartyLeaders, 0x10);
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UPartyBeaconHost::GetPlayers(TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnGetPlayers = nullptr;

	if (!uFnGetPlayers)
	{
		uFnGetPlayers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetPlayers");
	}

	UPartyBeaconHost_execGetPlayers_Params GetPlayers_Params;
	memcpy_s(&GetPlayers_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnGetPlayers, &GetPlayers_Params, nullptr);

	memcpy_s(&Players, 0x10, &GetPlayers_Params.Players, 0x10);
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSearch*       Search                         (CPF_Parm)

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static UFunction* uFnAppendReservationSkillsToSearch = nullptr;

	if (!uFnAppendReservationSkillsToSearch)
	{
		uFnAppendReservationSkillsToSearch = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch");
	}

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Params AppendReservationSkillsToSearch_Params;
	memcpy_s(&AppendReservationSkillsToSearch_Params.Search, 0x8, &Search, 0x8);

	uFnAppendReservationSkillsToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Params, nullptr);

	uFnAppendReservationSkillsToSearch->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)

void UPartyBeaconHost::eventUnregisterParty(struct FUniqueNetId PartyLeader)
{
	static UFunction* uFnUnregisterParty = nullptr;

	if (!uFnUnregisterParty)
	{
		uFnUnregisterParty = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UnregisterParty");
	}

	UPartyBeaconHost_eventUnregisterParty_Params UnregisterParty_Params;
	memcpy_s(&UnregisterParty_Params.PartyLeader, 0x48, &PartyLeader, 0x48);

	this->ProcessEvent(uFnUnregisterParty, &UnregisterParty_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::eventUnregisterPartyMembers()
{
	static UFunction* uFnUnregisterPartyMembers = nullptr;

	if (!uFnUnregisterPartyMembers)
	{
		uFnUnregisterPartyMembers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UnregisterPartyMembers");
	}

	UPartyBeaconHost_eventUnregisterPartyMembers_Params UnregisterPartyMembers_Params;

	this->ProcessEvent(uFnUnregisterPartyMembers, &UnregisterPartyMembers_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::eventRegisterPartyMembers()
{
	static UFunction* uFnRegisterPartyMembers = nullptr;

	if (!uFnRegisterPartyMembers)
	{
		uFnRegisterPartyMembers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.RegisterPartyMembers");
	}

	UPartyBeaconHost_eventRegisterPartyMembers_Params RegisterPartyMembers_Params;

	this->ProcessEvent(uFnRegisterPartyMembers, &RegisterPartyMembers_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UPartyBeaconHost::AreReservationsFull()
{
	static UFunction* uFnAreReservationsFull = nullptr;

	if (!uFnAreReservationsFull)
	{
		uFnAreReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AreReservationsFull");
	}

	UPartyBeaconHost_execAreReservationsFull_Params AreReservationsFull_Params;

	this->ProcessEvent(uFnAreReservationsFull, &AreReservationsFull_Params, nullptr);

	return AreReservationsFull_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static UFunction* uFnTellClientsHostHasCancelled = nullptr;

	if (!uFnTellClientsHostHasCancelled)
	{
		uFnTellClientsHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled");
	}

	UPartyBeaconHost_execTellClientsHostHasCancelled_Params TellClientsHostHasCancelled_Params;

	uFnTellClientsHostHasCancelled->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Params, nullptr);

	uFnTellClientsHostHasCancelled->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static UFunction* uFnTellClientsHostIsReady = nullptr;

	if (!uFnTellClientsHostIsReady)
	{
		uFnTellClientsHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsHostIsReady");
	}

	UPartyBeaconHost_execTellClientsHostIsReady_Params TellClientsHostIsReady_Params;

	uFnTellClientsHostIsReady->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTellClientsHostIsReady, &TellClientsHostIsReady_Params, nullptr);

	uFnTellClientsHostIsReady->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconHost::TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo)
{
	static UFunction* uFnTellClientsToTravel = nullptr;

	if (!uFnTellClientsToTravel)
	{
		uFnTellClientsToTravel = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsToTravel");
	}

	UPartyBeaconHost_execTellClientsToTravel_Params TellClientsToTravel_Params;
	memcpy_s(&TellClientsToTravel_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&TellClientsToTravel_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&TellClientsToTravel_Params.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	uFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTellClientsToTravel, &TellClientsToTravel_Params, nullptr);

	uFnTellClientsToTravel->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.DestroyBeacon");
	}

	UPartyBeaconHost_eventDestroyBeacon_Params DestroyBeacon_Params;

	uFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);

	uFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)

void UPartyBeaconHost::OnClientCancellationReceived(struct FUniqueNetId PartyLeader)
{
	static UFunction* uFnOnClientCancellationReceived = nullptr;

	if (!uFnOnClientCancellationReceived)
	{
		uFnOnClientCancellationReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnClientCancellationReceived");
	}

	UPartyBeaconHost_execOnClientCancellationReceived_Params OnClientCancellationReceived_Params;
	memcpy_s(&OnClientCancellationReceived_Params.PartyLeader, 0x48, &PartyLeader, 0x48);

	this->ProcessEvent(uFnOnClientCancellationReceived, &OnClientCancellationReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::OnReservationsFull()
{
	static UFunction* uFnOnReservationsFull = nullptr;

	if (!uFnOnReservationsFull)
	{
		uFnOnReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationsFull");
	}

	UPartyBeaconHost_execOnReservationsFull_Params OnReservationsFull_Params;

	this->ProcessEvent(uFnOnReservationsFull, &OnReservationsFull_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::OnReservationChange()
{
	static UFunction* uFnOnReservationChange = nullptr;

	if (!uFnOnReservationChange)
	{
		uFnOnReservationChange = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationChange");
	}

	UPartyBeaconHost_execOnReservationChange_Params OnReservationChange_Params;

	this->ProcessEvent(uFnOnReservationChange, &OnReservationChange_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bMaintainParty                 (CPF_Parm)

void UPartyBeaconHost::HandlePlayerLogout(struct FUniqueNetId PlayerID, unsigned long bMaintainParty)
{
	static UFunction* uFnHandlePlayerLogout = nullptr;

	if (!uFnHandlePlayerLogout)
	{
		uFnHandlePlayerLogout = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.HandlePlayerLogout");
	}

	UPartyBeaconHost_execHandlePlayerLogout_Params HandlePlayerLogout_Params;
	memcpy_s(&HandlePlayerLogout_Params.PlayerID, 0x48, &PlayerID, 0x48);
	HandlePlayerLogout_Params.bMaintainParty = bMaintainParty;

	uFnHandlePlayerLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandlePlayerLogout, &HandlePlayerLogout_Params, nullptr);

	uFnHandlePlayerLogout->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId& PartyLeader)
{
	static UFunction* uFnGetExistingReservation = nullptr;

	if (!uFnGetExistingReservation)
	{
		uFnGetExistingReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetExistingReservation");
	}

	UPartyBeaconHost_execGetExistingReservation_Params GetExistingReservation_Params;
	memcpy_s(&GetExistingReservation_Params.PartyLeader, 0x48, &PartyLeader, 0x48);

	uFnGetExistingReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetExistingReservation, &GetExistingReservation_Params, nullptr);

	uFnGetExistingReservation->FunctionFlags |= 0x400;

	memcpy_s(&PartyLeader, 0x48, &GetExistingReservation_Params.PartyLeader, 0x48);

	return GetExistingReservation_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UPartyBeaconHost::UpdatePartyReservationEntry(struct FUniqueNetId PartyLeader, TArray<struct FPlayerReservation>& PlayerMembers)
{
	static UFunction* uFnUpdatePartyReservationEntry = nullptr;

	if (!uFnUpdatePartyReservationEntry)
	{
		uFnUpdatePartyReservationEntry = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry");
	}

	UPartyBeaconHost_execUpdatePartyReservationEntry_Params UpdatePartyReservationEntry_Params;
	memcpy_s(&UpdatePartyReservationEntry_Params.PartyLeader, 0x48, &PartyLeader, 0x48);
	memcpy_s(&UpdatePartyReservationEntry_Params.PlayerMembers, 0x10, &PlayerMembers, 0x10);

	uFnUpdatePartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Params, nullptr);

	uFnUpdatePartyReservationEntry->FunctionFlags |= 0x400;

	memcpy_s(&PlayerMembers, 0x10, &UpdatePartyReservationEntry_Params.PlayerMembers, 0x10);

	return UpdatePartyReservationEntry_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        TeamNum                        (CPF_Parm)
// unsigned long                  bIsHost                        (CPF_Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UPartyBeaconHost::AddPartyReservationEntry(struct FUniqueNetId PartyLeader, int32_t TeamNum, unsigned long bIsHost, TArray<struct FPlayerReservation>& PlayerMembers)
{
	static UFunction* uFnAddPartyReservationEntry = nullptr;

	if (!uFnAddPartyReservationEntry)
	{
		uFnAddPartyReservationEntry = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AddPartyReservationEntry");
	}

	UPartyBeaconHost_execAddPartyReservationEntry_Params AddPartyReservationEntry_Params;
	memcpy_s(&AddPartyReservationEntry_Params.PartyLeader, 0x48, &PartyLeader, 0x48);
	memcpy_s(&AddPartyReservationEntry_Params.TeamNum, 0x4, &TeamNum, 0x4);
	AddPartyReservationEntry_Params.bIsHost = bIsHost;
	memcpy_s(&AddPartyReservationEntry_Params.PlayerMembers, 0x10, &PlayerMembers, 0x10);

	uFnAddPartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddPartyReservationEntry, &AddPartyReservationEntry_Params, nullptr);

	uFnAddPartyReservationEntry->FunctionFlags |= 0x400;

	memcpy_s(&PlayerMembers, 0x10, &AddPartyReservationEntry_Params.PlayerMembers, 0x10);

	return AddPartyReservationEntry_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        InNumTeams                     (CPF_Parm)
// int32_t                        InNumPlayersPerTeam            (CPF_Parm)
// int32_t                        InNumReservations              (CPF_Parm)
// struct FName                   InSessionName                  (CPF_Parm)
// int32_t                        InForceTeamNum                 (CPF_OptionalParm | CPF_Parm)

bool UPartyBeaconHost::InitHostBeacon(int32_t InNumTeams, int32_t InNumPlayersPerTeam, int32_t InNumReservations, struct FName InSessionName, int32_t InForceTeamNum)
{
	static UFunction* uFnInitHostBeacon = nullptr;

	if (!uFnInitHostBeacon)
	{
		uFnInitHostBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.InitHostBeacon");
	}

	UPartyBeaconHost_execInitHostBeacon_Params InitHostBeacon_Params;
	memcpy_s(&InitHostBeacon_Params.InNumTeams, 0x4, &InNumTeams, 0x4);
	memcpy_s(&InitHostBeacon_Params.InNumPlayersPerTeam, 0x4, &InNumPlayersPerTeam, 0x4);
	memcpy_s(&InitHostBeacon_Params.InNumReservations, 0x4, &InNumReservations, 0x4);
	memcpy_s(&InitHostBeacon_Params.InSessionName, 0x8, &InSessionName, 0x8);
	memcpy_s(&InitHostBeacon_Params.InForceTeamNum, 0x4, &InForceTeamNum, 0x4);

	uFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitHostBeacon, &InitHostBeacon_Params, nullptr);

	uFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPause                         (CPF_Parm)

void UPartyBeaconHost::PauseReservationRequests(unsigned long bPause)
{
	static UFunction* uFnPauseReservationRequests = nullptr;

	if (!uFnPauseReservationRequests)
	{
		uFnPauseReservationRequests = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.PauseReservationRequests");
	}

	UPartyBeaconHost_execPauseReservationRequests_Params PauseReservationRequests_Params;
	PauseReservationRequests_Params.bPause = bPause;

	uFnPauseReservationRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPauseReservationRequests, &PauseReservationRequests_Params, nullptr);

	uFnPauseReservationRequests->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  D                              (CPF_Parm | CPF_NeedCtorLink)

int32_t UWebRequest::GetHexDigit(class FString D)
{
	static UFunction* uFnGetHexDigit = nullptr;

	if (!uFnGetHexDigit)
	{
		uFnGetHexDigit = UFunction::FindFunction("Function IpDrv.WebRequest.GetHexDigit");
	}

	UWebRequest_execGetHexDigit_Params GetHexDigit_Params;
	memcpy_s(&GetHexDigit_Params.D, 0x10, &D, 0x10);

	this->ProcessEvent(uFnGetHexDigit, &GetHexDigit_Params, nullptr);

	return GetHexDigit_Params.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Data                           (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::DecodeFormData(class FString Data)
{
	static UFunction* uFnDecodeFormData = nullptr;

	if (!uFnDecodeFormData)
	{
		uFnDecodeFormData = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeFormData");
	}

	UWebRequest_execDecodeFormData_Params DecodeFormData_Params;
	memcpy_s(&DecodeFormData_Params.Data, 0x10, &Data, 0x10);

	this->ProcessEvent(uFnDecodeFormData, &DecodeFormData_Params, nullptr);
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::ProcessHeaderString(class FString S)
{
	static UFunction* uFnProcessHeaderString = nullptr;

	if (!uFnProcessHeaderString)
	{
		uFnProcessHeaderString = UFunction::FindFunction("Function IpDrv.WebRequest.ProcessHeaderString");
	}

	UWebRequest_execProcessHeaderString_Params ProcessHeaderString_Params;
	memcpy_s(&ProcessHeaderString_Params.S, 0x10, &S, 0x10);

	this->ProcessEvent(uFnProcessHeaderString, &ProcessHeaderString_Params, nullptr);
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebRequest::Dump()
{
	static UFunction* uFnDump = nullptr;

	if (!uFnDump)
	{
		uFnDump = UFunction::FindFunction("Function IpDrv.WebRequest.Dump");
	}

	UWebRequest_execDump_Params Dump_Params;

	uFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDump, &Dump_Params, nullptr);

	uFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          varNames                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetVariables(TArray<class FString>& varNames)
{
	static UFunction* uFnGetVariables = nullptr;

	if (!uFnGetVariables)
	{
		uFnGetVariables = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariables");
	}

	UWebRequest_execGetVariables_Params GetVariables_Params;
	memcpy_s(&GetVariables_Params.varNames, 0x10, &varNames, 0x10);

	uFnGetVariables->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVariables, &GetVariables_Params, nullptr);

	uFnGetVariables->FunctionFlags |= 0x400;

	memcpy_s(&varNames, 0x10, &GetVariables_Params.varNames, 0x10);
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Number                         (CPF_Parm)
// class FString                  DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetVariableNumber(class FString VariableName, int32_t Number, class FString DefaultValue)
{
	static UFunction* uFnGetVariableNumber = nullptr;

	if (!uFnGetVariableNumber)
	{
		uFnGetVariableNumber = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableNumber");
	}

	UWebRequest_execGetVariableNumber_Params GetVariableNumber_Params;
	memcpy_s(&GetVariableNumber_Params.VariableName, 0x10, &VariableName, 0x10);
	memcpy_s(&GetVariableNumber_Params.Number, 0x4, &Number, 0x4);
	memcpy_s(&GetVariableNumber_Params.DefaultValue, 0x10, &DefaultValue, 0x10);

	uFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVariableNumber, &GetVariableNumber_Params, nullptr);

	uFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Params.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)

int32_t UWebRequest::GetVariableCount(class FString VariableName)
{
	static UFunction* uFnGetVariableCount = nullptr;

	if (!uFnGetVariableCount)
	{
		uFnGetVariableCount = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableCount");
	}

	UWebRequest_execGetVariableCount_Params GetVariableCount_Params;
	memcpy_s(&GetVariableCount_Params.VariableName, 0x10, &VariableName, 0x10);

	uFnGetVariableCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVariableCount, &GetVariableCount_Params, nullptr);

	uFnGetVariableCount->FunctionFlags |= 0x400;

	return GetVariableCount_Params.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetVariable(class FString VariableName, class FString DefaultValue)
{
	static UFunction* uFnGetVariable = nullptr;

	if (!uFnGetVariable)
	{
		uFnGetVariable = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariable");
	}

	UWebRequest_execGetVariable_Params GetVariable_Params;
	memcpy_s(&GetVariable_Params.VariableName, 0x10, &VariableName, 0x10);
	memcpy_s(&GetVariable_Params.DefaultValue, 0x10, &DefaultValue, 0x10);

	uFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVariable, &GetVariable_Params, nullptr);

	uFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Params.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddVariable(class FString VariableName, class FString Value)
{
	static UFunction* uFnAddVariable = nullptr;

	if (!uFnAddVariable)
	{
		uFnAddVariable = UFunction::FindFunction("Function IpDrv.WebRequest.AddVariable");
	}

	UWebRequest_execAddVariable_Params AddVariable_Params;
	memcpy_s(&AddVariable_Params.VariableName, 0x10, &VariableName, 0x10);
	memcpy_s(&AddVariable_Params.Value, 0x10, &Value, 0x10);

	uFnAddVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddVariable, &AddVariable_Params, nullptr);

	uFnAddVariable->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          Headers                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetHeaders(TArray<class FString>& Headers)
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeaders");
	}

	UWebRequest_execGetHeaders_Params GetHeaders_Params;
	memcpy_s(&GetHeaders_Params.Headers, 0x10, &Headers, 0x10);

	uFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);

	uFnGetHeaders->FunctionFlags |= 0x400;

	memcpy_s(&Headers, 0x10, &GetHeaders_Params.Headers, 0x10);
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetHeader(class FString HeaderName, class FString DefaultValue)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeader");
	}

	UWebRequest_execGetHeader_Params GetHeader_Params;
	memcpy_s(&GetHeader_Params.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&GetHeader_Params.DefaultValue, 0x10, &DefaultValue, 0x10);

	uFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);

	uFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Params.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddHeader(class FString HeaderName, class FString Value)
{
	static UFunction* uFnAddHeader = nullptr;

	if (!uFnAddHeader)
	{
		uFnAddHeader = UFunction::FindFunction("Function IpDrv.WebRequest.AddHeader");
	}

	UWebRequest_execAddHeader_Params AddHeader_Params;
	memcpy_s(&AddHeader_Params.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&AddHeader_Params.Value, 0x10, &Value, 0x10);

	uFnAddHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddHeader, &AddHeader_Params, nullptr);

	uFnAddHeader->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Decoded                        (CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::EncodeBase64(class FString Decoded)
{
	static UFunction* uFnEncodeBase64 = nullptr;

	if (!uFnEncodeBase64)
	{
		uFnEncodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.EncodeBase64");
	}

	UWebRequest_execEncodeBase64_Params EncodeBase64_Params;
	memcpy_s(&EncodeBase64_Params.Decoded, 0x10, &Decoded, 0x10);

	uFnEncodeBase64->FunctionFlags |= ~0x400;

	UWebRequest::StaticClass()->ProcessEvent(uFnEncodeBase64, &EncodeBase64_Params, nullptr);

	uFnEncodeBase64->FunctionFlags |= 0x400;

	return EncodeBase64_Params.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Encoded                        (CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::DecodeBase64(class FString Encoded)
{
	static UFunction* uFnDecodeBase64 = nullptr;

	if (!uFnDecodeBase64)
	{
		uFnDecodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeBase64");
	}

	UWebRequest_execDecodeBase64_Params DecodeBase64_Params;
	memcpy_s(&DecodeBase64_Params.Encoded, 0x10, &Encoded, 0x10);

	uFnDecodeBase64->FunctionFlags |= ~0x400;

	UWebRequest::StaticClass()->ProcessEvent(uFnDecodeBase64, &DecodeBase64_Params, nullptr);

	uFnDecodeBase64->FunctionFlags |= 0x400;

	return DecodeBase64_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentResponse()
{
	static UFunction* uFnSentResponse = nullptr;

	if (!uFnSentResponse)
	{
		uFnSentResponse = UFunction::FindFunction("Function IpDrv.WebResponse.SentResponse");
	}

	UWebResponse_execSentResponse_Params SentResponse_Params;

	this->ProcessEvent(uFnSentResponse, &SentResponse_Params, nullptr);

	return SentResponse_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentText()
{
	static UFunction* uFnSentText = nullptr;

	if (!uFnSentText)
	{
		uFnSentText = UFunction::FindFunction("Function IpDrv.WebResponse.SentText");
	}

	UWebResponse_execSentText_Params SentText_Params;

	this->ProcessEvent(uFnSentText, &SentText_Params, nullptr);

	return SentText_Params.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::Redirect(class FString URL)
{
	static UFunction* uFnRedirect = nullptr;

	if (!uFnRedirect)
	{
		uFnRedirect = UFunction::FindFunction("Function IpDrv.WebResponse.Redirect");
	}

	UWebResponse_execRedirect_Params Redirect_Params;
	memcpy_s(&Redirect_Params.URL, 0x10, &URL, 0x10);

	this->ProcessEvent(uFnRedirect, &Redirect_Params, nullptr);
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bCache                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::SendStandardHeaders(class FString ContentType, unsigned long bCache)
{
	static UFunction* uFnSendStandardHeaders = nullptr;

	if (!uFnSendStandardHeaders)
	{
		uFnSendStandardHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendStandardHeaders");
	}

	UWebResponse_execSendStandardHeaders_Params SendStandardHeaders_Params;
	memcpy_s(&SendStandardHeaders_Params.ContentType, 0x10, &ContentType, 0x10);
	SendStandardHeaders_Params.bCache = bCache;

	this->ProcessEvent(uFnSendStandardHeaders, &SendStandardHeaders_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ErrorNum                       (CPF_Parm)
// class FString                  Data                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPError(int32_t ErrorNum, class FString Data)
{
	static UFunction* uFnHTTPError = nullptr;

	if (!uFnHTTPError)
	{
		uFnHTTPError = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPError");
	}

	UWebResponse_execHTTPError_Params HTTPError_Params;
	memcpy_s(&HTTPError_Params.ErrorNum, 0x4, &ErrorNum, 0x4);
	memcpy_s(&HTTPError_Params.Data, 0x10, &Data, 0x10);

	this->ProcessEvent(uFnHTTPError, &HTTPError_Params, nullptr);
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebResponse::SendHeaders()
{
	static UFunction* uFnSendHeaders = nullptr;

	if (!uFnSendHeaders)
	{
		uFnSendHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendHeaders");
	}

	UWebResponse_execSendHeaders_Params SendHeaders_Params;

	this->ProcessEvent(uFnSendHeaders, &SendHeaders_Params, nullptr);
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Header                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bReplace                       (CPF_OptionalParm | CPF_Parm)

void UWebResponse::AddHeader(class FString Header, unsigned long bReplace)
{
	static UFunction* uFnAddHeader = nullptr;

	if (!uFnAddHeader)
	{
		uFnAddHeader = UFunction::FindFunction("Function IpDrv.WebResponse.AddHeader");
	}

	UWebResponse_execAddHeader_Params AddHeader_Params;
	memcpy_s(&AddHeader_Params.Header, 0x10, &Header, 0x10);
	AddHeader_Params.bReplace = bReplace;

	this->ProcessEvent(uFnAddHeader, &AddHeader_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPHeader(class FString Header)
{
	static UFunction* uFnHTTPHeader = nullptr;

	if (!uFnHTTPHeader)
	{
		uFnHTTPHeader = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPHeader");
	}

	UWebResponse_execHTTPHeader_Params HTTPHeader_Params;
	memcpy_s(&HTTPHeader_Params.Header, 0x10, &Header, 0x10);

	this->ProcessEvent(uFnHTTPHeader, &HTTPHeader_Params, nullptr);
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HttpResponse(class FString Header)
{
	static UFunction* uFnHttpResponse = nullptr;

	if (!uFnHttpResponse)
	{
		uFnHttpResponse = UFunction::FindFunction("Function IpDrv.WebResponse.HttpResponse");
	}

	UWebResponse_execHttpResponse_Params HttpResponse_Params;
	memcpy_s(&HttpResponse_Params.Header, 0x10, &Header, 0x10);

	this->ProcessEvent(uFnHttpResponse, &HttpResponse_Params, nullptr);
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Realm                          (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::FailAuthentication(class FString Realm)
{
	static UFunction* uFnFailAuthentication = nullptr;

	if (!uFnFailAuthentication)
	{
		uFnFailAuthentication = UFunction::FindFunction("Function IpDrv.WebResponse.FailAuthentication");
	}

	UWebResponse_execFailAuthentication_Params FailAuthentication_Params;
	memcpy_s(&FailAuthentication_Params.Realm, 0x10, &Realm, 0x10);

	this->ProcessEvent(uFnFailAuthentication, &FailAuthentication_Params, nullptr);
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::SendCachedFile(class FString Filename, class FString ContentType)
{
	static UFunction* uFnSendCachedFile = nullptr;

	if (!uFnSendCachedFile)
	{
		uFnSendCachedFile = UFunction::FindFunction("Function IpDrv.WebResponse.SendCachedFile");
	}

	UWebResponse_execSendCachedFile_Params SendCachedFile_Params;
	memcpy_s(&SendCachedFile_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&SendCachedFile_Params.ContentType, 0x10, &ContentType, 0x10);

	this->ProcessEvent(uFnSendCachedFile, &SendCachedFile_Params, nullptr);

	return SendCachedFile_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UWebResponse::eventSendBinary(int32_t Count, uint8_t B)
{
	static UFunction* uFnSendBinary = nullptr;

	if (!uFnSendBinary)
	{
		uFnSendBinary = UFunction::FindFunction("Function IpDrv.WebResponse.SendBinary");
	}

	UWebResponse_eventSendBinary_Params SendBinary_Params;
	memcpy_s(&SendBinary_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&SendBinary_Params.B, 0xFF, &B, 0xFF);

	this->ProcessEvent(uFnSendBinary, &SendBinary_Params, nullptr);
};

// Function IpDrv.WebResponse.SendText
// [0x00024803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bNoCRLF                        (CPF_OptionalParm | CPF_Parm)

void UWebResponse::eventSendText(class FString Text, unsigned long bNoCRLF)
{
	static UFunction* uFnSendText = nullptr;

	if (!uFnSendText)
	{
		uFnSendText = UFunction::FindFunction("Function IpDrv.WebResponse.SendText");
	}

	UWebResponse_eventSendText_Params SendText_Params;
	memcpy_s(&SendText_Params.Text, 0x10, &Text, 0x10);
	SendText_Params.bNoCRLF = bNoCRLF;

	this->ProcessEvent(uFnSendText, &SendText_Params, nullptr);
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebResponse::Dump()
{
	static UFunction* uFnDump = nullptr;

	if (!uFnDump)
	{
		uFnDump = UFunction::FindFunction("Function IpDrv.WebResponse.Dump");
	}

	UWebResponse_execDump_Params Dump_Params;

	uFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDump, &Dump_Params, nullptr);

	uFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        OffsetSeconds                  (CPF_OptionalParm | CPF_Parm)

class FString UWebResponse::GetHTTPExpiration(int32_t OffsetSeconds)
{
	static UFunction* uFnGetHTTPExpiration = nullptr;

	if (!uFnGetHTTPExpiration)
	{
		uFnGetHTTPExpiration = UFunction::FindFunction("Function IpDrv.WebResponse.GetHTTPExpiration");
	}

	UWebResponse_execGetHTTPExpiration_Params GetHTTPExpiration_Params;
	memcpy_s(&GetHTTPExpiration_Params.OffsetSeconds, 0x4, &OffsetSeconds, 0x4);

	uFnGetHTTPExpiration->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHTTPExpiration, &GetHTTPExpiration_Params, nullptr);

	uFnGetHTTPExpiration->FunctionFlags |= 0x400;

	return GetHTTPExpiration_Params.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UWebResponse::LoadParsedUHTM(class FString Filename)
{
	static UFunction* uFnLoadParsedUHTM = nullptr;

	if (!uFnLoadParsedUHTM)
	{
		uFnLoadParsedUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.LoadParsedUHTM");
	}

	UWebResponse_execLoadParsedUHTM_Params LoadParsedUHTM_Params;
	memcpy_s(&LoadParsedUHTM_Params.Filename, 0x10, &Filename, 0x10);

	uFnLoadParsedUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLoadParsedUHTM, &LoadParsedUHTM_Params, nullptr);

	uFnLoadParsedUHTM->FunctionFlags |= 0x400;

	return LoadParsedUHTM_Params.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeBinaryFile(class FString Filename)
{
	static UFunction* uFnIncludeBinaryFile = nullptr;

	if (!uFnIncludeBinaryFile)
	{
		uFnIncludeBinaryFile = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeBinaryFile");
	}

	UWebResponse_execIncludeBinaryFile_Params IncludeBinaryFile_Params;
	memcpy_s(&IncludeBinaryFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnIncludeBinaryFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIncludeBinaryFile, &IncludeBinaryFile_Params, nullptr);

	uFnIncludeBinaryFile->FunctionFlags |= 0x400;

	return IncludeBinaryFile_Params.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeUHTM(class FString Filename)
{
	static UFunction* uFnIncludeUHTM = nullptr;

	if (!uFnIncludeUHTM)
	{
		uFnIncludeUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeUHTM");
	}

	UWebResponse_execIncludeUHTM_Params IncludeUHTM_Params;
	memcpy_s(&IncludeUHTM_Params.Filename, 0x10, &Filename, 0x10);

	uFnIncludeUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIncludeUHTM, &IncludeUHTM_Params, nullptr);

	uFnIncludeUHTM->FunctionFlags |= 0x400;

	return IncludeUHTM_Params.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebResponse::ClearSubst()
{
	static UFunction* uFnClearSubst = nullptr;

	if (!uFnClearSubst)
	{
		uFnClearSubst = UFunction::FindFunction("Function IpDrv.WebResponse.ClearSubst");
	}

	UWebResponse_execClearSubst_Params ClearSubst_Params;

	uFnClearSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearSubst, &ClearSubst_Params, nullptr);

	uFnClearSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Variable                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bClear                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::Subst(class FString Variable, class FString Value, unsigned long bClear)
{
	static UFunction* uFnSubst = nullptr;

	if (!uFnSubst)
	{
		uFnSubst = UFunction::FindFunction("Function IpDrv.WebResponse.Subst");
	}

	UWebResponse_execSubst_Params Subst_Params;
	memcpy_s(&Subst_Params.Variable, 0x10, &Variable, 0x10);
	memcpy_s(&Subst_Params.Value, 0x10, &Value, 0x10);
	Subst_Params.bClear = bClear;

	uFnSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSubst, &Subst_Params, nullptr);

	uFnSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::FileExists(class FString Filename)
{
	static UFunction* uFnFileExists = nullptr;

	if (!uFnFileExists)
	{
		uFnFileExists = UFunction::FindFunction("Function IpDrv.WebResponse.FileExists");
	}

	UWebResponse_execFileExists_Params FileExists_Params;
	memcpy_s(&FileExists_Params.Filename, 0x10, &Filename, 0x10);

	uFnFileExists->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFileExists, &FileExists_Params, nullptr);

	uFnFileExists->FunctionFlags |= 0x400;

	return FileExists_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

int32_t UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId(int32_t PlaylistId)
{
	static UFunction* uFnGetMatchTypeForPlaylistId = nullptr;

	if (!uFnGetMatchTypeForPlaylistId)
	{
		uFnGetMatchTypeForPlaylistId = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId");
	}

	UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Params GetMatchTypeForPlaylistId_Params;
	memcpy_s(&GetMatchTypeForPlaylistId_Params.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(uFnGetMatchTypeForPlaylistId, &GetMatchTypeForPlaylistId_Params, nullptr);

	return GetMatchTypeForPlaylistId_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UOnlinePlaylistProvider* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderTag                    (CPF_Parm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        ProviderIndex                  (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider(struct FName ProviderTag, int32_t PlaylistId, int32_t& ProviderIndex)
{
	static UFunction* uFnGetOnlinePlaylistProvider = nullptr;

	if (!uFnGetOnlinePlaylistProvider)
	{
		uFnGetOnlinePlaylistProvider = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider");
	}

	UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Params GetOnlinePlaylistProvider_Params;
	memcpy_s(&GetOnlinePlaylistProvider_Params.ProviderTag, 0x8, &ProviderTag, 0x8);
	memcpy_s(&GetOnlinePlaylistProvider_Params.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetOnlinePlaylistProvider_Params.ProviderIndex, 0x4, &ProviderIndex, 0x4);

	UUIDataStore_OnlinePlaylists::StaticClass()->ProcessEvent(uFnGetOnlinePlaylistProvider, &GetOnlinePlaylistProvider_Params, nullptr);

	memcpy_s(&ProviderIndex, 0x4, &GetOnlinePlaylistProvider_Params.ProviderIndex, 0x4);

	return GetOnlinePlaylistProvider_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderTag                    (CPF_Parm)
// int32_t                        ProviderIndex                  (CPF_Parm)
// class UUIResourceDataProvider* out_Provider                   (CPF_Parm | CPF_OutParm)

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(struct FName ProviderTag, int32_t ProviderIndex, class UUIResourceDataProvider*& out_Provider)
{
	static UFunction* uFnGetPlaylistProvider = nullptr;

	if (!uFnGetPlaylistProvider)
	{
		uFnGetPlaylistProvider = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider");
	}

	UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Params GetPlaylistProvider_Params;
	memcpy_s(&GetPlaylistProvider_Params.ProviderTag, 0x8, &ProviderTag, 0x8);
	memcpy_s(&GetPlaylistProvider_Params.ProviderIndex, 0x4, &ProviderIndex, 0x4);
	memcpy_s(&GetPlaylistProvider_Params.out_Provider, 0x8, &out_Provider, 0x8);

	uFnGetPlaylistProvider->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPlaylistProvider, &GetPlaylistProvider_Params, nullptr);

	uFnGetPlaylistProvider->FunctionFlags |= 0x400;

	memcpy_s(&out_Provider, 0x8, &GetPlaylistProvider_Params.out_Provider, 0x8);

	return GetPlaylistProvider_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderTag                    (CPF_Parm)
// TArray<class UUIResourceDataProvider*> out_Providers                  (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UUIDataStore_OnlinePlaylists::GetResourceProviders(struct FName ProviderTag, TArray<class UUIResourceDataProvider*>& out_Providers)
{
	static UFunction* uFnGetResourceProviders = nullptr;

	if (!uFnGetResourceProviders)
	{
		uFnGetResourceProviders = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders");
	}

	UUIDataStore_OnlinePlaylists_execGetResourceProviders_Params GetResourceProviders_Params;
	memcpy_s(&GetResourceProviders_Params.ProviderTag, 0x8, &ProviderTag, 0x8);
	memcpy_s(&GetResourceProviders_Params.out_Providers, 0x10, &out_Providers, 0x10);

	uFnGetResourceProviders->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetResourceProviders, &GetResourceProviders_Params, nullptr);

	uFnGetResourceProviders->FunctionFlags |= 0x400;

	memcpy_s(&out_Providers, 0x10, &GetResourceProviders_Params.out_Providers, 0x10);

	return GetResourceProviders_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UUIDataStore_OnlinePlaylists::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.Init");
	}

	UUIDataStore_OnlinePlaylists_eventInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnPostQuery = nullptr;

	if (!uFnPostQuery)
	{
		uFnPostQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PostQuery");
	}

	UWebApplication_execPostQuery_Params PostQuery_Params;
	memcpy_s(&PostQuery_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&PostQuery_Params.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(uFnPostQuery, &PostQuery_Params, nullptr);
};

// Function IpDrv.WebApplication.Query
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.WebApplication.Query");
	}

	UWebApplication_execQuery_Params Query_Params;
	memcpy_s(&Query_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&Query_Params.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnPreQuery = nullptr;

	if (!uFnPreQuery)
	{
		uFnPreQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PreQuery");
	}

	UWebApplication_execPreQuery_Params PreQuery_Params;
	memcpy_s(&PreQuery_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&PreQuery_Params.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(uFnPreQuery, &PreQuery_Params, nullptr);

	return PreQuery_Params.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebApplication::CleanupApp()
{
	static UFunction* uFnCleanupApp = nullptr;

	if (!uFnCleanupApp)
	{
		uFnCleanupApp = UFunction::FindFunction("Function IpDrv.WebApplication.CleanupApp");
	}

	UWebApplication_execCleanupApp_Params CleanupApp_Params;

	this->ProcessEvent(uFnCleanupApp, &CleanupApp_Params, nullptr);
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebApplication::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function IpDrv.WebApplication.Cleanup");
	}

	UWebApplication_execCleanup_Params Cleanup_Params;

	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
};

// Function IpDrv.WebApplication.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebApplication::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.WebApplication.Init");
	}

	UWebApplication_execInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.WebServer.GetApplication
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UWebApplication*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URI                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SubURI                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UWebApplication* AWebServer::GetApplication(class FString URI, class FString& SubURI)
{
	static UFunction* uFnGetApplication = nullptr;

	if (!uFnGetApplication)
	{
		uFnGetApplication = UFunction::FindFunction("Function IpDrv.WebServer.GetApplication");
	}

	AWebServer_execGetApplication_Params GetApplication_Params;
	memcpy_s(&GetApplication_Params.URI, 0x10, &URI, 0x10);
	memcpy_s(&GetApplication_Params.SubURI, 0x10, &SubURI, 0x10);

	this->ProcessEvent(uFnGetApplication, &GetApplication_Params, nullptr);

	memcpy_s(&SubURI, 0x10, &GetApplication_Params.SubURI, 0x10);

	return GetApplication_Params.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventLostChild(class AActor* C)
{
	static UFunction* uFnLostChild = nullptr;

	if (!uFnLostChild)
	{
		uFnLostChild = UFunction::FindFunction("Function IpDrv.WebServer.LostChild");
	}

	AWebServer_eventLostChild_Params LostChild_Params;
	memcpy_s(&LostChild_Params.C, 0x8, &C, 0x8);

	this->ProcessEvent(uFnLostChild, &LostChild_Params, nullptr);
};

// Function IpDrv.WebServer.GainedChild
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventGainedChild(class AActor* C)
{
	static UFunction* uFnGainedChild = nullptr;

	if (!uFnGainedChild)
	{
		uFnGainedChild = UFunction::FindFunction("Function IpDrv.WebServer.GainedChild");
	}

	AWebServer_eventGainedChild_Params GainedChild_Params;
	memcpy_s(&GainedChild_Params.C, 0x8, &C, 0x8);

	this->ProcessEvent(uFnGainedChild, &GainedChild_Params, nullptr);
};

// Function IpDrv.WebServer.Destroyed
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void AWebServer::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function IpDrv.WebServer.Destroyed");
	}

	AWebServer_eventDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x400820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void AWebServer::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function IpDrv.WebServer.PostBeginPlay");
	}

	AWebServer_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function IpDrv.HelloWeb.Query
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UHelloWeb::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.HelloWeb.Query");
	}

	UHelloWeb_eventQuery_Params Query_Params;
	memcpy_s(&Query_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&Query_Params.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.HelloWeb.Init
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UHelloWeb::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.HelloWeb.Init");
	}

	UHelloWeb_execInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.ImageServer.Query
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UImageServer::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.ImageServer.Query");
	}

	UImageServer_eventQuery_Params Query_Params;
	memcpy_s(&Query_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&Query_Params.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

class FString UMcpServiceConfig::GetUserAuthTicket(class FString McpId)
{
	static UFunction* uFnGetUserAuthTicket = nullptr;

	if (!uFnGetUserAuthTicket)
	{
		uFnGetUserAuthTicket = UFunction::FindFunction("Function IpDrv.McpServiceConfig.GetUserAuthTicket");
	}

	UMcpServiceConfig_execGetUserAuthTicket_Params GetUserAuthTicket_Params;
	memcpy_s(&GetUserAuthTicket_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnGetUserAuthTicket, &GetUserAuthTicket_Params, nullptr);

	return GetUserAuthTicket_Params.ReturnValue;
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        UserReward                     (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserReward(class FString UniqueChallengeId, class FString UniqueUserId, int32_t UserReward)
{
	static UFunction* uFnUpdateChallengeUserReward = nullptr;

	if (!uFnUpdateChallengeUserReward)
	{
		uFnUpdateChallengeUserReward = UFunction::FindFunction("Function IpDrv.McpClashMobBase.UpdateChallengeUserReward");
	}

	UMcpClashMobBase_execUpdateChallengeUserReward_Params UpdateChallengeUserReward_Params;
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Params.UserReward, 0x4, &UserReward, 0x4);

	this->ProcessEvent(uFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserRewardComplete(unsigned long bWasSuccessful, class FString UniqueChallengeId, class FString UniqueUserId, class FString Error)
{
	static UFunction* uFnOnUpdateChallengeUserRewardComplete = nullptr;

	if (!uFnOnUpdateChallengeUserRewardComplete)
	{
		uFnOnUpdateChallengeUserRewardComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete");
	}

	UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Params OnUpdateChallengeUserRewardComplete_Params;
	OnUpdateChallengeUserRewardComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnUpdateChallengeUserRewardComplete, &OnUpdateChallengeUserRewardComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bDidComplete                   (CPF_Parm)
// int32_t                        GoalProgress                   (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserProgress(class FString UniqueChallengeId, class FString UniqueUserId, unsigned long bDidComplete, int32_t GoalProgress)
{
	static UFunction* uFnUpdateChallengeUserProgress = nullptr;

	if (!uFnUpdateChallengeUserProgress)
	{
		uFnUpdateChallengeUserProgress = UFunction::FindFunction("Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress");
	}

	UMcpClashMobBase_execUpdateChallengeUserProgress_Params UpdateChallengeUserProgress_Params;
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	UpdateChallengeUserProgress_Params.bDidComplete = bDidComplete;
	memcpy_s(&UpdateChallengeUserProgress_Params.GoalProgress, 0x4, &GoalProgress, 0x4);

	this->ProcessEvent(uFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserProgressComplete(unsigned long bWasSuccessful, class FString UniqueChallengeId, class FString UniqueUserId, class FString Error)
{
	static UFunction* uFnOnUpdateChallengeUserProgressComplete = nullptr;

	if (!uFnOnUpdateChallengeUserProgressComplete)
	{
		uFnOnUpdateChallengeUserProgressComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete");
	}

	UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Params OnUpdateChallengeUserProgressComplete_Params;
	OnUpdateChallengeUserProgressComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnUpdateChallengeUserProgressComplete, &OnUpdateChallengeUserProgressComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeUserStatus(class FString UniqueChallengeId, class FString UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus)
{
	static UFunction* uFnGetChallengeUserStatus = nullptr;

	if (!uFnGetChallengeUserStatus)
	{
		uFnGetChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeUserStatus");
	}

	UMcpClashMobBase_execGetChallengeUserStatus_Params GetChallengeUserStatus_Params;
	memcpy_s(&GetChallengeUserStatus_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeUserStatus_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&GetChallengeUserStatus_Params.OutChallengeUserStatus, 0x90, &OutChallengeUserStatus, 0x90);

	this->ProcessEvent(uFnGetChallengeUserStatus, &GetChallengeUserStatus_Params, nullptr);

	memcpy_s(&OutChallengeUserStatus, 0x90, &GetChallengeUserStatus_Params.OutChallengeUserStatus, 0x90);
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UserIdsToRead                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeMultiUserStatus(class FString UniqueChallengeId, class FString UniqueUserId, TArray<class FString>& UserIdsToRead)
{
	static UFunction* uFnQueryChallengeMultiUserStatus = nullptr;

	if (!uFnQueryChallengeMultiUserStatus)
	{
		uFnQueryChallengeMultiUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus");
	}

	UMcpClashMobBase_execQueryChallengeMultiUserStatus_Params QueryChallengeMultiUserStatus_Params;
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UserIdsToRead, 0x10, &UserIdsToRead, 0x10);

	this->ProcessEvent(uFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Params, nullptr);

	memcpy_s(&UserIdsToRead, 0x10, &QueryChallengeMultiUserStatus_Params.UserIdsToRead, 0x10);
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeUserStatus(class FString UniqueChallengeId, class FString UniqueUserId)
{
	static UFunction* uFnQueryChallengeUserStatus = nullptr;

	if (!uFnQueryChallengeUserStatus)
	{
		uFnQueryChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeUserStatus");
	}

	UMcpClashMobBase_execQueryChallengeUserStatus_Params QueryChallengeUserStatus_Params;
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(uFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeUserStatusComplete(unsigned long bWasSuccessful, class FString UniqueChallengeId, class FString UniqueUserId, class FString Error)
{
	static UFunction* uFnOnQueryChallengeUserStatusComplete = nullptr;

	if (!uFnOnQueryChallengeUserStatusComplete)
	{
		uFnOnQueryChallengeUserStatusComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete");
	}

	UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Params OnQueryChallengeUserStatusComplete_Params;
	OnQueryChallengeUserStatusComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryChallengeUserStatusComplete_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnQueryChallengeUserStatusComplete_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnQueryChallengeUserStatusComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryChallengeUserStatusComplete, &OnQueryChallengeUserStatusComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::AcceptChallenge(class FString UniqueChallengeId, class FString UniqueUserId)
{
	static UFunction* uFnAcceptChallenge = nullptr;

	if (!uFnAcceptChallenge)
	{
		uFnAcceptChallenge = UFunction::FindFunction("Function IpDrv.McpClashMobBase.AcceptChallenge");
	}

	UMcpClashMobBase_execAcceptChallenge_Params AcceptChallenge_Params;
	memcpy_s(&AcceptChallenge_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&AcceptChallenge_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(uFnAcceptChallenge, &AcceptChallenge_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnAcceptChallengeComplete(unsigned long bWasSuccessful, class FString UniqueChallengeId, class FString UniqueUserId, class FString Error)
{
	static UFunction* uFnOnAcceptChallengeComplete = nullptr;

	if (!uFnOnAcceptChallengeComplete)
	{
		uFnOnAcceptChallengeComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete");
	}

	UMcpClashMobBase_execOnAcceptChallengeComplete_Params OnAcceptChallengeComplete_Params;
	OnAcceptChallengeComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAcceptChallengeComplete_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnAcceptChallengeComplete_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnAcceptChallengeComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnAcceptChallengeComplete, &OnAcceptChallengeComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::DeleteCachedChallengeFile(class FString UniqueChallengeId, class FString DLName)
{
	static UFunction* uFnDeleteCachedChallengeFile = nullptr;

	if (!uFnDeleteCachedChallengeFile)
	{
		uFnDeleteCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile");
	}

	UMcpClashMobBase_execDeleteCachedChallengeFile_Params DeleteCachedChallengeFile_Params;
	memcpy_s(&DeleteCachedChallengeFile_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DeleteCachedChallengeFile_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::ClearCachedChallengeFile(class FString UniqueChallengeId, class FString DLName)
{
	static UFunction* uFnClearCachedChallengeFile = nullptr;

	if (!uFnClearCachedChallengeFile)
	{
		uFnClearCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.ClearCachedChallengeFile");
	}

	UMcpClashMobBase_execClearCachedChallengeFile_Params ClearCachedChallengeFile_Params;
	memcpy_s(&ClearCachedChallengeFile_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&ClearCachedChallengeFile_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnClearCachedChallengeFile, &ClearCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileContents(class FString UniqueChallengeId, class FString DLName, TArray<uint8_t>& OutFileContents)
{
	static UFunction* uFnGetChallengeFileContents = nullptr;

	if (!uFnGetChallengeFileContents)
	{
		uFnGetChallengeFileContents = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeFileContents");
	}

	UMcpClashMobBase_execGetChallengeFileContents_Params GetChallengeFileContents_Params;
	memcpy_s(&GetChallengeFileContents_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeFileContents_Params.DLName, 0x10, &DLName, 0x10);
	memcpy_s(&GetChallengeFileContents_Params.OutFileContents, 0x10, &OutFileContents, 0x10);

	this->ProcessEvent(uFnGetChallengeFileContents, &GetChallengeFileContents_Params, nullptr);

	memcpy_s(&OutFileContents, 0x10, &GetChallengeFileContents_Params.OutFileContents, 0x10);
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::DownloadChallengeFile(class FString UniqueChallengeId, class FString DLName)
{
	static UFunction* uFnDownloadChallengeFile = nullptr;

	if (!uFnDownloadChallengeFile)
	{
		uFnDownloadChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.DownloadChallengeFile");
	}

	UMcpClashMobBase_execDownloadChallengeFile_Params DownloadChallengeFile_Params;
	memcpy_s(&DownloadChallengeFile_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DownloadChallengeFile_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnDownloadChallengeFile, &DownloadChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileList(class FString UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles)
{
	static UFunction* uFnGetChallengeFileList = nullptr;

	if (!uFnGetChallengeFileList)
	{
		uFnGetChallengeFileList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeFileList");
	}

	UMcpClashMobBase_execGetChallengeFileList_Params GetChallengeFileList_Params;
	memcpy_s(&GetChallengeFileList_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeFileList_Params.OutChallengeFiles, 0x10, &OutChallengeFiles, 0x10);

	this->ProcessEvent(uFnGetChallengeFileList, &GetChallengeFileList_Params, nullptr);

	memcpy_s(&OutChallengeFiles, 0x10, &GetChallengeFileList_Params.OutChallengeFiles, 0x10);
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnDownloadChallengeFileComplete(unsigned long bWasSuccessful, class FString UniqueChallengeId, class FString DLName, class FString Filename, class FString Error)
{
	static UFunction* uFnOnDownloadChallengeFileComplete = nullptr;

	if (!uFnOnDownloadChallengeFileComplete)
	{
		uFnOnDownloadChallengeFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete");
	}

	UMcpClashMobBase_execOnDownloadChallengeFileComplete_Params OnDownloadChallengeFileComplete_Params;
	OnDownloadChallengeFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadChallengeFileComplete_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnDownloadChallengeFileComplete_Params.DLName, 0x10, &DLName, 0x10);
	memcpy_s(&OnDownloadChallengeFileComplete_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&OnDownloadChallengeFileComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDownloadChallengeFileComplete, &OnDownloadChallengeFileComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents)
{
	static UFunction* uFnGetChallengeList = nullptr;

	if (!uFnGetChallengeList)
	{
		uFnGetChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeList");
	}

	UMcpClashMobBase_execGetChallengeList_Params GetChallengeList_Params;
	memcpy_s(&GetChallengeList_Params.OutChallengeEvents, 0x10, &OutChallengeEvents, 0x10);

	this->ProcessEvent(uFnGetChallengeList, &GetChallengeList_Params, nullptr);

	memcpy_s(&OutChallengeEvents, 0x10, &GetChallengeList_Params.OutChallengeEvents, 0x10);
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpClashMobBase::QueryChallengeList()
{
	static UFunction* uFnQueryChallengeList = nullptr;

	if (!uFnQueryChallengeList)
	{
		uFnQueryChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeList");
	}

	UMcpClashMobBase_execQueryChallengeList_Params QueryChallengeList_Params;

	this->ProcessEvent(uFnQueryChallengeList, &QueryChallengeList_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeListComplete(unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryChallengeListComplete = nullptr;

	if (!uFnOnQueryChallengeListComplete)
	{
		uFnOnQueryChallengeListComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete");
	}

	UMcpClashMobBase_execOnQueryChallengeListComplete_Params OnQueryChallengeListComplete_Params;
	OnQueryChallengeListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryChallengeListComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryChallengeListComplete, &OnQueryChallengeListComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpClashMobBase*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpClashMobBase* UMcpClashMobBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpClashMobBase.CreateInstance");
	}

	UMcpClashMobBase_execCreateInstance_Params CreateInstance_Params;

	UMcpClashMobBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UMcpClashMobFileDownload::GetUrlForFile(class FString Filename)
{
	static UFunction* uFnGetUrlForFile = nullptr;

	if (!uFnGetUrlForFile)
	{
		uFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.McpClashMobFileDownload.GetUrlForFile");
	}

	UMcpClashMobFileDownload_execGetUrlForFile_Params GetUrlForFile_Params;
	memcpy_s(&GetUrlForFile_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnGetUrlForFile, &GetUrlForFile_Params, nullptr);

	return GetUrlForFile_Params.ReturnValue;
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUpdateChallengeUserRewardHTTPRequestComplete = nullptr;

	if (!uFnOnUpdateChallengeUserRewardHTTPRequestComplete)
	{
		uFnOnUpdateChallengeUserRewardHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Params OnUpdateChallengeUserRewardHTTPRequestComplete_Params;
	memcpy_s(&OnUpdateChallengeUserRewardHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnUpdateChallengeUserRewardHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnUpdateChallengeUserRewardHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateChallengeUserRewardHTTPRequestComplete, &OnUpdateChallengeUserRewardHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        UserReward                     (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserReward(class FString UniqueChallengeId, class FString UniqueUserId, int32_t UserReward)
{
	static UFunction* uFnUpdateChallengeUserReward = nullptr;

	if (!uFnUpdateChallengeUserReward)
	{
		uFnUpdateChallengeUserReward = UFunction::FindFunction("Function IpDrv.McpClashMobManager.UpdateChallengeUserReward");
	}

	UMcpClashMobManager_execUpdateChallengeUserReward_Params UpdateChallengeUserReward_Params;
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Params.UserReward, 0x4, &UserReward, 0x4);

	this->ProcessEvent(uFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUpdateChallengeUserProgressHTTPRequestComplete = nullptr;

	if (!uFnOnUpdateChallengeUserProgressHTTPRequestComplete)
	{
		uFnOnUpdateChallengeUserProgressHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Params OnUpdateChallengeUserProgressHTTPRequestComplete_Params;
	memcpy_s(&OnUpdateChallengeUserProgressHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnUpdateChallengeUserProgressHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnUpdateChallengeUserProgressHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateChallengeUserProgressHTTPRequestComplete, &OnUpdateChallengeUserProgressHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bDidComplete                   (CPF_Parm)
// int32_t                        GoalProgress                   (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserProgress(class FString UniqueChallengeId, class FString UniqueUserId, unsigned long bDidComplete, int32_t GoalProgress)
{
	static UFunction* uFnUpdateChallengeUserProgress = nullptr;

	if (!uFnUpdateChallengeUserProgress)
	{
		uFnUpdateChallengeUserProgress = UFunction::FindFunction("Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress");
	}

	UMcpClashMobManager_execUpdateChallengeUserProgress_Params UpdateChallengeUserProgress_Params;
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	UpdateChallengeUserProgress_Params.bDidComplete = bDidComplete;
	memcpy_s(&UpdateChallengeUserProgress_Params.GoalProgress, 0x4, &GoalProgress, 0x4);

	this->ProcessEvent(uFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x400C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeUserStatus(class FString UniqueChallengeId, class FString UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus)
{
	static UFunction* uFnGetChallengeUserStatus = nullptr;

	if (!uFnGetChallengeUserStatus)
	{
		uFnGetChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeUserStatus");
	}

	UMcpClashMobManager_execGetChallengeUserStatus_Params GetChallengeUserStatus_Params;
	memcpy_s(&GetChallengeUserStatus_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeUserStatus_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&GetChallengeUserStatus_Params.OutChallengeUserStatus, 0x90, &OutChallengeUserStatus, 0x90);

	this->ProcessEvent(uFnGetChallengeUserStatus, &GetChallengeUserStatus_Params, nullptr);

	memcpy_s(&OutChallengeUserStatus, 0x90, &GetChallengeUserStatus_Params.OutChallengeUserStatus, 0x90);
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryChallengeMultiStatusHTTPRequestComplete = nullptr;

	if (!uFnOnQueryChallengeMultiStatusHTTPRequestComplete)
	{
		uFnOnQueryChallengeMultiStatusHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Params OnQueryChallengeMultiStatusHTTPRequestComplete_Params;
	memcpy_s(&OnQueryChallengeMultiStatusHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryChallengeMultiStatusHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryChallengeMultiStatusHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryChallengeMultiStatusHTTPRequestComplete, &OnQueryChallengeMultiStatusHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UserIdsToRead                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeMultiUserStatus(class FString UniqueChallengeId, class FString UniqueUserId, TArray<class FString>& UserIdsToRead)
{
	static UFunction* uFnQueryChallengeMultiUserStatus = nullptr;

	if (!uFnQueryChallengeMultiUserStatus)
	{
		uFnQueryChallengeMultiUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus");
	}

	UMcpClashMobManager_execQueryChallengeMultiUserStatus_Params QueryChallengeMultiUserStatus_Params;
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UserIdsToRead, 0x10, &UserIdsToRead, 0x10);

	this->ProcessEvent(uFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Params, nullptr);

	memcpy_s(&UserIdsToRead, 0x10, &QueryChallengeMultiUserStatus_Params.UserIdsToRead, 0x10);
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryChallengeStatusHTTPRequestComplete = nullptr;

	if (!uFnOnQueryChallengeStatusHTTPRequestComplete)
	{
		uFnOnQueryChallengeStatusHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Params OnQueryChallengeStatusHTTPRequestComplete_Params;
	memcpy_s(&OnQueryChallengeStatusHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryChallengeStatusHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryChallengeStatusHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryChallengeStatusHTTPRequestComplete, &OnQueryChallengeStatusHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeUserStatus(class FString UniqueChallengeId, class FString UniqueUserId)
{
	static UFunction* uFnQueryChallengeUserStatus = nullptr;

	if (!uFnQueryChallengeUserStatus)
	{
		uFnQueryChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeUserStatus");
	}

	UMcpClashMobManager_execQueryChallengeUserStatus_Params QueryChallengeUserStatus_Params;
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(uFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAcceptChallengeHTTPRequestComplete = nullptr;

	if (!uFnOnAcceptChallengeHTTPRequestComplete)
	{
		uFnOnAcceptChallengeHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Params OnAcceptChallengeHTTPRequestComplete_Params;
	memcpy_s(&OnAcceptChallengeHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnAcceptChallengeHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnAcceptChallengeHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAcceptChallengeHTTPRequestComplete, &OnAcceptChallengeHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::AcceptChallenge(class FString UniqueChallengeId, class FString UniqueUserId)
{
	static UFunction* uFnAcceptChallenge = nullptr;

	if (!uFnAcceptChallenge)
	{
		uFnAcceptChallenge = UFunction::FindFunction("Function IpDrv.McpClashMobManager.AcceptChallenge");
	}

	UMcpClashMobManager_execAcceptChallenge_Params AcceptChallenge_Params;
	memcpy_s(&AcceptChallenge_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&AcceptChallenge_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(uFnAcceptChallenge, &AcceptChallenge_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::DeleteCachedChallengeFile(class FString UniqueChallengeId, class FString DLName)
{
	static UFunction* uFnDeleteCachedChallengeFile = nullptr;

	if (!uFnDeleteCachedChallengeFile)
	{
		uFnDeleteCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile");
	}

	UMcpClashMobManager_execDeleteCachedChallengeFile_Params DeleteCachedChallengeFile_Params;
	memcpy_s(&DeleteCachedChallengeFile_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DeleteCachedChallengeFile_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::ClearCachedChallengeFile(class FString UniqueChallengeId, class FString DLName)
{
	static UFunction* uFnClearCachedChallengeFile = nullptr;

	if (!uFnClearCachedChallengeFile)
	{
		uFnClearCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.ClearCachedChallengeFile");
	}

	UMcpClashMobManager_execClearCachedChallengeFile_Params ClearCachedChallengeFile_Params;
	memcpy_s(&ClearCachedChallengeFile_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&ClearCachedChallengeFile_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnClearCachedChallengeFile, &ClearCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileContents(class FString UniqueChallengeId, class FString DLName, TArray<uint8_t>& OutFileContents)
{
	static UFunction* uFnGetChallengeFileContents = nullptr;

	if (!uFnGetChallengeFileContents)
	{
		uFnGetChallengeFileContents = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeFileContents");
	}

	UMcpClashMobManager_execGetChallengeFileContents_Params GetChallengeFileContents_Params;
	memcpy_s(&GetChallengeFileContents_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeFileContents_Params.DLName, 0x10, &DLName, 0x10);
	memcpy_s(&GetChallengeFileContents_Params.OutFileContents, 0x10, &OutFileContents, 0x10);

	this->ProcessEvent(uFnGetChallengeFileContents, &GetChallengeFileContents_Params, nullptr);

	memcpy_s(&OutFileContents, 0x10, &GetChallengeFileContents_Params.OutFileContents, 0x10);
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::OnDownloadMcpFileComplete(unsigned long bWasSuccessful, class FString DLName)
{
	static UFunction* uFnOnDownloadMcpFileComplete = nullptr;

	if (!uFnOnDownloadMcpFileComplete)
	{
		uFnOnDownloadMcpFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete");
	}

	UMcpClashMobManager_execOnDownloadMcpFileComplete_Params OnDownloadMcpFileComplete_Params;
	OnDownloadMcpFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadMcpFileComplete_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnOnDownloadMcpFileComplete, &OnDownloadMcpFileComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::OnLoadCachedFileComplete(unsigned long bWasSuccessful, class FString DLName)
{
	static UFunction* uFnOnLoadCachedFileComplete = nullptr;

	if (!uFnOnLoadCachedFileComplete)
	{
		uFnOnLoadCachedFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete");
	}

	UMcpClashMobManager_execOnLoadCachedFileComplete_Params OnLoadCachedFileComplete_Params;
	OnLoadCachedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadCachedFileComplete_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnOnLoadCachedFileComplete, &OnLoadCachedFileComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::DownloadChallengeFile(class FString UniqueChallengeId, class FString DLName)
{
	static UFunction* uFnDownloadChallengeFile = nullptr;

	if (!uFnDownloadChallengeFile)
	{
		uFnDownloadChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.DownloadChallengeFile");
	}

	UMcpClashMobManager_execDownloadChallengeFile_Params DownloadChallengeFile_Params;
	memcpy_s(&DownloadChallengeFile_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DownloadChallengeFile_Params.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(uFnDownloadChallengeFile, &DownloadChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileList(class FString UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles)
{
	static UFunction* uFnGetChallengeFileList = nullptr;

	if (!uFnGetChallengeFileList)
	{
		uFnGetChallengeFileList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeFileList");
	}

	UMcpClashMobManager_execGetChallengeFileList_Params GetChallengeFileList_Params;
	memcpy_s(&GetChallengeFileList_Params.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeFileList_Params.OutChallengeFiles, 0x10, &OutChallengeFiles, 0x10);

	this->ProcessEvent(uFnGetChallengeFileList, &GetChallengeFileList_Params, nullptr);

	memcpy_s(&OutChallengeFiles, 0x10, &GetChallengeFileList_Params.OutChallengeFiles, 0x10);
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents)
{
	static UFunction* uFnGetChallengeList = nullptr;

	if (!uFnGetChallengeList)
	{
		uFnGetChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeList");
	}

	UMcpClashMobManager_execGetChallengeList_Params GetChallengeList_Params;
	memcpy_s(&GetChallengeList_Params.OutChallengeEvents, 0x10, &OutChallengeEvents, 0x10);

	this->ProcessEvent(uFnGetChallengeList, &GetChallengeList_Params, nullptr);

	memcpy_s(&OutChallengeEvents, 0x10, &GetChallengeList_Params.OutChallengeEvents, 0x10);
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryChallengeListHTTPRequestComplete = nullptr;

	if (!uFnOnQueryChallengeListHTTPRequestComplete)
	{
		uFnOnQueryChallengeListHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Params OnQueryChallengeListHTTPRequestComplete_Params;
	memcpy_s(&OnQueryChallengeListHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryChallengeListHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryChallengeListHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryChallengeListHTTPRequestComplete, &OnQueryChallengeListHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UMcpClashMobManager::QueryChallengeList()
{
	static UFunction* uFnQueryChallengeList = nullptr;

	if (!uFnQueryChallengeList)
	{
		uFnQueryChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeList");
	}

	UMcpClashMobManager_execQueryChallengeList_Params QueryChallengeList_Params;

	this->ProcessEvent(uFnQueryChallengeList, &QueryChallengeList_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.Init
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UMcpClashMobManager::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.McpClashMobManager.Init");
	}

	UMcpClashMobManager_execInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnAcceptGroupInviteComplete(class FString GroupId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnAcceptGroupInviteComplete = nullptr;

	if (!uFnOnAcceptGroupInviteComplete)
	{
		uFnOnAcceptGroupInviteComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete");
	}

	UMcpGroupsBase_execOnAcceptGroupInviteComplete_Params OnAcceptGroupInviteComplete_Params;
	memcpy_s(&OnAcceptGroupInviteComplete_Params.GroupId, 0x10, &GroupId, 0x10);
	OnAcceptGroupInviteComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAcceptGroupInviteComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnAcceptGroupInviteComplete, &OnAcceptGroupInviteComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldAccept                  (CPF_Parm)

void UMcpGroupsBase::AcceptGroupInvite(class FString UniqueUserId, class FString GroupId, unsigned long bShouldAccept)
{
	static UFunction* uFnAcceptGroupInvite = nullptr;

	if (!uFnAcceptGroupInvite)
	{
		uFnAcceptGroupInvite = UFunction::FindFunction("Function IpDrv.McpGroupsBase.AcceptGroupInvite");
	}

	UMcpGroupsBase_execAcceptGroupInvite_Params AcceptGroupInvite_Params;
	memcpy_s(&AcceptGroupInvite_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&AcceptGroupInvite_Params.GroupId, 0x10, &GroupId, 0x10);
	AcceptGroupInvite_Params.bShouldAccept = bShouldAccept;

	this->ProcessEvent(uFnAcceptGroupInvite, &AcceptGroupInvite_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           InviteList                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupInviteList(class FString UserId, struct FMcpGroupList& InviteList)
{
	static UFunction* uFnGetGroupInviteList = nullptr;

	if (!uFnGetGroupInviteList)
	{
		uFnGetGroupInviteList = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupInviteList");
	}

	UMcpGroupsBase_execGetGroupInviteList_Params GetGroupInviteList_Params;
	memcpy_s(&GetGroupInviteList_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetGroupInviteList_Params.InviteList, 0x20, &InviteList, 0x20);

	this->ProcessEvent(uFnGetGroupInviteList, &GetGroupInviteList_Params, nullptr);

	memcpy_s(&InviteList, 0x20, &GetGroupInviteList_Params.InviteList, 0x20);
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupInvitesComplete(unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryGroupInvitesComplete = nullptr;

	if (!uFnOnQueryGroupInvitesComplete)
	{
		uFnOnQueryGroupInvitesComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete");
	}

	UMcpGroupsBase_execOnQueryGroupInvitesComplete_Params OnQueryGroupInvitesComplete_Params;
	OnQueryGroupInvitesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupInvitesComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryGroupInvitesComplete, &OnQueryGroupInvitesComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupInvites(class FString UniqueUserId)
{
	static UFunction* uFnQueryGroupInvites = nullptr;

	if (!uFnQueryGroupInvites)
	{
		uFnQueryGroupInvites = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroupInvites");
	}

	UMcpGroupsBase_execQueryGroupInvites_Params QueryGroupInvites_Params;
	memcpy_s(&QueryGroupInvites_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(uFnQueryGroupInvites, &QueryGroupInvites_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteAllGroupsComplete(class FString RequesterId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteAllGroupsComplete = nullptr;

	if (!uFnOnDeleteAllGroupsComplete)
	{
		uFnOnDeleteAllGroupsComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete");
	}

	UMcpGroupsBase_execOnDeleteAllGroupsComplete_Params OnDeleteAllGroupsComplete_Params;
	memcpy_s(&OnDeleteAllGroupsComplete_Params.RequesterId, 0x10, &RequesterId, 0x10);
	OnDeleteAllGroupsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteAllGroupsComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteAllGroupsComplete, &OnDeleteAllGroupsComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteAllGroups(class FString OwnerId)
{
	static UFunction* uFnDeleteAllGroups = nullptr;

	if (!uFnDeleteAllGroups)
	{
		uFnDeleteAllGroups = UFunction::FindFunction("Function IpDrv.McpGroupsBase.DeleteAllGroups");
	}

	UMcpGroupsBase_execDeleteAllGroups_Params DeleteAllGroups_Params;
	memcpy_s(&DeleteAllGroups_Params.OwnerId, 0x10, &OwnerId, 0x10);

	this->ProcessEvent(uFnDeleteAllGroups, &DeleteAllGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnRemoveGroupMembersComplete(class FString GroupId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnRemoveGroupMembersComplete = nullptr;

	if (!uFnOnRemoveGroupMembersComplete)
	{
		uFnOnRemoveGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete");
	}

	UMcpGroupsBase_execOnRemoveGroupMembersComplete_Params OnRemoveGroupMembersComplete_Params;
	memcpy_s(&OnRemoveGroupMembersComplete_Params.GroupId, 0x10, &GroupId, 0x10);
	OnRemoveGroupMembersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveGroupMembersComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnRemoveGroupMembersComplete, &OnRemoveGroupMembersComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::RemoveGroupMembers(class FString OwnerId, class FString GroupId, TArray<class FString>& MemberIds)
{
	static UFunction* uFnRemoveGroupMembers = nullptr;

	if (!uFnRemoveGroupMembers)
	{
		uFnRemoveGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.RemoveGroupMembers");
	}

	UMcpGroupsBase_execRemoveGroupMembers_Params RemoveGroupMembers_Params;
	memcpy_s(&RemoveGroupMembers_Params.OwnerId, 0x10, &OwnerId, 0x10);
	memcpy_s(&RemoveGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);
	memcpy_s(&RemoveGroupMembers_Params.MemberIds, 0x10, &MemberIds, 0x10);

	this->ProcessEvent(uFnRemoveGroupMembers, &RemoveGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, 0x10, &RemoveGroupMembers_Params.MemberIds, 0x10);
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnAddGroupMembersComplete(class FString GroupId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnAddGroupMembersComplete = nullptr;

	if (!uFnOnAddGroupMembersComplete)
	{
		uFnOnAddGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete");
	}

	UMcpGroupsBase_execOnAddGroupMembersComplete_Params OnAddGroupMembersComplete_Params;
	memcpy_s(&OnAddGroupMembersComplete_Params.GroupId, 0x10, &GroupId, 0x10);
	OnAddGroupMembersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAddGroupMembersComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnAddGroupMembersComplete, &OnAddGroupMembersComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bRequiresAcceptance            (CPF_Parm)
// TArray<class FString>          MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::AddGroupMembers(class FString OwnerId, class FString GroupId, unsigned long bRequiresAcceptance, TArray<class FString>& MemberIds)
{
	static UFunction* uFnAddGroupMembers = nullptr;

	if (!uFnAddGroupMembers)
	{
		uFnAddGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.AddGroupMembers");
	}

	UMcpGroupsBase_execAddGroupMembers_Params AddGroupMembers_Params;
	memcpy_s(&AddGroupMembers_Params.OwnerId, 0x10, &OwnerId, 0x10);
	memcpy_s(&AddGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);
	AddGroupMembers_Params.bRequiresAcceptance = bRequiresAcceptance;
	memcpy_s(&AddGroupMembers_Params.MemberIds, 0x10, &MemberIds, 0x10);

	this->ProcessEvent(uFnAddGroupMembers, &AddGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, 0x10, &AddGroupMembers_Params.MemberIds, 0x10);
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupMembers(class FString GroupId, TArray<struct FMcpGroupMember>& GroupMembers)
{
	static UFunction* uFnGetGroupMembers = nullptr;

	if (!uFnGetGroupMembers)
	{
		uFnGetGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupMembers");
	}

	UMcpGroupsBase_execGetGroupMembers_Params GetGroupMembers_Params;
	memcpy_s(&GetGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);
	memcpy_s(&GetGroupMembers_Params.GroupMembers, 0x10, &GroupMembers, 0x10);

	this->ProcessEvent(uFnGetGroupMembers, &GetGroupMembers_Params, nullptr);

	memcpy_s(&GroupMembers, 0x10, &GetGroupMembers_Params.GroupMembers, 0x10);
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupMembersComplete(class FString GroupId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryGroupMembersComplete = nullptr;

	if (!uFnOnQueryGroupMembersComplete)
	{
		uFnOnQueryGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete");
	}

	UMcpGroupsBase_execOnQueryGroupMembersComplete_Params OnQueryGroupMembersComplete_Params;
	memcpy_s(&OnQueryGroupMembersComplete_Params.GroupId, 0x10, &GroupId, 0x10);
	OnQueryGroupMembersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupMembersComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryGroupMembersComplete, &OnQueryGroupMembersComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupMembers(class FString UniqueUserId, class FString GroupId)
{
	static UFunction* uFnQueryGroupMembers = nullptr;

	if (!uFnQueryGroupMembers)
	{
		uFnQueryGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroupMembers");
	}

	UMcpGroupsBase_execQueryGroupMembers_Params QueryGroupMembers_Params;
	memcpy_s(&QueryGroupMembers_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&QueryGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(uFnQueryGroupMembers, &QueryGroupMembers_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupList(class FString UserId, struct FMcpGroupList& GroupList)
{
	static UFunction* uFnGetGroupList = nullptr;

	if (!uFnGetGroupList)
	{
		uFnGetGroupList = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupList");
	}

	UMcpGroupsBase_execGetGroupList_Params GetGroupList_Params;
	memcpy_s(&GetGroupList_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetGroupList_Params.GroupList, 0x20, &GroupList, 0x20);

	this->ProcessEvent(uFnGetGroupList, &GetGroupList_Params, nullptr);

	memcpy_s(&GroupList, 0x20, &GetGroupList_Params.GroupList, 0x20);
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupsComplete(class FString UserId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryGroupsComplete = nullptr;

	if (!uFnOnQueryGroupsComplete)
	{
		uFnOnQueryGroupsComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupsComplete");
	}

	UMcpGroupsBase_execOnQueryGroupsComplete_Params OnQueryGroupsComplete_Params;
	memcpy_s(&OnQueryGroupsComplete_Params.UserId, 0x10, &UserId, 0x10);
	OnQueryGroupsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupsComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryGroupsComplete, &OnQueryGroupsComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroups(class FString RequesterId)
{
	static UFunction* uFnQueryGroups = nullptr;

	if (!uFnQueryGroups)
	{
		uFnQueryGroups = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroups");
	}

	UMcpGroupsBase_execQueryGroups_Params QueryGroups_Params;
	memcpy_s(&QueryGroups_Params.RequesterId, 0x10, &RequesterId, 0x10);

	this->ProcessEvent(uFnQueryGroups, &QueryGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteGroupComplete(class FString GroupId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteGroupComplete = nullptr;

	if (!uFnOnDeleteGroupComplete)
	{
		uFnOnDeleteGroupComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnDeleteGroupComplete");
	}

	UMcpGroupsBase_execOnDeleteGroupComplete_Params OnDeleteGroupComplete_Params;
	memcpy_s(&OnDeleteGroupComplete_Params.GroupId, 0x10, &GroupId, 0x10);
	OnDeleteGroupComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteGroupComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteGroupComplete, &OnDeleteGroupComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteGroup(class FString UniqueUserId, class FString GroupId)
{
	static UFunction* uFnDeleteGroup = nullptr;

	if (!uFnDeleteGroup)
	{
		uFnDeleteGroup = UFunction::FindFunction("Function IpDrv.McpGroupsBase.DeleteGroup");
	}

	UMcpGroupsBase_execDeleteGroup_Params DeleteGroup_Params;
	memcpy_s(&DeleteGroup_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&DeleteGroup_Params.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(uFnDeleteGroup, &DeleteGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FMcpGroup               Group                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnCreateGroupComplete(struct FMcpGroup Group, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnCreateGroupComplete = nullptr;

	if (!uFnOnCreateGroupComplete)
	{
		uFnOnCreateGroupComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnCreateGroupComplete");
	}

	UMcpGroupsBase_execOnCreateGroupComplete_Params OnCreateGroupComplete_Params;
	memcpy_s(&OnCreateGroupComplete_Params.Group, 0x48, &Group, 0x48);
	OnCreateGroupComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateGroupComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnCreateGroupComplete, &OnCreateGroupComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::CreateGroup(class FString OwnerId, class FString GroupName)
{
	static UFunction* uFnCreateGroup = nullptr;

	if (!uFnCreateGroup)
	{
		uFnCreateGroup = UFunction::FindFunction("Function IpDrv.McpGroupsBase.CreateGroup");
	}

	UMcpGroupsBase_execCreateGroup_Params CreateGroup_Params;
	memcpy_s(&CreateGroup_Params.OwnerId, 0x10, &OwnerId, 0x10);
	memcpy_s(&CreateGroup_Params.GroupName, 0x10, &GroupName, 0x10);

	this->ProcessEvent(uFnCreateGroup, &CreateGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpGroupsBase*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpGroupsBase* UMcpGroupsBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpGroupsBase.CreateInstance");
	}

	UMcpGroupsBase_execCreateInstance_Params CreateInstance_Params;

	UMcpGroupsBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class FString                  MemberId                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        AcceptState                    (CPF_Parm)

void UMcpGroupsManager::CacheGroupMember(class FString MemberId, class FString GroupId, uint8_t AcceptState)
{
	static UFunction* uFnCacheGroupMember = nullptr;

	if (!uFnCacheGroupMember)
	{
		uFnCacheGroupMember = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CacheGroupMember");
	}

	UMcpGroupsManager_execCacheGroupMember_Params CacheGroupMember_Params;
	memcpy_s(&CacheGroupMember_Params.MemberId, 0x10, &MemberId, 0x10);
	memcpy_s(&CacheGroupMember_Params.GroupId, 0x10, &GroupId, 0x10);
	memcpy_s(&CacheGroupMember_Params.AcceptState, 0x1, &AcceptState, 0x1);

	this->ProcessEvent(uFnCacheGroupMember, &CacheGroupMember_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroup               Group                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::CacheGroup(class FString RequesterId, struct FMcpGroup Group)
{
	static UFunction* uFnCacheGroup = nullptr;

	if (!uFnCacheGroup)
	{
		uFnCacheGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CacheGroup");
	}

	UMcpGroupsManager_execCacheGroup_Params CacheGroup_Params;
	memcpy_s(&CacheGroup_Params.RequesterId, 0x10, &RequesterId, 0x10);
	memcpy_s(&CacheGroup_Params.Group, 0x48, &Group, 0x48);

	this->ProcessEvent(uFnCacheGroup, &CacheGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAcceptGroupInviteRequestComplete = nullptr;

	if (!uFnOnAcceptGroupInviteRequestComplete)
	{
		uFnOnAcceptGroupInviteRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete");
	}

	UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Params OnAcceptGroupInviteRequestComplete_Params;
	memcpy_s(&OnAcceptGroupInviteRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnAcceptGroupInviteRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnAcceptGroupInviteRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAcceptGroupInviteRequestComplete, &OnAcceptGroupInviteRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldAccept                  (CPF_Parm)

void UMcpGroupsManager::AcceptGroupInvite(class FString UniqueUserId, class FString GroupId, unsigned long bShouldAccept)
{
	static UFunction* uFnAcceptGroupInvite = nullptr;

	if (!uFnAcceptGroupInvite)
	{
		uFnAcceptGroupInvite = UFunction::FindFunction("Function IpDrv.McpGroupsManager.AcceptGroupInvite");
	}

	UMcpGroupsManager_execAcceptGroupInvite_Params AcceptGroupInvite_Params;
	memcpy_s(&AcceptGroupInvite_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&AcceptGroupInvite_Params.GroupId, 0x10, &GroupId, 0x10);
	AcceptGroupInvite_Params.bShouldAccept = bShouldAccept;

	this->ProcessEvent(uFnAcceptGroupInvite, &AcceptGroupInvite_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteAllGroupsRequestComplete = nullptr;

	if (!uFnOnDeleteAllGroupsRequestComplete)
	{
		uFnOnDeleteAllGroupsRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete");
	}

	UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Params OnDeleteAllGroupsRequestComplete_Params;
	memcpy_s(&OnDeleteAllGroupsRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDeleteAllGroupsRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnDeleteAllGroupsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteAllGroupsRequestComplete, &OnDeleteAllGroupsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteAllGroups(class FString UniqueUserId)
{
	static UFunction* uFnDeleteAllGroups = nullptr;

	if (!uFnDeleteAllGroups)
	{
		uFnDeleteAllGroups = UFunction::FindFunction("Function IpDrv.McpGroupsManager.DeleteAllGroups");
	}

	UMcpGroupsManager_execDeleteAllGroups_Params DeleteAllGroups_Params;
	memcpy_s(&DeleteAllGroups_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(uFnDeleteAllGroups, &DeleteAllGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRemoveGroupMembersRequestComplete = nullptr;

	if (!uFnOnRemoveGroupMembersRequestComplete)
	{
		uFnOnRemoveGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete");
	}

	UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Params OnRemoveGroupMembersRequestComplete_Params;
	memcpy_s(&OnRemoveGroupMembersRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnRemoveGroupMembersRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnRemoveGroupMembersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRemoveGroupMembersRequestComplete, &OnRemoveGroupMembersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::RemoveGroupMembers(class FString UniqueUserId, class FString GroupId, TArray<class FString>& MemberIds)
{
	static UFunction* uFnRemoveGroupMembers = nullptr;

	if (!uFnRemoveGroupMembers)
	{
		uFnRemoveGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.RemoveGroupMembers");
	}

	UMcpGroupsManager_execRemoveGroupMembers_Params RemoveGroupMembers_Params;
	memcpy_s(&RemoveGroupMembers_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&RemoveGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);
	memcpy_s(&RemoveGroupMembers_Params.MemberIds, 0x10, &MemberIds, 0x10);

	this->ProcessEvent(uFnRemoveGroupMembers, &RemoveGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, 0x10, &RemoveGroupMembers_Params.MemberIds, 0x10);
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAddGroupMembersRequestComplete = nullptr;

	if (!uFnOnAddGroupMembersRequestComplete)
	{
		uFnOnAddGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete");
	}

	UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Params OnAddGroupMembersRequestComplete_Params;
	memcpy_s(&OnAddGroupMembersRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnAddGroupMembersRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnAddGroupMembersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddGroupMembersRequestComplete, &OnAddGroupMembersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bRequiresAcceptance            (CPF_Parm)
// TArray<class FString>          MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::AddGroupMembers(class FString UniqueUserId, class FString GroupId, unsigned long bRequiresAcceptance, TArray<class FString>& MemberIds)
{
	static UFunction* uFnAddGroupMembers = nullptr;

	if (!uFnAddGroupMembers)
	{
		uFnAddGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.AddGroupMembers");
	}

	UMcpGroupsManager_execAddGroupMembers_Params AddGroupMembers_Params;
	memcpy_s(&AddGroupMembers_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&AddGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);
	AddGroupMembers_Params.bRequiresAcceptance = bRequiresAcceptance;
	memcpy_s(&AddGroupMembers_Params.MemberIds, 0x10, &MemberIds, 0x10);

	this->ProcessEvent(uFnAddGroupMembers, &AddGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, 0x10, &AddGroupMembers_Params.MemberIds, 0x10);
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x400C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupMembers(class FString GroupId, TArray<struct FMcpGroupMember>& GroupMembers)
{
	static UFunction* uFnGetGroupMembers = nullptr;

	if (!uFnGetGroupMembers)
	{
		uFnGetGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.GetGroupMembers");
	}

	UMcpGroupsManager_execGetGroupMembers_Params GetGroupMembers_Params;
	memcpy_s(&GetGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);
	memcpy_s(&GetGroupMembers_Params.GroupMembers, 0x10, &GroupMembers, 0x10);

	this->ProcessEvent(uFnGetGroupMembers, &GetGroupMembers_Params, nullptr);

	memcpy_s(&GroupMembers, 0x10, &GetGroupMembers_Params.GroupMembers, 0x10);
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryGroupMembersRequestComplete = nullptr;

	if (!uFnOnQueryGroupMembersRequestComplete)
	{
		uFnOnQueryGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete");
	}

	UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Params OnQueryGroupMembersRequestComplete_Params;
	memcpy_s(&OnQueryGroupMembersRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryGroupMembersRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryGroupMembersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryGroupMembersRequestComplete, &OnQueryGroupMembersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroupMembers(class FString UniqueUserId, class FString GroupId)
{
	static UFunction* uFnQueryGroupMembers = nullptr;

	if (!uFnQueryGroupMembers)
	{
		uFnQueryGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.QueryGroupMembers");
	}

	UMcpGroupsManager_execQueryGroupMembers_Params QueryGroupMembers_Params;
	memcpy_s(&QueryGroupMembers_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&QueryGroupMembers_Params.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(uFnQueryGroupMembers, &QueryGroupMembers_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupList(class FString UserId, struct FMcpGroupList& GroupList)
{
	static UFunction* uFnGetGroupList = nullptr;

	if (!uFnGetGroupList)
	{
		uFnGetGroupList = UFunction::FindFunction("Function IpDrv.McpGroupsManager.GetGroupList");
	}

	UMcpGroupsManager_execGetGroupList_Params GetGroupList_Params;
	memcpy_s(&GetGroupList_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetGroupList_Params.GroupList, 0x20, &GroupList, 0x20);

	this->ProcessEvent(uFnGetGroupList, &GetGroupList_Params, nullptr);

	memcpy_s(&GroupList, 0x20, &GetGroupList_Params.GroupList, 0x20);
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryGroupsRequestComplete = nullptr;

	if (!uFnOnQueryGroupsRequestComplete)
	{
		uFnOnQueryGroupsRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete");
	}

	UMcpGroupsManager_execOnQueryGroupsRequestComplete_Params OnQueryGroupsRequestComplete_Params;
	memcpy_s(&OnQueryGroupsRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryGroupsRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryGroupsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryGroupsRequestComplete, &OnQueryGroupsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroups(class FString RequesterId)
{
	static UFunction* uFnQueryGroups = nullptr;

	if (!uFnQueryGroups)
	{
		uFnQueryGroups = UFunction::FindFunction("Function IpDrv.McpGroupsManager.QueryGroups");
	}

	UMcpGroupsManager_execQueryGroups_Params QueryGroups_Params;
	memcpy_s(&QueryGroups_Params.RequesterId, 0x10, &RequesterId, 0x10);

	this->ProcessEvent(uFnQueryGroups, &QueryGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteGroupRequestComplete = nullptr;

	if (!uFnOnDeleteGroupRequestComplete)
	{
		uFnOnDeleteGroupRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete");
	}

	UMcpGroupsManager_execOnDeleteGroupRequestComplete_Params OnDeleteGroupRequestComplete_Params;
	memcpy_s(&OnDeleteGroupRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDeleteGroupRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnDeleteGroupRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteGroupRequestComplete, &OnDeleteGroupRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteGroup(class FString UniqueUserId, class FString GroupId)
{
	static UFunction* uFnDeleteGroup = nullptr;

	if (!uFnDeleteGroup)
	{
		uFnDeleteGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.DeleteGroup");
	}

	UMcpGroupsManager_execDeleteGroup_Params DeleteGroup_Params;
	memcpy_s(&DeleteGroup_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&DeleteGroup_Params.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(uFnDeleteGroup, &DeleteGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   CreateGroupRequest             (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnCreateGroupRequestComplete = nullptr;

	if (!uFnOnCreateGroupRequestComplete)
	{
		uFnOnCreateGroupRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete");
	}

	UMcpGroupsManager_execOnCreateGroupRequestComplete_Params OnCreateGroupRequestComplete_Params;
	memcpy_s(&OnCreateGroupRequestComplete_Params.CreateGroupRequest, 0x8, &CreateGroupRequest, 0x8);
	memcpy_s(&OnCreateGroupRequestComplete_Params.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnCreateGroupRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateGroupRequestComplete, &OnCreateGroupRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x400820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::CreateGroup(class FString UniqueUserId, class FString GroupName)
{
	static UFunction* uFnCreateGroup = nullptr;

	if (!uFnCreateGroup)
	{
		uFnCreateGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CreateGroup");
	}

	UMcpGroupsManager_execCreateGroup_Params CreateGroup_Params;
	memcpy_s(&CreateGroup_Params.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&CreateGroup_Params.GroupName, 0x10, &GroupName, 0x10);

	this->ProcessEvent(uFnCreateGroup, &CreateGroup_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingBase::GetIdMappings(class FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings)
{
	static UFunction* uFnGetIdMappings = nullptr;

	if (!uFnGetIdMappings)
	{
		uFnGetIdMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.GetIdMappings");
	}

	UMcpIdMappingBase_execGetIdMappings_Params GetIdMappings_Params;
	memcpy_s(&GetIdMappings_Params.ExternalType, 0x10, &ExternalType, 0x10);
	memcpy_s(&GetIdMappings_Params.IDMappings, 0x10, &IDMappings, 0x10);

	this->ProcessEvent(uFnGetIdMappings, &GetIdMappings_Params, nullptr);

	memcpy_s(&IDMappings, 0x10, &GetIdMappings_Params.IDMappings, 0x10);
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::OnQueryMappingsComplete(class FString ExternalType, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryMappingsComplete = nullptr;

	if (!uFnOnQueryMappingsComplete)
	{
		uFnOnQueryMappingsComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete");
	}

	UMcpIdMappingBase_execOnQueryMappingsComplete_Params OnQueryMappingsComplete_Params;
	memcpy_s(&OnQueryMappingsComplete_Params.ExternalType, 0x10, &ExternalType, 0x10);
	OnQueryMappingsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMappingsComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryMappingsComplete, &OnQueryMappingsComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ExternalIds                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingBase::QueryMappings(class FString ExternalType, TArray<class FString>& ExternalIds)
{
	static UFunction* uFnQueryMappings = nullptr;

	if (!uFnQueryMappings)
	{
		uFnQueryMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.QueryMappings");
	}

	UMcpIdMappingBase_execQueryMappings_Params QueryMappings_Params;
	memcpy_s(&QueryMappings_Params.ExternalType, 0x10, &ExternalType, 0x10);
	memcpy_s(&QueryMappings_Params.ExternalIds, 0x10, &ExternalIds, 0x10);

	this->ProcessEvent(uFnQueryMappings, &QueryMappings_Params, nullptr);

	memcpy_s(&ExternalIds, 0x10, &QueryMappings_Params.ExternalIds, 0x10);
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::OnAddMappingComplete(class FString McpId, class FString ExternalId, class FString ExternalType, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnAddMappingComplete = nullptr;

	if (!uFnOnAddMappingComplete)
	{
		uFnOnAddMappingComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.OnAddMappingComplete");
	}

	UMcpIdMappingBase_execOnAddMappingComplete_Params OnAddMappingComplete_Params;
	memcpy_s(&OnAddMappingComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnAddMappingComplete_Params.ExternalId, 0x10, &ExternalId, 0x10);
	memcpy_s(&OnAddMappingComplete_Params.ExternalType, 0x10, &ExternalType, 0x10);
	OnAddMappingComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAddMappingComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnAddMappingComplete, &OnAddMappingComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::AddMapping(class FString McpId, class FString ExternalId, class FString ExternalType)
{
	static UFunction* uFnAddMapping = nullptr;

	if (!uFnAddMapping)
	{
		uFnAddMapping = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.AddMapping");
	}

	UMcpIdMappingBase_execAddMapping_Params AddMapping_Params;
	memcpy_s(&AddMapping_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AddMapping_Params.ExternalId, 0x10, &ExternalId, 0x10);
	memcpy_s(&AddMapping_Params.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(uFnAddMapping, &AddMapping_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpIdMappingBase*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpIdMappingBase* UMcpIdMappingBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.CreateInstance");
	}

	UMcpIdMappingBase_execCreateInstance_Params CreateInstance_Params;

	UMcpIdMappingBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingManager::GetIdMappings(class FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings)
{
	static UFunction* uFnGetIdMappings = nullptr;

	if (!uFnGetIdMappings)
	{
		uFnGetIdMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.GetIdMappings");
	}

	UMcpIdMappingManager_execGetIdMappings_Params GetIdMappings_Params;
	memcpy_s(&GetIdMappings_Params.ExternalType, 0x10, &ExternalType, 0x10);
	memcpy_s(&GetIdMappings_Params.IDMappings, 0x10, &IDMappings, 0x10);

	this->ProcessEvent(uFnGetIdMappings, &GetIdMappings_Params, nullptr);

	memcpy_s(&IDMappings, 0x10, &GetIdMappings_Params.IDMappings, 0x10);
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryMappingsRequestComplete = nullptr;

	if (!uFnOnQueryMappingsRequestComplete)
	{
		uFnOnQueryMappingsRequestComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete");
	}

	UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Params OnQueryMappingsRequestComplete_Params;
	memcpy_s(&OnQueryMappingsRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryMappingsRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryMappingsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryMappingsRequestComplete, &OnQueryMappingsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ExternalIds                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingManager::QueryMappings(class FString ExternalType, TArray<class FString>& ExternalIds)
{
	static UFunction* uFnQueryMappings = nullptr;

	if (!uFnQueryMappings)
	{
		uFnQueryMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.QueryMappings");
	}

	UMcpIdMappingManager_execQueryMappings_Params QueryMappings_Params;
	memcpy_s(&QueryMappings_Params.ExternalType, 0x10, &ExternalType, 0x10);
	memcpy_s(&QueryMappings_Params.ExternalIds, 0x10, &ExternalIds, 0x10);

	this->ProcessEvent(uFnQueryMappings, &QueryMappings_Params, nullptr);

	memcpy_s(&ExternalIds, 0x10, &QueryMappings_Params.ExternalIds, 0x10);
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAddMappingRequestComplete = nullptr;

	if (!uFnOnAddMappingRequestComplete)
	{
		uFnOnAddMappingRequestComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete");
	}

	UMcpIdMappingManager_execOnAddMappingRequestComplete_Params OnAddMappingRequestComplete_Params;
	memcpy_s(&OnAddMappingRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnAddMappingRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnAddMappingRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddMappingRequestComplete, &OnAddMappingRequestComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingManager::AddMapping(class FString McpId, class FString ExternalId, class FString ExternalType)
{
	static UFunction* uFnAddMapping = nullptr;

	if (!uFnAddMapping)
	{
		uFnAddMapping = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.AddMapping");
	}

	UMcpIdMappingManager_execAddMapping_Params AddMapping_Params;
	memcpy_s(&AddMapping_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AddMapping_Params.ExternalId, 0x10, &ExternalId, 0x10);
	memcpy_s(&AddMapping_Params.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(uFnAddMapping, &AddMapping_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnDeleteValueComplete(class FString McpId, class FString SaveSlot, struct FName ValueId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteValueComplete = nullptr;

	if (!uFnOnDeleteValueComplete)
	{
		uFnOnDeleteValueComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete");
	}

	UMcpManagedValueManagerBase_execOnDeleteValueComplete_Params OnDeleteValueComplete_Params;
	memcpy_s(&OnDeleteValueComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnDeleteValueComplete_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&OnDeleteValueComplete_Params.ValueId, 0x8, &ValueId, 0x8);
	OnDeleteValueComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteValueComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteValueComplete, &OnDeleteValueComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

void UMcpManagedValueManagerBase::DeleteValue(class FString McpId, class FString SaveSlot, struct FName ValueId)
{
	static UFunction* uFnDeleteValue = nullptr;

	if (!uFnDeleteValue)
	{
		uFnDeleteValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.DeleteValue");
	}

	UMcpManagedValueManagerBase_execDeleteValue_Params DeleteValue_Params;
	memcpy_s(&DeleteValue_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteValue_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&DeleteValue_Params.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(uFnDeleteValue, &DeleteValue_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int32_t                        Value                          (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnUpdateValueComplete(class FString McpId, class FString SaveSlot, struct FName ValueId, int32_t Value, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnUpdateValueComplete = nullptr;

	if (!uFnOnUpdateValueComplete)
	{
		uFnOnUpdateValueComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete");
	}

	UMcpManagedValueManagerBase_execOnUpdateValueComplete_Params OnUpdateValueComplete_Params;
	memcpy_s(&OnUpdateValueComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnUpdateValueComplete_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&OnUpdateValueComplete_Params.ValueId, 0x8, &ValueId, 0x8);
	memcpy_s(&OnUpdateValueComplete_Params.Value, 0x4, &Value, 0x4);
	OnUpdateValueComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateValueComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnUpdateValueComplete, &OnUpdateValueComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int32_t                        Value                          (CPF_Parm)

void UMcpManagedValueManagerBase::UpdateValue(class FString McpId, class FString SaveSlot, struct FName ValueId, int32_t Value)
{
	static UFunction* uFnUpdateValue = nullptr;

	if (!uFnUpdateValue)
	{
		uFnUpdateValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.UpdateValue");
	}

	UMcpManagedValueManagerBase_execUpdateValue_Params UpdateValue_Params;
	memcpy_s(&UpdateValue_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&UpdateValue_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&UpdateValue_Params.ValueId, 0x8, &ValueId, 0x8);
	memcpy_s(&UpdateValue_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnUpdateValue, &UpdateValue_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

int32_t UMcpManagedValueManagerBase::GetValue(class FString McpId, class FString SaveSlot, struct FName ValueId)
{
	static UFunction* uFnGetValue = nullptr;

	if (!uFnGetValue)
	{
		uFnGetValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.GetValue");
	}

	UMcpManagedValueManagerBase_execGetValue_Params GetValue_Params;
	memcpy_s(&GetValue_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValue_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&GetValue_Params.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(uFnGetValue, &GetValue_Params, nullptr);

	return GetValue_Params.ReturnValue;
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FManagedValue>   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManagerBase::GetValues(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnGetValues = nullptr;

	if (!uFnGetValues)
	{
		uFnGetValues = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.GetValues");
	}

	UMcpManagedValueManagerBase_execGetValues_Params GetValues_Params;
	memcpy_s(&GetValues_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValues_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnGetValues, &GetValues_Params, nullptr);

	return GetValues_Params.ReturnValue;
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnReadSaveSlotComplete(class FString McpId, class FString SaveSlot, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnReadSaveSlotComplete = nullptr;

	if (!uFnOnReadSaveSlotComplete)
	{
		uFnOnReadSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete");
	}

	UMcpManagedValueManagerBase_execOnReadSaveSlotComplete_Params OnReadSaveSlotComplete_Params;
	memcpy_s(&OnReadSaveSlotComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnReadSaveSlotComplete_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	OnReadSaveSlotComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSaveSlotComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnReadSaveSlotComplete, &OnReadSaveSlotComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::ReadSaveSlot(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnReadSaveSlot = nullptr;

	if (!uFnReadSaveSlot)
	{
		uFnReadSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot");
	}

	UMcpManagedValueManagerBase_execReadSaveSlot_Params ReadSaveSlot_Params;
	memcpy_s(&ReadSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ReadSaveSlot_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnReadSaveSlot, &ReadSaveSlot_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnCreateSaveSlotComplete(class FString McpId, class FString SaveSlot, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnCreateSaveSlotComplete = nullptr;

	if (!uFnOnCreateSaveSlotComplete)
	{
		uFnOnCreateSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete");
	}

	UMcpManagedValueManagerBase_execOnCreateSaveSlotComplete_Params OnCreateSaveSlotComplete_Params;
	memcpy_s(&OnCreateSaveSlotComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnCreateSaveSlotComplete_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	OnCreateSaveSlotComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateSaveSlotComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnCreateSaveSlotComplete, &OnCreateSaveSlotComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::CreateSaveSlot(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnCreateSaveSlot = nullptr;

	if (!uFnCreateSaveSlot)
	{
		uFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot");
	}

	UMcpManagedValueManagerBase_execCreateSaveSlot_Params CreateSaveSlot_Params;
	memcpy_s(&CreateSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnCreateSaveSlot, &CreateSaveSlot_Params, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpManagedValueManagerBase* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpManagedValueManagerBase* UMcpManagedValueManagerBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.CreateInstance");
	}

	UMcpManagedValueManagerBase_execCreateInstance_Params CreateInstance_Params;

	UMcpManagedValueManagerBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteValueRequestComplete = nullptr;

	if (!uFnOnDeleteValueRequestComplete)
	{
		uFnOnDeleteValueRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete");
	}

	UMcpManagedValueManager_execOnDeleteValueRequestComplete_Params OnDeleteValueRequestComplete_Params;
	memcpy_s(&OnDeleteValueRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteValueRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnDeleteValueRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteValueRequestComplete, &OnDeleteValueRequestComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.DeleteValue
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

void UMcpManagedValueManager::DeleteValue(class FString McpId, class FString SaveSlot, struct FName ValueId)
{
	static UFunction* uFnDeleteValue = nullptr;

	if (!uFnDeleteValue)
	{
		uFnDeleteValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.DeleteValue");
	}

	UMcpManagedValueManager_execDeleteValue_Params DeleteValue_Params;
	memcpy_s(&DeleteValue_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteValue_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&DeleteValue_Params.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(uFnDeleteValue, &DeleteValue_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUpdateValueRequestComplete = nullptr;

	if (!uFnOnUpdateValueRequestComplete)
	{
		uFnOnUpdateValueRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete");
	}

	UMcpManagedValueManager_execOnUpdateValueRequestComplete_Params OnUpdateValueRequestComplete_Params;
	memcpy_s(&OnUpdateValueRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnUpdateValueRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnUpdateValueRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateValueRequestComplete, &OnUpdateValueRequestComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.UpdateValue
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int32_t                        Value                          (CPF_Parm)

void UMcpManagedValueManager::UpdateValue(class FString McpId, class FString SaveSlot, struct FName ValueId, int32_t Value)
{
	static UFunction* uFnUpdateValue = nullptr;

	if (!uFnUpdateValue)
	{
		uFnUpdateValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.UpdateValue");
	}

	UMcpManagedValueManager_execUpdateValue_Params UpdateValue_Params;
	memcpy_s(&UpdateValue_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&UpdateValue_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&UpdateValue_Params.ValueId, 0x8, &ValueId, 0x8);
	memcpy_s(&UpdateValue_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnUpdateValue, &UpdateValue_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.GetValue
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

int32_t UMcpManagedValueManager::GetValue(class FString McpId, class FString SaveSlot, struct FName ValueId)
{
	static UFunction* uFnGetValue = nullptr;

	if (!uFnGetValue)
	{
		uFnGetValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.GetValue");
	}

	UMcpManagedValueManager_execGetValue_Params GetValue_Params;
	memcpy_s(&GetValue_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValue_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&GetValue_Params.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(uFnGetValue, &GetValue_Params, nullptr);

	return GetValue_Params.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.GetValues
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<struct FManagedValue>   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManager::GetValues(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnGetValues = nullptr;

	if (!uFnGetValues)
	{
		uFnGetValues = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.GetValues");
	}

	UMcpManagedValueManager_execGetValues_Params GetValues_Params;
	memcpy_s(&GetValues_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValues_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnGetValues, &GetValues_Params, nullptr);

	return GetValues_Params.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadSaveSlotRequestComplete = nullptr;

	if (!uFnOnReadSaveSlotRequestComplete)
	{
		uFnOnReadSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete");
	}

	UMcpManagedValueManager_execOnReadSaveSlotRequestComplete_Params OnReadSaveSlotRequestComplete_Params;
	memcpy_s(&OnReadSaveSlotRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnReadSaveSlotRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnReadSaveSlotRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadSaveSlotRequestComplete, &OnReadSaveSlotRequestComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManager::ReadSaveSlot(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnReadSaveSlot = nullptr;

	if (!uFnReadSaveSlot)
	{
		uFnReadSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.ReadSaveSlot");
	}

	UMcpManagedValueManager_execReadSaveSlot_Params ReadSaveSlot_Params;
	memcpy_s(&ReadSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ReadSaveSlot_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnReadSaveSlot, &ReadSaveSlot_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManager::ParseValuesForSaveSlot(class FString McpId, class FString SaveSlot, class FString JsonPayload)
{
	static UFunction* uFnParseValuesForSaveSlot = nullptr;

	if (!uFnParseValuesForSaveSlot)
	{
		uFnParseValuesForSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot");
	}

	UMcpManagedValueManager_execParseValuesForSaveSlot_Params ParseValuesForSaveSlot_Params;
	memcpy_s(&ParseValuesForSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ParseValuesForSaveSlot_Params.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&ParseValuesForSaveSlot_Params.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(uFnParseValuesForSaveSlot, &ParseValuesForSaveSlot_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

int32_t UMcpManagedValueManager::FindSaveSlotIndex(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnFindSaveSlotIndex = nullptr;

	if (!uFnFindSaveSlotIndex)
	{
		uFnFindSaveSlotIndex = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.FindSaveSlotIndex");
	}

	UMcpManagedValueManager_execFindSaveSlotIndex_Params FindSaveSlotIndex_Params;
	memcpy_s(&FindSaveSlotIndex_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindSaveSlotIndex_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnFindSaveSlotIndex, &FindSaveSlotIndex_Params, nullptr);

	return FindSaveSlotIndex_Params.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnCreateSaveSlotRequestComplete = nullptr;

	if (!uFnOnCreateSaveSlotRequestComplete)
	{
		uFnOnCreateSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete");
	}

	UMcpManagedValueManager_execOnCreateSaveSlotRequestComplete_Params OnCreateSaveSlotRequestComplete_Params;
	memcpy_s(&OnCreateSaveSlotRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnCreateSaveSlotRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnCreateSaveSlotRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateSaveSlotRequestComplete, &OnCreateSaveSlotRequestComplete_Params, nullptr);
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManager::CreateSaveSlot(class FString McpId, class FString SaveSlot)
{
	static UFunction* uFnCreateSaveSlot = nullptr;

	if (!uFnCreateSaveSlot)
	{
		uFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.CreateSaveSlot");
	}

	UMcpManagedValueManager_execCreateSaveSlot_Params CreateSaveSlot_Params;
	memcpy_s(&CreateSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Params.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(uFnCreateSaveSlot, &CreateSaveSlot_Params, nullptr);
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServerTimeBase::GetLastServerTime()
{
	static UFunction* uFnGetLastServerTime = nullptr;

	if (!uFnGetLastServerTime)
	{
		uFnGetLastServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.GetLastServerTime");
	}

	UMcpServerTimeBase_execGetLastServerTime_Params GetLastServerTime_Params;

	this->ProcessEvent(uFnGetLastServerTime, &GetLastServerTime_Params, nullptr);

	return GetLastServerTime_Params.ReturnValue;
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  DateTimeStr                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpServerTimeBase::OnQueryServerTimeComplete(unsigned long bWasSuccessful, class FString DateTimeStr, class FString Error)
{
	static UFunction* uFnOnQueryServerTimeComplete = nullptr;

	if (!uFnOnQueryServerTimeComplete)
	{
		uFnOnQueryServerTimeComplete = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete");
	}

	UMcpServerTimeBase_execOnQueryServerTimeComplete_Params OnQueryServerTimeComplete_Params;
	OnQueryServerTimeComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryServerTimeComplete_Params.DateTimeStr, 0x10, &DateTimeStr, 0x10);
	memcpy_s(&OnQueryServerTimeComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryServerTimeComplete, &OnQueryServerTimeComplete_Params, nullptr);
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpServerTimeBase::QueryServerTime()
{
	static UFunction* uFnQueryServerTime = nullptr;

	if (!uFnQueryServerTime)
	{
		uFnQueryServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.QueryServerTime");
	}

	UMcpServerTimeBase_execQueryServerTime_Params QueryServerTime_Params;

	this->ProcessEvent(uFnQueryServerTime, &QueryServerTime_Params, nullptr);
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpServerTimeBase*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpServerTimeBase* UMcpServerTimeBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.CreateInstance");
	}

	UMcpServerTimeBase_execCreateInstance_Params CreateInstance_Params;

	UMcpServerTimeBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServerTimeManager::GetLastServerTime()
{
	static UFunction* uFnGetLastServerTime = nullptr;

	if (!uFnGetLastServerTime)
	{
		uFnGetLastServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.GetLastServerTime");
	}

	UMcpServerTimeManager_execGetLastServerTime_Params GetLastServerTime_Params;

	this->ProcessEvent(uFnGetLastServerTime, &GetLastServerTime_Params, nullptr);

	return GetLastServerTime_Params.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpServerTimeManager::OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryServerTimeHTTPRequestComplete = nullptr;

	if (!uFnOnQueryServerTimeHTTPRequestComplete)
	{
		uFnOnQueryServerTimeHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete");
	}

	UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Params OnQueryServerTimeHTTPRequestComplete_Params;
	memcpy_s(&OnQueryServerTimeHTTPRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryServerTimeHTTPRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryServerTimeHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryServerTimeHTTPRequestComplete, &OnQueryServerTimeHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UMcpServerTimeManager::QueryServerTime()
{
	static UFunction* uFnQueryServerTime = nullptr;

	if (!uFnQueryServerTime)
	{
		uFnQueryServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.QueryServerTime");
	}

	UMcpServerTimeManager_execQueryServerTime_Params QueryServerTime_Params;

	this->ProcessEvent(uFnQueryServerTime, &QueryServerTime_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnRecordIapComplete(class FString McpId, class FString SaveSlotId, TArray<class FString> UpdatedItemIds, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnRecordIapComplete = nullptr;

	if (!uFnOnRecordIapComplete)
	{
		uFnOnRecordIapComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnRecordIapComplete");
	}

	UMcpUserInventoryBase_execOnRecordIapComplete_Params OnRecordIapComplete_Params;
	memcpy_s(&OnRecordIapComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnRecordIapComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnRecordIapComplete_Params.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnRecordIapComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRecordIapComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnRecordIapComplete, &OnRecordIapComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.RecordIap
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Receipt                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::RecordIap(class FString McpId, class FString SaveSlotId, class FString Receipt)
{
	static UFunction* uFnRecordIap = nullptr;

	if (!uFnRecordIap)
	{
		uFnRecordIap = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.RecordIap");
	}

	UMcpUserInventoryBase_execRecordIap_Params RecordIap_Params;
	memcpy_s(&RecordIap_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&RecordIap_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&RecordIap_Params.Receipt, 0x10, &Receipt, 0x10);

	this->ProcessEvent(uFnRecordIap, &RecordIap_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteItemComplete(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteItemComplete = nullptr;

	if (!uFnOnDeleteItemComplete)
	{
		uFnOnDeleteItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete");
	}

	UMcpUserInventoryBase_execOnDeleteItemComplete_Params OnDeleteItemComplete_Params;
	memcpy_s(&OnDeleteItemComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnDeleteItemComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnDeleteItemComplete_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	OnDeleteItemComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteItemComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteItemComplete, &OnDeleteItemComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::DeleteItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, int32_t StoreVersion)
{
	static UFunction* uFnDeleteItem = nullptr;

	if (!uFnDeleteItem)
	{
		uFnDeleteItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.DeleteItem");
	}

	UMcpUserInventoryBase_execDeleteItem_Params DeleteItem_Params;
	memcpy_s(&DeleteItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&DeleteItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&DeleteItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(uFnDeleteItem, &DeleteItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnConsumeItemComplete(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, TArray<class FString> UpdatedItemIds, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnConsumeItemComplete = nullptr;

	if (!uFnOnConsumeItemComplete)
	{
		uFnOnConsumeItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete");
	}

	UMcpUserInventoryBase_execOnConsumeItemComplete_Params OnConsumeItemComplete_Params;
	memcpy_s(&OnConsumeItemComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnConsumeItemComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnConsumeItemComplete_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&OnConsumeItemComplete_Params.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnConsumeItemComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnConsumeItemComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnConsumeItemComplete, &OnConsumeItemComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::ConsumeItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, int32_t Quantity, int32_t StoreVersion)
{
	static UFunction* uFnConsumeItem = nullptr;

	if (!uFnConsumeItem)
	{
		uFnConsumeItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.ConsumeItem");
	}

	UMcpUserInventoryBase_execConsumeItem_Params ConsumeItem_Params;
	memcpy_s(&ConsumeItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ConsumeItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&ConsumeItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&ConsumeItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&ConsumeItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(uFnConsumeItem, &ConsumeItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnEarnItemComplete(class FString McpId, class FString SaveSlotId, class FString GlobalItemId, TArray<class FString> UpdatedItemIds, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnEarnItemComplete = nullptr;

	if (!uFnOnEarnItemComplete)
	{
		uFnOnEarnItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnEarnItemComplete");
	}

	UMcpUserInventoryBase_execOnEarnItemComplete_Params OnEarnItemComplete_Params;
	memcpy_s(&OnEarnItemComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnEarnItemComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnEarnItemComplete_Params.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&OnEarnItemComplete_Params.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnEarnItemComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEarnItemComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnEarnItemComplete, &OnEarnItemComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.EarnItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::EarnItem(class FString McpId, class FString SaveSlotId, class FString GlobalItemId, int32_t Quantity, int32_t StoreVersion)
{
	static UFunction* uFnEarnItem = nullptr;

	if (!uFnEarnItem)
	{
		uFnEarnItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.EarnItem");
	}

	UMcpUserInventoryBase_execEarnItem_Params EarnItem_Params;
	memcpy_s(&EarnItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&EarnItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&EarnItem_Params.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&EarnItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&EarnItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(uFnEarnItem, &EarnItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnSellItemComplete(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, TArray<class FString> UpdatedItemIds, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnSellItemComplete = nullptr;

	if (!uFnOnSellItemComplete)
	{
		uFnOnSellItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnSellItemComplete");
	}

	UMcpUserInventoryBase_execOnSellItemComplete_Params OnSellItemComplete_Params;
	memcpy_s(&OnSellItemComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnSellItemComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnSellItemComplete_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&OnSellItemComplete_Params.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnSellItemComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnSellItemComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnSellItemComplete, &OnSellItemComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.SellItem
// [0x00424000] (FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::SellItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, int32_t Quantity, int32_t StoreVersion, TArray<struct FMcpInventoryItemContainer>& ExpectedResultItems)
{
	static UFunction* uFnSellItem = nullptr;

	if (!uFnSellItem)
	{
		uFnSellItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.SellItem");
	}

	UMcpUserInventoryBase_execSellItem_Params SellItem_Params;
	memcpy_s(&SellItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&SellItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&SellItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&SellItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&SellItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);
	memcpy_s(&SellItem_Params.ExpectedResultItems, 0x10, &ExpectedResultItems, 0x10);

	this->ProcessEvent(uFnSellItem, &SellItem_Params, nullptr);

	memcpy_s(&ExpectedResultItems, 0x10, &SellItem_Params.ExpectedResultItems, 0x10);
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnPurchaseItemComplete(class FString McpId, class FString SaveSlotId, class FString GlobalItemId, TArray<class FString> UpdatedItemIds, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnPurchaseItemComplete = nullptr;

	if (!uFnOnPurchaseItemComplete)
	{
		uFnOnPurchaseItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete");
	}

	UMcpUserInventoryBase_execOnPurchaseItemComplete_Params OnPurchaseItemComplete_Params;
	memcpy_s(&OnPurchaseItemComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnPurchaseItemComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnPurchaseItemComplete_Params.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&OnPurchaseItemComplete_Params.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnPurchaseItemComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnPurchaseItemComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnPurchaseItemComplete, &OnPurchaseItemComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          PurchaseItemIds                (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)
// float                          Scalar                         (CPF_Parm)

void UMcpUserInventoryBase::PurchaseItem(class FString McpId, class FString SaveSlotId, class FString GlobalItemId, TArray<class FString> PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar)
{
	static UFunction* uFnPurchaseItem = nullptr;

	if (!uFnPurchaseItem)
	{
		uFnPurchaseItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.PurchaseItem");
	}

	UMcpUserInventoryBase_execPurchaseItem_Params PurchaseItem_Params;
	memcpy_s(&PurchaseItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&PurchaseItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&PurchaseItem_Params.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&PurchaseItem_Params.PurchaseItemIds, 0x10, &PurchaseItemIds, 0x10);
	memcpy_s(&PurchaseItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&PurchaseItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);
	memcpy_s(&PurchaseItem_Params.Scalar, 0x4, &Scalar, 0x4);

	this->ProcessEvent(uFnPurchaseItem, &PurchaseItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserInventoryBase::GetInventoryItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, struct FMcpInventoryItem& OutInventoryItem)
{
	static UFunction* uFnGetInventoryItem = nullptr;

	if (!uFnGetInventoryItem)
	{
		uFnGetInventoryItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.GetInventoryItem");
	}

	UMcpUserInventoryBase_execGetInventoryItem_Params GetInventoryItem_Params;
	memcpy_s(&GetInventoryItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&GetInventoryItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&GetInventoryItem_Params.OutInventoryItem, 0x50, &OutInventoryItem, 0x50);

	this->ProcessEvent(uFnGetInventoryItem, &GetInventoryItem_Params, nullptr);

	memcpy_s(&OutInventoryItem, 0x50, &GetInventoryItem_Params.OutInventoryItem, 0x50);

	return GetInventoryItem_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::GetInventoryItems(class FString McpId, class FString SaveSlotId, TArray<struct FMcpInventoryItem>& OutInventoryItems)
{
	static UFunction* uFnGetInventoryItems = nullptr;

	if (!uFnGetInventoryItems)
	{
		uFnGetInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.GetInventoryItems");
	}

	UMcpUserInventoryBase_execGetInventoryItems_Params GetInventoryItems_Params;
	memcpy_s(&GetInventoryItems_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItems_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&GetInventoryItems_Params.OutInventoryItems, 0x10, &OutInventoryItems, 0x10);

	this->ProcessEvent(uFnGetInventoryItems, &GetInventoryItems_Params, nullptr);

	memcpy_s(&OutInventoryItems, 0x10, &GetInventoryItems_Params.OutInventoryItems, 0x10);
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnQueryInventoryItemsComplete(class FString McpId, class FString SaveSlotId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryInventoryItemsComplete = nullptr;

	if (!uFnOnQueryInventoryItemsComplete)
	{
		uFnOnQueryInventoryItemsComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete");
	}

	UMcpUserInventoryBase_execOnQueryInventoryItemsComplete_Params OnQueryInventoryItemsComplete_Params;
	memcpy_s(&OnQueryInventoryItemsComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnQueryInventoryItemsComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	OnQueryInventoryItemsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryInventoryItemsComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryInventoryItemsComplete, &OnQueryInventoryItemsComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::QueryInventoryItems(class FString McpId, class FString SaveSlotId)
{
	static UFunction* uFnQueryInventoryItems = nullptr;

	if (!uFnQueryInventoryItems)
	{
		uFnQueryInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.QueryInventoryItems");
	}

	UMcpUserInventoryBase_execQueryInventoryItems_Params QueryInventoryItems_Params;
	memcpy_s(&QueryInventoryItems_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&QueryInventoryItems_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(uFnQueryInventoryItems, &QueryInventoryItems_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnQuerySaveSlotListComplete(class FString McpId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQuerySaveSlotListComplete = nullptr;

	if (!uFnOnQuerySaveSlotListComplete)
	{
		uFnOnQuerySaveSlotListComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete");
	}

	UMcpUserInventoryBase_execOnQuerySaveSlotListComplete_Params OnQuerySaveSlotListComplete_Params;
	memcpy_s(&OnQuerySaveSlotListComplete_Params.McpId, 0x10, &McpId, 0x10);
	OnQuerySaveSlotListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQuerySaveSlotListComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQuerySaveSlotListComplete, &OnQuerySaveSlotListComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

TArray<class FString> UMcpUserInventoryBase::GetSaveSlotList(class FString McpId)
{
	static UFunction* uFnGetSaveSlotList = nullptr;

	if (!uFnGetSaveSlotList)
	{
		uFnGetSaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.GetSaveSlotList");
	}

	UMcpUserInventoryBase_execGetSaveSlotList_Params GetSaveSlotList_Params;
	memcpy_s(&GetSaveSlotList_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnGetSaveSlotList, &GetSaveSlotList_Params, nullptr);

	return GetSaveSlotList_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::QuerySaveSlotList(class FString McpId)
{
	static UFunction* uFnQuerySaveSlotList = nullptr;

	if (!uFnQuerySaveSlotList)
	{
		uFnQuerySaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.QuerySaveSlotList");
	}

	UMcpUserInventoryBase_execQuerySaveSlotList_Params QuerySaveSlotList_Params;
	memcpy_s(&QuerySaveSlotList_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnQuerySaveSlotList, &QuerySaveSlotList_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteSaveSlotComplete(class FString McpId, class FString SaveSlotId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteSaveSlotComplete = nullptr;

	if (!uFnOnDeleteSaveSlotComplete)
	{
		uFnOnDeleteSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete");
	}

	UMcpUserInventoryBase_execOnDeleteSaveSlotComplete_Params OnDeleteSaveSlotComplete_Params;
	memcpy_s(&OnDeleteSaveSlotComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnDeleteSaveSlotComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	OnDeleteSaveSlotComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteSaveSlotComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteSaveSlotComplete, &OnDeleteSaveSlotComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::DeleteSaveSlot(class FString McpId, class FString SaveSlotId)
{
	static UFunction* uFnDeleteSaveSlot = nullptr;

	if (!uFnDeleteSaveSlot)
	{
		uFnDeleteSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.DeleteSaveSlot");
	}

	UMcpUserInventoryBase_execDeleteSaveSlot_Params DeleteSaveSlot_Params;
	memcpy_s(&DeleteSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteSaveSlot_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(uFnDeleteSaveSlot, &DeleteSaveSlot_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnCreateSaveSlotComplete(class FString McpId, class FString SaveSlotId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnCreateSaveSlotComplete = nullptr;

	if (!uFnOnCreateSaveSlotComplete)
	{
		uFnOnCreateSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete");
	}

	UMcpUserInventoryBase_execOnCreateSaveSlotComplete_Params OnCreateSaveSlotComplete_Params;
	memcpy_s(&OnCreateSaveSlotComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnCreateSaveSlotComplete_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	OnCreateSaveSlotComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateSaveSlotComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnCreateSaveSlotComplete, &OnCreateSaveSlotComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ParentSaveSlotId               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::CreateSaveSlot(class FString McpId, class FString SaveSlotId, class FString ParentSaveSlotId)
{
	static UFunction* uFnCreateSaveSlot = nullptr;

	if (!uFnCreateSaveSlot)
	{
		uFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.CreateSaveSlot");
	}

	UMcpUserInventoryBase_execCreateSaveSlot_Params CreateSaveSlot_Params;
	memcpy_s(&CreateSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&CreateSaveSlot_Params.ParentSaveSlotId, 0x10, &ParentSaveSlotId, 0x10);

	this->ProcessEvent(uFnCreateSaveSlot, &CreateSaveSlot_Params, nullptr);
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpUserInventoryBase*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpUserInventoryBase* UMcpUserInventoryBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.CreateInstance");
	}

	UMcpUserInventoryBase_execCreateInstance_Params CreateInstance_Params;

	UMcpUserInventoryBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRecordIapRequestComplete = nullptr;

	if (!uFnOnRecordIapRequestComplete)
	{
		uFnOnRecordIapRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete");
	}

	UMcpUserInventoryManager_execOnRecordIapRequestComplete_Params OnRecordIapRequestComplete_Params;
	memcpy_s(&OnRecordIapRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnRecordIapRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnRecordIapRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRecordIapRequestComplete, &OnRecordIapRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.RecordIap
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Receipt                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::RecordIap(class FString McpId, class FString SaveSlotId, class FString Receipt)
{
	static UFunction* uFnRecordIap = nullptr;

	if (!uFnRecordIap)
	{
		uFnRecordIap = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.RecordIap");
	}

	UMcpUserInventoryManager_execRecordIap_Params RecordIap_Params;
	memcpy_s(&RecordIap_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&RecordIap_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&RecordIap_Params.Receipt, 0x10, &Receipt, 0x10);

	this->ProcessEvent(uFnRecordIap, &RecordIap_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteItemRequestComplete = nullptr;

	if (!uFnOnDeleteItemRequestComplete)
	{
		uFnOnDeleteItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete");
	}

	UMcpUserInventoryManager_execOnDeleteItemRequestComplete_Params OnDeleteItemRequestComplete_Params;
	memcpy_s(&OnDeleteItemRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteItemRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnDeleteItemRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteItemRequestComplete, &OnDeleteItemRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::DeleteItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, int32_t StoreVersion)
{
	static UFunction* uFnDeleteItem = nullptr;

	if (!uFnDeleteItem)
	{
		uFnDeleteItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.DeleteItem");
	}

	UMcpUserInventoryManager_execDeleteItem_Params DeleteItem_Params;
	memcpy_s(&DeleteItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&DeleteItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&DeleteItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(uFnDeleteItem, &DeleteItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnConsumeItemRequestComplete = nullptr;

	if (!uFnOnConsumeItemRequestComplete)
	{
		uFnOnConsumeItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete");
	}

	UMcpUserInventoryManager_execOnConsumeItemRequestComplete_Params OnConsumeItemRequestComplete_Params;
	memcpy_s(&OnConsumeItemRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnConsumeItemRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnConsumeItemRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnConsumeItemRequestComplete, &OnConsumeItemRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::ConsumeItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, int32_t Quantity, int32_t StoreVersion)
{
	static UFunction* uFnConsumeItem = nullptr;

	if (!uFnConsumeItem)
	{
		uFnConsumeItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.ConsumeItem");
	}

	UMcpUserInventoryManager_execConsumeItem_Params ConsumeItem_Params;
	memcpy_s(&ConsumeItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ConsumeItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&ConsumeItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&ConsumeItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&ConsumeItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(uFnConsumeItem, &ConsumeItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnEarnItemRequestComplete = nullptr;

	if (!uFnOnEarnItemRequestComplete)
	{
		uFnOnEarnItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete");
	}

	UMcpUserInventoryManager_execOnEarnItemRequestComplete_Params OnEarnItemRequestComplete_Params;
	memcpy_s(&OnEarnItemRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnEarnItemRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnEarnItemRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnEarnItemRequestComplete, &OnEarnItemRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.EarnItem
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::EarnItem(class FString McpId, class FString SaveSlotId, class FString GlobalItemId, int32_t Quantity, int32_t StoreVersion)
{
	static UFunction* uFnEarnItem = nullptr;

	if (!uFnEarnItem)
	{
		uFnEarnItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.EarnItem");
	}

	UMcpUserInventoryManager_execEarnItem_Params EarnItem_Params;
	memcpy_s(&EarnItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&EarnItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&EarnItem_Params.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&EarnItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&EarnItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(uFnEarnItem, &EarnItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnSellItemRequestComplete = nullptr;

	if (!uFnOnSellItemRequestComplete)
	{
		uFnOnSellItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete");
	}

	UMcpUserInventoryManager_execOnSellItemRequestComplete_Params OnSellItemRequestComplete_Params;
	memcpy_s(&OnSellItemRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnSellItemRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnSellItemRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnSellItemRequestComplete, &OnSellItemRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.SellItem
// [0x400424002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::SellItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, int32_t Quantity, int32_t StoreVersion, TArray<struct FMcpInventoryItemContainer>& ExpectedResultItems)
{
	static UFunction* uFnSellItem = nullptr;

	if (!uFnSellItem)
	{
		uFnSellItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.SellItem");
	}

	UMcpUserInventoryManager_execSellItem_Params SellItem_Params;
	memcpy_s(&SellItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&SellItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&SellItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&SellItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&SellItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);
	memcpy_s(&SellItem_Params.ExpectedResultItems, 0x10, &ExpectedResultItems, 0x10);

	this->ProcessEvent(uFnSellItem, &SellItem_Params, nullptr);

	memcpy_s(&ExpectedResultItems, 0x10, &SellItem_Params.ExpectedResultItems, 0x10);
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnPurchaseItemRequestComplete = nullptr;

	if (!uFnOnPurchaseItemRequestComplete)
	{
		uFnOnPurchaseItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete");
	}

	UMcpUserInventoryManager_execOnPurchaseItemRequestComplete_Params OnPurchaseItemRequestComplete_Params;
	memcpy_s(&OnPurchaseItemRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnPurchaseItemRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnPurchaseItemRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnPurchaseItemRequestComplete, &OnPurchaseItemRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          PurchaseItemIds                (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Quantity                       (CPF_Parm)
// int32_t                        StoreVersion                   (CPF_Parm)
// float                          Scalar                         (CPF_Parm)

void UMcpUserInventoryManager::PurchaseItem(class FString McpId, class FString SaveSlotId, class FString GlobalItemId, TArray<class FString> PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar)
{
	static UFunction* uFnPurchaseItem = nullptr;

	if (!uFnPurchaseItem)
	{
		uFnPurchaseItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.PurchaseItem");
	}

	UMcpUserInventoryManager_execPurchaseItem_Params PurchaseItem_Params;
	memcpy_s(&PurchaseItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&PurchaseItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&PurchaseItem_Params.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&PurchaseItem_Params.PurchaseItemIds, 0x10, &PurchaseItemIds, 0x10);
	memcpy_s(&PurchaseItem_Params.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&PurchaseItem_Params.StoreVersion, 0x4, &StoreVersion, 0x4);
	memcpy_s(&PurchaseItem_Params.Scalar, 0x4, &Scalar, 0x4);

	this->ProcessEvent(uFnPurchaseItem, &PurchaseItem_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ItemID                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FInventoryItemRequestState> InItemRequests                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UMcpUserInventoryManager::FindItemRequest(class FString McpId, class FString SaveSlotId, class FString ItemID, TArray<struct FInventoryItemRequestState>& InItemRequests)
{
	static UFunction* uFnFindItemRequest = nullptr;

	if (!uFnFindItemRequest)
	{
		uFnFindItemRequest = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.FindItemRequest");
	}

	UMcpUserInventoryManager_execFindItemRequest_Params FindItemRequest_Params;
	memcpy_s(&FindItemRequest_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindItemRequest_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&FindItemRequest_Params.ItemID, 0x10, &ItemID, 0x10);
	memcpy_s(&FindItemRequest_Params.InItemRequests, 0x10, &InItemRequests, 0x10);

	this->ProcessEvent(uFnFindItemRequest, &FindItemRequest_Params, nullptr);

	memcpy_s(&InItemRequests, 0x10, &FindItemRequest_Params.InItemRequests, 0x10);

	return FindItemRequest_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UMcpUserInventoryManager::FindSaveSlotRequest(class FString McpId, class FString SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>& InSaveSlotRequests)
{
	static UFunction* uFnFindSaveSlotRequest = nullptr;

	if (!uFnFindSaveSlotRequest)
	{
		uFnFindSaveSlotRequest = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest");
	}

	UMcpUserInventoryManager_execFindSaveSlotRequest_Params FindSaveSlotRequest_Params;
	memcpy_s(&FindSaveSlotRequest_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindSaveSlotRequest_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&FindSaveSlotRequest_Params.InSaveSlotRequests, 0x10, &InSaveSlotRequests, 0x10);

	this->ProcessEvent(uFnFindSaveSlotRequest, &FindSaveSlotRequest_Params, nullptr);

	memcpy_s(&InSaveSlotRequests, 0x10, &FindSaveSlotRequest_Params.InSaveSlotRequests, 0x10);

	return FindSaveSlotRequest_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

int32_t UMcpUserInventoryManager::FindSaveSlotIndex(class FString McpId, class FString SaveSlotId)
{
	static UFunction* uFnFindSaveSlotIndex = nullptr;

	if (!uFnFindSaveSlotIndex)
	{
		uFnFindSaveSlotIndex = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex");
	}

	UMcpUserInventoryManager_execFindSaveSlotIndex_Params FindSaveSlotIndex_Params;
	memcpy_s(&FindSaveSlotIndex_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindSaveSlotIndex_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(uFnFindSaveSlotIndex, &FindSaveSlotIndex_Params, nullptr);

	return FindSaveSlotIndex_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::ParseSaveSlotList(class FString McpId, class FString JsonPayload)
{
	static UFunction* uFnParseSaveSlotList = nullptr;

	if (!uFnParseSaveSlotList)
	{
		uFnParseSaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.ParseSaveSlotList");
	}

	UMcpUserInventoryManager_execParseSaveSlotList_Params ParseSaveSlotList_Params;
	memcpy_s(&ParseSaveSlotList_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ParseSaveSlotList_Params.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(uFnParseSaveSlotList, &ParseSaveSlotList_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

TArray<class FString> UMcpUserInventoryManager::ParseInventoryForSaveSlot(class FString McpId, class FString SaveSlotId, class FString JsonPayload)
{
	static UFunction* uFnParseInventoryForSaveSlot = nullptr;

	if (!uFnParseInventoryForSaveSlot)
	{
		uFnParseInventoryForSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot");
	}

	UMcpUserInventoryManager_execParseInventoryForSaveSlot_Params ParseInventoryForSaveSlot_Params;
	memcpy_s(&ParseInventoryForSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ParseInventoryForSaveSlot_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&ParseInventoryForSaveSlot_Params.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(uFnParseInventoryForSaveSlot, &ParseInventoryForSaveSlot_Params, nullptr);

	return ParseInventoryForSaveSlot_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserInventoryManager::GetInventoryItem(class FString McpId, class FString SaveSlotId, class FString InstanceItemId, struct FMcpInventoryItem& OutInventoryItem)
{
	static UFunction* uFnGetInventoryItem = nullptr;

	if (!uFnGetInventoryItem)
	{
		uFnGetInventoryItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.GetInventoryItem");
	}

	UMcpUserInventoryManager_execGetInventoryItem_Params GetInventoryItem_Params;
	memcpy_s(&GetInventoryItem_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItem_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&GetInventoryItem_Params.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&GetInventoryItem_Params.OutInventoryItem, 0x50, &OutInventoryItem, 0x50);

	this->ProcessEvent(uFnGetInventoryItem, &GetInventoryItem_Params, nullptr);

	memcpy_s(&OutInventoryItem, 0x50, &GetInventoryItem_Params.OutInventoryItem, 0x50);

	return GetInventoryItem_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::GetInventoryItems(class FString McpId, class FString SaveSlotId, TArray<struct FMcpInventoryItem>& OutInventoryItems)
{
	static UFunction* uFnGetInventoryItems = nullptr;

	if (!uFnGetInventoryItems)
	{
		uFnGetInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.GetInventoryItems");
	}

	UMcpUserInventoryManager_execGetInventoryItems_Params GetInventoryItems_Params;
	memcpy_s(&GetInventoryItems_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItems_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&GetInventoryItems_Params.OutInventoryItems, 0x10, &OutInventoryItems, 0x10);

	this->ProcessEvent(uFnGetInventoryItems, &GetInventoryItems_Params, nullptr);

	memcpy_s(&OutInventoryItems, 0x10, &GetInventoryItems_Params.OutInventoryItems, 0x10);
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryInventoryItemsRequestComplete = nullptr;

	if (!uFnOnQueryInventoryItemsRequestComplete)
	{
		uFnOnQueryInventoryItemsRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete");
	}

	UMcpUserInventoryManager_execOnQueryInventoryItemsRequestComplete_Params OnQueryInventoryItemsRequestComplete_Params;
	memcpy_s(&OnQueryInventoryItemsRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryInventoryItemsRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryInventoryItemsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryInventoryItemsRequestComplete, &OnQueryInventoryItemsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::QueryInventoryItems(class FString McpId, class FString SaveSlotId)
{
	static UFunction* uFnQueryInventoryItems = nullptr;

	if (!uFnQueryInventoryItems)
	{
		uFnQueryInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.QueryInventoryItems");
	}

	UMcpUserInventoryManager_execQueryInventoryItems_Params QueryInventoryItems_Params;
	memcpy_s(&QueryInventoryItems_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&QueryInventoryItems_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(uFnQueryInventoryItems, &QueryInventoryItems_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

TArray<class FString> UMcpUserInventoryManager::GetSaveSlotList(class FString McpId)
{
	static UFunction* uFnGetSaveSlotList = nullptr;

	if (!uFnGetSaveSlotList)
	{
		uFnGetSaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.GetSaveSlotList");
	}

	UMcpUserInventoryManager_execGetSaveSlotList_Params GetSaveSlotList_Params;
	memcpy_s(&GetSaveSlotList_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnGetSaveSlotList, &GetSaveSlotList_Params, nullptr);

	return GetSaveSlotList_Params.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQuerySaveSlotListRequestComplete = nullptr;

	if (!uFnOnQuerySaveSlotListRequestComplete)
	{
		uFnOnQuerySaveSlotListRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete");
	}

	UMcpUserInventoryManager_execOnQuerySaveSlotListRequestComplete_Params OnQuerySaveSlotListRequestComplete_Params;
	memcpy_s(&OnQuerySaveSlotListRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQuerySaveSlotListRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQuerySaveSlotListRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQuerySaveSlotListRequestComplete, &OnQuerySaveSlotListRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::QuerySaveSlotList(class FString McpId)
{
	static UFunction* uFnQuerySaveSlotList = nullptr;

	if (!uFnQuerySaveSlotList)
	{
		uFnQuerySaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.QuerySaveSlotList");
	}

	UMcpUserInventoryManager_execQuerySaveSlotList_Params QuerySaveSlotList_Params;
	memcpy_s(&QuerySaveSlotList_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnQuerySaveSlotList, &QuerySaveSlotList_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteSaveSlotRequestComplete = nullptr;

	if (!uFnOnDeleteSaveSlotRequestComplete)
	{
		uFnOnDeleteSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete");
	}

	UMcpUserInventoryManager_execOnDeleteSaveSlotRequestComplete_Params OnDeleteSaveSlotRequestComplete_Params;
	memcpy_s(&OnDeleteSaveSlotRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteSaveSlotRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnDeleteSaveSlotRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteSaveSlotRequestComplete, &OnDeleteSaveSlotRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::DeleteSaveSlot(class FString McpId, class FString SaveSlotId)
{
	static UFunction* uFnDeleteSaveSlot = nullptr;

	if (!uFnDeleteSaveSlot)
	{
		uFnDeleteSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.DeleteSaveSlot");
	}

	UMcpUserInventoryManager_execDeleteSaveSlot_Params DeleteSaveSlot_Params;
	memcpy_s(&DeleteSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteSaveSlot_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(uFnDeleteSaveSlot, &DeleteSaveSlot_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnCreateSaveSlotRequestComplete = nullptr;

	if (!uFnOnCreateSaveSlotRequestComplete)
	{
		uFnOnCreateSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete");
	}

	UMcpUserInventoryManager_execOnCreateSaveSlotRequestComplete_Params OnCreateSaveSlotRequestComplete_Params;
	memcpy_s(&OnCreateSaveSlotRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnCreateSaveSlotRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnCreateSaveSlotRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateSaveSlotRequestComplete, &OnCreateSaveSlotRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// [0x400024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ParentSaveSlotId               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::CreateSaveSlot(class FString McpId, class FString SaveSlotId, class FString ParentSaveSlotId)
{
	static UFunction* uFnCreateSaveSlot = nullptr;

	if (!uFnCreateSaveSlot)
	{
		uFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.CreateSaveSlot");
	}

	UMcpUserInventoryManager_execCreateSaveSlot_Params CreateSaveSlot_Params;
	memcpy_s(&CreateSaveSlot_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Params.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&CreateSaveSlot_Params.ParentSaveSlotId, 0x10, &ParentSaveSlotId, 0x10);

	this->ProcessEvent(uFnCreateSaveSlot, &CreateSaveSlot_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnDeleteUserComplete(unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnDeleteUserComplete = nullptr;

	if (!uFnOnDeleteUserComplete)
	{
		uFnOnDeleteUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnDeleteUserComplete");
	}

	UMcpUserManagerBase_execOnDeleteUserComplete_Params OnDeleteUserComplete_Params;
	OnDeleteUserComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnDeleteUserComplete, &OnDeleteUserComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::DeleteUser(class FString McpId)
{
	static UFunction* uFnDeleteUser = nullptr;

	if (!uFnDeleteUser)
	{
		uFnDeleteUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.DeleteUser");
	}

	UMcpUserManagerBase_execDeleteUser_Params DeleteUser_Params;
	memcpy_s(&DeleteUser_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnDeleteUser, &DeleteUser_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.GetUser
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpUserStatus          User                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserManagerBase::GetUser(class FString McpId, struct FMcpUserStatus& User)
{
	static UFunction* uFnGetUser = nullptr;

	if (!uFnGetUser)
	{
		uFnGetUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.GetUser");
	}

	UMcpUserManagerBase_execGetUser_Params GetUser_Params;
	memcpy_s(&GetUser_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetUser_Params.User, 0x68, &User, 0x68);

	this->ProcessEvent(uFnGetUser, &GetUser_Params, nullptr);

	memcpy_s(&User, 0x68, &GetUser_Params.User, 0x68);

	return GetUser_Params.ReturnValue;
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpUserStatus>  Users                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManagerBase::GetUsers(TArray<struct FMcpUserStatus>& Users)
{
	static UFunction* uFnGetUsers = nullptr;

	if (!uFnGetUsers)
	{
		uFnGetUsers = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.GetUsers");
	}

	UMcpUserManagerBase_execGetUsers_Params GetUsers_Params;
	memcpy_s(&GetUsers_Params.Users, 0x10, &Users, 0x10);

	this->ProcessEvent(uFnGetUsers, &GetUsers_Params, nullptr);

	memcpy_s(&Users, 0x10, &GetUsers_Params.Users, 0x10);
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnQueryUsersComplete(unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnQueryUsersComplete = nullptr;

	if (!uFnOnQueryUsersComplete)
	{
		uFnOnQueryUsersComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnQueryUsersComplete");
	}

	UMcpUserManagerBase_execOnQueryUsersComplete_Params OnQueryUsersComplete_Params;
	OnQueryUsersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUsersComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnQueryUsersComplete, &OnQueryUsersComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          McpIds                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManagerBase::QueryUsers(TArray<class FString>& McpIds)
{
	static UFunction* uFnQueryUsers = nullptr;

	if (!uFnQueryUsers)
	{
		uFnQueryUsers = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.QueryUsers");
	}

	UMcpUserManagerBase_execQueryUsers_Params QueryUsers_Params;
	memcpy_s(&QueryUsers_Params.McpIds, 0x10, &McpIds, 0x10);

	this->ProcessEvent(uFnQueryUsers, &QueryUsers_Params, nullptr);

	memcpy_s(&McpIds, 0x10, &QueryUsers_Params.McpIds, 0x10);
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldUpdateLastActive        (CPF_OptionalParm | CPF_Parm)

void UMcpUserManagerBase::QueryUser(class FString McpId, unsigned long bShouldUpdateLastActive)
{
	static UFunction* uFnQueryUser = nullptr;

	if (!uFnQueryUser)
	{
		uFnQueryUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.QueryUser");
	}

	UMcpUserManagerBase_execQueryUser_Params QueryUser_Params;
	memcpy_s(&QueryUser_Params.McpId, 0x10, &McpId, 0x10);
	QueryUser_Params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent(uFnQueryUser, &QueryUser_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Token                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnAuthenticateUserComplete(class FString McpId, class FString Token, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnAuthenticateUserComplete = nullptr;

	if (!uFnOnAuthenticateUserComplete)
	{
		uFnOnAuthenticateUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete");
	}

	UMcpUserManagerBase_execOnAuthenticateUserComplete_Params OnAuthenticateUserComplete_Params;
	memcpy_s(&OnAuthenticateUserComplete_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnAuthenticateUserComplete_Params.Token, 0x10, &Token, 0x10);
	OnAuthenticateUserComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAuthenticateUserComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnAuthenticateUserComplete, &OnAuthenticateUserComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientSecret                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::AuthenticateUserMcp(class FString McpId, class FString ClientSecret, class FString UDID)
{
	static UFunction* uFnAuthenticateUserMcp = nullptr;

	if (!uFnAuthenticateUserMcp)
	{
		uFnAuthenticateUserMcp = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.AuthenticateUserMcp");
	}

	UMcpUserManagerBase_execAuthenticateUserMcp_Params AuthenticateUserMcp_Params;
	memcpy_s(&AuthenticateUserMcp_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AuthenticateUserMcp_Params.ClientSecret, 0x10, &ClientSecret, 0x10);
	memcpy_s(&AuthenticateUserMcp_Params.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(uFnAuthenticateUserMcp, &AuthenticateUserMcp_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FacebookToken                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::AuthenticateUserFacebook(class FString FacebookId, class FString FacebookToken, class FString UDID)
{
	static UFunction* uFnAuthenticateUserFacebook = nullptr;

	if (!uFnAuthenticateUserFacebook)
	{
		uFnAuthenticateUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook");
	}

	UMcpUserManagerBase_execAuthenticateUserFacebook_Params AuthenticateUserFacebook_Params;
	memcpy_s(&AuthenticateUserFacebook_Params.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Params.FacebookToken, 0x10, &FacebookToken, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Params.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(uFnAuthenticateUserFacebook, &AuthenticateUserFacebook_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnRegisterUserComplete(class FString McpId, unsigned long bWasSuccessful, class FString Error)
{
	static UFunction* uFnOnRegisterUserComplete = nullptr;

	if (!uFnOnRegisterUserComplete)
	{
		uFnOnRegisterUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnRegisterUserComplete");
	}

	UMcpUserManagerBase_execOnRegisterUserComplete_Params OnRegisterUserComplete_Params;
	memcpy_s(&OnRegisterUserComplete_Params.McpId, 0x10, &McpId, 0x10);
	OnRegisterUserComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRegisterUserComplete_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnOnRegisterUserComplete, &OnRegisterUserComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FacebookAuthToken              (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::RegisterUserFacebook(class FString FacebookId, class FString FacebookAuthToken)
{
	static UFunction* uFnRegisterUserFacebook = nullptr;

	if (!uFnRegisterUserFacebook)
	{
		uFnRegisterUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserFacebook");
	}

	UMcpUserManagerBase_execRegisterUserFacebook_Params RegisterUserFacebook_Params;
	memcpy_s(&RegisterUserFacebook_Params.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&RegisterUserFacebook_Params.FacebookAuthToken, 0x10, &FacebookAuthToken, 0x10);

	this->ProcessEvent(uFnRegisterUserFacebook, &RegisterUserFacebook_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpUserManagerBase::RegisterUserGenerated()
{
	static UFunction* uFnRegisterUserGenerated = nullptr;

	if (!uFnRegisterUserGenerated)
	{
		uFnRegisterUserGenerated = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserGenerated");
	}

	UMcpUserManagerBase_execRegisterUserGenerated_Params RegisterUserGenerated_Params;

	this->ProcessEvent(uFnRegisterUserGenerated, &RegisterUserGenerated_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpUserManagerBase*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpUserManagerBase* UMcpUserManagerBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.CreateInstance");
	}

	UMcpUserManagerBase_execCreateInstance_Params CreateInstance_Params;

	UMcpUserManagerBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeleteUserRequestComplete = nullptr;

	if (!uFnOnDeleteUserRequestComplete)
	{
		uFnOnDeleteUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnDeleteUserRequestComplete");
	}

	UMcpUserManager_execOnDeleteUserRequestComplete_Params OnDeleteUserRequestComplete_Params;
	memcpy_s(&OnDeleteUserRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteUserRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnDeleteUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteUserRequestComplete, &OnDeleteUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::DeleteUser(class FString McpId)
{
	static UFunction* uFnDeleteUser = nullptr;

	if (!uFnDeleteUser)
	{
		uFnDeleteUser = UFunction::FindFunction("Function IpDrv.McpUserManager.DeleteUser");
	}

	UMcpUserManager_execDeleteUser_Params DeleteUser_Params;
	memcpy_s(&DeleteUser_Params.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(uFnDeleteUser, &DeleteUser_Params, nullptr);
};

// Function IpDrv.McpUserManager.GetUser
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpUserStatus          User                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserManager::GetUser(class FString McpId, struct FMcpUserStatus& User)
{
	static UFunction* uFnGetUser = nullptr;

	if (!uFnGetUser)
	{
		uFnGetUser = UFunction::FindFunction("Function IpDrv.McpUserManager.GetUser");
	}

	UMcpUserManager_execGetUser_Params GetUser_Params;
	memcpy_s(&GetUser_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetUser_Params.User, 0x68, &User, 0x68);

	this->ProcessEvent(uFnGetUser, &GetUser_Params, nullptr);

	memcpy_s(&User, 0x68, &GetUser_Params.User, 0x68);

	return GetUser_Params.ReturnValue;
};

// Function IpDrv.McpUserManager.GetUsers
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpUserStatus>  Users                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManager::GetUsers(TArray<struct FMcpUserStatus>& Users)
{
	static UFunction* uFnGetUsers = nullptr;

	if (!uFnGetUsers)
	{
		uFnGetUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.GetUsers");
	}

	UMcpUserManager_execGetUsers_Params GetUsers_Params;
	memcpy_s(&GetUsers_Params.Users, 0x10, &Users, 0x10);

	this->ProcessEvent(uFnGetUsers, &GetUsers_Params, nullptr);

	memcpy_s(&Users, 0x10, &GetUsers_Params.Users, 0x10);
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryUsersRequestComplete = nullptr;

	if (!uFnOnQueryUsersRequestComplete)
	{
		uFnOnQueryUsersRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnQueryUsersRequestComplete");
	}

	UMcpUserManager_execOnQueryUsersRequestComplete_Params OnQueryUsersRequestComplete_Params;
	memcpy_s(&OnQueryUsersRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryUsersRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryUsersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryUsersRequestComplete, &OnQueryUsersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.ParseUsers
// [0x00080003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class FString                  JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::ParseUsers(class FString JsonPayload)
{
	static UFunction* uFnParseUsers = nullptr;

	if (!uFnParseUsers)
	{
		uFnParseUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.ParseUsers");
	}

	UMcpUserManager_execParseUsers_Params ParseUsers_Params;
	memcpy_s(&ParseUsers_Params.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(uFnParseUsers, &ParseUsers_Params, nullptr);
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          McpIds                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManager::QueryUsers(TArray<class FString>& McpIds)
{
	static UFunction* uFnQueryUsers = nullptr;

	if (!uFnQueryUsers)
	{
		uFnQueryUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.QueryUsers");
	}

	UMcpUserManager_execQueryUsers_Params QueryUsers_Params;
	memcpy_s(&QueryUsers_Params.McpIds, 0x10, &McpIds, 0x10);

	this->ProcessEvent(uFnQueryUsers, &QueryUsers_Params, nullptr);

	memcpy_s(&McpIds, 0x10, &QueryUsers_Params.McpIds, 0x10);
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnQueryUserRequestComplete = nullptr;

	if (!uFnOnQueryUserRequestComplete)
	{
		uFnOnQueryUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnQueryUserRequestComplete");
	}

	UMcpUserManager_execOnQueryUserRequestComplete_Params OnQueryUserRequestComplete_Params;
	memcpy_s(&OnQueryUserRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryUserRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnQueryUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryUserRequestComplete, &OnQueryUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.QueryUser
// [0x400024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldUpdateLastActive        (CPF_OptionalParm | CPF_Parm)

void UMcpUserManager::QueryUser(class FString McpId, unsigned long bShouldUpdateLastActive)
{
	static UFunction* uFnQueryUser = nullptr;

	if (!uFnQueryUser)
	{
		uFnQueryUser = UFunction::FindFunction("Function IpDrv.McpUserManager.QueryUser");
	}

	UMcpUserManager_execQueryUser_Params QueryUser_Params;
	memcpy_s(&QueryUser_Params.McpId, 0x10, &McpId, 0x10);
	QueryUser_Params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent(uFnQueryUser, &QueryUser_Params, nullptr);
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAuthenticateUserRequestComplete = nullptr;

	if (!uFnOnAuthenticateUserRequestComplete)
	{
		uFnOnAuthenticateUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete");
	}

	UMcpUserManager_execOnAuthenticateUserRequestComplete_Params OnAuthenticateUserRequestComplete_Params;
	memcpy_s(&OnAuthenticateUserRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnAuthenticateUserRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnAuthenticateUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAuthenticateUserRequestComplete, &OnAuthenticateUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientSecret                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::AuthenticateUserMcp(class FString McpId, class FString ClientSecret, class FString UDID)
{
	static UFunction* uFnAuthenticateUserMcp = nullptr;

	if (!uFnAuthenticateUserMcp)
	{
		uFnAuthenticateUserMcp = UFunction::FindFunction("Function IpDrv.McpUserManager.AuthenticateUserMcp");
	}

	UMcpUserManager_execAuthenticateUserMcp_Params AuthenticateUserMcp_Params;
	memcpy_s(&AuthenticateUserMcp_Params.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AuthenticateUserMcp_Params.ClientSecret, 0x10, &ClientSecret, 0x10);
	memcpy_s(&AuthenticateUserMcp_Params.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(uFnAuthenticateUserMcp, &AuthenticateUserMcp_Params, nullptr);
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FacebookToken                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::AuthenticateUserFacebook(class FString FacebookId, class FString FacebookToken, class FString UDID)
{
	static UFunction* uFnAuthenticateUserFacebook = nullptr;

	if (!uFnAuthenticateUserFacebook)
	{
		uFnAuthenticateUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManager.AuthenticateUserFacebook");
	}

	UMcpUserManager_execAuthenticateUserFacebook_Params AuthenticateUserFacebook_Params;
	memcpy_s(&AuthenticateUserFacebook_Params.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Params.FacebookToken, 0x10, &FacebookToken, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Params.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(uFnAuthenticateUserFacebook, &AuthenticateUserFacebook_Params, nullptr);
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterUserRequestComplete = nullptr;

	if (!uFnOnRegisterUserRequestComplete)
	{
		uFnOnRegisterUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnRegisterUserRequestComplete");
	}

	UMcpUserManager_execOnRegisterUserRequestComplete_Params OnRegisterUserRequestComplete_Params;
	memcpy_s(&OnRegisterUserRequestComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnRegisterUserRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnRegisterUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterUserRequestComplete, &OnRegisterUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.ParseUser
// [0x00080003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

int32_t UMcpUserManager::ParseUser(class FString JsonPayload)
{
	static UFunction* uFnParseUser = nullptr;

	if (!uFnParseUser)
	{
		uFnParseUser = UFunction::FindFunction("Function IpDrv.McpUserManager.ParseUser");
	}

	UMcpUserManager_execParseUser_Params ParseUser_Params;
	memcpy_s(&ParseUser_Params.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(uFnParseUser, &ParseUser_Params, nullptr);

	return ParseUser_Params.ReturnValue;
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FacebookAuthToken              (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::RegisterUserFacebook(class FString FacebookId, class FString FacebookAuthToken)
{
	static UFunction* uFnRegisterUserFacebook = nullptr;

	if (!uFnRegisterUserFacebook)
	{
		uFnRegisterUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserFacebook");
	}

	UMcpUserManager_execRegisterUserFacebook_Params RegisterUserFacebook_Params;
	memcpy_s(&RegisterUserFacebook_Params.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&RegisterUserFacebook_Params.FacebookAuthToken, 0x10, &FacebookAuthToken, 0x10);

	this->ProcessEvent(uFnRegisterUserFacebook, &RegisterUserFacebook_Params, nullptr);
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UMcpUserManager::RegisterUserGenerated()
{
	static UFunction* uFnRegisterUserGenerated = nullptr;

	if (!uFnRegisterUserGenerated)
	{
		uFnRegisterUserGenerated = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserGenerated");
	}

	UMcpUserManager_execRegisterUserGenerated_Params RegisterUserGenerated_Params;

	this->ProcessEvent(uFnRegisterUserGenerated, &RegisterUserGenerated_Params, nullptr);
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AWebConnection::IsHanging()
{
	static UFunction* uFnIsHanging = nullptr;

	if (!uFnIsHanging)
	{
		uFnIsHanging = UFunction::FindFunction("Function IpDrv.WebConnection.IsHanging");
	}

	AWebConnection_execIsHanging_Params IsHanging_Params;

	this->ProcessEvent(uFnIsHanging, &IsHanging_Params, nullptr);

	return IsHanging_Params.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function IpDrv.WebConnection.Cleanup");
	}

	AWebConnection_execCleanup_Params Cleanup_Params;

	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::CheckRawBytes()
{
	static UFunction* uFnCheckRawBytes = nullptr;

	if (!uFnCheckRawBytes)
	{
		uFnCheckRawBytes = UFunction::FindFunction("Function IpDrv.WebConnection.CheckRawBytes");
	}

	AWebConnection_execCheckRawBytes_Params CheckRawBytes_Params;

	this->ProcessEvent(uFnCheckRawBytes, &CheckRawBytes_Params, nullptr);
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::EndOfHeaders()
{
	static UFunction* uFnEndOfHeaders = nullptr;

	if (!uFnEndOfHeaders)
	{
		uFnEndOfHeaders = UFunction::FindFunction("Function IpDrv.WebConnection.EndOfHeaders");
	}

	AWebConnection_execEndOfHeaders_Params EndOfHeaders_Params;

	this->ProcessEvent(uFnEndOfHeaders, &EndOfHeaders_Params, nullptr);
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::CreateResponseObject()
{
	static UFunction* uFnCreateResponseObject = nullptr;

	if (!uFnCreateResponseObject)
	{
		uFnCreateResponseObject = UFunction::FindFunction("Function IpDrv.WebConnection.CreateResponseObject");
	}

	AWebConnection_execCreateResponseObject_Params CreateResponseObject_Params;

	this->ProcessEvent(uFnCreateResponseObject, &CreateResponseObject_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessPost(class FString S)
{
	static UFunction* uFnProcessPost = nullptr;

	if (!uFnProcessPost)
	{
		uFnProcessPost = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessPost");
	}

	AWebConnection_execProcessPost_Params ProcessPost_Params;
	memcpy_s(&ProcessPost_Params.S, 0x10, &S, 0x10);

	this->ProcessEvent(uFnProcessPost, &ProcessPost_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessGet(class FString S)
{
	static UFunction* uFnProcessGet = nullptr;

	if (!uFnProcessGet)
	{
		uFnProcessGet = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessGet");
	}

	AWebConnection_execProcessGet_Params ProcessGet_Params;
	memcpy_s(&ProcessGet_Params.S, 0x10, &S, 0x10);

	this->ProcessEvent(uFnProcessGet, &ProcessGet_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessHead(class FString S)
{
	static UFunction* uFnProcessHead = nullptr;

	if (!uFnProcessHead)
	{
		uFnProcessHead = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessHead");
	}

	AWebConnection_execProcessHead_Params ProcessHead_Params;
	memcpy_s(&ProcessHead_Params.S, 0x10, &S, 0x10);

	this->ProcessEvent(uFnProcessHead, &ProcessHead_Params, nullptr);
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ReceivedLine(class FString S)
{
	static UFunction* uFnReceivedLine = nullptr;

	if (!uFnReceivedLine)
	{
		uFnReceivedLine = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedLine");
	}

	AWebConnection_execReceivedLine_Params ReceivedLine_Params;
	memcpy_s(&ReceivedLine_Params.S, 0x10, &S, 0x10);

	this->ProcessEvent(uFnReceivedLine, &ReceivedLine_Params, nullptr);
};

// Function IpDrv.WebConnection.ReceivedText
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::eventReceivedText(class FString Text)
{
	static UFunction* uFnReceivedText = nullptr;

	if (!uFnReceivedText)
	{
		uFnReceivedText = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedText");
	}

	AWebConnection_eventReceivedText_Params ReceivedText_Params;
	memcpy_s(&ReceivedText_Params.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(uFnReceivedText, &ReceivedText_Params, nullptr);
};

// Function IpDrv.WebConnection.Timer
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void AWebConnection::eventTimer()
{
	static UFunction* uFnTimer = nullptr;

	if (!uFnTimer)
	{
		uFnTimer = UFunction::FindFunction("Function IpDrv.WebConnection.Timer");
	}

	AWebConnection_eventTimer_Params Timer_Params;

	this->ProcessEvent(uFnTimer, &Timer_Params, nullptr);
};

// Function IpDrv.WebConnection.Closed
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void AWebConnection::eventClosed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function IpDrv.WebConnection.Closed");
	}

	AWebConnection_eventClosed_Params Closed_Params;

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function IpDrv.WebConnection.Accepted
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void AWebConnection::eventAccepted()
{
	static UFunction* uFnAccepted = nullptr;

	if (!uFnAccepted)
	{
		uFnAccepted = UFunction::FindFunction("Function IpDrv.WebConnection.Accepted");
	}

	AWebConnection_eventAccepted_Params Accepted_Params;

	this->ProcessEvent(uFnAccepted, &Accepted_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
