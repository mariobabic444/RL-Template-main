/*
#############################################################################################
# Rocket League (6/5/2024) SDK
# Generated with the UE3SDKGenerator v2.2.7
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.cpp
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

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.TickEOSPlatform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UOnlineSubsystemEOS::TickEOSPlatform(float DeltaTime)
{
	static UFunction* uFnTickEOSPlatform = nullptr;

	if (!uFnTickEOSPlatform)
	{
		uFnTickEOSPlatform = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.TickEOSPlatform");
	}

	UOnlineSubsystemEOS_execTickEOSPlatform_Params TickEOSPlatform_Params;
	memcpy_s(&TickEOSPlatform_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnTickEOSPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTickEOSPlatform, &TickEOSPlatform_Params, nullptr);

	uFnTickEOSPlatform->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::ManuallyTickEOSPlatform()
{
	static UFunction* uFnManuallyTickEOSPlatform = nullptr;

	if (!uFnManuallyTickEOSPlatform)
	{
		uFnManuallyTickEOSPlatform = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform");
	}

	UOnlineSubsystemEOS_execManuallyTickEOSPlatform_Params ManuallyTickEOSPlatform_Params;

	uFnManuallyTickEOSPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnManuallyTickEOSPlatform, &ManuallyTickEOSPlatform_Params, nullptr);

	uFnManuallyTickEOSPlatform->FunctionFlags |= 0x400;

	return ManuallyTickEOSPlatform_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Price                          (CPF_Parm)

class FString UOnlineSubsystemEOS::eventFormatCurrency(class FString Currency, int32_t Price)
{
	static UFunction* uFnFormatCurrency = nullptr;

	if (!uFnFormatCurrency)
	{
		uFnFormatCurrency = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency");
	}

	UOnlineSubsystemEOS_eventFormatCurrency_Params FormatCurrency_Params;
	memcpy_s(&FormatCurrency_Params.Currency, 0x10, &Currency, 0x10);
	memcpy_s(&FormatCurrency_Params.Price, 0x4, &Price, 0x4);

	this->ProcessEvent(uFnFormatCurrency, &FormatCurrency_Params, nullptr);

	return FormatCurrency_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnClearMicroTxnResponseDelegate = nullptr;

	if (!uFnClearMicroTxnResponseDelegate)
	{
		uFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate");
	}

	UOnlineSubsystemEOS_execClearMicroTxnResponseDelegate_Params ClearMicroTxnResponseDelegate_Params;
	memcpy_s(&ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(uFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnAddMicroTxnResponseDelegate = nullptr;

	if (!uFnAddMicroTxnResponseDelegate)
	{
		uFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate");
	}

	UOnlineSubsystemEOS_execAddMicroTxnResponseDelegate_Params AddMicroTxnResponseDelegate_Params;
	memcpy_s(&AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(uFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* uFnGetAppPriceInfo = nullptr;

	if (!uFnGetAppPriceInfo)
	{
		uFnGetAppPriceInfo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo");
	}

	UOnlineSubsystemEOS_execGetAppPriceInfo_Params GetAppPriceInfo_Params;
	memcpy_s(&GetAppPriceInfo_Params.Callback, 0x18, &Callback, 0x18);
	memcpy_s(&GetAppPriceInfo_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAppPriceInfo_Params.AppNames, 0x10, &AppNames, 0x10);

	uFnGetAppPriceInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAppPriceInfo, &GetAppPriceInfo_Params, nullptr);

	uFnGetAppPriceInfo->FunctionFlags |= 0x400;

	memcpy_s(&PlayerID, 0x48, &GetAppPriceInfo_Params.PlayerID, 0x48);
	memcpy_s(&AppNames, 0x10, &GetAppPriceInfo_Params.AppNames, 0x10);

	return GetAppPriceInfo_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::HandleBootMessage()
{
	static UFunction* uFnHandleBootMessage = nullptr;

	if (!uFnHandleBootMessage)
	{
		uFnHandleBootMessage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage");
	}

	UOnlineSubsystemEOS_execHandleBootMessage_Params HandleBootMessage_Params;

	uFnHandleBootMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandleBootMessage, &HandleBootMessage_Params, nullptr);

	uFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::GetOverlayEnabled()
{
	static UFunction* uFnGetOverlayEnabled = nullptr;

	if (!uFnGetOverlayEnabled)
	{
		uFnGetOverlayEnabled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled");
	}

	UOnlineSubsystemEOS_execGetOverlayEnabled_Params GetOverlayEnabled_Params;

	this->ProcessEvent(uFnGetOverlayEnabled, &GetOverlayEnabled_Params, nullptr);

	return GetOverlayEnabled_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::RefreshNetworkErrorToggle()
{
	static UFunction* uFnRefreshNetworkErrorToggle = nullptr;

	if (!uFnRefreshNetworkErrorToggle)
	{
		uFnRefreshNetworkErrorToggle = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle");
	}

	UOnlineSubsystemEOS_execRefreshNetworkErrorToggle_Params RefreshNetworkErrorToggle_Params;

	this->ProcessEvent(uFnRefreshNetworkErrorToggle, &RefreshNetworkErrorToggle_Params, nullptr);

	return RefreshNetworkErrorToggle_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnClearUserRestoredDelegate = nullptr;

	if (!uFnClearUserRestoredDelegate)
	{
		uFnClearUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate");
	}

	UOnlineSubsystemEOS_execClearUserRestoredDelegate_Params ClearUserRestoredDelegate_Params;
	memcpy_s(&ClearUserRestoredDelegate_Params.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(uFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnAddUserRestoredDelegate = nullptr;

	if (!uFnAddUserRestoredDelegate)
	{
		uFnAddUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate");
	}

	UOnlineSubsystemEOS_execAddUserRestoredDelegate_Params AddUserRestoredDelegate_Params;
	memcpy_s(&AddUserRestoredDelegate_Params.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(uFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::OnUserRestored(uint8_t ControllerId)
{
	static UFunction* uFnOnUserRestored = nullptr;

	if (!uFnOnUserRestored)
	{
		uFnOnUserRestored = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored");
	}

	UOnlineSubsystemEOS_execOnUserRestored_Params OnUserRestored_Params;
	memcpy_s(&OnUserRestored_Params.ControllerId, 0x1, &ControllerId, 0x1);

	this->ProcessEvent(uFnOnUserRestored, &OnUserRestored_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnClearUserOrphanedDelegate = nullptr;

	if (!uFnClearUserOrphanedDelegate)
	{
		uFnClearUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate");
	}

	UOnlineSubsystemEOS_execClearUserOrphanedDelegate_Params ClearUserOrphanedDelegate_Params;
	memcpy_s(&ClearUserOrphanedDelegate_Params.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(uFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnAddUserOrphanedDelegate = nullptr;

	if (!uFnAddUserOrphanedDelegate)
	{
		uFnAddUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate");
	}

	UOnlineSubsystemEOS_execAddUserOrphanedDelegate_Params AddUserOrphanedDelegate_Params;
	memcpy_s(&AddUserOrphanedDelegate_Params.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(uFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::OnUserOrphaned(uint8_t ControllerId)
{
	static UFunction* uFnOnUserOrphaned = nullptr;

	if (!uFnOnUserOrphaned)
	{
		uFnOnUserOrphaned = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned");
	}

	UOnlineSubsystemEOS_execOnUserOrphaned_Params OnUserOrphaned_Params;
	memcpy_s(&OnUserOrphaned_Params.ControllerId, 0x1, &ControllerId, 0x1);

	this->ProcessEvent(uFnOnUserOrphaned, &OnUserOrphaned_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<class FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate)
{
	static UFunction* uFnOpenStoreForItemsAsync = nullptr;

	if (!uFnOpenStoreForItemsAsync)
	{
		uFnOpenStoreForItemsAsync = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync");
	}

	UOnlineSubsystemEOS_execOpenStoreForItemsAsync_Params OpenStoreForItemsAsync_Params;
	memcpy_s(&OpenStoreForItemsAsync_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenStoreForItemsAsync_Params.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenStoreForItemsAsync_Params.OnStorePurchaseCompleteDelegate, 0x18, &OnStorePurchaseCompleteDelegate, 0x18);

	this->ProcessEvent(uFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnStorePurchaseCompleteDelegate()
{
	static UFunction* uFnOnStorePurchaseCompleteDelegate = nullptr;

	if (!uFnOnStorePurchaseCompleteDelegate)
	{
		uFnOnStorePurchaseCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate");
	}

	UOnlineSubsystemEOS_execOnStorePurchaseCompleteDelegate_Params OnStorePurchaseCompleteDelegate_Params;

	this->ProcessEvent(uFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OpenStoreForItems(uint8_t LocalUserNum, TArray<class FString> Targets)
{
	static UFunction* uFnOpenStoreForItems = nullptr;

	if (!uFnOpenStoreForItems)
	{
		uFnOpenStoreForItems = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems");
	}

	UOnlineSubsystemEOS_execOpenStoreForItems_Params OpenStoreForItems_Params;
	memcpy_s(&OpenStoreForItems_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenStoreForItems_Params.Targets, 0x10, &Targets, 0x10);

	uFnOpenStoreForItems->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOpenStoreForItems, &OpenStoreForItems_Params, nullptr);

	uFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemEOS::OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC)
{
	static UFunction* uFnOpenStoreForDLC = nullptr;

	if (!uFnOpenStoreForDLC)
	{
		uFnOpenStoreForDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC");
	}

	UOnlineSubsystemEOS_execOpenStoreForDLC_Params OpenStoreForDLC_Params;
	memcpy_s(&OpenStoreForDLC_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenStoreForDLC_Params.DLC, 0x8, &DLC, 0x8);

	this->ProcessEvent(uFnOpenStoreForDLC, &OpenStoreForDLC_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        ErrorCode                      (CPF_Parm)

void UOnlineSubsystemEOS::OpenErrorDialog(uint8_t LocalUserNum, uint8_t ErrorCode)
{
	static UFunction* uFnOpenErrorDialog = nullptr;

	if (!uFnOpenErrorDialog)
	{
		uFnOpenErrorDialog = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog");
	}

	UOnlineSubsystemEOS_execOpenErrorDialog_Params OpenErrorDialog_Params;
	memcpy_s(&OpenErrorDialog_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenErrorDialog_Params.ErrorCode, 0x1, &ErrorCode, 0x1);

	this->ProcessEvent(uFnOpenErrorDialog, &OpenErrorDialog_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        DisplayMode                    (CPF_Parm)
// TArray<class FString>          Targets                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ServiceLabel                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemEOS::OpenPS4DisplayMode(uint8_t LocalUserNum, uint8_t DisplayMode, TArray<class FString> Targets, int32_t ServiceLabel)
{
	static UFunction* uFnOpenPS4DisplayMode = nullptr;

	if (!uFnOpenPS4DisplayMode)
	{
		uFnOpenPS4DisplayMode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode");
	}

	UOnlineSubsystemEOS_execOpenPS4DisplayMode_Params OpenPS4DisplayMode_Params;
	memcpy_s(&OpenPS4DisplayMode_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenPS4DisplayMode_Params.DisplayMode, 0x1, &DisplayMode, 0x1);
	memcpy_s(&OpenPS4DisplayMode_Params.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenPS4DisplayMode_Params.ServiceLabel, 0x4, &ServiceLabel, 0x4);

	this->ProcessEvent(uFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::ResetControllerColor(int32_t ControllerId)
{
	static UFunction* uFnResetControllerColor = nullptr;

	if (!uFnResetControllerColor)
	{
		uFnResetControllerColor = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor");
	}

	UOnlineSubsystemEOS_execResetControllerColor_Params ResetControllerColor_Params;
	memcpy_s(&ResetControllerColor_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnResetControllerColor, &ResetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemEOS::SetControllerColor(int32_t ControllerId, struct FColor NewColor)
{
	static UFunction* uFnSetControllerColor = nullptr;

	if (!uFnSetControllerColor)
	{
		uFnSetControllerColor = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor");
	}

	UOnlineSubsystemEOS_execSetControllerColor_Params SetControllerColor_Params;
	memcpy_s(&SetControllerColor_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerColor_Params.NewColor, 0x4, &NewColor, 0x4);

	this->ProcessEvent(uFnSetControllerColor, &SetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::InitializeTrophyAPI()
{
	static UFunction* uFnInitializeTrophyAPI = nullptr;

	if (!uFnInitializeTrophyAPI)
	{
		uFnInitializeTrophyAPI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI");
	}

	UOnlineSubsystemEOS_execInitializeTrophyAPI_Params InitializeTrophyAPI_Params;

	this->ProcessEvent(uFnInitializeTrophyAPI, &InitializeTrophyAPI_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::AnyPlayerChatRestricted()
{
	static UFunction* uFnAnyPlayerChatRestricted = nullptr;

	if (!uFnAnyPlayerChatRestricted)
	{
		uFnAnyPlayerChatRestricted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted");
	}

	UOnlineSubsystemEOS_execAnyPlayerChatRestricted_Params AnyPlayerChatRestricted_Params;

	this->ProcessEvent(uFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Params, nullptr);

	return AnyPlayerChatRestricted_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUnlockedDLCChangeDelegate = nullptr;

	if (!uFnClearUnlockedDLCChangeDelegate)
	{
		uFnClearUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearUnlockedDLCChangeDelegate_Params ClearUnlockedDLCChangeDelegate_Params;
	memcpy_s(&ClearUnlockedDLCChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUnlockedDLCChangeDelegate = nullptr;

	if (!uFnAddUnlockedDLCChangeDelegate)
	{
		uFnAddUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddUnlockedDLCChangeDelegate_Params AddUnlockedDLCChangeDelegate_Params;
	memcpy_s(&AddUnlockedDLCChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemEOS::GetUnlockedDLC()
{
	static UFunction* uFnGetUnlockedDLC = nullptr;

	if (!uFnGetUnlockedDLC)
	{
		uFnGetUnlockedDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC");
	}

	UOnlineSubsystemEOS_execGetUnlockedDLC_Params GetUnlockedDLC_Params;

	this->ProcessEvent(uFnGetUnlockedDLC, &GetUnlockedDLC_Params, nullptr);

	return GetUnlockedDLC_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnUnlockedDLCChange()
{
	static UFunction* uFnOnUnlockedDLCChange = nullptr;

	if (!uFnOnUnlockedDLCChange)
	{
		uFnOnUnlockedDLCChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange");
	}

	UOnlineSubsystemEOS_execOnUnlockedDLCChange_Params OnUnlockedDLCChange_Params;

	this->ProcessEvent(uFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        CurrentPlayerCount             (CPF_Parm)
// int32_t                        numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemEOS::UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers)
{
	static UFunction* uFnUpdateSessionStatusFromPlayers = nullptr;

	if (!uFnUpdateSessionStatusFromPlayers)
	{
		uFnUpdateSessionStatusFromPlayers = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers");
	}

	UOnlineSubsystemEOS_execUpdateSessionStatusFromPlayers_Params UpdateSessionStatusFromPlayers_Params;
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.CurrentPlayerCount, 0x4, &CurrentPlayerCount, 0x4);
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.numBotPlayers, 0x4, &numBotPlayers, 0x4);

	this->ProcessEvent(uFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearErrorDialogClosedDelegate = nullptr;

	if (!uFnClearErrorDialogClosedDelegate)
	{
		uFnClearErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execClearErrorDialogClosedDelegate_Params ClearErrorDialogClosedDelegate_Params;
	memcpy_s(&ClearErrorDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddErrorDialogClosedDelegate = nullptr;

	if (!uFnAddErrorDialogClosedDelegate)
	{
		uFnAddErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execAddErrorDialogClosedDelegate_Params AddErrorDialogClosedDelegate_Params;
	memcpy_s(&AddErrorDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::OnErrorDialogClosed(int32_t LocalUserNum)
{
	static UFunction* uFnOnErrorDialogClosed = nullptr;

	if (!uFnOnErrorDialogClosed)
	{
		uFnOnErrorDialogClosed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed");
	}

	UOnlineSubsystemEOS_execOnErrorDialogClosed_Params OnErrorDialogClosed_Params;
	memcpy_s(&OnErrorDialogClosed_Params.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	this->ProcessEvent(uFnOnErrorDialogClosed, &OnErrorDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCommerceDialogClosedDelegate = nullptr;

	if (!uFnClearCommerceDialogClosedDelegate)
	{
		uFnClearCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execClearCommerceDialogClosedDelegate_Params ClearCommerceDialogClosedDelegate_Params;
	memcpy_s(&ClearCommerceDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCommerceDialogClosedDelegate = nullptr;

	if (!uFnAddCommerceDialogClosedDelegate)
	{
		uFnAddCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemEOS_execAddCommerceDialogClosedDelegate_Params AddCommerceDialogClosedDelegate_Params;
	memcpy_s(&AddCommerceDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnCommerceDialogClosed()
{
	static UFunction* uFnOnCommerceDialogClosed = nullptr;

	if (!uFnOnCommerceDialogClosed)
	{
		uFnOnCommerceDialogClosed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed");
	}

	UOnlineSubsystemEOS_execOnCommerceDialogClosed_Params OnCommerceDialogClosed_Params;

	this->ProcessEvent(uFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UOnlineSubsystemEOS::GetCurrentConnectionStatus()
{
	static UFunction* uFnGetCurrentConnectionStatus = nullptr;

	if (!uFnGetCurrentConnectionStatus)
	{
		uFnGetCurrentConnectionStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus");
	}

	UOnlineSubsystemEOS_execGetCurrentConnectionStatus_Params GetCurrentConnectionStatus_Params;

	this->ProcessEvent(uFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Params, nullptr);

	return GetCurrentConnectionStatus_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnClearCloseKickPlayerDialogDelegate)
	{
		uFnClearCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemEOS_execClearCloseKickPlayerDialogDelegate_Params ClearCloseKickPlayerDialogDelegate_Params;
	memcpy_s(&ClearCloseKickPlayerDialogDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnAddCloseKickPlayerDialogDelegate)
	{
		uFnAddCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemEOS_execAddCloseKickPlayerDialogDelegate_Params AddCloseKickPlayerDialogDelegate_Params;
	memcpy_s(&AddCloseKickPlayerDialogDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnCloseKickPlayerDialog()
{
	static UFunction* uFnOnCloseKickPlayerDialog = nullptr;

	if (!uFnOnCloseKickPlayerDialog)
	{
		uFnOnCloseKickPlayerDialog = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog");
	}

	UOnlineSubsystemEOS_execOnCloseKickPlayerDialog_Params OnCloseKickPlayerDialog_Params;

	this->ProcessEvent(uFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsTalking                     (CPF_Parm)

void UOnlineSubsystemEOS::OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange");
	}

	UOnlineSubsystemEOS_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, 0x48, &Player, 0x48);
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineSubsystemEOS::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* uFnSetVoiceReceiveVolume = nullptr;

	if (!uFnSetVoiceReceiveVolume)
	{
		uFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume");
	}

	UOnlineSubsystemEOS_execSetVoiceReceiveVolume_Params SetVoiceReceiveVolume_Params;
	memcpy_s(&SetVoiceReceiveVolume_Params.VoiceVolume, 0x4, &VoiceVolume, 0x4);

	this->ProcessEvent(uFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Params, nullptr);

	return SetVoiceReceiveVolume_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)

int32_t UOnlineSubsystemEOS::GetDLCPurchaseTime(struct FName AppName)
{
	static UFunction* uFnGetDLCPurchaseTime = nullptr;

	if (!uFnGetDLCPurchaseTime)
	{
		uFnGetDLCPurchaseTime = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime");
	}

	UOnlineSubsystemEOS_execGetDLCPurchaseTime_Params GetDLCPurchaseTime_Params;
	memcpy_s(&GetDLCPurchaseTime_Params.AppName, 0x8, &AppName, 0x8);

	this->ProcessEvent(uFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Params, nullptr);

	return GetDLCPurchaseTime_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ProductKey                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::SaveKey(class FString ProductKey)
{
	static UFunction* uFnSaveKey = nullptr;

	if (!uFnSaveKey)
	{
		uFnSaveKey = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey");
	}

	UOnlineSubsystemEOS_execSaveKey_Params SaveKey_Params;
	memcpy_s(&SaveKey_Params.ProductKey, 0x10, &ProductKey, 0x10);

	this->ProcessEvent(uFnSaveKey, &SaveKey_Params, nullptr);

	return SaveKey_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<class FString>          Accounts                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetLocalAccountNames(TArray<class FString>& Accounts)
{
	static UFunction* uFnGetLocalAccountNames = nullptr;

	if (!uFnGetLocalAccountNames)
	{
		uFnGetLocalAccountNames = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames");
	}

	UOnlineSubsystemEOS_execGetLocalAccountNames_Params GetLocalAccountNames_Params;
	memcpy_s(&GetLocalAccountNames_Params.Accounts, 0x10, &Accounts, 0x10);

	this->ProcessEvent(uFnGetLocalAccountNames, &GetLocalAccountNames_Params, nullptr);

	memcpy_s(&Accounts, 0x10, &GetLocalAccountNames_Params.Accounts, 0x10);

	return GetLocalAccountNames_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Username                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::DeleteLocalAccount(class FString Username, class FString Password)
{
	static UFunction* uFnDeleteLocalAccount = nullptr;

	if (!uFnDeleteLocalAccount)
	{
		uFnDeleteLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount");
	}

	UOnlineSubsystemEOS_execDeleteLocalAccount_Params DeleteLocalAccount_Params;
	memcpy_s(&DeleteLocalAccount_Params.Username, 0x10, &Username, 0x10);
	memcpy_s(&DeleteLocalAccount_Params.Password, 0x10, &Password, 0x10);

	this->ProcessEvent(uFnDeleteLocalAccount, &DeleteLocalAccount_Params, nullptr);

	return DeleteLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  NewUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  OldUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RenameLocalAccount(class FString NewUserName, class FString OldUserName, class FString Password)
{
	static UFunction* uFnRenameLocalAccount = nullptr;

	if (!uFnRenameLocalAccount)
	{
		uFnRenameLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount");
	}

	UOnlineSubsystemEOS_execRenameLocalAccount_Params RenameLocalAccount_Params;
	memcpy_s(&RenameLocalAccount_Params.NewUserName, 0x10, &NewUserName, 0x10);
	memcpy_s(&RenameLocalAccount_Params.OldUserName, 0x10, &OldUserName, 0x10);
	memcpy_s(&RenameLocalAccount_Params.Password, 0x10, &Password, 0x10);

	this->ProcessEvent(uFnRenameLocalAccount, &RenameLocalAccount_Params, nullptr);

	return RenameLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Username                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::CreateLocalAccount(class FString Username, class FString Password)
{
	static UFunction* uFnCreateLocalAccount = nullptr;

	if (!uFnCreateLocalAccount)
	{
		uFnCreateLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount");
	}

	UOnlineSubsystemEOS_execCreateLocalAccount_Params CreateLocalAccount_Params;
	memcpy_s(&CreateLocalAccount_Params.Username, 0x10, &Username, 0x10);
	memcpy_s(&CreateLocalAccount_Params.Password, 0x10, &Password, 0x10);

	this->ProcessEvent(uFnCreateLocalAccount, &CreateLocalAccount_Params, nullptr);

	return CreateLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* uFnClearCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnClearCreateOnlineAccountCompletedDelegate)
	{
		uFnClearCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemEOS_execClearCreateOnlineAccountCompletedDelegate_Params ClearCreateOnlineAccountCompletedDelegate_Params;
	memcpy_s(&ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, 0x18, &AccountCreateDelegate, 0x18);

	this->ProcessEvent(uFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* uFnAddCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnAddCreateOnlineAccountCompletedDelegate)
	{
		uFnAddCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemEOS_execAddCreateOnlineAccountCompletedDelegate_Params AddCreateOnlineAccountCompletedDelegate_Params;
	memcpy_s(&AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, 0x18, &AccountCreateDelegate, 0x18);

	this->ProcessEvent(uFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ErrorStatus                    (CPF_Parm)

void UOnlineSubsystemEOS::OnCreateOnlineAccountCompleted(uint8_t ErrorStatus)
{
	static UFunction* uFnOnCreateOnlineAccountCompleted = nullptr;

	if (!uFnOnCreateOnlineAccountCompleted)
	{
		uFnOnCreateOnlineAccountCompleted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted");
	}

	UOnlineSubsystemEOS_execOnCreateOnlineAccountCompleted_Params OnCreateOnlineAccountCompleted_Params;
	memcpy_s(&OnCreateOnlineAccountCompleted_Params.ErrorStatus, 0x1, &ErrorStatus, 0x1);

	this->ProcessEvent(uFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Username                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EmailAddress                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ProductKey                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::CreateOnlineAccount(class FString Username, class FString Password, class FString EmailAddress, class FString ProductKey)
{
	static UFunction* uFnCreateOnlineAccount = nullptr;

	if (!uFnCreateOnlineAccount)
	{
		uFnCreateOnlineAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount");
	}

	UOnlineSubsystemEOS_execCreateOnlineAccount_Params CreateOnlineAccount_Params;
	memcpy_s(&CreateOnlineAccount_Params.Username, 0x10, &Username, 0x10);
	memcpy_s(&CreateOnlineAccount_Params.Password, 0x10, &Password, 0x10);
	memcpy_s(&CreateOnlineAccount_Params.EmailAddress, 0x10, &EmailAddress, 0x10);
	memcpy_s(&CreateOnlineAccount_Params.ProductKey, 0x10, &ProductKey, 0x10);

	this->ProcessEvent(uFnCreateOnlineAccount, &CreateOnlineAccount_Params, nullptr);

	return CreateOnlineAccount_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::IsKeyValid()
{
	static UFunction* uFnIsKeyValid = nullptr;

	if (!uFnIsKeyValid)
	{
		uFnIsKeyValid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid");
	}

	UOnlineSubsystemEOS_execIsKeyValid_Params IsKeyValid_Params;

	this->ProcessEvent(uFnIsKeyValid, &IsKeyValid_Params, nullptr);

	return IsKeyValid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange");
	}

	UOnlineSubsystemEOS_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UOnlineSubsystemEOS::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType");
	}

	UOnlineSubsystemEOS_execGetNATType_Params GetNATType_Params;

	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);

	return GetNATType_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemEOS::OnConnectionStatusChange(uint8_t ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange");
	}

	UOnlineSubsystemEOS_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, 0x1, &ConnectionStatus, 0x1);

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected");
	}

	UOnlineSubsystemEOS_execIsControllerConnected_Params IsControllerConnected_Params;
	memcpy_s(&IsControllerConnected_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);

	return IsControllerConnected_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemEOS::OnControllerChange(int32_t ControllerId, unsigned long bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange");
	}

	UOnlineSubsystemEOS_execOnControllerChange_Params OnControllerChange_Params;
	memcpy_s(&OnControllerChange_Params.ControllerId, 0x4, &ControllerId, 0x4);
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        NewPos                         (CPF_Parm)

void UOnlineSubsystemEOS::SetNetworkNotificationPosition(uint8_t NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition");
	}

	UOnlineSubsystemEOS_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memcpy_s(&SetNetworkNotificationPosition_Params.NewPos, 0x1, &NewPos, 0x1);

	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UOnlineSubsystemEOS::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition");
	}

	UOnlineSubsystemEOS_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;

	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return GetNetworkNotificationPosition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void UOnlineSubsystemEOS::NotifyExternalUIChanged(unsigned long bIsOpening)
{
	static UFunction* uFnNotifyExternalUIChanged = nullptr;

	if (!uFnNotifyExternalUIChanged)
	{
		uFnNotifyExternalUIChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged");
	}

	UOnlineSubsystemEOS_execNotifyExternalUIChanged_Params NotifyExternalUIChanged_Params;
	NotifyExternalUIChanged_Params.bIsOpening = bIsOpening;

	uFnNotifyExternalUIChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnNotifyExternalUIChanged, &NotifyExternalUIChanged_Params, nullptr);

	uFnNotifyExternalUIChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearExternalUIChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memcpy_s(&ClearExternalUIChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddExternalUIChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memcpy_s(&AddExternalUIChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void UOnlineSubsystemEOS::OnExternalUIChange(unsigned long bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange");
	}

	UOnlineSubsystemEOS_execOnExternalUIChange_Params OnExternalUIChange_Params;
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate");
	}

	UOnlineSubsystemEOS_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemEOS::OnLinkStatusChange(unsigned long bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange");
	}

	UOnlineSubsystemEOS_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection");
	}

	UOnlineSubsystemEOS_execHasLinkConnection_Params HasLinkConnection_Params;

	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);

	return HasLinkConnection_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid");
	}

	UOnlineSubsystemEOS_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memcpy_s(&RegisterStatGuid_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, 0x10, &ClientStatGuid, 0x10);

	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);

	memcpy_s(&ClientStatGuid, 0x10, &RegisterStatGuid_Params.ClientStatGuid, 0x10);

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemEOS::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid");
	}

	UOnlineSubsystemEOS_execGetClientStatGuid_Params GetClientStatGuid_Params;

	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineSubsystemEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineSubsystemEOS_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete");
	}

	UOnlineSubsystemEOS_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete");
	}

	UOnlineSubsystemEOS_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterHostStatGuid(class FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid");
	}

	UOnlineSubsystemEOS_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, 0x10, &HostStatGuid, 0x10);

	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);

	memcpy_s(&HostStatGuid, 0x10, &RegisterHostStatGuid_Params.HostStatGuid, 0x10);

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemEOS::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid");
	}

	UOnlineSubsystemEOS_execGetHostStatGuid_Params GetHostStatGuid_Params;

	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores");
	}

	UOnlineSubsystemEOS_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, 0x10, &PlayerScores, 0x10);

	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);

	memcpy_s(&PlayerScores, 0x10, &WriteOnlinePlayerScores_Params.PlayerScores, 0x10);

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats");
	}

	UOnlineSubsystemEOS_execFreeStats_Params FreeStats_Params;
	memcpy_s(&FreeStats_Params.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemEOS_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemEOS_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete");
	}

	UOnlineSubsystemEOS_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineSubsystemEOS_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, 0x4, &NumRows, 0x4);

	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank");
	}

	UOnlineSubsystemEOS_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memcpy_s(&ReadOnlineStatsByRank_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, 0x4, &NumToRead, 0x4);

	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends");
	}

	UOnlineSubsystemEOS_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsForFriends_Params.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats");
	}

	UOnlineSubsystemEOS_execReadOnlineStats_Params ReadOnlineStats_Params;
	memcpy_s(&ReadOnlineStats_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStats_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);

	memcpy_s(&Players, 0x10, &ReadOnlineStats_Params.Players, 0x10);

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll");
	}

	UOnlineSubsystemEOS_execUnmuteAll_Params UnmuteAll_Params;
	memcpy_s(&UnmuteAll_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemEOS::MuteAll(uint8_t LocalUserNum, unsigned long bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll");
	}

	UOnlineSubsystemEOS_execMuteAll_Params MuteAll_Params;
	memcpy_s(&MuteAll_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemEOS::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject");
	}

	UOnlineSubsystemEOS_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetSpeechRecognitionObject_Params.SpeechRecogObj, 0x8, &SpeechRecogObj, 0x8);

	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemEOS::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary");
	}

	UOnlineSubsystemEOS_execSelectVocabulary_Params SelectVocabulary_Params;
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SelectVocabulary_Params.VocabularyId, 0x4, &VocabularyId, 0x4);

	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate");
	}

	UOnlineSubsystemEOS_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate");
	}

	UOnlineSubsystemEOS_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete");
	}

	UOnlineSubsystemEOS_execOnRecognitionComplete_Params OnRecognitionComplete_Params;

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults");
	}

	UOnlineSubsystemEOS_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetRecognitionResults_Params.Words, 0x10, &Words, 0x10);

	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);

	memcpy_s(&Words, 0x10, &GetRecognitionResults_Params.Words, 0x10);

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition");
	}

	UOnlineSubsystemEOS_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition");
	}

	UOnlineSubsystemEOS_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice");
	}

	UOnlineSubsystemEOS_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice");
	}

	UOnlineSubsystemEOS_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate");
	}

	UOnlineSubsystemEOS_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate");
	}

	UOnlineSubsystemEOS_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OnPlayerTalking(struct FUniqueNetId Player)
{
	static UFunction* uFnOnPlayerTalking = nullptr;

	if (!uFnOnPlayerTalking)
	{
		uFnOnPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking");
	}

	UOnlineSubsystemEOS_execOnPlayerTalking_Params OnPlayerTalking_Params;
	memcpy_s(&OnPlayerTalking_Params.Player, 0x48, &Player, 0x48);

	this->ProcessEvent(uFnOnPlayerTalking, &OnPlayerTalking_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker");
	}

	UOnlineSubsystemEOS_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker");
	}

	UOnlineSubsystemEOS_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineSubsystemEOS::SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority");
	}

	UOnlineSubsystemEOS_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, 0x4, &Priority, 0x4);

	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent");
	}

	UOnlineSubsystemEOS_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking");
	}

	UOnlineSubsystemEOS_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking");
	}

	UOnlineSubsystemEOS_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker");
	}

	UOnlineSubsystemEOS_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker");
	}

	UOnlineSubsystemEOS_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker");
	}

	UOnlineSubsystemEOS_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker");
	}

	UOnlineSubsystemEOS_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
// [0x400820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

struct FUniqueNetId UOnlineSubsystemEOS::eventGetPlayerUniqueNetIdFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerUniqueNetIdFromIndex = nullptr;

	if (!uFnGetPlayerUniqueNetIdFromIndex)
	{
		uFnGetPlayerUniqueNetIdFromIndex = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex");
	}

	UOnlineSubsystemEOS_eventGetPlayerUniqueNetIdFromIndex_Params GetPlayerUniqueNetIdFromIndex_Params;
	memcpy_s(&GetPlayerUniqueNetIdFromIndex_Params.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(uFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Params, nullptr);

	return GetPlayerUniqueNetIdFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemEOS::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemEOS_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init");
	}

	UOnlineSubsystemEOS_eventInit_Params Init_Params;

	uFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);

	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SandboxId                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  DeploymentId                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::InitEOS(class FString& SandboxId, class FString& DeploymentId)
{
	static UFunction* uFnInitEOS = nullptr;

	if (!uFnInitEOS)
	{
		uFnInitEOS = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS");
	}

	UOnlineSubsystemEOS_execInitEOS_Params InitEOS_Params;
	memcpy_s(&InitEOS_Params.SandboxId, 0x10, &SandboxId, 0x10);
	memcpy_s(&InitEOS_Params.DeploymentId, 0x10, &DeploymentId, 0x10);

	uFnInitEOS->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitEOS, &InitEOS_Params, nullptr);

	uFnInitEOS->FunctionFlags |= 0x400;

	memcpy_s(&SandboxId, 0x10, &InitEOS_Params.SandboxId, 0x10);
	memcpy_s(&DeploymentId, 0x10, &InitEOS_Params.DeploymentId, 0x10);

	return InitEOS_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   AppName                        (CPF_Parm)
// class FString                  Price                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DiscountPrice                  (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        DiscountPercentage             (CPF_Parm)

void UOnlineSubsystemEOS::EventGetAppPriceInfoComplete(struct FName AppName, class FString Price, class FString DiscountPrice, int32_t DiscountPercentage)
{
	static UFunction* uFnEventGetAppPriceInfoComplete = nullptr;

	if (!uFnEventGetAppPriceInfoComplete)
	{
		uFnEventGetAppPriceInfoComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete");
	}

	UOnlineSubsystemEOS_execEventGetAppPriceInfoComplete_Params EventGetAppPriceInfoComplete_Params;
	memcpy_s(&EventGetAppPriceInfoComplete_Params.AppName, 0x8, &AppName, 0x8);
	memcpy_s(&EventGetAppPriceInfoComplete_Params.Price, 0x10, &Price, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Params.DiscountPrice, 0x10, &DiscountPrice, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Params.DiscountPercentage, 0x4, &DiscountPercentage, 0x4);

	this->ProcessEvent(uFnEventGetAppPriceInfoComplete, &EventGetAppPriceInfoComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAuthorized                    (CPF_Parm)
// uint64_t                       OrderId                        (CPF_Parm)

void UOnlineSubsystemEOS::OnMicroTxnResponse(unsigned long bAuthorized, uint64_t OrderId)
{
	static UFunction* uFnOnMicroTxnResponse = nullptr;

	if (!uFnOnMicroTxnResponse)
	{
		uFnOnMicroTxnResponse = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse");
	}

	UOnlineSubsystemEOS_execOnMicroTxnResponse_Params OnMicroTxnResponse_Params;
	OnMicroTxnResponse_Params.bAuthorized = bAuthorized;
	OnMicroTxnResponse_Params.OrderId = OrderId;

	this->ProcessEvent(uFnOnMicroTxnResponse, &OnMicroTxnResponse_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceEOS::RequiresAuthTicket()
{
	static UFunction* uFnRequiresAuthTicket = nullptr;

	if (!uFnRequiresAuthTicket)
	{
		uFnRequiresAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket");
	}

	UOnlineAuthInterfaceEOS_execRequiresAuthTicket_Params RequiresAuthTicket_Params;

	this->ProcessEvent(uFnRequiresAuthTicket, &RequiresAuthTicket_Params, nullptr);

	return RequiresAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceEOS::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestAuthTicket = nullptr;

	if (!uFnRequestAuthTicket)
	{
		uFnRequestAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket");
	}

	UOnlineAuthInterfaceEOS_execRequestAuthTicket_Params RequestAuthTicket_Params;
	memcpy_s(&RequestAuthTicket_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAuthTicket_Params.Callback, 0x18, &Callback, 0x18);

	uFnRequestAuthTicket->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestAuthTicket, &RequestAuthTicket_Params, nullptr);

	uFnRequestAuthTicket->FunctionFlags |= 0x400;

	return RequestAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceEOS::RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestMtxCode = nullptr;

	if (!uFnRequestMtxCode)
	{
		uFnRequestMtxCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode");
	}

	UOnlineAuthInterfaceEOS_execRequestMtxCode_Params RequestMtxCode_Params;
	memcpy_s(&RequestMtxCode_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestMtxCode_Params.Callback, 0x18, &Callback, 0x18);

	uFnRequestMtxCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestMtxCode, &RequestMtxCode_Params, nullptr);

	uFnRequestMtxCode->FunctionFlags |= 0x400;

	return RequestMtxCode_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            AccountId                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceEOS::GetActivePlatformId(uint8_t LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId)
{
	static UFunction* uFnGetActivePlatformId = nullptr;

	if (!uFnGetActivePlatformId)
	{
		uFnGetActivePlatformId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId");
	}

	UOnlineFriendsInterfaceEOS_execGetActivePlatformId_Params GetActivePlatformId_Params;
	memcpy_s(&GetActivePlatformId_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetActivePlatformId_Params.AccountId, 0x48, &AccountId, 0x48);
	memcpy_s(&GetActivePlatformId_Params.PlatformId, 0x48, &PlatformId, 0x48);

	uFnGetActivePlatformId->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetActivePlatformId, &GetActivePlatformId_Params, nullptr);

	uFnGetActivePlatformId->FunctionFlags |= 0x400;

	memcpy_s(&PlatformId, 0x48, &GetActivePlatformId_Params.PlatformId, 0x48);

	return GetActivePlatformId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    AccountIds                     (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceEOS::RequestLinkedAccounts(uint8_t LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestLinkedAccounts = nullptr;

	if (!uFnRequestLinkedAccounts)
	{
		uFnRequestLinkedAccounts = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts");
	}

	UOnlineFriendsInterfaceEOS_execRequestLinkedAccounts_Params RequestLinkedAccounts_Params;
	memcpy_s(&RequestLinkedAccounts_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RequestLinkedAccounts_Params.AccountIds, 0x10, &AccountIds, 0x10);
	memcpy_s(&RequestLinkedAccounts_Params.Callback, 0x18, &Callback, 0x18);

	uFnRequestLinkedAccounts->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestLinkedAccounts, &RequestLinkedAccounts_Params, nullptr);

	uFnRequestLinkedAccounts->FunctionFlags |= 0x400;

	return RequestLinkedAccounts_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipErrorOccurred
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventClipErrorOccurred(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventClipErrorOccurred = nullptr;

	if (!uFnNotifyEventClipErrorOccurred)
	{
		uFnNotifyEventClipErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventClipErrorOccurred_Params NotifyEventClipErrorOccurred_Params;
	memcpy_s(&NotifyEventClipErrorOccurred_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventClipErrorOccurred, &NotifyEventClipErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipErrorOccurred
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ClipId                         (CPF_Parm)
// class UErrorType*              InErrorType                    (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventClipErrorOccurred(class FString InEpicAccountId, int32_t ClipId, class UErrorType* InErrorType)
{
	static UFunction* uFnEventClipErrorOccurred = nullptr;

	if (!uFnEventClipErrorOccurred)
	{
		uFnEventClipErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execEventClipErrorOccurred_Params EventClipErrorOccurred_Params;
	memcpy_s(&EventClipErrorOccurred_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);
	memcpy_s(&EventClipErrorOccurred_Params.ClipId, 0x4, &ClipId, 0x4);
	memcpy_s(&EventClipErrorOccurred_Params.InErrorType, 0x8, &InErrorType, 0x8);

	this->ProcessEvent(uFnEventClipErrorOccurred, &EventClipErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventGeneralErrorOccurred
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventGeneralErrorOccurred(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventGeneralErrorOccurred = nullptr;

	if (!uFnNotifyEventGeneralErrorOccurred)
	{
		uFnNotifyEventGeneralErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventGeneralErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventGeneralErrorOccurred_Params NotifyEventGeneralErrorOccurred_Params;
	memcpy_s(&NotifyEventGeneralErrorOccurred_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventGeneralErrorOccurred, &NotifyEventGeneralErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventGeneralErrorOccurred
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UErrorType*              InErrorType                    (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventGeneralErrorOccurred(class UErrorType* InErrorType)
{
	static UFunction* uFnEventGeneralErrorOccurred = nullptr;

	if (!uFnEventGeneralErrorOccurred)
	{
		uFnEventGeneralErrorOccurred = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventGeneralErrorOccurred");
	}

	UOnlineGameClipsInterfaceEOS_execEventGeneralErrorOccurred_Params EventGeneralErrorOccurred_Params;
	memcpy_s(&EventGeneralErrorOccurred_Params.InErrorType, 0x8, &InErrorType, 0x8);

	this->ProcessEvent(uFnEventGeneralErrorOccurred, &EventGeneralErrorOccurred_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventMaskStatusChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventMaskStatusChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventMaskStatusChanged = nullptr;

	if (!uFnNotifyEventMaskStatusChanged)
	{
		uFnNotifyEventMaskStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventMaskStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventMaskStatusChanged_Params NotifyEventMaskStatusChanged_Params;
	memcpy_s(&NotifyEventMaskStatusChanged_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventMaskStatusChanged, &NotifyEventMaskStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventMaskStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint64_t                       InMaskAreaHandle               (CPF_Parm)
// struct FGameClipsMaskArea      InMaskArea                     (CPF_Const | CPF_Parm)
// uint8_t                        InNewMaskStatus                (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventMaskStatusChanged(uint64_t InMaskAreaHandle, struct FGameClipsMaskArea InMaskArea, uint8_t InNewMaskStatus)
{
	static UFunction* uFnEventMaskStatusChanged = nullptr;

	if (!uFnEventMaskStatusChanged)
	{
		uFnEventMaskStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventMaskStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventMaskStatusChanged_Params EventMaskStatusChanged_Params;
	EventMaskStatusChanged_Params.InMaskAreaHandle = InMaskAreaHandle;
	memcpy_s(&EventMaskStatusChanged_Params.InMaskArea, 0x18, &InMaskArea, 0x18);
	memcpy_s(&EventMaskStatusChanged_Params.InNewMaskStatus, 0x1, &InNewMaskStatus, 0x1);

	this->ProcessEvent(uFnEventMaskStatusChanged, &EventMaskStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipStatusChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventClipStatusChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventClipStatusChanged = nullptr;

	if (!uFnNotifyEventClipStatusChanged)
	{
		uFnNotifyEventClipStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventClipStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventClipStatusChanged_Params NotifyEventClipStatusChanged_Params;
	memcpy_s(&NotifyEventClipStatusChanged_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventClipStatusChanged, &NotifyEventClipStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        InClipId                       (CPF_Parm)
// uint8_t                        InNewClipStatus                (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventClipStatusChanged(class FString InEpicAccountId, int32_t InClipId, uint8_t InNewClipStatus)
{
	static UFunction* uFnEventClipStatusChanged = nullptr;

	if (!uFnEventClipStatusChanged)
	{
		uFnEventClipStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventClipStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventClipStatusChanged_Params EventClipStatusChanged_Params;
	memcpy_s(&EventClipStatusChanged_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);
	memcpy_s(&EventClipStatusChanged_Params.InClipId, 0x4, &InClipId, 0x4);
	memcpy_s(&EventClipStatusChanged_Params.InNewClipStatus, 0x1, &InNewClipStatus, 0x1);

	this->ProcessEvent(uFnEventClipStatusChanged, &EventClipStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventConnectionStatusChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventConnectionStatusChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventConnectionStatusChanged = nullptr;

	if (!uFnNotifyEventConnectionStatusChanged)
	{
		uFnNotifyEventConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventConnectionStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventConnectionStatusChanged_Params NotifyEventConnectionStatusChanged_Params;
	memcpy_s(&NotifyEventConnectionStatusChanged_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventConnectionStatusChanged, &NotifyEventConnectionStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventConnectionStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        InConnection                   (CPF_Parm)
// uint8_t                        InNewConnectionStatus          (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventConnectionStatusChanged(class FString InEpicAccountId, uint8_t InConnection, uint8_t InNewConnectionStatus)
{
	static UFunction* uFnEventConnectionStatusChanged = nullptr;

	if (!uFnEventConnectionStatusChanged)
	{
		uFnEventConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventConnectionStatusChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventConnectionStatusChanged_Params EventConnectionStatusChanged_Params;
	memcpy_s(&EventConnectionStatusChanged_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);
	memcpy_s(&EventConnectionStatusChanged_Params.InConnection, 0x1, &InConnection, 0x1);
	memcpy_s(&EventConnectionStatusChanged_Params.InNewConnectionStatus, 0x1, &InNewConnectionStatus, 0x1);

	this->ProcessEvent(uFnEventConnectionStatusChanged, &EventConnectionStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventRecordingChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventRecordingChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventRecordingChanged = nullptr;

	if (!uFnNotifyEventRecordingChanged)
	{
		uFnNotifyEventRecordingChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventRecordingChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventRecordingChanged_Params NotifyEventRecordingChanged_Params;
	memcpy_s(&NotifyEventRecordingChanged_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventRecordingChanged, &NotifyEventRecordingChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventRecordingChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        InNewRecording                 (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventRecordingChanged(uint8_t InNewRecording)
{
	static UFunction* uFnEventRecordingChanged = nullptr;

	if (!uFnEventRecordingChanged)
	{
		uFnEventRecordingChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventRecordingChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventRecordingChanged_Params EventRecordingChanged_Params;
	memcpy_s(&EventRecordingChanged_Params.InNewRecording, 0x1, &InNewRecording, 0x1);

	this->ProcessEvent(uFnEventRecordingChanged, &EventRecordingChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventAvailabilityChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameClipsInterfaceEOS::NotifyEventAvailabilityChanged(struct FScriptDelegate InCallback)
{
	static UFunction* uFnNotifyEventAvailabilityChanged = nullptr;

	if (!uFnNotifyEventAvailabilityChanged)
	{
		uFnNotifyEventAvailabilityChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.NotifyEventAvailabilityChanged");
	}

	UOnlineGameClipsInterfaceEOS_execNotifyEventAvailabilityChanged_Params NotifyEventAvailabilityChanged_Params;
	memcpy_s(&NotifyEventAvailabilityChanged_Params.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(uFnNotifyEventAvailabilityChanged, &NotifyEventAvailabilityChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventAvailabilityChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        InNewAvailability              (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::EventAvailabilityChanged(uint8_t InNewAvailability)
{
	static UFunction* uFnEventAvailabilityChanged = nullptr;

	if (!uFnEventAvailabilityChanged)
	{
		uFnEventAvailabilityChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EventAvailabilityChanged");
	}

	UOnlineGameClipsInterfaceEOS_execEventAvailabilityChanged_Params EventAvailabilityChanged_Params;
	memcpy_s(&EventAvailabilityChanged_Params.InNewAvailability, 0x1, &InNewAvailability, 0x1);

	this->ProcessEvent(uFnEventAvailabilityChanged, &EventAvailabilityChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsUploading
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameClipsInterfaceEOS::IsUploading()
{
	static UFunction* uFnIsUploading = nullptr;

	if (!uFnIsUploading)
	{
		uFnIsUploading = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsUploading");
	}

	UOnlineGameClipsInterfaceEOS_execIsUploading_Params IsUploading_Params;

	uFnIsUploading->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsUploading, &IsUploading_Params, nullptr);

	uFnIsUploading->FunctionFlags |= 0x400;

	return IsUploading_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsRecording
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameClipsInterfaceEOS::IsRecording()
{
	static UFunction* uFnIsRecording = nullptr;

	if (!uFnIsRecording)
	{
		uFnIsRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsRecording");
	}

	UOnlineGameClipsInterfaceEOS_execIsRecording_Params IsRecording_Params;

	uFnIsRecording->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsRecording, &IsRecording_Params, nullptr);

	uFnIsRecording->FunctionFlags |= 0x400;

	return IsRecording_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAvailable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameClipsInterfaceEOS::IsAvailable()
{
	static UFunction* uFnIsAvailable = nullptr;

	if (!uFnIsAvailable)
	{
		uFnIsAvailable = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAvailable");
	}

	UOnlineGameClipsInterfaceEOS_execIsAvailable_Params IsAvailable_Params;

	uFnIsAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsAvailable, &IsAvailable_Params, nullptr);

	uFnIsAvailable->FunctionFlags |= 0x400;

	return IsAvailable_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.GetTimeUntilUnthrottled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)

float UOnlineGameClipsInterfaceEOS::GetTimeUntilUnthrottled(class FString InEpicAccountId)
{
	static UFunction* uFnGetTimeUntilUnthrottled = nullptr;

	if (!uFnGetTimeUntilUnthrottled)
	{
		uFnGetTimeUntilUnthrottled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.GetTimeUntilUnthrottled");
	}

	UOnlineGameClipsInterfaceEOS_execGetTimeUntilUnthrottled_Params GetTimeUntilUnthrottled_Params;
	memcpy_s(&GetTimeUntilUnthrottled_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);

	uFnGetTimeUntilUnthrottled->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTimeUntilUnthrottled, &GetTimeUntilUnthrottled_Params, nullptr);

	uFnGetTimeUntilUnthrottled->FunctionFlags |= 0x400;

	return GetTimeUntilUnthrottled_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsClipUploadingLimitReached
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameClipsInterfaceEOS::IsClipUploadingLimitReached(class FString InEpicAccountId)
{
	static UFunction* uFnIsClipUploadingLimitReached = nullptr;

	if (!uFnIsClipUploadingLimitReached)
	{
		uFnIsClipUploadingLimitReached = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsClipUploadingLimitReached");
	}

	UOnlineGameClipsInterfaceEOS_execIsClipUploadingLimitReached_Params IsClipUploadingLimitReached_Params;
	memcpy_s(&IsClipUploadingLimitReached_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);

	uFnIsClipUploadingLimitReached->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsClipUploadingLimitReached, &IsClipUploadingLimitReached_Params, nullptr);

	uFnIsClipUploadingLimitReached->FunctionFlags |= 0x400;

	return IsClipUploadingLimitReached_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.SetUserMaxClipUploadsPerMinute
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        InMaxClipUploadsPerMinute      (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::SetUserMaxClipUploadsPerMinute(int32_t InMaxClipUploadsPerMinute)
{
	static UFunction* uFnSetUserMaxClipUploadsPerMinute = nullptr;

	if (!uFnSetUserMaxClipUploadsPerMinute)
	{
		uFnSetUserMaxClipUploadsPerMinute = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.SetUserMaxClipUploadsPerMinute");
	}

	UOnlineGameClipsInterfaceEOS_execSetUserMaxClipUploadsPerMinute_Params SetUserMaxClipUploadsPerMinute_Params;
	memcpy_s(&SetUserMaxClipUploadsPerMinute_Params.InMaxClipUploadsPerMinute, 0x4, &InMaxClipUploadsPerMinute, 0x4);

	uFnSetUserMaxClipUploadsPerMinute->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetUserMaxClipUploadsPerMinute, &SetUserMaxClipUploadsPerMinute_Params, nullptr);

	uFnSetUserMaxClipUploadsPerMinute->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAccountLinked
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameClipsInterfaceEOS::IsAccountLinked(class FString InEpicAccountId)
{
	static UFunction* uFnIsAccountLinked = nullptr;

	if (!uFnIsAccountLinked)
	{
		uFnIsAccountLinked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.IsAccountLinked");
	}

	UOnlineGameClipsInterfaceEOS_execIsAccountLinked_Params IsAccountLinked_Params;
	memcpy_s(&IsAccountLinked_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);

	uFnIsAccountLinked->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsAccountLinked, &IsAccountLinked_Params, nullptr);

	uFnIsAccountLinked->FunctionFlags |= 0x400;

	return IsAccountLinked_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.CreateClip
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InEpicAccountId                (CPF_Parm | CPF_NeedCtorLink)
// class FString                  InClipType                     (CPF_Parm | CPF_NeedCtorLink)

int32_t UOnlineGameClipsInterfaceEOS::CreateClip(class FString InEpicAccountId, class FString InClipType)
{
	static UFunction* uFnCreateClip = nullptr;

	if (!uFnCreateClip)
	{
		uFnCreateClip = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.CreateClip");
	}

	UOnlineGameClipsInterfaceEOS_execCreateClip_Params CreateClip_Params;
	memcpy_s(&CreateClip_Params.InEpicAccountId, 0x10, &InEpicAccountId, 0x10);
	memcpy_s(&CreateClip_Params.InClipType, 0x10, &InClipType, 0x10);

	uFnCreateClip->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateClip, &CreateClip_Params, nullptr);

	uFnCreateClip->FunctionFlags |= 0x400;

	return CreateClip_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.DisableMaskArea
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint64_t                       InMaskAreaHandle               (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::DisableMaskArea(uint64_t InMaskAreaHandle)
{
	static UFunction* uFnDisableMaskArea = nullptr;

	if (!uFnDisableMaskArea)
	{
		uFnDisableMaskArea = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.DisableMaskArea");
	}

	UOnlineGameClipsInterfaceEOS_execDisableMaskArea_Params DisableMaskArea_Params;
	DisableMaskArea_Params.InMaskAreaHandle = InMaskAreaHandle;

	uFnDisableMaskArea->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDisableMaskArea, &DisableMaskArea_Params, nullptr);

	uFnDisableMaskArea->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EnableMaskArea
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FGameClipsMaskArea      InMaskArea                     (CPF_Parm | CPF_OutParm)

uint64_t UOnlineGameClipsInterfaceEOS::EnableMaskArea(struct FGameClipsMaskArea& InMaskArea)
{
	static UFunction* uFnEnableMaskArea = nullptr;

	if (!uFnEnableMaskArea)
	{
		uFnEnableMaskArea = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.EnableMaskArea");
	}

	UOnlineGameClipsInterfaceEOS_execEnableMaskArea_Params EnableMaskArea_Params;
	memcpy_s(&EnableMaskArea_Params.InMaskArea, 0x18, &InMaskArea, 0x18);

	uFnEnableMaskArea->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEnableMaskArea, &EnableMaskArea_Params, nullptr);

	uFnEnableMaskArea->FunctionFlags |= 0x400;

	memcpy_s(&InMaskArea, 0x18, &EnableMaskArea_Params.InMaskArea, 0x18);

	return EnableMaskArea_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StopRecording
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineGameClipsInterfaceEOS::StopRecording()
{
	static UFunction* uFnStopRecording = nullptr;

	if (!uFnStopRecording)
	{
		uFnStopRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StopRecording");
	}

	UOnlineGameClipsInterfaceEOS_execStopRecording_Params StopRecording_Params;

	uFnStopRecording->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopRecording, &StopRecording_Params, nullptr);

	uFnStopRecording->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StartRecording
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint64_t                       InClipDuration                 (CPF_Parm)

void UOnlineGameClipsInterfaceEOS::StartRecording(uint64_t InClipDuration)
{
	static UFunction* uFnStartRecording = nullptr;

	if (!uFnStartRecording)
	{
		uFnStartRecording = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameClipsInterfaceEOS.StartRecording");
	}

	UOnlineGameClipsInterfaceEOS_execStartRecording_Params StartRecording_Params;
	StartRecording_Params.InClipDuration = InClipDuration;

	uFnStartRecording->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartRecording, &StartRecording_Params, nullptr);

	uFnStartRecording->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceEOS::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite");
	}

	UOnlineGameInterfaceEOS_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AcceptGameInvite_Params.SessionName, 0x8, &SessionName, 0x8);

	uFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	uFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceEOS::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* uFnFreeSearchResults = nullptr;

	if (!uFnFreeSearchResults)
	{
		uFnFreeSearchResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults");
	}

	UOnlineGameInterfaceEOS_execFreeSearchResults_Params FreeSearchResults_Params;
	memcpy_s(&FreeSearchResults_Params.Search, 0x8, &Search, 0x8);

	uFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFreeSearchResults, &FreeSearchResults_Params, nullptr);

	uFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
// [0x400024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceEOS::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame");
	}

	UOnlineGameInterfaceEOS_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memcpy_s(&UpdateOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	uFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	uFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  NintendoAccountToken           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceEOS::AuthWithNintendoAccountToken(uint8_t LocalUserNum, class FString& NintendoAccountToken)
{
	static UFunction* uFnAuthWithNintendoAccountToken = nullptr;

	if (!uFnAuthWithNintendoAccountToken)
	{
		uFnAuthWithNintendoAccountToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execAuthWithNintendoAccountToken_Params AuthWithNintendoAccountToken_Params;
	memcpy_s(&AuthWithNintendoAccountToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AuthWithNintendoAccountToken_Params.NintendoAccountToken, 0x10, &NintendoAccountToken, 0x10);

	uFnAuthWithNintendoAccountToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAuthWithNintendoAccountToken, &AuthWithNintendoAccountToken_Params, nullptr);

	uFnAuthWithNintendoAccountToken->FunctionFlags |= 0x400;

	memcpy_s(&NintendoAccountToken, 0x10, &AuthWithNintendoAccountToken_Params.NintendoAccountToken, 0x10);

	return AuthWithNintendoAccountToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetTimeUntilAuthExpiration
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

uint64_t UOnlinePersistentAuthInterfaceEOS::GetTimeUntilAuthExpiration(uint8_t LocalUserNum)
{
	static UFunction* uFnGetTimeUntilAuthExpiration = nullptr;

	if (!uFnGetTimeUntilAuthExpiration)
	{
		uFnGetTimeUntilAuthExpiration = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetTimeUntilAuthExpiration");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetTimeUntilAuthExpiration_Params GetTimeUntilAuthExpiration_Params;
	memcpy_s(&GetTimeUntilAuthExpiration_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetTimeUntilAuthExpiration->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTimeUntilAuthExpiration, &GetTimeUntilAuthExpiration_Params, nullptr);

	uFnGetTimeUntilAuthExpiration->FunctionFlags |= 0x400;

	return GetTimeUntilAuthExpiration_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UDateTime*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UDateTime* UOnlinePersistentAuthInterfaceEOS::GetAuthExpirationTimestamp(uint8_t LocalUserNum)
{
	static UFunction* uFnGetAuthExpirationTimestamp = nullptr;

	if (!uFnGetAuthExpirationTimestamp)
	{
		uFnGetAuthExpirationTimestamp = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetAuthExpirationTimestamp_Params GetAuthExpirationTimestamp_Params;
	memcpy_s(&GetAuthExpirationTimestamp_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetAuthExpirationTimestamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAuthExpirationTimestamp, &GetAuthExpirationTimestamp_Params, nullptr);

	uFnGetAuthExpirationTimestamp->FunctionFlags |= 0x400;

	return GetAuthExpirationTimestamp_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceEOS::LaunchAccountPortal(uint8_t LocalUserNum)
{
	static UFunction* uFnLaunchAccountPortal = nullptr;

	if (!uFnLaunchAccountPortal)
	{
		uFnLaunchAccountPortal = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal");
	}

	UOnlinePersistentAuthInterfaceEOS_execLaunchAccountPortal_Params LaunchAccountPortal_Params;
	memcpy_s(&LaunchAccountPortal_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnLaunchAccountPortal->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLaunchAccountPortal, &LaunchAccountPortal_Params, nullptr);

	uFnLaunchAccountPortal->FunctionFlags |= 0x400;

	return LaunchAccountPortal_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientSecret
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceEOS::GetClientSecret()
{
	static UFunction* uFnGetClientSecret = nullptr;

	if (!uFnGetClientSecret)
	{
		uFnGetClientSecret = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientSecret");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientSecret_Params GetClientSecret_Params;

	uFnGetClientSecret->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetClientSecret, &GetClientSecret_Params, nullptr);

	uFnGetClientSecret->FunctionFlags |= 0x400;

	return GetClientSecret_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientID
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceEOS::GetClientID()
{
	static UFunction* uFnGetClientID = nullptr;

	if (!uFnGetClientID)
	{
		uFnGetClientID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientID");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientID_Params GetClientID_Params;

	uFnGetClientID->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetClientID, &GetClientID_Params, nullptr);

	uFnGetClientID->FunctionFlags |= 0x400;

	return GetClientID_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlinePersistentAuthInterfaceEOS::GetClientCredentials()
{
	static UFunction* uFnGetClientCredentials = nullptr;

	if (!uFnGetClientCredentials)
	{
		uFnGetClientCredentials = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientCredentials_Params GetClientCredentials_Params;

	uFnGetClientCredentials->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetClientCredentials, &GetClientCredentials_Params, nullptr);

	uFnGetClientCredentials->FunctionFlags |= 0x400;

	return GetClientCredentials_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePersistentAuthInterfaceEOS::GetContinuanceToken(uint8_t LocalUserNum)
{
	static UFunction* uFnGetContinuanceToken = nullptr;

	if (!uFnGetContinuanceToken)
	{
		uFnGetContinuanceToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetContinuanceToken_Params GetContinuanceToken_Params;
	memcpy_s(&GetContinuanceToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetContinuanceToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetContinuanceToken, &GetContinuanceToken_Params, nullptr);

	uFnGetContinuanceToken->FunctionFlags |= 0x400;

	return GetContinuanceToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  RefreshToken                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceEOS::UseRefreshToken(uint8_t LocalUserNum, class FString RefreshToken)
{
	static UFunction* uFnUseRefreshToken = nullptr;

	if (!uFnUseRefreshToken)
	{
		uFnUseRefreshToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execUseRefreshToken_Params UseRefreshToken_Params;
	memcpy_s(&UseRefreshToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UseRefreshToken_Params.RefreshToken, 0x10, &RefreshToken, 0x10);

	uFnUseRefreshToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUseRefreshToken, &UseRefreshToken_Params, nullptr);

	uFnUseRefreshToken->FunctionFlags |= 0x400;

	return UseRefreshToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePersistentAuthInterfaceEOS::GetRefreshToken(uint8_t LocalUserNum)
{
	static UFunction* uFnGetRefreshToken = nullptr;

	if (!uFnGetRefreshToken)
	{
		uFnGetRefreshToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken");
	}

	UOnlinePersistentAuthInterfaceEOS_execGetRefreshToken_Params GetRefreshToken_Params;
	memcpy_s(&GetRefreshToken_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetRefreshToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetRefreshToken, &GetRefreshToken_Params, nullptr);

	uFnGetRefreshToken->FunctionFlags |= 0x400;

	return GetRefreshToken_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceEOS::RequestPinGrantCode(uint8_t LocalUserNum)
{
	static UFunction* uFnRequestPinGrantCode = nullptr;

	if (!uFnRequestPinGrantCode)
	{
		uFnRequestPinGrantCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode");
	}

	UOnlinePersistentAuthInterfaceEOS_execRequestPinGrantCode_Params RequestPinGrantCode_Params;
	memcpy_s(&RequestPinGrantCode_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnRequestPinGrantCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestPinGrantCode, &RequestPinGrantCode_Params, nullptr);

	uFnRequestPinGrantCode->FunctionFlags |= 0x400;

	return RequestPinGrantCode_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadBlockList
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadBlockList(uint8_t LocalUserNum)
{
	static UFunction* uFnReadBlockList = nullptr;

	if (!uFnReadBlockList)
	{
		uFnReadBlockList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadBlockList");
	}

	UOnlinePlayerInterfaceEOS_execReadBlockList_Params ReadBlockList_Params;
	memcpy_s(&ReadBlockList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnReadBlockList, &ReadBlockList_Params, nullptr);

	return ReadBlockList_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetBlockList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriend>   OutBlockList                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList)
{
	static UFunction* uFnGetBlockList = nullptr;

	if (!uFnGetBlockList)
	{
		uFnGetBlockList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetBlockList");
	}

	UOnlinePlayerInterfaceEOS_execGetBlockList_Params GetBlockList_Params;
	memcpy_s(&GetBlockList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetBlockList_Params.OutBlockList, 0x10, &OutBlockList, 0x10);

	uFnGetBlockList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetBlockList, &GetBlockList_Params, nullptr);

	uFnGetBlockList->FunctionFlags |= 0x400;

	memcpy_s(&OutBlockList, 0x10, &GetBlockList_Params.OutBlockList, 0x10);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerUnblockedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddPlayerUnblockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddPlayerUnblockedDelegate = nullptr;

	if (!uFnAddPlayerUnblockedDelegate)
	{
		uFnAddPlayerUnblockedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerUnblockedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddPlayerUnblockedDelegate_Params AddPlayerUnblockedDelegate_Params;
	memcpy_s(&AddPlayerUnblockedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddPlayerUnblockedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddPlayerUnblockedDelegate, &AddPlayerUnblockedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerBlockedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddPlayerBlockedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddPlayerBlockedDelegate = nullptr;

	if (!uFnAddPlayerBlockedDelegate)
	{
		uFnAddPlayerBlockedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddPlayerBlockedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddPlayerBlockedDelegate_Params AddPlayerBlockedDelegate_Params;
	memcpy_s(&AddPlayerBlockedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddPlayerBlockedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddPlayerBlockedDelegate, &AddPlayerBlockedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddBlockListUpdatedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddBlockListUpdatedDelegate = nullptr;

	if (!uFnAddBlockListUpdatedDelegate)
	{
		uFnAddBlockListUpdatedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddBlockListUpdatedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddBlockListUpdatedDelegate_Params AddBlockListUpdatedDelegate_Params;
	memcpy_s(&AddBlockListUpdatedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddBlockListUpdatedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddBlockListUpdatedDelegate, &AddBlockListUpdatedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformID
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        TargetPlatform                 (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, uint8_t TargetPlatform, struct FScriptDelegate Callback)
{
	static UFunction* uFnEpicIDToPlatformID = nullptr;

	if (!uFnEpicIDToPlatformID)
	{
		uFnEpicIDToPlatformID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformID");
	}

	UOnlinePlayerInterfaceEOS_execEpicIDToPlatformID_Params EpicIDToPlatformID_Params;
	memcpy_s(&EpicIDToPlatformID_Params.EpicAccountId, 0x48, &EpicAccountId, 0x48);
	memcpy_s(&EpicIDToPlatformID_Params.TargetPlatform, 0x1, &TargetPlatform, 0x1);
	memcpy_s(&EpicIDToPlatformID_Params.Callback, 0x18, &Callback, 0x18);

	uFnEpicIDToPlatformID->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEpicIDToPlatformID, &EpicIDToPlatformID_Params, nullptr);

	uFnEpicIDToPlatformID->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformIDCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlatformAccountId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, class FString Error)
{
	static UFunction* uFnEpicIDToPlatformIDCallback = nullptr;

	if (!uFnEpicIDToPlatformIDCallback)
	{
		uFnEpicIDToPlatformIDCallback = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.EpicIDToPlatformIDCallback");
	}

	UOnlinePlayerInterfaceEOS_execEpicIDToPlatformIDCallback_Params EpicIDToPlatformIDCallback_Params;
	memcpy_s(&EpicIDToPlatformIDCallback_Params.PlatformAccountId, 0x48, &PlatformAccountId, 0x48);
	memcpy_s(&EpicIDToPlatformIDCallback_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnEpicIDToPlatformIDCallback, &EpicIDToPlatformIDCallback_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetEpicAccountId
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_NeedCtorLink)

struct FUniqueNetId UOnlinePlayerInterfaceEOS::GetEpicAccountId(struct FUniqueNetId PlatformId)
{
	static UFunction* uFnGetEpicAccountId = nullptr;

	if (!uFnGetEpicAccountId)
	{
		uFnGetEpicAccountId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetEpicAccountId");
	}

	UOnlinePlayerInterfaceEOS_execGetEpicAccountId_Params GetEpicAccountId_Params;
	memcpy_s(&GetEpicAccountId_Params.PlatformId, 0x48, &PlatformId, 0x48);

	uFnGetEpicAccountId->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetEpicAccountId, &GetEpicAccountId_Params, nullptr);

	uFnGetEpicAccountId->FunctionFlags |= 0x400;

	return GetEpicAccountId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowInviteUI(uint8_t LocalUserNum, class FString InviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI");
	}

	UOnlinePlayerInterfaceEOS_execShowInviteUI_Params ShowInviteUI_Params;
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowInviteUI_Params.InviteText, 0x10, &InviteText, 0x10);

	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI");
	}

	UOnlinePlayerInterfaceEOS_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memcpy_s(&ShowGamerCardUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowGamerCardUI_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);

	return ShowGamerCardUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  PresenceString                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GameDataString                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::SetRichPresence(uint8_t LocalUserNum, class FString PresenceString, class FString GameDataString)
{
	static UFunction* uFnSetRichPresence = nullptr;

	if (!uFnSetRichPresence)
	{
		uFnSetRichPresence = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence");
	}

	UOnlinePlayerInterfaceEOS_execSetRichPresence_Params SetRichPresence_Params;
	memcpy_s(&SetRichPresence_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetRichPresence_Params.PresenceString, 0x10, &PresenceString, 0x10);
	memcpy_s(&SetRichPresence_Params.GameDataString, 0x10, &GameDataString, 0x10);

	uFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRichPresence, &SetRichPresence_Params, nullptr);

	uFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FOnlineFriend           FriendData                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetFriendPresence(struct FOnlineFriend& FriendData)
{
	static UFunction* uFnGetFriendPresence = nullptr;

	if (!uFnGetFriendPresence)
	{
		uFnGetFriendPresence = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence");
	}

	UOnlinePlayerInterfaceEOS_execGetFriendPresence_Params GetFriendPresence_Params;
	memcpy_s(&GetFriendPresence_Params.FriendData, 0x118, &FriendData, 0x118);

	uFnGetFriendPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFriendPresence, &GetFriendPresence_Params, nullptr);

	uFnGetFriendPresence->FunctionFlags |= 0x400;

	memcpy_s(&FriendData, 0x118, &GetFriendPresence_Params.FriendData, 0x118);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMet(uint8_t LocalUserNum, class FString GameDescription, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecordPlayersRecentlyMet = nullptr;

	if (!uFnRecordPlayersRecentlyMet)
	{
		uFnRecordPlayersRecentlyMet = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet");
	}

	UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMet_Params RecordPlayersRecentlyMet_Params;
	memcpy_s(&RecordPlayersRecentlyMet_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RecordPlayersRecentlyMet_Params.GameDescription, 0x10, &GameDescription, 0x10);
	memcpy_s(&RecordPlayersRecentlyMet_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Params, nullptr);

	memcpy_s(&Players, 0x10, &RecordPlayersRecentlyMet_Params.Players, 0x10);

	return RecordPlayersRecentlyMet_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Comment                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::WordFilterSanitizeString(class FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnWordFilterSanitizeString = nullptr;

	if (!uFnWordFilterSanitizeString)
	{
		uFnWordFilterSanitizeString = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString");
	}

	UOnlinePlayerInterfaceEOS_execWordFilterSanitizeString_Params WordFilterSanitizeString_Params;
	memcpy_s(&WordFilterSanitizeString_Params.Comment, 0x10, &Comment, 0x10);
	memcpy_s(&WordFilterSanitizeString_Params.SanitizeDelegate, 0x18, &SanitizeDelegate, 0x18);
	memcpy_s(&WordFilterSanitizeString_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnWordFilterSanitizeString, &WordFilterSanitizeString_Params, nullptr);

	return WordFilterSanitizeString_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FWordFilterResult       Result                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnSanitizeStringComplete(struct FWordFilterResult Result)
{
	static UFunction* uFnOnSanitizeStringComplete = nullptr;

	if (!uFnOnSanitizeStringComplete)
	{
		uFnOnSanitizeStringComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnSanitizeStringComplete_Params OnSanitizeStringComplete_Params;
	memcpy_s(&OnSanitizeStringComplete_Params.Result, 0x38, &Result, 0x38);

	this->ProcessEvent(uFnOnSanitizeStringComplete, &OnSanitizeStringComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::HideKeyboardUI(uint8_t LocalUserNum)
{
	static UFunction* uFnHideKeyboardUI = nullptr;

	if (!uFnHideKeyboardUI)
	{
		uFnHideKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI");
	}

	UOnlinePlayerInterfaceEOS_execHideKeyboardUI_Params HideKeyboardUI_Params;
	memcpy_s(&HideKeyboardUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnHideKeyboardUI, &HideKeyboardUI_Params, nullptr);

	return HideKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnClearReadPlayerCountryDelegate = nullptr;

	if (!uFnClearReadPlayerCountryDelegate)
	{
		uFnClearReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerCountryDelegate_Params ClearReadPlayerCountryDelegate_Params;
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(uFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnAddReadPlayerCountryDelegate = nullptr;

	if (!uFnAddReadPlayerCountryDelegate)
	{
		uFnAddReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerCountryDelegate_Params AddReadPlayerCountryDelegate_Params;
	memcpy_s(&AddReadPlayerCountryDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(uFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Country                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, class FString Country)
{
	static UFunction* uFnOnPlayerCountryRetrieved = nullptr;

	if (!uFnOnPlayerCountryRetrieved)
	{
		uFnOnPlayerCountryRetrieved = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved");
	}

	UOnlinePlayerInterfaceEOS_execOnPlayerCountryRetrieved_Params OnPlayerCountryRetrieved_Params;
	memcpy_s(&OnPlayerCountryRetrieved_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&OnPlayerCountryRetrieved_Params.Country, 0x10, &Country, 0x10);

	this->ProcessEvent(uFnOnPlayerCountryRetrieved, &OnPlayerCountryRetrieved_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::GetPlayerCountry(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerCountry = nullptr;

	if (!uFnGetPlayerCountry)
	{
		uFnGetPlayerCountry = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerCountry_Params GetPlayerCountry_Params;
	memcpy_s(&GetPlayerCountry_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetPlayerCountry, &GetPlayerCountry_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnClearAvatarChangeDelegate = nullptr;

	if (!uFnClearAvatarChangeDelegate)
	{
		uFnClearAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAvatarChangeDelegate_Params ClearAvatarChangeDelegate_Params;
	memcpy_s(&ClearAvatarChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAvatarChangeDelegate_Params.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(uFnClearAvatarChangeDelegate, &ClearAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnAddAvatarChangeDelegate = nullptr;

	if (!uFnAddAvatarChangeDelegate)
	{
		uFnAddAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAvatarChangeDelegate_Params AddAvatarChangeDelegate_Params;
	memcpy_s(&AddAvatarChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAvatarChangeDelegate_Params.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(uFnAddAvatarChangeDelegate, &AddAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnClearFriendPresenceChangeDelegate = nullptr;

	if (!uFnClearFriendPresenceChangeDelegate)
	{
		uFnClearFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendPresenceChangeDelegate_Params ClearFriendPresenceChangeDelegate_Params;
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::eventAddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnAddFriendPresenceChangeDelegate = nullptr;

	if (!uFnAddFriendPresenceChangeDelegate)
	{
		uFnAddFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_eventAddFriendPresenceChangeDelegate_Params AddFriendPresenceChangeDelegate_Params;
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::FriendPresenceChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnFriendPresenceChange = nullptr;

	if (!uFnFriendPresenceChange)
	{
		uFnFriendPresenceChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange");
	}

	UOnlinePlayerInterfaceEOS_execFriendPresenceChange_Params FriendPresenceChange_Params;
	memcpy_s(&FriendPresenceChange_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnFriendPresenceChange, &FriendPresenceChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnAvatarChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnOnAvatarChange = nullptr;

	if (!uFnOnAvatarChange)
	{
		uFnOnAvatarChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange");
	}

	UOnlinePlayerInterfaceEOS_execOnAvatarChange_Params OnAvatarChange_Params;
	memcpy_s(&OnAvatarChange_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnOnAvatarChange, &OnAvatarChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement");
	}

	UOnlinePlayerInterfaceEOS_execUnlockAchievement_Params UnlockAchievement_Params;
	memcpy_s(&UnlockAchievement_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnlockAchievement_Params.AchievementId, 0x4, &AchievementId, 0x4);
	memcpy_s(&UnlockAchievement_Params.PercentComplete, 0x4, &PercentComplete, 0x4);

	uFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);

	uFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements");
	}

	UOnlinePlayerInterfaceEOS_execReadAchievements_Params ReadAchievements_Params;
	memcpy_s(&ReadAchievements_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadAchievements_Params.TitleId, 0x4, &TitleId, 0x4);
	ReadAchievements_Params.bShouldReadText = bShouldReadText;
	ReadAchievements_Params.bShouldReadImages = bShouldReadImages;

	uFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);

	uFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UOnlinePlayerInterfaceEOS::GetAchievements(uint8_t LocalUserNum, int32_t TitleId, TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements");
	}

	UOnlinePlayerInterfaceEOS_execGetAchievements_Params GetAchievements_Params;
	memcpy_s(&GetAchievements_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetAchievements_Params.TitleId, 0x4, &TitleId, 0x4);
	memcpy_s(&GetAchievements_Params.Achievements, 0x10, &Achievements, 0x10);

	uFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);

	uFnGetAchievements->FunctionFlags |= 0x400;

	memcpy_s(&Achievements, 0x10, &GetAchievements_Params.Achievements, 0x10);

	return GetAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memcpy_s(&OnReadAchievementsComplete_Params.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUnlockAchievementComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::ShowControllerUI()
{
	static UFunction* uFnShowControllerUI = nullptr;

	if (!uFnShowControllerUI)
	{
		uFnShowControllerUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI");
	}

	UOnlinePlayerInterfaceEOS_execShowControllerUI_Params ShowControllerUI_Params;

	this->ProcessEvent(uFnShowControllerUI, &ShowControllerUI_Params, nullptr);

	return ShowControllerUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePlayerInterfaceEOS::GetPlayerLanguage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerLanguage = nullptr;

	if (!uFnGetPlayerLanguage)
	{
		uFnGetPlayerLanguage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerLanguage_Params GetPlayerLanguage_Params;
	memcpy_s(&GetPlayerLanguage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetPlayerLanguage, &GetPlayerLanguage_Params, nullptr);

	return GetPlayerLanguage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI");
	}

	UOnlinePlayerInterfaceEOS_execShowPlayersUI_Params ShowPlayersUI_Params;
	memcpy_s(&ShowPlayersUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);

	return ShowPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memcpy_s(&ClearProfileDataChangedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memcpy_s(&AddProfileDataChangedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged");
	}

	UOnlinePlayerInterfaceEOS_execOnProfileDataChanged_Params OnProfileDataChanged_Params;

	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture");
	}

	UOnlinePlayerInterfaceEOS_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memcpy_s(&UnlockGamerPicture_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnlockGamerPicture_Params.PictureId, 0x4, &PictureId, 0x4);

	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);

	return UnlockGamerPicture_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsDeviceValid(int32_t DeviceID)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid");
	}

	UOnlinePlayerInterfaceEOS_execIsDeviceValid_Params IsDeviceValid_Params;
	memcpy_s(&IsDeviceValid_Params.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);

	return IsDeviceValid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlinePlayerInterfaceEOS::GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults");
	}

	UOnlinePlayerInterfaceEOS_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memcpy_s(&GetDeviceSelectionResults_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, 0x10, &DeviceName, 0x10);

	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);

	memcpy_s(&DeviceName, 0x10, &GetDeviceSelectionResults_Params.DeviceName, 0x10);

	return GetDeviceSelectionResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// unsigned long                  bForceShowUI                   (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, unsigned long bForceShowUI)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI");
	}

	UOnlinePlayerInterfaceEOS_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memcpy_s(&ShowDeviceSelectionUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowDeviceSelectionUI_Params.SizeNeeded, 0x4, &SizeNeeded, 0x4);
	ShowDeviceSelectionUI_Params.bForceShowUI = bForceShowUI;

	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);

	return ShowDeviceSelectionUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Description                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowCustomPlayersUI(uint8_t LocalUserNum, class FString Title, class FString Description, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI");
	}

	UOnlinePlayerInterfaceEOS_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memcpy_s(&ShowCustomPlayersUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowCustomPlayersUI_Params.Title, 0x10, &Title, 0x10);
	memcpy_s(&ShowCustomPlayersUI_Params.Description, 0x10, &Description, 0x10);
	memcpy_s(&ShowCustomPlayersUI_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);

	memcpy_s(&Players, 0x10, &ShowCustomPlayersUI_Params.Players, 0x10);

	return ShowCustomPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::IsUserSwitchActive()
{
	static UFunction* uFnIsUserSwitchActive = nullptr;

	if (!uFnIsUserSwitchActive)
	{
		uFnIsUserSwitchActive = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive");
	}

	UOnlinePlayerInterfaceEOS_execIsUserSwitchActive_Params IsUserSwitchActive_Params;

	this->ProcessEvent(uFnIsUserSwitchActive, &IsUserSwitchActive_Params, nullptr);

	return IsUserSwitchActive_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Active                         (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetKickPlayerDialogActive(unsigned long Active)
{
	static UFunction* uFnSetKickPlayerDialogActive = nullptr;

	if (!uFnSetKickPlayerDialogActive)
	{
		uFnSetKickPlayerDialogActive = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive");
	}

	UOnlinePlayerInterfaceEOS_execSetKickPlayerDialogActive_Params SetKickPlayerDialogActive_Params;
	SetKickPlayerDialogActive_Params.Active = Active;

	this->ProcessEvent(uFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetKickPreviousUser(uint8_t LocalUserNum)
{
	static UFunction* uFnSetKickPreviousUser = nullptr;

	if (!uFnSetKickPreviousUser)
	{
		uFnSetKickPreviousUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser");
	}

	UOnlinePlayerInterfaceEOS_execSetKickPreviousUser_Params SetKickPreviousUser_Params;
	memcpy_s(&SetKickPreviousUser_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnSetKickPreviousUser, &SetKickPreviousUser_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowLoginUIForOrphanedUser(uint8_t LocalUserNum)
{
	static UFunction* uFnShowLoginUIForOrphanedUser = nullptr;

	if (!uFnShowLoginUIForOrphanedUser)
	{
		uFnShowLoginUIForOrphanedUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser");
	}

	UOnlinePlayerInterfaceEOS_execShowLoginUIForOrphanedUser_Params ShowLoginUIForOrphanedUser_Params;
	memcpy_s(&ShowLoginUIForOrphanedUser_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Params, nullptr);

	return ShowLoginUIForOrphanedUser_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<bool>                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

TArray<bool> UOnlinePlayerInterfaceEOS::GetSyncedAchievements(uint8_t LocalUserNum)
{
	static UFunction* uFnGetSyncedAchievements = nullptr;

	if (!uFnGetSyncedAchievements)
	{
		uFnGetSyncedAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements");
	}

	UOnlinePlayerInterfaceEOS_execGetSyncedAchievements_Params GetSyncedAchievements_Params;
	memcpy_s(&GetSyncedAchievements_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetSyncedAchievements, &GetSyncedAchievements_Params, nullptr);

	return GetSyncedAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin");
	}

	UOnlinePlayerInterfaceEOS_execIsGuestLogin_Params IsGuestLogin_Params;
	memcpy_s(&IsGuestLogin_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        RestrictedFeature              (CPF_Parm)

void UOnlinePlayerInterfaceEOS::RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, uint8_t RestrictedFeature)
{
	static UFunction* uFnRequestRestrictedFeatureMessaging = nullptr;

	if (!uFnRequestRestrictedFeatureMessaging)
	{
		uFnRequestRestrictedFeatureMessaging = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging");
	}

	UOnlinePlayerInterfaceEOS_execRequestRestrictedFeatureMessaging_Params RequestRestrictedFeatureMessaging_Params;
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.RestrictedFeature, 0x1, &RestrictedFeature, 0x1);

	this->ProcessEvent(uFnRequestRestrictedFeatureMessaging, &RequestRestrictedFeatureMessaging_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateVoice(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVoice = nullptr;

	if (!uFnCanCommunicateVoice)
	{
		uFnCanCommunicateVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateVoice_Params CanCommunicateVoice_Params;
	memcpy_s(&CanCommunicateVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanCommunicateVoice_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVoice_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanCommunicateVoice_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanCommunicateVoice, &CanCommunicateVoice_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanCommunicateVoice_Params.PrivilegeLevelHint, 0x1);

	return CanCommunicateVoice_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateVideo(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVideo = nullptr;

	if (!uFnCanCommunicateVideo)
	{
		uFnCanCommunicateVideo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateVideo_Params CanCommunicateVideo_Params;
	memcpy_s(&CanCommunicateVideo_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanCommunicateVideo_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVideo_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanCommunicateVideo_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanCommunicateVideo, &CanCommunicateVideo_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanCommunicateVideo_Params.PrivilegeLevelHint, 0x1);

	return CanCommunicateVideo_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateText(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateText = nullptr;

	if (!uFnCanCommunicateText)
	{
		uFnCanCommunicateText = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateText_Params CanCommunicateText_Params;
	memcpy_s(&CanCommunicateText_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanCommunicateText_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateText_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanCommunicateText_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanCommunicateText, &CanCommunicateText_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanCommunicateText_Params.PrivilegeLevelHint, 0x1);

	return CanCommunicateText_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareUserCreatedContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareUserCreatedContent = nullptr;

	if (!uFnCanShareUserCreatedContent)
	{
		uFnCanShareUserCreatedContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent");
	}

	UOnlinePlayerInterfaceEOS_execCanShareUserCreatedContent_Params CanShareUserCreatedContent_Params;
	memcpy_s(&CanShareUserCreatedContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShareUserCreatedContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareUserCreatedContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShareUserCreatedContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShareUserCreatedContent_Params.PrivilegeLevelHint, 0x1);

	return CanShareUserCreatedContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanAccessPremiumVideoContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumVideoContent = nullptr;

	if (!uFnCanAccessPremiumVideoContent)
	{
		uFnCanAccessPremiumVideoContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent");
	}

	UOnlinePlayerInterfaceEOS_execCanAccessPremiumVideoContent_Params CanAccessPremiumVideoContent_Params;
	memcpy_s(&CanAccessPremiumVideoContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanAccessPremiumVideoContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumVideoContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, 0x1);

	return CanAccessPremiumVideoContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanAccessPremiumContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumContent = nullptr;

	if (!uFnCanAccessPremiumContent)
	{
		uFnCanAccessPremiumContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent");
	}

	UOnlinePlayerInterfaceEOS_execCanAccessPremiumContent_Params CanAccessPremiumContent_Params;
	memcpy_s(&CanAccessPremiumContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanAccessPremiumContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanAccessPremiumContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanAccessPremiumContent, &CanAccessPremiumContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanAccessPremiumContent_Params.PrivilegeLevelHint, 0x1);

	return CanAccessPremiumContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanUseCloudStorage(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanUseCloudStorage = nullptr;

	if (!uFnCanUseCloudStorage)
	{
		uFnCanUseCloudStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage");
	}

	UOnlinePlayerInterfaceEOS_execCanUseCloudStorage_Params CanUseCloudStorage_Params;
	memcpy_s(&CanUseCloudStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanUseCloudStorage_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUseCloudStorage_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanUseCloudStorage_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanUseCloudStorage, &CanUseCloudStorage_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanUseCloudStorage_Params.PrivilegeLevelHint, 0x1);

	return CanUseCloudStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanRecordDVRClips(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanRecordDVRClips = nullptr;

	if (!uFnCanRecordDVRClips)
	{
		uFnCanRecordDVRClips = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips");
	}

	UOnlinePlayerInterfaceEOS_execCanRecordDVRClips_Params CanRecordDVRClips_Params;
	memcpy_s(&CanRecordDVRClips_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanRecordDVRClips_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanRecordDVRClips_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanRecordDVRClips_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanRecordDVRClips, &CanRecordDVRClips_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanRecordDVRClips_Params.PrivilegeLevelHint, 0x1);

	return CanRecordDVRClips_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanBrowseInternet(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanBrowseInternet = nullptr;

	if (!uFnCanBrowseInternet)
	{
		uFnCanBrowseInternet = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet");
	}

	UOnlinePlayerInterfaceEOS_execCanBrowseInternet_Params CanBrowseInternet_Params;
	memcpy_s(&CanBrowseInternet_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanBrowseInternet_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanBrowseInternet_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanBrowseInternet_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanBrowseInternet, &CanBrowseInternet_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanBrowseInternet_Params.PrivilegeLevelHint, 0x1);

	return CanBrowseInternet_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareWithSocialNetwork(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareWithSocialNetwork = nullptr;

	if (!uFnCanShareWithSocialNetwork)
	{
		uFnCanShareWithSocialNetwork = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork");
	}

	UOnlinePlayerInterfaceEOS_execCanShareWithSocialNetwork_Params CanShareWithSocialNetwork_Params;
	memcpy_s(&CanShareWithSocialNetwork_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShareWithSocialNetwork_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareWithSocialNetwork_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShareWithSocialNetwork_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShareWithSocialNetwork_Params.PrivilegeLevelHint, 0x1);

	return CanShareWithSocialNetwork_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareKinectContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareKinectContent = nullptr;

	if (!uFnCanShareKinectContent)
	{
		uFnCanShareKinectContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent");
	}

	UOnlinePlayerInterfaceEOS_execCanShareKinectContent_Params CanShareKinectContent_Params;
	memcpy_s(&CanShareKinectContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShareKinectContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareKinectContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShareKinectContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShareKinectContent, &CanShareKinectContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShareKinectContent_Params.PrivilegeLevelHint, 0x1);

	return CanShareKinectContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanUploadFitnessData(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanUploadFitnessData = nullptr;

	if (!uFnCanUploadFitnessData)
	{
		uFnCanUploadFitnessData = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData");
	}

	UOnlinePlayerInterfaceEOS_execCanUploadFitnessData_Params CanUploadFitnessData_Params;
	memcpy_s(&CanUploadFitnessData_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanUploadFitnessData_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUploadFitnessData_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanUploadFitnessData_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanUploadFitnessData, &CanUploadFitnessData_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanUploadFitnessData_Params.PrivilegeLevelHint, 0x1);

	return CanUploadFitnessData_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::SetPrimaryPlayerGamepadToLastInput()
{
	static UFunction* uFnSetPrimaryPlayerGamepadToLastInput = nullptr;

	if (!uFnSetPrimaryPlayerGamepadToLastInput)
	{
		uFnSetPrimaryPlayerGamepadToLastInput = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput");
	}

	UOnlinePlayerInterfaceEOS_execSetPrimaryPlayerGamepadToLastInput_Params SetPrimaryPlayerGamepadToLastInput_Params;

	this->ProcessEvent(uFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnClearUserSwitchCompleteDelegate = nullptr;

	if (!uFnClearUserSwitchCompleteDelegate)
	{
		uFnClearUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUserSwitchCompleteDelegate_Params ClearUserSwitchCompleteDelegate_Params;
	memcpy_s(&ClearUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnAddUserSwitchCompleteDelegate = nullptr;

	if (!uFnAddUserSwitchCompleteDelegate)
	{
		uFnAddUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUserSwitchCompleteDelegate_Params AddUserSwitchCompleteDelegate_Params;
	memcpy_s(&AddUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUserSwitchComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSwitchComplete = nullptr;

	if (!uFnOnUserSwitchComplete)
	{
		uFnOnUserSwitchComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnUserSwitchComplete_Params OnUserSwitchComplete_Params;
	memcpy_s(&OnUserSwitchComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnUserSwitchComplete, &OnUserSwitchComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ClearLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::AddLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memcpy_s(&AddLoginStatusChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnLoginStatusChange(uint8_t NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, 0x1, &NewStatus, 0x1);
	memcpy_s(&OnLoginStatusChange_Params.NewId, 0x48, &NewId, 0x48);

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<uint8_t>                Key                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key)
{
	static UFunction* uFnGetPlayHistoryRegistrationKey = nullptr;

	if (!uFnGetPlayHistoryRegistrationKey)
	{
		uFnGetPlayHistoryRegistrationKey = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayHistoryRegistrationKey_Params GetPlayHistoryRegistrationKey_Params;
	memcpy_s(&GetPlayHistoryRegistrationKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Params, nullptr);

	memcpy_s(&Key, 0x10, &GetPlayHistoryRegistrationKey_Params.Key, 0x10);

	return GetPlayHistoryRegistrationKey_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bShowUi                        (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::CheckParentalControlInfo(unsigned long bShowUi)
{
	static UFunction* uFnCheckParentalControlInfo = nullptr;

	if (!uFnCheckParentalControlInfo)
	{
		uFnCheckParentalControlInfo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo");
	}

	UOnlinePlayerInterfaceEOS_execCheckParentalControlInfo_Params CheckParentalControlInfo_Params;
	CheckParentalControlInfo_Params.bShowUi = bShowUi;

	this->ProcessEvent(uFnCheckParentalControlInfo, &CheckParentalControlInfo_Params, nullptr);

	return CheckParentalControlInfo_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlinePlayerInterfaceEOS::GetActiveDiscDLC()
{
	static UFunction* uFnGetActiveDiscDLC = nullptr;

	if (!uFnGetActiveDiscDLC)
	{
		uFnGetActiveDiscDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC");
	}

	UOnlinePlayerInterfaceEOS_execGetActiveDiscDLC_Params GetActiveDiscDLC_Params;

	this->ProcessEvent(uFnGetActiveDiscDLC, &GetActiveDiscDLC_Params, nullptr);

	return GetActiveDiscDLC_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRequiresOnlineSubscription    (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription)
{
	static UFunction* uFnSetOnlineSubscriptionRequirement = nullptr;

	if (!uFnSetOnlineSubscriptionRequirement)
	{
		uFnSetOnlineSubscriptionRequirement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement");
	}

	UOnlinePlayerInterfaceEOS_execSetOnlineSubscriptionRequirement_Params SetOnlineSubscriptionRequirement_Params;
	SetOnlineSubscriptionRequirement_Params.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	this->ProcessEvent(uFnSetOnlineSubscriptionRequirement, &SetOnlineSubscriptionRequirement_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

int32_t UOnlinePlayerInterfaceEOS::GetControllerID(int32_t LocalPlayerNum)
{
	static UFunction* uFnGetControllerID = nullptr;

	if (!uFnGetControllerID)
	{
		uFnGetControllerID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID");
	}

	UOnlinePlayerInterfaceEOS_execGetControllerID_Params GetControllerID_Params;
	memcpy_s(&GetControllerID_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(uFnGetControllerID, &GetControllerID_Params, nullptr);

	return GetControllerID_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlinePlayerInterfaceEOS::GetConnectedControllerNames()
{
	static UFunction* uFnGetConnectedControllerNames = nullptr;

	if (!uFnGetConnectedControllerNames)
	{
		uFnGetConnectedControllerNames = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames");
	}

	UOnlinePlayerInterfaceEOS_execGetConnectedControllerNames_Params GetConnectedControllerNames_Params;

	this->ProcessEvent(uFnGetConnectedControllerNames, &GetConnectedControllerNames_Params, nullptr);

	return GetConnectedControllerNames_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLocalPlayerRemoved(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnLocalPlayerRemoved = nullptr;

	if (!uFnOnLocalPlayerRemoved)
	{
		uFnOnLocalPlayerRemoved = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved");
	}

	UOnlinePlayerInterfaceEOS_execOnLocalPlayerRemoved_Params OnLocalPlayerRemoved_Params;
	memcpy_s(&OnLocalPlayerRemoved_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(uFnOnLocalPlayerRemoved, &OnLocalPlayerRemoved_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::UnregisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnUnregisterController = nullptr;

	if (!uFnUnregisterController)
	{
		uFnUnregisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController");
	}

	UOnlinePlayerInterfaceEOS_execUnregisterController_Params UnregisterController_Params;
	memcpy_s(&UnregisterController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(uFnUnregisterController, &UnregisterController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_OptionalParm | CPF_Parm)

void UOnlinePlayerInterfaceEOS::RegisterController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnRegisterController = nullptr;

	if (!uFnRegisterController)
	{
		uFnRegisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController");
	}

	UOnlinePlayerInterfaceEOS_execRegisterController_Params RegisterController_Params;
	memcpy_s(&RegisterController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&RegisterController_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnRegisterController, &RegisterController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::CanRegisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnCanRegisterController = nullptr;

	if (!uFnCanRegisterController)
	{
		uFnCanRegisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController");
	}

	UOnlinePlayerInterfaceEOS_execCanRegisterController_Params CanRegisterController_Params;
	memcpy_s(&CanRegisterController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(uFnCanRegisterController, &CanRegisterController_Params, nullptr);

	return CanRegisterController_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowBindings(int32_t ControllerId)
{
	static UFunction* uFnShowBindings = nullptr;

	if (!uFnShowBindings)
	{
		uFnShowBindings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings");
	}

	UOnlinePlayerInterfaceEOS_execShowBindings_Params ShowBindings_Params;
	memcpy_s(&ShowBindings_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnShowBindings, &ShowBindings_Params, nullptr);

	return ShowBindings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   LayoutName                     (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetControllerLayout(int32_t ControllerId, struct FName LayoutName)
{
	static UFunction* uFnSetControllerLayout = nullptr;

	if (!uFnSetControllerLayout)
	{
		uFnSetControllerLayout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout");
	}

	UOnlinePlayerInterfaceEOS_execSetControllerLayout_Params SetControllerLayout_Params;
	memcpy_s(&SetControllerLayout_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerLayout_Params.LayoutName, 0x8, &LayoutName, 0x8);

	this->ProcessEvent(uFnSetControllerLayout, &SetControllerLayout_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        TargetAPI                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetInputAPI(uint8_t TargetAPI)
{
	static UFunction* uFnSetInputAPI = nullptr;

	if (!uFnSetInputAPI)
	{
		uFnSetInputAPI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI");
	}

	UOnlinePlayerInterfaceEOS_execSetInputAPI_Params SetInputAPI_Params;
	memcpy_s(&SetInputAPI_Params.TargetAPI, 0x1, &TargetAPI, 0x1);

	this->ProcessEvent(uFnSetInputAPI, &SetInputAPI_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnClearInputAPIChangedDelegate = nullptr;

	if (!uFnClearInputAPIChangedDelegate)
	{
		uFnClearInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearInputAPIChangedDelegate_Params ClearInputAPIChangedDelegate_Params;
	memcpy_s(&ClearInputAPIChangedDelegate_Params.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(uFnClearInputAPIChangedDelegate, &ClearInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnAddInputAPIChangedDelegate = nullptr;

	if (!uFnAddInputAPIChangedDelegate)
	{
		uFnAddInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddInputAPIChangedDelegate_Params AddInputAPIChangedDelegate_Params;
	memcpy_s(&AddInputAPIChangedDelegate_Params.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(uFnAddInputAPIChangedDelegate, &AddInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        TargetAPI                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnInputAPIChanged(uint8_t TargetAPI)
{
	static UFunction* uFnOnInputAPIChanged = nullptr;

	if (!uFnOnInputAPIChanged)
	{
		uFnOnInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged");
	}

	UOnlinePlayerInterfaceEOS_execOnInputAPIChanged_Params OnInputAPIChanged_Params;
	memcpy_s(&OnInputAPIChanged_Params.TargetAPI, 0x1, &TargetAPI, 0x1);

	this->ProcessEvent(uFnOnInputAPIChanged, &OnInputAPIChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnClearUnregisteredControllerDelegate = nullptr;

	if (!uFnClearUnregisteredControllerDelegate)
	{
		uFnClearUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUnregisteredControllerDelegate_Params ClearUnregisteredControllerDelegate_Params;
	memcpy_s(&ClearUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnClearUnregisteredControllerDelegate, &ClearUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnClearRegisteredControllerDelegate = nullptr;

	if (!uFnClearRegisteredControllerDelegate)
	{
		uFnClearRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearRegisteredControllerDelegate_Params ClearRegisteredControllerDelegate_Params;
	memcpy_s(&ClearRegisteredControllerDelegate_Params.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisteredControllerDelegate, &ClearRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnAddUnregisteredControllerDelegate = nullptr;

	if (!uFnAddUnregisteredControllerDelegate)
	{
		uFnAddUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUnregisteredControllerDelegate_Params AddUnregisteredControllerDelegate_Params;
	memcpy_s(&AddUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnAddUnregisteredControllerDelegate, &AddUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnAddRegisteredControllerDelegate = nullptr;

	if (!uFnAddRegisteredControllerDelegate)
	{
		uFnAddRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddRegisteredControllerDelegate_Params AddRegisteredControllerDelegate_Params;
	memcpy_s(&AddRegisteredControllerDelegate_Params.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisteredControllerDelegate, &AddRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUnregisteredController(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnUnregisteredController = nullptr;

	if (!uFnOnUnregisteredController)
	{
		uFnOnUnregisteredController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController");
	}

	UOnlinePlayerInterfaceEOS_execOnUnregisteredController_Params OnUnregisteredController_Params;
	memcpy_s(&OnUnregisteredController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(uFnOnUnregisteredController, &OnUnregisteredController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnOnRegisteredController = nullptr;

	if (!uFnOnRegisteredController)
	{
		uFnOnRegisteredController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController");
	}

	UOnlinePlayerInterfaceEOS_execOnRegisteredController_Params OnRegisteredController_Params;
	memcpy_s(&OnRegisteredController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&OnRegisteredController_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnOnRegisteredController, &OnRegisteredController_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InPostID                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<class FString>          StringReplaceList              (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddInGamePost(class FString InPostID, uint8_t LocalUserNum, TArray<class FString> StringReplaceList)
{
	static UFunction* uFnAddInGamePost = nullptr;

	if (!uFnAddInGamePost)
	{
		uFnAddInGamePost = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost");
	}

	UOnlinePlayerInterfaceEOS_execAddInGamePost_Params AddInGamePost_Params;
	memcpy_s(&AddInGamePost_Params.InPostID, 0x10, &InPostID, 0x10);
	memcpy_s(&AddInGamePost_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddInGamePost_Params.StringReplaceList, 0x10, &StringReplaceList, 0x10);

	this->ProcessEvent(uFnAddInGamePost, &AddInGamePost_Params, nullptr);

	return AddInGamePost_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int32_t                        Points                         (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points)
{
	static UFunction* uFnUpdateStat = nullptr;

	if (!uFnUpdateStat)
	{
		uFnUpdateStat = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat");
	}

	UOnlinePlayerInterfaceEOS_execUpdateStat_Params UpdateStat_Params;
	memcpy_s(&UpdateStat_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UpdateStat_Params.StatName, 0x8, &StatName, 0x8);
	memcpy_s(&UpdateStat_Params.Points, 0x4, &Points, 0x4);

	this->ProcessEvent(uFnUpdateStat, &UpdateStat_Params, nullptr);

	return UpdateStat_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnClearSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnClearSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearSaveDataNoSpaceDialogCompleteDelegate_Params ClearSaveDataNoSpaceDialogCompleteDelegate_Params;
	memcpy_s(&ClearSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnAddSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnAddSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddSaveDataNoSpaceDialogCompleteDelegate_Params AddSaveDataNoSpaceDialogCompleteDelegate_Params;
	memcpy_s(&AddSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bContinueWithoutSave           (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave)
{
	static UFunction* uFnOnSaveDataNoSpaceDialogComplete = nullptr;

	if (!uFnOnSaveDataNoSpaceDialogComplete)
	{
		uFnOnSaveDataNoSpaceDialogComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnSaveDataNoSpaceDialogComplete_Params OnSaveDataNoSpaceDialogComplete_Params;
	OnSaveDataNoSpaceDialogComplete_Params.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent(uFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey>& PlayerKeys)
{
	static UFunction* uFnRecordPlayersRecentlyMetKeys = nullptr;

	if (!uFnRecordPlayersRecentlyMetKeys)
	{
		uFnRecordPlayersRecentlyMetKeys = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys");
	}

	UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMetKeys_Params RecordPlayersRecentlyMetKeys_Params;
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.PlayerKeys, 0x10, &PlayerKeys, 0x10);

	this->ProcessEvent(uFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Params, nullptr);

	memcpy_s(&PlayerKeys, 0x10, &RecordPlayersRecentlyMetKeys_Params.PlayerKeys, 0x10);

	return RecordPlayersRecentlyMetKeys_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsAchievementUnlocked(int32_t AchievementId)
{
	static UFunction* uFnIsAchievementUnlocked = nullptr;

	if (!uFnIsAchievementUnlocked)
	{
		uFnIsAchievementUnlocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked");
	}

	UOnlinePlayerInterfaceEOS_execIsAchievementUnlocked_Params IsAchievementUnlocked_Params;
	memcpy_s(&IsAchievementUnlocked_Params.AchievementId, 0x4, &AchievementId, 0x4);

	this->ProcessEvent(uFnIsAchievementUnlocked, &IsAchievementUnlocked_Params, nullptr);

	return IsAchievementUnlocked_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowContentMarketplaceUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI");
	}

	UOnlinePlayerInterfaceEOS_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memcpy_s(&ShowContentMarketplaceUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);

	return ShowContentMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI");
	}

	UOnlinePlayerInterfaceEOS_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memcpy_s(&ShowFriendsInviteUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);

	return ShowFriendsInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI");
	}

	UOnlinePlayerInterfaceEOS_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memcpy_s(&ShowAchievementsUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);

	return ShowAchievementsUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI");
	}

	UOnlinePlayerInterfaceEOS_execShowMessagesUI_Params ShowMessagesUI_Params;
	memcpy_s(&ShowMessagesUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);

	return ShowMessagesUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI");
	}

	UOnlinePlayerInterfaceEOS_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memcpy_s(&ShowFeedbackUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);

	return ShowFeedbackUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnRemoveCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnRemoveCanPlayOnlineChangedDelegate)
	{
		uFnRemoveCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execRemoveCanPlayOnlineChangedDelegate_Params RemoveCanPlayOnlineChangedDelegate_Params;
	memcpy_s(&RemoveCanPlayOnlineChangedDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnAddCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnAddCanPlayOnlineChangedDelegate)
	{
		uFnAddCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddCanPlayOnlineChangedDelegate_Params AddCanPlayOnlineChangedDelegate_Params;
	memcpy_s(&AddCanPlayOnlineChangedDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::CanPlayOnlineChanged(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPlayOnlineChanged = nullptr;

	if (!uFnCanPlayOnlineChanged)
	{
		uFnCanPlayOnlineChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged");
	}

	UOnlinePlayerInterfaceEOS_execCanPlayOnlineChanged_Params CanPlayOnlineChanged_Params;
	memcpy_s(&CanPlayOnlineChanged_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUserSignInCompleteDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUserSignInCompleteDelegate = nullptr;

	if (!uFnClearUserSignInCompleteDelegate)
	{
		uFnClearUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearUserSignInCompleteDelegate_Params ClearUserSignInCompleteDelegate_Params;
	memcpy_s(&ClearUserSignInCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUserSignInCompleteDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUserSignInCompleteDelegate = nullptr;

	if (!uFnAddUserSignInCompleteDelegate)
	{
		uFnAddUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddUserSignInCompleteDelegate_Params AddUserSignInCompleteDelegate_Params;
	memcpy_s(&AddUserSignInCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUserSignInComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSignInComplete = nullptr;

	if (!uFnOnUserSignInComplete)
	{
		uFnOnUserSignInComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnUserSignInComplete_Params OnUserSignInComplete_Params;
	memcpy_s(&OnUserSignInComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnUserSignInComplete, &OnUserSignInComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowCustomMessageUI(uint8_t LocalUserNum, class FString MessageTitle, class FString NonEditableMessage, class FString EditableMessage, TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI");
	}

	UOnlinePlayerInterfaceEOS_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memcpy_s(&ShowCustomMessageUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, 0x10, &MessageTitle, 0x10);
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, 0x10, &NonEditableMessage, 0x10);
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, 0x10, &EditableMessage, 0x10);
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, 0x10, &Recipients, 0x10);

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&Recipients, 0x10, &ShowCustomMessageUI_Params.Recipients, 0x10);

	return ShowCustomMessageUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memcpy_s(&ClearCrossTitleProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearCrossTitleProfileSettings_Params.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memcpy_s(&GetCrossTitleProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetCrossTitleProfileSettings_Params.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.TitleId, 0x4, &TitleId, 0x4);
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memcpy_s(&ReadCrossTitleProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadCrossTitleProfileSettings_Params.TitleId, 0x4, &TitleId, 0x4);
	memcpy_s(&ReadCrossTitleProfileSettings_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnWritePlayerStorageComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memcpy_s(&OnWritePlayerStorageComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage");
	}

	UOnlinePlayerInterfaceEOS_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memcpy_s(&WritePlayerStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&WritePlayerStorage_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&WritePlayerStorage_Params.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, 0x48, &NetId, 0x48);
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId");
	}

	UOnlinePlayerInterfaceEOS_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memcpy_s(&ReadPlayerStorageForNetId_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ReadPlayerStorageForNetId_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memcpy_s(&OnReadPlayerStorageComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage");
	}

	UOnlinePlayerInterfaceEOS_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memcpy_s(&ReadPlayerStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadPlayerStorage_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&ReadPlayerStorage_Params.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlinePlayerInterfaceEOS::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memcpy_s(&GetPlayerStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::RequestNativePlatformAuthTicket(int32_t LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestNativePlatformAuthTicket = nullptr;

	if (!uFnRequestNativePlatformAuthTicket)
	{
		uFnRequestNativePlatformAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket");
	}

	UOnlinePlayerInterfaceEOS_execRequestNativePlatformAuthTicket_Params RequestNativePlatformAuthTicket_Params;
	memcpy_s(&RequestNativePlatformAuthTicket_Params.LocalUserNum, 0x4, &LocalUserNum, 0x4);
	memcpy_s(&RequestNativePlatformAuthTicket_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRequestNativePlatformAuthTicket, &RequestNativePlatformAuthTicket_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalUserNum                   (CPF_Parm)
// class FString                  PlatformAuthTicket             (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnRequestNativePlatformAuthTicketComplete(int32_t LocalUserNum, class FString PlatformAuthTicket)
{
	static UFunction* uFnOnRequestNativePlatformAuthTicketComplete = nullptr;

	if (!uFnOnRequestNativePlatformAuthTicketComplete)
	{
		uFnOnRequestNativePlatformAuthTicketComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnRequestNativePlatformAuthTicketComplete_Params OnRequestNativePlatformAuthTicketComplete_Params;
	memcpy_s(&OnRequestNativePlatformAuthTicketComplete_Params.LocalUserNum, 0x4, &LocalUserNum, 0x4);
	memcpy_s(&OnRequestNativePlatformAuthTicketComplete_Params.PlatformAuthTicket, 0x10, &PlatformAuthTicket, 0x10);

	this->ProcessEvent(uFnOnRequestNativePlatformAuthTicketComplete, &OnRequestNativePlatformAuthTicketComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
// [0x00040803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::eventLinkedAccount(int32_t LocalUserNum)
{
	static UFunction* uFnLinkedAccount = nullptr;

	if (!uFnLinkedAccount)
	{
		uFnLinkedAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount");
	}

	UOnlinePlayerInterfaceEOS_eventLinkedAccount_Params LinkedAccount_Params;
	memcpy_s(&LinkedAccount_Params.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	this->ProcessEvent(uFnLinkedAccount, &LinkedAccount_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ConnectLogin(int32_t LocalUserNum)
{
	static UFunction* uFnConnectLogin = nullptr;

	if (!uFnConnectLogin)
	{
		uFnConnectLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin");
	}

	UOnlinePlayerInterfaceEOS_execConnectLogin_Params ConnectLogin_Params;
	memcpy_s(&ConnectLogin_Params.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	uFnConnectLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnConnectLogin, &ConnectLogin_Params, nullptr);

	uFnConnectLogin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            InviteFrom                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom)
{
	static UFunction* uFnHasIncomingFriendInvite = nullptr;

	if (!uFnHasIncomingFriendInvite)
	{
		uFnHasIncomingFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite");
	}

	UOnlinePlayerInterfaceEOS_execHasIncomingFriendInvite_Params HasIncomingFriendInvite_Params;
	memcpy_s(&HasIncomingFriendInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&HasIncomingFriendInvite_Params.InviteFrom, 0x48, &InviteFrom, 0x48);

	uFnHasIncomingFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHasIncomingFriendInvite, &HasIncomingFriendInvite_Params, nullptr);

	uFnHasIncomingFriendInvite->FunctionFlags |= 0x400;

	return HasIncomingFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::SupportInGameLogin()
{
	static UFunction* uFnSupportInGameLogin = nullptr;

	if (!uFnSupportInGameLogin)
	{
		uFnSupportInGameLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin");
	}

	UOnlinePlayerInterfaceEOS_execSupportInGameLogin_Params SupportInGameLogin_Params;

	this->ProcessEvent(uFnSupportInGameLogin, &SupportInGameLogin_Params, nullptr);

	return SupportInGameLogin_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::HasFriendsFunctionality()
{
	static UFunction* uFnHasFriendsFunctionality = nullptr;

	if (!uFnHasFriendsFunctionality)
	{
		uFnHasFriendsFunctionality = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality");
	}

	UOnlinePlayerInterfaceEOS_execHasFriendsFunctionality_Params HasFriendsFunctionality_Params;

	this->ProcessEvent(uFnHasFriendsFunctionality, &HasFriendsFunctionality_Params, nullptr);

	return HasFriendsFunctionality_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage");
	}

	UOnlinePlayerInterfaceEOS_execDeleteMessage_Params DeleteMessage_Params;
	memcpy_s(&DeleteMessage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&DeleteMessage_Params.MessageIndex, 0x4, &MessageIndex, 0x4);

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnClearFriendMessageReceivedDelegate = nullptr;

	if (!uFnClearFriendMessageReceivedDelegate)
	{
		uFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendMessageReceivedDelegate_Params ClearFriendMessageReceivedDelegate_Params;
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnAddFriendMessageReceivedDelegate = nullptr;

	if (!uFnAddFriendMessageReceivedDelegate)
	{
		uFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendMessageReceivedDelegate_Params AddFriendMessageReceivedDelegate_Params;
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, class FString SendingNick, class FString Message)
{
	static UFunction* uFnOnFriendMessageReceived = nullptr;

	if (!uFnOnFriendMessageReceived)
	{
		uFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendMessageReceived_Params OnFriendMessageReceived_Params;
	memcpy_s(&OnFriendMessageReceived_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnFriendMessageReceived_Params.SendingPlayer, 0x48, &SendingPlayer, 0x48);
	memcpy_s(&OnFriendMessageReceived_Params.SendingNick, 0x10, &SendingNick, 0x10);
	memcpy_s(&OnFriendMessageReceived_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnOnFriendMessageReceived, &OnFriendMessageReceived_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* uFnGetFriendMessages = nullptr;

	if (!uFnGetFriendMessages)
	{
		uFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages");
	}

	UOnlinePlayerInterfaceEOS_execGetFriendMessages_Params GetFriendMessages_Params;
	memcpy_s(&GetFriendMessages_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetFriendMessages_Params.FriendMessages, 0x10, &FriendMessages, 0x10);

	this->ProcessEvent(uFnGetFriendMessages, &GetFriendMessages_Params, nullptr);

	memcpy_s(&FriendMessages, 0x10, &GetFriendMessages_Params.FriendMessages, 0x10);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		uFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearJoinFriendGameCompleteDelegate_Params ClearJoinFriendGameCompleteDelegate_Params;
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		uFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddJoinFriendGameCompleteDelegate_Params AddJoinFriendGameCompleteDelegate_Params;
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnJoinFriendGameComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnJoinFriendGameComplete = nullptr;

	if (!uFnOnJoinFriendGameComplete)
	{
		uFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnJoinFriendGameComplete_Params OnJoinFriendGameComplete_Params;
	OnJoinFriendGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* uFnJoinFriendGame = nullptr;

	if (!uFnJoinFriendGame)
	{
		uFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame");
	}

	UOnlinePlayerInterfaceEOS_execJoinFriendGame_Params JoinFriendGame_Params;
	memcpy_s(&JoinFriendGame_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&JoinFriendGame_Params.Friend, 0x48, &Friend, 0x48);

	this->ProcessEvent(uFnJoinFriendGame, &JoinFriendGame_Params, nullptr);

	return JoinFriendGame_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnClearReceivedGameInviteDelegate = nullptr;

	if (!uFnClearReceivedGameInviteDelegate)
	{
		uFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReceivedGameInviteDelegate_Params ClearReceivedGameInviteDelegate_Params;
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(uFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnAddReceivedGameInviteDelegate = nullptr;

	if (!uFnAddReceivedGameInviteDelegate)
	{
		uFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReceivedGameInviteDelegate_Params AddReceivedGameInviteDelegate_Params;
	memcpy_s(&AddReceivedGameInviteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(uFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnReceivedGameInvite(uint8_t LocalUserNum, class FString InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite");
	}

	UOnlinePlayerInterfaceEOS_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memcpy_s(&OnReceivedGameInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, 0x10, &InviterName, 0x10);

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, class FString Text)
{
	static UFunction* uFnSendGameInviteToFriends = nullptr;

	if (!uFnSendGameInviteToFriends)
	{
		uFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends");
	}

	UOnlinePlayerInterfaceEOS_execSendGameInviteToFriends_Params SendGameInviteToFriends_Params;
	memcpy_s(&SendGameInviteToFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SendGameInviteToFriends_Params.Friends, 0x10, &Friends, 0x10);
	memcpy_s(&SendGameInviteToFriends_Params.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(uFnSendGameInviteToFriends, &SendGameInviteToFriends_Params, nullptr);

	return SendGameInviteToFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Text)
{
	static UFunction* uFnSendGameInviteToFriend = nullptr;

	if (!uFnSendGameInviteToFriend)
	{
		uFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend");
	}

	UOnlinePlayerInterfaceEOS_execSendGameInviteToFriend_Params SendGameInviteToFriend_Params;
	memcpy_s(&SendGameInviteToFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SendGameInviteToFriend_Params.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendGameInviteToFriend_Params.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(uFnSendGameInviteToFriend, &SendGameInviteToFriend_Params, nullptr);

	return SendGameInviteToFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendMessageToFriendW(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Message)
{
	static UFunction* uFnSendMessageToFriendW = nullptr;

	if (!uFnSendMessageToFriendW)
	{
		uFnSendMessageToFriendW = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend");
	}

	UOnlinePlayerInterfaceEOS_execSendMessageToFriendW_Params SendMessageToFriendW_Params;
	memcpy_s(&SendMessageToFriendW_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SendMessageToFriendW_Params.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendMessageToFriendW_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnSendMessageToFriendW, &SendMessageToFriendW_Params, nullptr);

	return SendMessageToFriendW_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteCanceledDelegate = nullptr;

	if (!uFnClearFriendInviteCanceledDelegate)
	{
		uFnClearFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendInviteCanceledDelegate_Params ClearFriendInviteCanceledDelegate_Params;
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendInviteCanceledDelegate, &ClearFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteCanceledDelegate = nullptr;

	if (!uFnAddFriendInviteCanceledDelegate)
	{
		uFnAddFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteCanceledDelegate_Params AddFriendInviteCanceledDelegate_Params;
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendInviteCanceledDelegate, &AddFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            CanceledUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteCanceled(uint8_t LocalUserNum, struct FUniqueNetId CanceledUserId)
{
	static UFunction* uFnOnFriendInviteCanceled = nullptr;

	if (!uFnOnFriendInviteCanceled)
	{
		uFnOnFriendInviteCanceled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteCanceled_Params OnFriendInviteCanceled_Params;
	memcpy_s(&OnFriendInviteCanceled_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnFriendInviteCanceled_Params.CanceledUserId, 0x48, &CanceledUserId, 0x48);

	this->ProcessEvent(uFnOnFriendInviteCanceled, &OnFriendInviteCanceled_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteReceivedDelegate = nullptr;

	if (!uFnClearFriendInviteReceivedDelegate)
	{
		uFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendInviteReceivedDelegate_Params ClearFriendInviteReceivedDelegate_Params;
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteReceivedDelegate = nullptr;

	if (!uFnAddFriendInviteReceivedDelegate)
	{
		uFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteReceivedDelegate_Params AddFriendInviteReceivedDelegate_Params;
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, class FString RequestingNick, class FString Message)
{
	static UFunction* uFnOnFriendInviteReceived = nullptr;

	if (!uFnOnFriendInviteReceived)
	{
		uFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteReceived_Params OnFriendInviteReceived_Params;
	memcpy_s(&OnFriendInviteReceived_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnFriendInviteReceived_Params.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);
	memcpy_s(&OnFriendInviteReceived_Params.RequestingNick, 0x10, &RequestingNick, 0x10);
	memcpy_s(&OnFriendInviteReceived_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnOnFriendInviteReceived, &OnFriendInviteReceived_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* uFnRemoveFriend = nullptr;

	if (!uFnRemoveFriend)
	{
		uFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend");
	}

	UOnlinePlayerInterfaceEOS_execRemoveFriend_Params RemoveFriend_Params;
	memcpy_s(&RemoveFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RemoveFriend_Params.FormerFriend, 0x48, &FormerFriend, 0x48);

	this->ProcessEvent(uFnRemoveFriend, &RemoveFriend_Params, nullptr);

	return RemoveFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnClearRemoveFriendCompleteDelegate = nullptr;

	if (!uFnClearRemoveFriendCompleteDelegate)
	{
		uFnClearRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearRemoveFriendCompleteDelegate_Params ClearRemoveFriendCompleteDelegate_Params;
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(uFnClearRemoveFriendCompleteDelegate, &ClearRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnAddRemoveFriendCompleteDelegate = nullptr;

	if (!uFnAddRemoveFriendCompleteDelegate)
	{
		uFnAddRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddRemoveFriendCompleteDelegate_Params AddRemoveFriendCompleteDelegate_Params;
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(uFnAddRemoveFriendCompleteDelegate, &AddRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            RemovedID                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID)
{
	static UFunction* uFnOnRemoveFriendComplete = nullptr;

	if (!uFnOnRemoveFriendComplete)
	{
		uFnOnRemoveFriendComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnRemoveFriendComplete_Params OnRemoveFriendComplete_Params;
	OnRemoveFriendComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveFriendComplete_Params.RemovedID, 0x48, &RemovedID, 0x48);

	this->ProcessEvent(uFnOnRemoveFriendComplete, &OnRemoveFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnDenyFriendInvite = nullptr;

	if (!uFnDenyFriendInvite)
	{
		uFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite");
	}

	UOnlinePlayerInterfaceEOS_execDenyFriendInvite_Params DenyFriendInvite_Params;
	memcpy_s(&DenyFriendInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&DenyFriendInvite_Params.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	this->ProcessEvent(uFnDenyFriendInvite, &DenyFriendInvite_Params, nullptr);

	return DenyFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearDenyFriendInviteCompleteDelegate)
	{
		uFnClearDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearDenyFriendInviteCompleteDelegate_Params ClearDenyFriendInviteCompleteDelegate_Params;
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearDenyFriendInviteCompleteDelegate, &ClearDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddDenyFriendInviteCompleteDelegate)
	{
		uFnAddDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddDenyFriendInviteCompleteDelegate_Params AddDenyFriendInviteCompleteDelegate_Params;
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddDenyFriendInviteCompleteDelegate, &AddDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnDenyFriendInviteComplete = nullptr;

	if (!uFnOnDenyFriendInviteComplete)
	{
		uFnOnDenyFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnDenyFriendInviteComplete_Params OnDenyFriendInviteComplete_Params;
	memcpy_s(&OnDenyFriendInviteComplete_Params.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnDenyFriendInviteComplete_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnDenyFriendInviteComplete, &OnDenyFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnAcceptFriendInvite = nullptr;

	if (!uFnAcceptFriendInvite)
	{
		uFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite");
	}

	UOnlinePlayerInterfaceEOS_execAcceptFriendInvite_Params AcceptFriendInvite_Params;
	memcpy_s(&AcceptFriendInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AcceptFriendInvite_Params.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	this->ProcessEvent(uFnAcceptFriendInvite, &AcceptFriendInvite_Params, nullptr);

	return AcceptFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearAcceptFriendInviteCompleteDelegate)
	{
		uFnClearAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAcceptFriendInviteCompleteDelegate_Params ClearAcceptFriendInviteCompleteDelegate_Params;
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearAcceptFriendInviteCompleteDelegate, &ClearAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddAcceptFriendInviteCompleteDelegate)
	{
		uFnAddAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAcceptFriendInviteCompleteDelegate_Params AddAcceptFriendInviteCompleteDelegate_Params;
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddAcceptFriendInviteCompleteDelegate, &AddAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnAcceptFriendInviteComplete = nullptr;

	if (!uFnOnAcceptFriendInviteComplete)
	{
		uFnOnAcceptFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnAcceptFriendInviteComplete_Params OnAcceptFriendInviteComplete_Params;
	memcpy_s(&OnAcceptFriendInviteComplete_Params.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnAcceptFriendInviteComplete_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnAcceptFriendInviteComplete, &OnAcceptFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		uFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAddFriendByNameCompleteDelegate_Params ClearAddFriendByNameCompleteDelegate_Params;
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		uFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAddFriendByNameCompleteDelegate_Params AddAddFriendByNameCompleteDelegate_Params;
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAddFriendByNameComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAddFriendByNameComplete = nullptr;

	if (!uFnOnAddFriendByNameComplete)
	{
		uFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnAddFriendByNameComplete_Params OnAddFriendByNameComplete_Params;
	OnAddFriendByNameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddFriendByName(uint8_t LocalUserNum, class FString FriendName, class FString Message)
{
	static UFunction* uFnAddFriendByName = nullptr;

	if (!uFnAddFriendByName)
	{
		uFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName");
	}

	UOnlinePlayerInterfaceEOS_execAddFriendByName_Params AddFriendByName_Params;
	memcpy_s(&AddFriendByName_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendByName_Params.FriendName, 0x10, &FriendName, 0x10);
	memcpy_s(&AddFriendByName_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnAddFriendByName, &AddFriendByName_Params, nullptr);

	return AddFriendByName_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::QueryUserByDisplayName(uint8_t LocalUserNum, class FString DisplayName)
{
	static UFunction* uFnQueryUserByDisplayName = nullptr;

	if (!uFnQueryUserByDisplayName)
	{
		uFnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName");
	}

	UOnlinePlayerInterfaceEOS_execQueryUserByDisplayName_Params QueryUserByDisplayName_Params;
	memcpy_s(&QueryUserByDisplayName_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&QueryUserByDisplayName_Params.DisplayName, 0x10, &DisplayName, 0x10);

	uFnQueryUserByDisplayName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnQueryUserByDisplayName, &QueryUserByDisplayName_Params, nullptr);

	uFnQueryUserByDisplayName->FunctionFlags |= 0x400;

	return QueryUserByDisplayName_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnClearQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnClearQueryUserByDisplayNameCompleteDelegate)
	{
		uFnClearQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearQueryUserByDisplayNameCompleteDelegate_Params ClearQueryUserByDisplayNameCompleteDelegate_Params;
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(uFnClearQueryUserByDisplayNameCompleteDelegate, &ClearQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnAddQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnAddQueryUserByDisplayNameCompleteDelegate)
	{
		uFnAddQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddQueryUserByDisplayNameCompleteDelegate_Params AddQueryUserByDisplayNameCompleteDelegate_Params;
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(uFnAddQueryUserByDisplayNameCompleteDelegate, &AddQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  QueriedDisplayName             (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnQueryUserByDisplayName(unsigned long bWasSuccessful, class FString QueriedDisplayName, struct FUniqueNetId UserId)
{
	static UFunction* uFnOnQueryUserByDisplayName = nullptr;

	if (!uFnOnQueryUserByDisplayName)
	{
		uFnOnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName");
	}

	UOnlinePlayerInterfaceEOS_execOnQueryUserByDisplayName_Params OnQueryUserByDisplayName_Params;
	OnQueryUserByDisplayName_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUserByDisplayName_Params.QueriedDisplayName, 0x10, &QueriedDisplayName, 0x10);
	memcpy_s(&OnQueryUserByDisplayName_Params.UserId, 0x48, &UserId, 0x48);

	this->ProcessEvent(uFnOnQueryUserByDisplayName, &OnQueryUserByDisplayName_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, class FString Message)
{
	static UFunction* uFnAddFriend = nullptr;

	if (!uFnAddFriend)
	{
		uFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend");
	}

	UOnlinePlayerInterfaceEOS_execAddFriend_Params AddFriend_Params;
	memcpy_s(&AddFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriend_Params.NewFriend, 0x48, &NewFriend, 0x48);
	memcpy_s(&AddFriend_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnAddFriend, &AddFriend_Params, nullptr);

	return AddFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendCompleteDelegate = nullptr;

	if (!uFnClearAddFriendCompleteDelegate)
	{
		uFnClearAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearAddFriendCompleteDelegate_Params ClearAddFriendCompleteDelegate_Params;
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearAddFriendCompleteDelegate, &ClearAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendCompleteDelegate = nullptr;

	if (!uFnAddAddFriendCompleteDelegate)
	{
		uFnAddAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddAddFriendCompleteDelegate_Params AddAddFriendCompleteDelegate_Params;
	memcpy_s(&AddAddFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAddFriendCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddAddFriendCompleteDelegate, &AddAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NewFriendId                    (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error)
{
	static UFunction* uFnOnAddFriendComplete = nullptr;

	if (!uFnOnAddFriendComplete)
	{
		uFnOnAddFriendComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnAddFriendComplete_Params OnAddFriendComplete_Params;
	memcpy_s(&OnAddFriendComplete_Params.NewFriendId, 0x48, &NewFriendId, 0x48);
	memcpy_s(&OnAddFriendComplete_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnAddFriendComplete, &OnAddFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

class FString UOnlinePlayerInterfaceEOS::GetKeyboardInputResults(uint8_t& bWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults");
	}

	UOnlinePlayerInterfaceEOS_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memcpy_s(&GetKeyboardInputResults_Params.bWasCanceled, 0x1, &bWasCanceled, 0x1);

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	memcpy_s(&bWasCanceled, 0x1, &GetKeyboardInputResults_Params.bWasCanceled, 0x1);

	return GetKeyboardInputResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnKeyboardInputComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// class FString                  DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowKeyboardUI(uint8_t LocalUserNum, class FString TitleText, class FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, class FString DefaultText, int32_t MaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI");
	}

	UOnlinePlayerInterfaceEOS_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memcpy_s(&ShowKeyboardUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowKeyboardUI_Params.TitleText, 0x10, &TitleText, 0x10);
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, 0x10, &DescriptionText, 0x10);
	ShowKeyboardUI_Params.bIsPassword = bIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, 0x10, &DefaultText, 0x10);
	memcpy_s(&ShowKeyboardUI_Params.MaxResultLength, 0x4, &MaxResultLength, 0x4);

	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);

	return ShowKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus");
	}

	UOnlinePlayerInterfaceEOS_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memcpy_s(&SetOnlineStatus_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetOnlineStatus_Params.StatusId, 0x4, &StatusId, 0x4);
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, 0x10, &LocalizedStringSettings, 0x10);
	memcpy_s(&SetOnlineStatus_Params.Properties, 0x10, &Properties, 0x10);

	uFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);

	uFnSetOnlineStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalizedStringSettings, 0x10, &SetOnlineStatus_Params.LocalizedStringSettings, 0x10);
	memcpy_s(&Properties, 0x10, &SetOnlineStatus_Params.Properties, 0x10);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UOnlinePlayerInterfaceEOS::GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList");
	}

	UOnlinePlayerInterfaceEOS_execGetFriendsList_Params GetFriendsList_Params;
	memcpy_s(&GetFriendsList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetFriendsList_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&GetFriendsList_Params.StartingAt, 0x4, &StartingAt, 0x4);
	memcpy_s(&GetFriendsList_Params.Friends, 0x10, &Friends, 0x10);

	uFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);

	uFnGetFriendsList->FunctionFlags |= 0x400;

	memcpy_s(&Friends, 0x10, &GetFriendsList_Params.Friends, 0x10);

	return GetFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadFriendsComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList");
	}

	UOnlinePlayerInterfaceEOS_execReadFriendsList_Params ReadFriendsList_Params;
	memcpy_s(&ReadFriendsList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadFriendsList_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReadFriendsList_Params.StartingAt, 0x4, &StartingAt, 0x4);

	uFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);

	uFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memcpy_s(&OnWriteProfileSettingsComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memcpy_s(&WriteProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&WriteProfileSettings_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	uFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);

	uFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execGetProfileSettings_Params GetProfileSettings_Params;
	memcpy_s(&GetProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadProfileSettingsComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete");
	}

	UOnlinePlayerInterfaceEOS_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memcpy_s(&OnReadProfileSettingsComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings");
	}

	UOnlinePlayerInterfaceEOS_execReadProfileSettings_Params ReadProfileSettings_Params;
	memcpy_s(&ReadProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadProfileSettings_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	uFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);

	uFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnClearFriendsChangeDelegate = nullptr;

	if (!uFnClearFriendsChangeDelegate)
	{
		uFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearFriendsChangeDelegate_Params ClearFriendsChangeDelegate_Params;
	memcpy_s(&ClearFriendsChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendsChangeDelegate_Params.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::eventAddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnAddFriendsChangeDelegate = nullptr;

	if (!uFnAddFriendsChangeDelegate)
	{
		uFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_eventAddFriendsChangeDelegate_Params AddFriendsChangeDelegate_Params;
	memcpy_s(&AddFriendsChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendsChangeDelegate_Params.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnClearMutingChangeDelegate = nullptr;

	if (!uFnClearMutingChangeDelegate)
	{
		uFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearMutingChangeDelegate_Params ClearMutingChangeDelegate_Params;
	memcpy_s(&ClearMutingChangeDelegate_Params.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(uFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnAddMutingChangeDelegate = nullptr;

	if (!uFnAddMutingChangeDelegate)
	{
		uFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddMutingChangeDelegate_Params AddMutingChangeDelegate_Params;
	memcpy_s(&AddMutingChangeDelegate_Params.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(uFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	uFnClearLoginChangeDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);

	uFnClearLoginChangeDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	uFnAddLoginChangeDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);

	uFnAddLoginChangeDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI");
	}

	UOnlinePlayerInterfaceEOS_execShowFriendsUI_Params ShowFriendsUI_Params;
	memcpy_s(&ShowFriendsUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);

	return ShowFriendsUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted");
	}

	UOnlinePlayerInterfaceEOS_execIsMuted_Params IsMuted_Params;
	memcpy_s(&IsMuted_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&IsMuted_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends");
	}

	UOnlinePlayerInterfaceEOS_execAreAnyFriends_Params AreAnyFriends_Params;
	memcpy_s(&AreAnyFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AreAnyFriends_Params.Query, 0x10, &Query, 0x10);

	uFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);

	uFnAreAnyFriends->FunctionFlags |= 0x400;

	memcpy_s(&Query, 0x10, &AreAnyFriends_Params.Query, 0x10);

	return AreAnyFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend");
	}

	UOnlinePlayerInterfaceEOS_execIsFriend_Params IsFriend_Params;
	memcpy_s(&IsFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&IsFriend_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);

	uFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShowPresenceInformation(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation");
	}

	UOnlinePlayerInterfaceEOS_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memcpy_s(&CanShowPresenceInformation_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShowPresenceInformation_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShowPresenceInformation_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShowPresenceInformation_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShowPresenceInformation_Params.PrivilegeLevelHint, 0x1);

	return CanShowPresenceInformation_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanViewPlayerProfiles(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles");
	}

	UOnlinePlayerInterfaceEOS_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memcpy_s(&CanViewPlayerProfiles_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanViewPlayerProfiles_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanViewPlayerProfiles_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanViewPlayerProfiles_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanViewPlayerProfiles_Params.PrivilegeLevelHint, 0x1);

	return CanViewPlayerProfiles_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanPurchaseContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent");
	}

	UOnlinePlayerInterfaceEOS_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memcpy_s(&CanPurchaseContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanPurchaseContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPurchaseContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanPurchaseContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanPurchaseContent_Params.PrivilegeLevelHint, 0x1);

	return CanPurchaseContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanDownloadUserContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent");
	}

	UOnlinePlayerInterfaceEOS_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memcpy_s(&CanDownloadUserContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanDownloadUserContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanDownloadUserContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanDownloadUserContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanDownloadUserContent_Params.PrivilegeLevelHint, 0x1);

	return CanDownloadUserContent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        CommMethod                     (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)

uint8_t UOnlinePlayerInterfaceEOS::CanCommunicate(uint8_t LocalUserNum, uint8_t CommMethod, unsigned long bAttemptToResolve)
{
	static UFunction* uFnCanCommunicate = nullptr;

	if (!uFnCanCommunicate)
	{
		uFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate");
	}

	UOnlinePlayerInterfaceEOS_execCanCommunicate_Params CanCommunicate_Params;
	memcpy_s(&CanCommunicate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&CanCommunicate_Params.CommMethod, 0x1, &CommMethod, 0x1);
	CanCommunicate_Params.bAttemptToResolve = bAttemptToResolve;

	this->ProcessEvent(uFnCanCommunicate, &CanCommunicate_Params, nullptr);

	return CanCommunicate_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// class FString                  Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanPlayOnline(uint8_t LocalUserNum, unsigned long bAttemptToResolve, class FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanPlayOnline = nullptr;

	if (!uFnCanPlayOnline)
	{
		uFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline");
	}

	UOnlinePlayerInterfaceEOS_execCanPlayOnline_Params CanPlayOnline_Params;
	memcpy_s(&CanPlayOnline_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanPlayOnline_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPlayOnline_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanPlayOnline_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanPlayOnline, &CanPlayOnline_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanPlayOnline_Params.PrivilegeLevelHint, 0x1);

	return CanPlayOnline_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlinePlayerInterfaceEOS::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname");
	}

	UOnlinePlayerInterfaceEOS_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memcpy_s(&GetPlayerNickname_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetPlayerNickname->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);

	uFnGetPlayerNickname->FunctionFlags |= 0x400;

	return GetPlayerNickname_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId");
	}

	UOnlinePlayerInterfaceEOS_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memcpy_s(&GetUniquePlayerId_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnGetUniquePlayerId->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);

	uFnGetUniquePlayerId->FunctionFlags |= 0x400;

	memcpy_s(&PlayerID, 0x48, &GetUniquePlayerId_Params.PlayerID, 0x48);

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

uint8_t UOnlinePlayerInterfaceEOS::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus");
	}

	UOnlinePlayerInterfaceEOS_execGetLoginStatus_Params GetLoginStatus_Params;
	memcpy_s(&GetLoginStatus_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);

	uFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memcpy_s(&AddLogoutCompletedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLogoutCompleted(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted");
	}

	UOnlinePlayerInterfaceEOS_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout");
	}

	UOnlinePlayerInterfaceEOS_execLogout_Params Logout_Params;
	memcpy_s(&Logout_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);

	uFnLogout->FunctionFlags |= 0x400;

	return Logout_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memcpy_s(&ClearLoginFailedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	uFnClearLoginFailedDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);

	uFnClearLoginFailedDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate");
	}

	UOnlinePlayerInterfaceEOS_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memcpy_s(&AddLoginFailedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	uFnAddLoginFailedDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);

	uFnAddLoginFailedDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Result                         (CPF_Parm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        SecondsUntilExpiration         (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReceievedPinGrantCode(uint8_t Result, uint8_t LocalUserNum, class FString Code, class FString URL, int32_t SecondsUntilExpiration)
{
	static UFunction* uFnOnReceievedPinGrantCode = nullptr;

	if (!uFnOnReceievedPinGrantCode)
	{
		uFnOnReceievedPinGrantCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode");
	}

	UOnlinePlayerInterfaceEOS_execOnReceievedPinGrantCode_Params OnReceievedPinGrantCode_Params;
	memcpy_s(&OnReceievedPinGrantCode_Params.Result, 0x1, &Result, 0x1);
	memcpy_s(&OnReceievedPinGrantCode_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnReceievedPinGrantCode_Params.Code, 0x10, &Code, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Params.URL, 0x10, &URL, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Params.SecondsUntilExpiration, 0x4, &SecondsUntilExpiration, 0x4);

	this->ProcessEvent(uFnOnReceievedPinGrantCode, &OnReceievedPinGrantCode_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        ErrorCode                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLoginFailed(uint8_t LocalUserNum, uint8_t ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginFailed_Params OnLoginFailed_Params;
	memcpy_s(&OnLoginFailed_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnLoginFailed_Params.ErrorCode, 0x1, &ErrorCode, 0x1);

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin");
	}

	UOnlinePlayerInterfaceEOS_execAutoLogin_Params AutoLogin_Params;

	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);

	return AutoLogin_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::Login(uint8_t LocalUserNum, class FString LoginName, class FString Password, unsigned long bWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login");
	}

	UOnlinePlayerInterfaceEOS_execLogin_Params Login_Params;
	memcpy_s(&Login_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&Login_Params.LoginName, 0x10, &LoginName, 0x10);
	memcpy_s(&Login_Params.Password, 0x10, &Password, 0x10);
	Login_Params.bWantsLocalOnly = bWantsLocalOnly;

	uFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);

	uFnLogin->FunctionFlags |= 0x400;

	return Login_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowLoginUI(uint8_t LocalUserNum, unsigned long bShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI");
	}

	UOnlinePlayerInterfaceEOS_execShowLoginUI_Params ShowLoginUI_Params;
	memcpy_s(&ShowLoginUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	ShowLoginUI_Params.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);

	return ShowLoginUI_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange");
	}

	UOnlinePlayerInterfaceEOS_execOnFriendsChange_Params OnFriendsChange_Params;

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange");
	}

	UOnlinePlayerInterfaceEOS_execOnMutingChange_Params OnMutingChange_Params;

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginCancelled_Params OnLoginCancelled_Params;

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange");
	}

	UOnlinePlayerInterfaceEOS_execOnLoginChange_Params OnLoginChange_Params;
	memcpy_s(&OnLoginChange_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerUnblocked
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnPlayerUnblocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error)
{
	static UFunction* uFnOnPlayerUnblocked = nullptr;

	if (!uFnOnPlayerUnblocked)
	{
		uFnOnPlayerUnblocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerUnblocked");
	}

	UOnlinePlayerInterfaceEOS_execOnPlayerUnblocked_Params OnPlayerUnblocked_Params;
	memcpy_s(&OnPlayerUnblocked_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnPlayerUnblocked_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&OnPlayerUnblocked_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnPlayerUnblocked, &OnPlayerUnblocked_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerBlocked
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnPlayerBlocked(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, class UError* Error)
{
	static UFunction* uFnOnPlayerBlocked = nullptr;

	if (!uFnOnPlayerBlocked)
	{
		uFnOnPlayerBlocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerBlocked");
	}

	UOnlinePlayerInterfaceEOS_execOnPlayerBlocked_Params OnPlayerBlocked_Params;
	memcpy_s(&OnPlayerBlocked_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnPlayerBlocked_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&OnPlayerBlocked_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnPlayerBlocked, &OnPlayerBlocked_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnBlockListUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnBlockListUpdated(uint8_t LocalUserNum)
{
	static UFunction* uFnOnBlockListUpdated = nullptr;

	if (!uFnOnBlockListUpdated)
	{
		uFnOnBlockListUpdated = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnBlockListUpdated");
	}

	UOnlinePlayerInterfaceEOS_execOnBlockListUpdated_Params OnBlockListUpdated_Params;
	memcpy_s(&OnBlockListUpdated_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnBlockListUpdated, &OnBlockListUpdated_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid");
	}

	UOnlineStatsInterfaceEOS_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memcpy_s(&RegisterStatGuid_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, 0x10, &ClientStatGuid, 0x10);

	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);

	memcpy_s(&ClientStatGuid, 0x10, &RegisterStatGuid_Params.ClientStatGuid, 0x10);

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineStatsInterfaceEOS::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid");
	}

	UOnlineStatsInterfaceEOS_execGetClientStatGuid_Params GetClientStatGuid_Params;

	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineStatsInterfaceEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete");
	}

	UOnlineStatsInterfaceEOS_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::RegisterHostStatGuid(class FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid");
	}

	UOnlineStatsInterfaceEOS_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, 0x10, &HostStatGuid, 0x10);

	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);

	memcpy_s(&HostStatGuid, 0x10, &RegisterHostStatGuid_Params.HostStatGuid, 0x10);

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineStatsInterfaceEOS::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid");
	}

	UOnlineStatsInterfaceEOS_execGetHostStatGuid_Params GetHostStatGuid_Params;

	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// int32_t                        LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores");
	}

	UOnlineStatsInterfaceEOS_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memcpy_s(&WriteOnlinePlayerScores_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlinePlayerScores_Params.LeaderboardId, 0x4, &LeaderboardId, 0x4);
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, 0x10, &PlayerScores, 0x10);

	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);

	memcpy_s(&PlayerScores, 0x10, &WriteOnlinePlayerScores_Params.PlayerScores, 0x10);

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		uFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execClearFlushOnlineStatsCompleteDelegate_Params ClearFlushOnlineStatsCompleteDelegate_Params;
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		uFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execAddFlushOnlineStatsCompleteDelegate_Params AddFlushOnlineStatsCompleteDelegate_Params;
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete");
	}

	UOnlineStatsInterfaceEOS_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineStatsInterfaceEOS::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* uFnFlushOnlineStats = nullptr;

	if (!uFnFlushOnlineStats)
	{
		uFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats");
	}

	UOnlineStatsInterfaceEOS_execFlushOnlineStats_Params FlushOnlineStats_Params;
	memcpy_s(&FlushOnlineStats_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnFlushOnlineStats, &FlushOnlineStats_Params, nullptr);

	return FlushOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineStatsInterfaceEOS::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* uFnWriteOnlineStats = nullptr;

	if (!uFnWriteOnlineStats)
	{
		uFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats");
	}

	UOnlineStatsInterfaceEOS_execWriteOnlineStats_Params WriteOnlineStats_Params;
	memcpy_s(&WriteOnlineStats_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlineStats_Params.Player, 0x48, &Player, 0x48);
	memcpy_s(&WriteOnlineStats_Params.StatsWrite, 0x8, &StatsWrite, 0x8);

	this->ProcessEvent(uFnWriteOnlineStats, &WriteOnlineStats_Params, nullptr);

	return WriteOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineStatsInterfaceEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats");
	}

	UOnlineStatsInterfaceEOS_execFreeStats_Params FreeStats_Params;
	memcpy_s(&FreeStats_Params.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineStatsInterfaceEOS_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete");
	}

	UOnlineStatsInterfaceEOS_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, 0x4, &NumRows, 0x4);

	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);

	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memcpy_s(&ReadOnlineStatsByRank_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsByRank_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, 0x4, &NumToRead, 0x4);

	uFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);

	uFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsForFriends_Params.StatsRead, 0x8, &StatsRead, 0x8);

	uFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);

	uFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats");
	}

	UOnlineStatsInterfaceEOS_execReadOnlineStats_Params ReadOnlineStats_Params;
	memcpy_s(&ReadOnlineStats_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStats_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStats_Params.Players, 0x10, &Players, 0x10);

	uFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);

	uFnReadOnlineStats->FunctionFlags |= 0x400;

	memcpy_s(&Players, 0x10, &ReadOnlineStats_Params.Players, 0x10);

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineUserCloudFileInterfaceEOS::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearAllDelegates_Params ClearAllDelegates_Params;

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldCloudDelete             (CPF_Parm)
// unsigned long                  bShouldLocallyDelete           (CPF_Parm)

bool UOnlineUserCloudFileInterfaceEOS::DeleteUserFile(class FString UserId, class FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execDeleteUserFile_Params DeleteUserFile_Params;
	memcpy_s(&DeleteUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&DeleteUserFile_Params.Filename, 0x10, &Filename, 0x10);
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	uFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);

	uFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnDeleteUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execWriteUserFile_Params WriteUserFile_Params;
	memcpy_s(&WriteUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFile_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&WriteUserFile_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);

	uFnWriteUserFile->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &WriteUserFile_Params.FileContents, 0x10);

	return WriteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnWriteUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ReadUserFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execReadUserFile_Params ReadUserFile_Params;
	memcpy_s(&ReadUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ReadUserFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);

	uFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnReadUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnReadUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList");
	}

	UOnlineUserCloudFileInterfaceEOS_execGetUserFileList_Params GetUserFileList_Params;
	memcpy_s(&GetUserFileList_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetUserFileList_Params.UserFiles, 0x10, &UserFiles, 0x10);

	uFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);

	uFnGetUserFileList->FunctionFlags |= 0x400;

	memcpy_s(&UserFiles, 0x10, &GetUserFileList_Params.UserFiles, 0x10);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate");
	}

	UOnlineUserCloudFileInterfaceEOS_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::EnumerateUserFiles(class FString UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles");
	}

	UOnlineUserCloudFileInterfaceEOS_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memcpy_s(&EnumerateUserFiles_Params.UserId, 0x10, &UserId, 0x10);

	uFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);

	uFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, class FString UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete");
	}

	UOnlineUserCloudFileInterfaceEOS_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ClearFile(class FString UserId, class FString Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearFile_Params ClearFile_Params;
	memcpy_s(&ClearFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ClearFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);

	uFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ClearFiles(class FString UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles");
	}

	UOnlineUserCloudFileInterfaceEOS_execClearFiles_Params ClearFiles_Params;
	memcpy_s(&ClearFiles_Params.UserId, 0x10, &UserId, 0x10);

	uFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);

	uFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents");
	}

	UOnlineUserCloudFileInterfaceEOS_execGetFileContents_Params GetFileContents_Params;
	memcpy_s(&GetFileContents_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);

	uFnGetFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetFileContents_Params.FileContents, 0x10);

	return GetFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetVoiceReceiveVolume
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* uFnSetVoiceReceiveVolume = nullptr;

	if (!uFnSetVoiceReceiveVolume)
	{
		uFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetVoiceReceiveVolume");
	}

	UOnlineVoiceInterfaceEOS_execSetVoiceReceiveVolume_Params SetVoiceReceiveVolume_Params;
	memcpy_s(&SetVoiceReceiveVolume_Params.VoiceVolume, 0x4, &VoiceVolume, 0x4);

	this->ProcessEvent(uFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Params, nullptr);

	return SetVoiceReceiveVolume_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteAll");
	}

	UOnlineVoiceInterfaceEOS_execUnmuteAll_Params UnmuteAll_Params;
	memcpy_s(&UnmuteAll_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAllowFriends                  (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::MuteAll(uint8_t LocalUserNum, unsigned long bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteAll");
	}

	UOnlineVoiceInterfaceEOS_execMuteAll_Params MuteAll_Params;
	memcpy_s(&MuteAll_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetSpeechRecognitionObject
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetSpeechRecognitionObject");
	}

	UOnlineVoiceInterfaceEOS_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetSpeechRecognitionObject_Params.SpeechRecogObj, 0x8, &SpeechRecogObj, 0x8);

	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SelectVocabulary
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SelectVocabulary");
	}

	UOnlineVoiceInterfaceEOS_execSelectVocabulary_Params SelectVocabulary_Params;
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SelectVocabulary_Params.VocabularyId, 0x4, &VocabularyId, 0x4);

	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearRecognitionCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearRecognitionCompleteDelegate");
	}

	UOnlineVoiceInterfaceEOS_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddRecognitionCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddRecognitionCompleteDelegate");
	}

	UOnlineVoiceInterfaceEOS_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetRecognitionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetRecognitionResults");
	}

	UOnlineVoiceInterfaceEOS_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetRecognitionResults_Params.Words, 0x10, &Words, 0x10);

	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);

	memcpy_s(&Words, 0x10, &GetRecognitionResults_Params.Words, 0x10);

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopSpeechRecognition");
	}

	UOnlineVoiceInterfaceEOS_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartSpeechRecognition");
	}

	UOnlineVoiceInterfaceEOS_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StopNetworkedVoice");
	}

	UOnlineVoiceInterfaceEOS_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.StartNetworkedVoice");
	}

	UOnlineVoiceInterfaceEOS_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.ClearPlayerTalkingDelegate");
	}

	UOnlineVoiceInterfaceEOS_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.AddPlayerTalkingDelegate");
	}

	UOnlineVoiceInterfaceEOS_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteRemoteTalker
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineVoiceInterfaceEOS::UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnmuteRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);
	UnmuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteRemoteTalker
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineVoiceInterfaceEOS::MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.MuteRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);
	MuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetRemoteTalkerPriority
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetRemoteTalkerPriority");
	}

	UOnlineVoiceInterfaceEOS_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, 0x4, &Priority, 0x4);

	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsHeadsetPresent
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsHeadsetPresent");
	}

	UOnlineVoiceInterfaceEOS_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsRemotePlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsRemotePlayerTalking");
	}

	UOnlineVoiceInterfaceEOS_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsLocalPlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.IsLocalPlayerTalking");
	}

	UOnlineVoiceInterfaceEOS_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterRemoteTalker");
	}

	UOnlineVoiceInterfaceEOS_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.UnregisterLocalTalker");
	}

	UOnlineVoiceInterfaceEOS_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineVoiceInterfaceEOS::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.RegisterLocalTalker");
	}

	UOnlineVoiceInterfaceEOS_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineVoiceInterfaceEOS::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnRecognitionComplete");
	}

	UOnlineVoiceInterfaceEOS_execOnRecognitionComplete_Params OnRecognitionComplete_Params;

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsTalking                     (CPF_Parm)

void UOnlineVoiceInterfaceEOS::OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.OnPlayerTalkingStateChange");
	}

	UOnlineVoiceInterfaceEOS_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, 0x48, &Player, 0x48);
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerBlockStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bBlocked                       (CPF_Const | CPF_Parm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  TargetEpicAccountId            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::SetPlayerBlockStatus(unsigned long bBlocked, class FString& LocalEpicAccountId, class FString& TargetEpicAccountId, class FString& RoomName)
{
	static UFunction* uFnSetPlayerBlockStatus = nullptr;

	if (!uFnSetPlayerBlockStatus)
	{
		uFnSetPlayerBlockStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerBlockStatus");
	}

	UOnlineVoiceInterfaceEOS_execSetPlayerBlockStatus_Params SetPlayerBlockStatus_Params;
	SetPlayerBlockStatus_Params.bBlocked = bBlocked;
	memcpy_s(&SetPlayerBlockStatus_Params.LocalEpicAccountId, 0x10, &LocalEpicAccountId, 0x10);
	memcpy_s(&SetPlayerBlockStatus_Params.TargetEpicAccountId, 0x10, &TargetEpicAccountId, 0x10);
	memcpy_s(&SetPlayerBlockStatus_Params.RoomName, 0x10, &RoomName, 0x10);

	uFnSetPlayerBlockStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayerBlockStatus, &SetPlayerBlockStatus_Params, nullptr);

	uFnSetPlayerBlockStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalEpicAccountId, 0x10, &SetPlayerBlockStatus_Params.LocalEpicAccountId, 0x10);
	memcpy_s(&TargetEpicAccountId, 0x10, &SetPlayerBlockStatus_Params.TargetEpicAccountId, 0x10);
	memcpy_s(&RoomName, 0x10, &SetPlayerBlockStatus_Params.RoomName, 0x10);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerMuteStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bMuted                         (CPF_Const | CPF_Parm)
// class FString                  LocalEpicAccountId             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  TargetEpicAccountId            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::SetPlayerMuteStatus(unsigned long bMuted, class FString& LocalEpicAccountId, class FString& TargetEpicAccountId, class FString& RoomName)
{
	static UFunction* uFnSetPlayerMuteStatus = nullptr;

	if (!uFnSetPlayerMuteStatus)
	{
		uFnSetPlayerMuteStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetPlayerMuteStatus");
	}

	UOnlineVoiceInterfaceEOS_execSetPlayerMuteStatus_Params SetPlayerMuteStatus_Params;
	SetPlayerMuteStatus_Params.bMuted = bMuted;
	memcpy_s(&SetPlayerMuteStatus_Params.LocalEpicAccountId, 0x10, &LocalEpicAccountId, 0x10);
	memcpy_s(&SetPlayerMuteStatus_Params.TargetEpicAccountId, 0x10, &TargetEpicAccountId, 0x10);
	memcpy_s(&SetPlayerMuteStatus_Params.RoomName, 0x10, &RoomName, 0x10);

	uFnSetPlayerMuteStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayerMuteStatus, &SetPlayerMuteStatus_Params, nullptr);

	uFnSetPlayerMuteStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalEpicAccountId, 0x10, &SetPlayerMuteStatus_Params.LocalEpicAccountId, 0x10);
	memcpy_s(&TargetEpicAccountId, 0x10, &SetPlayerMuteStatus_Params.TargetEpicAccountId, 0x10);
	memcpy_s(&RoomName, 0x10, &SetPlayerMuteStatus_Params.RoomName, 0x10);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetUserState
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UOnlineVoiceInterfaceEOS::GetUserState(class FString& EpicAccountId)
{
	static UFunction* uFnGetUserState = nullptr;

	if (!uFnGetUserState)
	{
		uFnGetUserState = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetUserState");
	}

	UOnlineVoiceInterfaceEOS_execGetUserState_Params GetUserState_Params;
	memcpy_s(&GetUserState_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);

	uFnGetUserState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUserState, &GetUserState_Params, nullptr);

	uFnGetUserState->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, 0x10, &GetUserState_Params.EpicAccountId, 0x10);

	return GetUserState_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetCurrentRoomNameForUser
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UOnlineVoiceInterfaceEOS::GetCurrentRoomNameForUser(class FString& EpicAccountId)
{
	static UFunction* uFnGetCurrentRoomNameForUser = nullptr;

	if (!uFnGetCurrentRoomNameForUser)
	{
		uFnGetCurrentRoomNameForUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.GetCurrentRoomNameForUser");
	}

	UOnlineVoiceInterfaceEOS_execGetCurrentRoomNameForUser_Params GetCurrentRoomNameForUser_Params;
	memcpy_s(&GetCurrentRoomNameForUser_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);

	uFnGetCurrentRoomNameForUser->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCurrentRoomNameForUser, &GetCurrentRoomNameForUser_Params, nullptr);

	uFnGetCurrentRoomNameForUser->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, 0x10, &GetCurrentRoomNameForUser_Params.EpicAccountId, 0x10);

	return GetCurrentRoomNameForUser_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.LeaveVoiceRoom
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::LeaveVoiceRoom(class FString& EpicAccountId, class FString& RoomName)
{
	static UFunction* uFnLeaveVoiceRoom = nullptr;

	if (!uFnLeaveVoiceRoom)
	{
		uFnLeaveVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.LeaveVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execLeaveVoiceRoom_Params LeaveVoiceRoom_Params;
	memcpy_s(&LeaveVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&LeaveVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);

	uFnLeaveVoiceRoom->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLeaveVoiceRoom, &LeaveVoiceRoom_Params, nullptr);

	uFnLeaveVoiceRoom->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, 0x10, &LeaveVoiceRoom_Params.EpicAccountId, 0x10);
	memcpy_s(&RoomName, 0x10, &LeaveVoiceRoom_Params.RoomName, 0x10);

	return LeaveVoiceRoom_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.JoinVoiceRoom
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ClientBaseUrl                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  JoinToken                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::JoinVoiceRoom(class FString& EpicAccountId, class FString& RoomName, class FString& ClientBaseUrl, class FString& JoinToken)
{
	static UFunction* uFnJoinVoiceRoom = nullptr;

	if (!uFnJoinVoiceRoom)
	{
		uFnJoinVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.JoinVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execJoinVoiceRoom_Params JoinVoiceRoom_Params;
	memcpy_s(&JoinVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&JoinVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);
	memcpy_s(&JoinVoiceRoom_Params.ClientBaseUrl, 0x10, &ClientBaseUrl, 0x10);
	memcpy_s(&JoinVoiceRoom_Params.JoinToken, 0x10, &JoinToken, 0x10);

	uFnJoinVoiceRoom->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnJoinVoiceRoom, &JoinVoiceRoom_Params, nullptr);

	uFnJoinVoiceRoom->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, 0x10, &JoinVoiceRoom_Params.EpicAccountId, 0x10);
	memcpy_s(&RoomName, 0x10, &JoinVoiceRoom_Params.RoomName, 0x10);
	memcpy_s(&ClientBaseUrl, 0x10, &JoinVoiceRoom_Params.ClientBaseUrl, 0x10);
	memcpy_s(&JoinToken, 0x10, &JoinVoiceRoom_Params.JoinToken, 0x10);

	return JoinVoiceRoom_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioOutputDevice
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          OutputVolume                   (CPF_Parm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  DeviceID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::SetAudioOutputDevice(float OutputVolume, class FString& EpicAccountId, class FString& DeviceID)
{
	static UFunction* uFnSetAudioOutputDevice = nullptr;

	if (!uFnSetAudioOutputDevice)
	{
		uFnSetAudioOutputDevice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioOutputDevice");
	}

	UOnlineVoiceInterfaceEOS_execSetAudioOutputDevice_Params SetAudioOutputDevice_Params;
	memcpy_s(&SetAudioOutputDevice_Params.OutputVolume, 0x4, &OutputVolume, 0x4);
	memcpy_s(&SetAudioOutputDevice_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&SetAudioOutputDevice_Params.DeviceID, 0x10, &DeviceID, 0x10);

	uFnSetAudioOutputDevice->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetAudioOutputDevice, &SetAudioOutputDevice_Params, nullptr);

	uFnSetAudioOutputDevice->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, 0x10, &SetAudioOutputDevice_Params.EpicAccountId, 0x10);
	memcpy_s(&DeviceID, 0x10, &SetAudioOutputDevice_Params.DeviceID, 0x10);

	return SetAudioOutputDevice_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioInputDevice
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InputVolume                    (CPF_Parm)
// class FString                  EpicAccountId                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  DeviceID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineVoiceInterfaceEOS::SetAudioInputDevice(float InputVolume, class FString& EpicAccountId, class FString& DeviceID)
{
	static UFunction* uFnSetAudioInputDevice = nullptr;

	if (!uFnSetAudioInputDevice)
	{
		uFnSetAudioInputDevice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetAudioInputDevice");
	}

	UOnlineVoiceInterfaceEOS_execSetAudioInputDevice_Params SetAudioInputDevice_Params;
	memcpy_s(&SetAudioInputDevice_Params.InputVolume, 0x4, &InputVolume, 0x4);
	memcpy_s(&SetAudioInputDevice_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&SetAudioInputDevice_Params.DeviceID, 0x10, &DeviceID, 0x10);

	uFnSetAudioInputDevice->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetAudioInputDevice, &SetAudioInputDevice_Params, nullptr);

	uFnSetAudioInputDevice->FunctionFlags |= 0x400;

	memcpy_s(&EpicAccountId, 0x10, &SetAudioInputDevice_Params.EpicAccountId, 0x10);
	memcpy_s(&DeviceID, 0x10, &SetAudioInputDevice_Params.DeviceID, 0x10);

	return SetAudioInputDevice_Params.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetLocalPlayerRegisteredStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRegister                      (CPF_Const | CPF_Parm)
// class FString                  PlatformId                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::SetLocalPlayerRegisteredStatus(unsigned long bRegister, class FString& PlatformId)
{
	static UFunction* uFnSetLocalPlayerRegisteredStatus = nullptr;

	if (!uFnSetLocalPlayerRegisteredStatus)
	{
		uFnSetLocalPlayerRegisteredStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.SetLocalPlayerRegisteredStatus");
	}

	UOnlineVoiceInterfaceEOS_execSetLocalPlayerRegisteredStatus_Params SetLocalPlayerRegisteredStatus_Params;
	SetLocalPlayerRegisteredStatus_Params.bRegister = bRegister;
	memcpy_s(&SetLocalPlayerRegisteredStatus_Params.PlatformId, 0x10, &PlatformId, 0x10);

	uFnSetLocalPlayerRegisteredStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLocalPlayerRegisteredStatus, &SetLocalPlayerRegisteredStatus_Params, nullptr);

	uFnSetLocalPlayerRegisteredStatus->FunctionFlags |= 0x400;

	memcpy_s(&PlatformId, 0x10, &SetLocalPlayerRegisteredStatus_Params.PlatformId, 0x10);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheOutputAudioDevices
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineVoiceInterfaceEOS::CacheOutputAudioDevices()
{
	static UFunction* uFnCacheOutputAudioDevices = nullptr;

	if (!uFnCacheOutputAudioDevices)
	{
		uFnCacheOutputAudioDevices = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheOutputAudioDevices");
	}

	UOnlineVoiceInterfaceEOS_execCacheOutputAudioDevices_Params CacheOutputAudioDevices_Params;

	uFnCacheOutputAudioDevices->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCacheOutputAudioDevices, &CacheOutputAudioDevices_Params, nullptr);

	uFnCacheOutputAudioDevices->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheInputAudioDevices
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineVoiceInterfaceEOS::CacheInputAudioDevices()
{
	static UFunction* uFnCacheInputAudioDevices = nullptr;

	if (!uFnCacheInputAudioDevices)
	{
		uFnCacheInputAudioDevices = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.CacheInputAudioDevices");
	}

	UOnlineVoiceInterfaceEOS_execCacheInputAudioDevices_Params CacheInputAudioDevices_Params;

	uFnCacheInputAudioDevices->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCacheInputAudioDevices, &CacheInputAudioDevices_Params, nullptr);

	uFnCacheInputAudioDevices->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.Init
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineVoiceInterfaceEOS::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.Init");
	}

	UOnlineVoiceInterfaceEOS_execInit_Params Init_Params;

	uFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);

	uFnInit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// struct FVoiceRoomMemberStatus  MemberStatus                   (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventPlayerStatusChanged(class FString EpicAccountId, class FString RoomName, struct FVoiceRoomMemberStatus MemberStatus)
{
	static UFunction* uFnEventPlayerStatusChanged = nullptr;

	if (!uFnEventPlayerStatusChanged)
	{
		uFnEventPlayerStatusChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerStatusChanged");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerStatusChanged_Params EventPlayerStatusChanged_Params;
	memcpy_s(&EventPlayerStatusChanged_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&EventPlayerStatusChanged_Params.RoomName, 0x10, &RoomName, 0x10);
	memcpy_s(&EventPlayerStatusChanged_Params.MemberStatus, 0x4, &MemberStatus, 0x4);

	this->ProcessEvent(uFnEventPlayerStatusChanged, &EventPlayerStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerLeftVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::EventPlayerLeftVoiceRoom(class FString EpicAccountId, class FString RoomName)
{
	static UFunction* uFnEventPlayerLeftVoiceRoom = nullptr;

	if (!uFnEventPlayerLeftVoiceRoom)
	{
		uFnEventPlayerLeftVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerLeftVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerLeftVoiceRoom_Params EventPlayerLeftVoiceRoom_Params;
	memcpy_s(&EventPlayerLeftVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&EventPlayerLeftVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);

	this->ProcessEvent(uFnEventPlayerLeftVoiceRoom, &EventPlayerLeftVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerJoinedVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineVoiceInterfaceEOS::EventPlayerJoinedVoiceRoom(class FString EpicAccountId, class FString RoomName)
{
	static UFunction* uFnEventPlayerJoinedVoiceRoom = nullptr;

	if (!uFnEventPlayerJoinedVoiceRoom)
	{
		uFnEventPlayerJoinedVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventPlayerJoinedVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventPlayerJoinedVoiceRoom_Params EventPlayerJoinedVoiceRoom_Params;
	memcpy_s(&EventPlayerJoinedVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&EventPlayerJoinedVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);

	this->ProcessEvent(uFnEventPlayerJoinedVoiceRoom, &EventPlayerJoinedVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventRemovedFromVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        RemovedResult                  (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventRemovedFromVoiceRoom(class FString EpicAccountId, class FString RoomName, uint8_t RemovedResult)
{
	static UFunction* uFnEventRemovedFromVoiceRoom = nullptr;

	if (!uFnEventRemovedFromVoiceRoom)
	{
		uFnEventRemovedFromVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventRemovedFromVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventRemovedFromVoiceRoom_Params EventRemovedFromVoiceRoom_Params;
	memcpy_s(&EventRemovedFromVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&EventRemovedFromVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);
	memcpy_s(&EventRemovedFromVoiceRoom_Params.RemovedResult, 0x1, &RemovedResult, 0x1);

	this->ProcessEvent(uFnEventRemovedFromVoiceRoom, &EventRemovedFromVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventJoinedVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        JoinResult                     (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventJoinedVoiceRoom(class FString EpicAccountId, class FString RoomName, uint8_t JoinResult)
{
	static UFunction* uFnEventJoinedVoiceRoom = nullptr;

	if (!uFnEventJoinedVoiceRoom)
	{
		uFnEventJoinedVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventJoinedVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventJoinedVoiceRoom_Params EventJoinedVoiceRoom_Params;
	memcpy_s(&EventJoinedVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&EventJoinedVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);
	memcpy_s(&EventJoinedVoiceRoom_Params.JoinResult, 0x1, &JoinResult, 0x1);

	this->ProcessEvent(uFnEventJoinedVoiceRoom, &EventJoinedVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventLeftVoiceRoom
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class FString                  EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  RoomName                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LeaveResult                    (CPF_Parm)

void UOnlineVoiceInterfaceEOS::EventLeftVoiceRoom(class FString EpicAccountId, class FString RoomName, uint8_t LeaveResult)
{
	static UFunction* uFnEventLeftVoiceRoom = nullptr;

	if (!uFnEventLeftVoiceRoom)
	{
		uFnEventLeftVoiceRoom = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EventLeftVoiceRoom");
	}

	UOnlineVoiceInterfaceEOS_execEventLeftVoiceRoom_Params EventLeftVoiceRoom_Params;
	memcpy_s(&EventLeftVoiceRoom_Params.EpicAccountId, 0x10, &EpicAccountId, 0x10);
	memcpy_s(&EventLeftVoiceRoom_Params.RoomName, 0x10, &RoomName, 0x10);
	memcpy_s(&EventLeftVoiceRoom_Params.LeaveResult, 0x1, &LeaveResult, 0x1);

	this->ProcessEvent(uFnEventLeftVoiceRoom, &EventLeftVoiceRoom_Params, nullptr);
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        _                              (CPF_Parm)
// class FString                  PlatformAuthTicket             (CPF_Parm | CPF_NeedCtorLink)

void U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1::__OnlinePlayerInterfaceEOS__LinkedAccount_0x1(int32_t _, class FString PlatformAuthTicket)
{
	static UFunction* uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1 = nullptr;

	if (!uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1)
	{
		uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1 = UFunction::FindFunction("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1.__OnlinePlayerInterfaceEOS__LinkedAccount_0x1");
	}

	U__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_exec__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params __OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params;
	memcpy_s(&__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params._, 0x4, &_, 0x4);
	memcpy_s(&__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params.PlatformAuthTicket, 0x10, &PlatformAuthTicket, 0x10);

	this->ProcessEvent(uFn__OnlinePlayerInterfaceEOS__LinkedAccount_0x1, &__OnlinePlayerInterfaceEOS__LinkedAccount_0x1_Params, nullptr);
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)

void U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1::__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1(unsigned long bSuccess, class FString Code)
{
	static UFunction* uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1 = nullptr;

	if (!uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1)
	{
		uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1 = UFunction::FindFunction("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1");
	}

	U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_exec__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params;
	__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params.bSuccess = bSuccess;
	memcpy_s(&__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params.Code, 0x10, &Code, 0x10);

	this->ProcessEvent(uFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1, &__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_0x1_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
