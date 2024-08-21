/*
#############################################################################################
# Rocket League (6/5/2024) SDK
# Generated with the UE3SDKGenerator v2.2.7
# ========================================================================================= #
# File: AkAudio_classes.cpp
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

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   BusName                        (CPF_Parm)
// uint8_t                        BusType                        (CPF_Parm)

void AAkBusActor::RegisterReflectionEmitter(struct FName BusName, uint8_t BusType)
{
	static UFunction* uFnRegisterReflectionEmitter = nullptr;

	if (!uFnRegisterReflectionEmitter)
	{
		uFnRegisterReflectionEmitter = UFunction::FindFunction("Function AkAudio.AkBusActor.RegisterReflectionEmitter");
	}

	AAkBusActor_execRegisterReflectionEmitter_Params RegisterReflectionEmitter_Params;
	memcpy_s(&RegisterReflectionEmitter_Params.BusName, 0x8, &BusName, 0x8);
	memcpy_s(&RegisterReflectionEmitter_Params.BusType, 0x1, &BusType, 0x1);

	uFnRegisterReflectionEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterReflectionEmitter, &RegisterReflectionEmitter_Params, nullptr);

	uFnRegisterReflectionEmitter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkBusActor.SetPinnedAxis
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// uint8_t                        AxisToPin                      (CPF_Parm)

void AAkBusActor::SetPinnedAxis(uint8_t AxisToPin)
{
	static UFunction* uFnSetPinnedAxis = nullptr;

	if (!uFnSetPinnedAxis)
	{
		uFnSetPinnedAxis = UFunction::FindFunction("Function AkAudio.AkBusActor.SetPinnedAxis");
	}

	AAkBusActor_execSetPinnedAxis_Params SetPinnedAxis_Params;
	memcpy_s(&SetPinnedAxis_Params.AxisToPin, 0x1, &AxisToPin, 0x1);

	uFnSetPinnedAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPinnedAxis, &SetPinnedAxis_Params, nullptr);

	uFnSetPinnedAxis->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetBusEffect
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   BusName                        (CPF_Parm)
// struct FName                   EffectSetting                  (CPF_Parm)
// int32_t                        EffectSlot                     (CPF_OptionalParm | CPF_Parm)

void UAkDevice::SetBusEffect(struct FName BusName, struct FName EffectSetting, int32_t EffectSlot)
{
	static UFunction* uFnSetBusEffect = nullptr;

	if (!uFnSetBusEffect)
	{
		uFnSetBusEffect = UFunction::FindFunction("Function AkAudio.AkDevice.SetBusEffect");
	}

	UAkDevice_execSetBusEffect_Params SetBusEffect_Params;
	memcpy_s(&SetBusEffect_Params.BusName, 0x8, &BusName, 0x8);
	memcpy_s(&SetBusEffect_Params.EffectSetting, 0x8, &EffectSetting, 0x8);
	memcpy_s(&SetBusEffect_Params.EffectSlot, 0x4, &EffectSlot, 0x4);

	uFnSetBusEffect->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetBusEffect, &SetBusEffect_Params, nullptr);

	uFnSetBusEffect->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ResetSlapbackObjects
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::ResetSlapbackObjects()
{
	static UFunction* uFnResetSlapbackObjects = nullptr;

	if (!uFnResetSlapbackObjects)
	{
		uFnResetSlapbackObjects = UFunction::FindFunction("Function AkAudio.AkDevice.ResetSlapbackObjects");
	}

	UAkDevice_execResetSlapbackObjects_Params ResetSlapbackObjects_Params;

	uFnResetSlapbackObjects->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnResetSlapbackObjects, &ResetSlapbackObjects_Params, nullptr);

	uFnResetSlapbackObjects->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSoundEnvironment
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Actor                          (CPF_Parm)
// uint8_t                        EnvironmentType                (CPF_Parm)

void UAkDevice::SetSoundEnvironment(class AActor* Actor, uint8_t EnvironmentType)
{
	static UFunction* uFnSetSoundEnvironment = nullptr;

	if (!uFnSetSoundEnvironment)
	{
		uFnSetSoundEnvironment = UFunction::FindFunction("Function AkAudio.AkDevice.SetSoundEnvironment");
	}

	UAkDevice_execSetSoundEnvironment_Params SetSoundEnvironment_Params;
	memcpy_s(&SetSoundEnvironment_Params.Actor, 0x8, &Actor, 0x8);
	memcpy_s(&SetSoundEnvironment_Params.EnvironmentType, 0x1, &EnvironmentType, 0x1);

	uFnSetSoundEnvironment->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetSoundEnvironment, &SetSoundEnvironment_Params, nullptr);

	uFnSetSoundEnvironment->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.GetEnvironments
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkEnvironments*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkEnvironments* UAkDevice::GetEnvironments()
{
	static UFunction* uFnGetEnvironments = nullptr;

	if (!uFnGetEnvironments)
	{
		uFnGetEnvironments = UFunction::FindFunction("Function AkAudio.AkDevice.GetEnvironments");
	}

	UAkDevice_execGetEnvironments_Params GetEnvironments_Params;

	uFnGetEnvironments->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnGetEnvironments, &GetEnvironments_Params, nullptr);

	uFnGetEnvironments->FunctionFlags |= 0x400;

	return GetEnvironments_Params.ReturnValue;
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UAkDevice::NotifyWhenInitialized(struct FScriptDelegate Callback)
{
	static UFunction* uFnNotifyWhenInitialized = nullptr;

	if (!uFnNotifyWhenInitialized)
	{
		uFnNotifyWhenInitialized = UFunction::FindFunction("Function AkAudio.AkDevice.NotifyWhenInitialized");
	}

	UAkDevice_execNotifyWhenInitialized_Params NotifyWhenInitialized_Params;
	memcpy_s(&NotifyWhenInitialized_Params.Callback, 0x18, &Callback, 0x18);

	uFnNotifyWhenInitialized->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnNotifyWhenInitialized, &NotifyWhenInitialized_Params, nullptr);

	uFnNotifyWhenInitialized->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::ProfileStop()
{
	static UFunction* uFnProfileStop = nullptr;

	if (!uFnProfileStop)
	{
		uFnProfileStop = UFunction::FindFunction("Function AkAudio.AkDevice.ProfileStop");
	}

	UAkDevice_execProfileStop_Params ProfileStop_Params;

	uFnProfileStop->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnProfileStop, &ProfileStop_Params, nullptr);

	uFnProfileStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::ProfileStart()
{
	static UFunction* uFnProfileStart = nullptr;

	if (!uFnProfileStart)
	{
		uFnProfileStart = UFunction::FindFunction("Function AkAudio.AkDevice.ProfileStart");
	}

	UAkDevice_execProfileStart_Params ProfileStart_Params;

	uFnProfileStart->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnProfileStart, &ProfileStart_Params, nullptr);

	uFnProfileStart->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::PrintData()
{
	static UFunction* uFnPrintData = nullptr;

	if (!uFnPrintData)
	{
		uFnPrintData = UFunction::FindFunction("Function AkAudio.AkDevice.PrintData");
	}

	UAkDevice_execPrintData_Params PrintData_Params;

	uFnPrintData->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnPrintData, &PrintData_Params, nullptr);

	uFnPrintData->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetDynamicRange
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Type                           (CPF_Parm)

void UAkDevice::SetDynamicRange(uint8_t Type)
{
	static UFunction* uFnSetDynamicRange = nullptr;

	if (!uFnSetDynamicRange)
	{
		uFnSetDynamicRange = UFunction::FindFunction("Function AkAudio.AkDevice.SetDynamicRange");
	}

	UAkDevice_execSetDynamicRange_Params SetDynamicRange_Params;
	memcpy_s(&SetDynamicRange_Params.Type, 0x1, &Type, 0x1);

	uFnSetDynamicRange->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetDynamicRange, &SetDynamicRange_Params, nullptr);

	uFnSetDynamicRange->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Type                           (CPF_Parm)

void UAkDevice::SetOutputType(uint8_t Type)
{
	static UFunction* uFnSetOutputType = nullptr;

	if (!uFnSetOutputType)
	{
		uFnSetOutputType = UFunction::FindFunction("Function AkAudio.AkDevice.SetOutputType");
	}

	UAkDevice_execSetOutputType_Params SetOutputType_Params;
	memcpy_s(&SetOutputType_Params.Type, 0x1, &Type, 0x1);

	uFnSetOutputType->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetOutputType, &SetOutputType_Params, nullptr);

	uFnSetOutputType->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class ULocalPlayer*            Player                         (CPF_Parm)
// uint8_t                        Value                          (CPF_Parm)

void UAkDevice::SetListenerSpatialization(class ULocalPlayer* Player, uint8_t Value)
{
	static UFunction* uFnSetListenerSpatialization = nullptr;

	if (!uFnSetListenerSpatialization)
	{
		uFnSetListenerSpatialization = UFunction::FindFunction("Function AkAudio.AkDevice.SetListenerSpatialization");
	}

	UAkDevice_execSetListenerSpatialization_Params SetListenerSpatialization_Params;
	memcpy_s(&SetListenerSpatialization_Params.Player, 0x8, &Player, 0x8);
	memcpy_s(&SetListenerSpatialization_Params.Value, 0x1, &Value, 0x1);

	uFnSetListenerSpatialization->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetListenerSpatialization, &SetListenerSpatialization_Params, nullptr);

	uFnSetListenerSpatialization->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnable                        (CPF_Parm)

void UAkDevice::SetSplitScreenListenerEnabled(unsigned long bEnable)
{
	static UFunction* uFnSetSplitScreenListenerEnabled = nullptr;

	if (!uFnSetSplitScreenListenerEnabled)
	{
		uFnSetSplitScreenListenerEnabled = UFunction::FindFunction("Function AkAudio.AkDevice.SetSplitScreenListenerEnabled");
	}

	UAkDevice_execSetSplitScreenListenerEnabled_Params SetSplitScreenListenerEnabled_Params;
	SetSplitScreenListenerEnabled_Params.bEnable = bEnable;

	uFnSetSplitScreenListenerEnabled->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetSplitScreenListenerEnabled, &SetSplitScreenListenerEnabled_Params, nullptr);

	uFnSetSplitScreenListenerEnabled->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FVector                 Location                       (CPF_Parm)

void UAkDevice::SetSplitScreenListenerPosition(struct FVector Location)
{
	static UFunction* uFnSetSplitScreenListenerPosition = nullptr;

	if (!uFnSetSplitScreenListenerPosition)
	{
		uFnSetSplitScreenListenerPosition = UFunction::FindFunction("Function AkAudio.AkDevice.SetSplitScreenListenerPosition");
	}

	UAkDevice_execSetSplitScreenListenerPosition_Params SetSplitScreenListenerPosition_Params;
	memcpy_s(&SetSplitScreenListenerPosition_Params.Location, 0xC, &Location, 0xC);

	uFnSetSplitScreenListenerPosition->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetSplitScreenListenerPosition, &SetSplitScreenListenerPosition_Params, nullptr);

	uFnSetSplitScreenListenerPosition->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.UpdateSecondaryOutputs
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::UpdateSecondaryOutputs()
{
	static UFunction* uFnUpdateSecondaryOutputs = nullptr;

	if (!uFnUpdateSecondaryOutputs)
	{
		uFnUpdateSecondaryOutputs = UFunction::FindFunction("Function AkAudio.AkDevice.UpdateSecondaryOutputs");
	}

	UAkDevice_execUpdateSecondaryOutputs_Params UpdateSecondaryOutputs_Params;

	uFnUpdateSecondaryOutputs->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnUpdateSecondaryOutputs, &UpdateSecondaryOutputs_Params, nullptr);

	uFnUpdateSecondaryOutputs->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::SetGlobalRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetGlobalRTCP = nullptr;

	if (!uFnSetGlobalRTCP)
	{
		uFnSetGlobalRTCP = UFunction::FindFunction("Function AkAudio.AkDevice.SetGlobalRTCP");
	}

	UAkDevice_execSetGlobalRTCP_Params SetGlobalRTCP_Params;
	memcpy_s(&SetGlobalRTCP_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetGlobalRTCP_Params.Value, 0x4, &Value, 0x4);

	uFnSetGlobalRTCP->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetGlobalRTCP, &SetGlobalRTCP_Params, nullptr);

	uFnSetGlobalRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::StopGlobalSound(class UAkSoundCue* Sound)
{
	static UFunction* uFnStopGlobalSound = nullptr;

	if (!uFnStopGlobalSound)
	{
		uFnStopGlobalSound = UFunction::FindFunction("Function AkAudio.AkDevice.StopGlobalSound");
	}

	UAkDevice_execStopGlobalSound_Params StopGlobalSound_Params;
	memcpy_s(&StopGlobalSound_Params.Sound, 0x8, &Sound, 0x8);

	uFnStopGlobalSound->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnStopGlobalSound, &StopGlobalSound_Params, nullptr);

	uFnStopGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::PlayGlobalSound(class UAkSoundCue* Sound)
{
	static UFunction* uFnPlayGlobalSound = nullptr;

	if (!uFnPlayGlobalSound)
	{
		uFnPlayGlobalSound = UFunction::FindFunction("Function AkAudio.AkDevice.PlayGlobalSound");
	}

	UAkDevice_execPlayGlobalSound_Params PlayGlobalSound_Params;
	memcpy_s(&PlayGlobalSound_Params.Sound, 0x8, &Sound, 0x8);

	uFnPlayGlobalSound->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnPlayGlobalSound, &PlayGlobalSound_Params, nullptr);

	uFnPlayGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   InStateGroup                   (CPF_Parm)
// struct FName                   InState                        (CPF_Parm)

void UAkDevice::SetState(struct FName InStateGroup, struct FName InState)
{
	static UFunction* uFnSetState = nullptr;

	if (!uFnSetState)
	{
		uFnSetState = UFunction::FindFunction("Function AkAudio.AkDevice.SetState");
	}

	UAkDevice_execSetState_Params SetState_Params;
	memcpy_s(&SetState_Params.InStateGroup, 0x8, &InStateGroup, 0x8);
	memcpy_s(&SetState_Params.InState, 0x8, &InState, 0x8);

	uFnSetState->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetState, &SetState_Params, nullptr);

	uFnSetState->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkDevice::SetSwitch(class AActor* SourceActor, struct FName Key, struct FName Value)
{
	static UFunction* uFnSetSwitch = nullptr;

	if (!uFnSetSwitch)
	{
		uFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkDevice.SetSwitch");
	}

	UAkDevice_execSetSwitch_Params SetSwitch_Params;
	memcpy_s(&SetSwitch_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&SetSwitch_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetSwitch_Params.Value, 0x8, &Value, 0x8);

	uFnSetSwitch->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetSwitch, &SetSwitch_Params, nullptr);

	uFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::SetRTCP(class AActor* SourceActor, struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkDevice.SetRTCP");
	}

	UAkDevice_execSetRTCP_Params SetRTCP_Params;
	memcpy_s(&SetRTCP_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&SetRTCP_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Params.Value, 0x4, &Value, 0x4);

	uFnSetRTCP->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);

	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)

void UAkDevice::StopAllSounds(class AActor* SourceActor)
{
	static UFunction* uFnStopAllSounds = nullptr;

	if (!uFnStopAllSounds)
	{
		uFnStopAllSounds = UFunction::FindFunction("Function AkAudio.AkDevice.StopAllSounds");
	}

	UAkDevice_execStopAllSounds_Params StopAllSounds_Params;
	memcpy_s(&StopAllSounds_Params.SourceActor, 0x8, &SourceActor, 0x8);

	uFnStopAllSounds->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnStopAllSounds, &StopAllSounds_Params, nullptr);

	uFnStopAllSounds->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::StopSound(class AActor* SourceActor, class UAkSoundCue* Sound)
{
	static UFunction* uFnStopSound = nullptr;

	if (!uFnStopSound)
	{
		uFnStopSound = UFunction::FindFunction("Function AkAudio.AkDevice.StopSound");
	}

	UAkDevice_execStopSound_Params StopSound_Params;
	memcpy_s(&StopSound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&StopSound_Params.Sound, 0x8, &Sound, 0x8);

	uFnStopSound->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnStopSound, &StopSound_Params, nullptr);

	uFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkDevice::PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnPlaySound = nullptr;

	if (!uFnPlaySound)
	{
		uFnPlaySound = UFunction::FindFunction("Function AkAudio.AkDevice.PlaySound");
	}

	UAkDevice_execPlaySound_Params PlaySound_Params;
	memcpy_s(&PlaySound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&PlaySound_Params.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&PlaySound_Params.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&PlaySound_Params.Rotation, 0xC, &Rotation, 0xC);

	uFnPlaySound->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnPlaySound, &PlaySound_Params, nullptr);

	uFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Params.ReturnValue;
};

// Function AkAudio.AkDevice.GetSoundSource
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkDevice::GetSoundSource(class AActor* SourceActor, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnGetSoundSource = nullptr;

	if (!uFnGetSoundSource)
	{
		uFnGetSoundSource = UFunction::FindFunction("Function AkAudio.AkDevice.GetSoundSource");
	}

	UAkDevice_execGetSoundSource_Params GetSoundSource_Params;
	memcpy_s(&GetSoundSource_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&GetSoundSource_Params.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&GetSoundSource_Params.Rotation, 0xC, &Rotation, 0xC);

	uFnGetSoundSource->FunctionFlags |= ~0x400;

	UAkDevice::StaticClass()->ProcessEvent(uFnGetSoundSource, &GetSoundSource_Params, nullptr);

	uFnGetSoundSource->FunctionFlags |= 0x400;

	return GetSoundSource_Params.ReturnValue;
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAkDevice::EventInitialized()
{
	static UFunction* uFnEventInitialized = nullptr;

	if (!uFnEventInitialized)
	{
		uFnEventInitialized = UFunction::FindFunction("Function AkAudio.AkDevice.EventInitialized");
	}

	UAkDevice_execEventInitialized_Params EventInitialized_Params;

	this->ProcessEvent(uFnEventInitialized, &EventInitialized_Params, nullptr);
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AActor*                  TargetActor                    (CPF_Parm)
// class FString                  EnvironmentID                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::RemoveActorEnvironment(class AActor* TargetActor, class FString& EnvironmentID)
{
	static UFunction* uFnRemoveActorEnvironment = nullptr;

	if (!uFnRemoveActorEnvironment)
	{
		uFnRemoveActorEnvironment = UFunction::FindFunction("Function AkAudio.AkEnvironments.RemoveActorEnvironment");
	}

	UAkEnvironments_execRemoveActorEnvironment_Params RemoveActorEnvironment_Params;
	memcpy_s(&RemoveActorEnvironment_Params.TargetActor, 0x8, &TargetActor, 0x8);
	memcpy_s(&RemoveActorEnvironment_Params.EnvironmentID, 0x10, &EnvironmentID, 0x10);

	uFnRemoveActorEnvironment->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRemoveActorEnvironment, &RemoveActorEnvironment_Params, nullptr);

	uFnRemoveActorEnvironment->FunctionFlags |= 0x400;

	memcpy_s(&EnvironmentID, 0x10, &RemoveActorEnvironment_Params.EnvironmentID, 0x10);
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AActor*                  TargetActor                    (CPF_Parm)
// struct FAkEnvironment          Environment                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment& Environment)
{
	static UFunction* uFnAddActorEnvironment = nullptr;

	if (!uFnAddActorEnvironment)
	{
		uFnAddActorEnvironment = UFunction::FindFunction("Function AkAudio.AkEnvironments.AddActorEnvironment");
	}

	UAkEnvironments_execAddActorEnvironment_Params AddActorEnvironment_Params;
	memcpy_s(&AddActorEnvironment_Params.TargetActor, 0x8, &TargetActor, 0x8);
	memcpy_s(&AddActorEnvironment_Params.Environment, 0x20, &Environment, 0x20);

	uFnAddActorEnvironment->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddActorEnvironment, &AddActorEnvironment_Params, nullptr);

	uFnAddActorEnvironment->FunctionFlags |= 0x400;

	memcpy_s(&Environment, 0x20, &AddActorEnvironment_Params.Environment, 0x20);
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAkEnvironment          Environment                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::AddLevelDefault(struct FAkEnvironment& Environment)
{
	static UFunction* uFnAddLevelDefault = nullptr;

	if (!uFnAddLevelDefault)
	{
		uFnAddLevelDefault = UFunction::FindFunction("Function AkAudio.AkEnvironments.AddLevelDefault");
	}

	UAkEnvironments_execAddLevelDefault_Params AddLevelDefault_Params;
	memcpy_s(&AddLevelDefault_Params.Environment, 0x20, &Environment, 0x20);

	uFnAddLevelDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddLevelDefault, &AddLevelDefault_Params, nullptr);

	uFnAddLevelDefault->FunctionFlags |= 0x400;

	memcpy_s(&Environment, 0x20, &AddLevelDefault_Params.Environment, 0x20);
};

// Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Const | CPF_Parm)

void UAkMusicAnalysis::UpdateSmoothedMusicInfo(float DeltaTime)
{
	static UFunction* uFnUpdateSmoothedMusicInfo = nullptr;

	if (!uFnUpdateSmoothedMusicInfo)
	{
		uFnUpdateSmoothedMusicInfo = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo");
	}

	UAkMusicAnalysis_execUpdateSmoothedMusicInfo_Params UpdateSmoothedMusicInfo_Params;
	memcpy_s(&UpdateSmoothedMusicInfo_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateSmoothedMusicInfo->FunctionFlags |= ~0x400;

	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnUpdateSmoothedMusicInfo, &UpdateSmoothedMusicInfo_Params, nullptr);

	uFnUpdateSmoothedMusicInfo->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicAnalysis.UpdateMusicInfo
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FMusicAnalysisInfo      NewValues                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkMusicAnalysis::UpdateMusicInfo(struct FMusicAnalysisInfo& NewValues)
{
	static UFunction* uFnUpdateMusicInfo = nullptr;

	if (!uFnUpdateMusicInfo)
	{
		uFnUpdateMusicInfo = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.UpdateMusicInfo");
	}

	UAkMusicAnalysis_execUpdateMusicInfo_Params UpdateMusicInfo_Params;
	memcpy_s(&UpdateMusicInfo_Params.NewValues, 0x20, &NewValues, 0x20);

	uFnUpdateMusicInfo->FunctionFlags |= ~0x400;

	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnUpdateMusicInfo, &UpdateMusicInfo_Params, nullptr);

	uFnUpdateMusicInfo->FunctionFlags |= 0x400;

	memcpy_s(&NewValues, 0x20, &UpdateMusicInfo_Params.NewValues, 0x20);
};

// Function AkAudio.AkMusicAnalysis.OnNewTrack
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        NewBPM                         (CPF_Parm)

void UAkMusicAnalysis::OnNewTrack(int32_t NewBPM)
{
	static UFunction* uFnOnNewTrack = nullptr;

	if (!uFnOnNewTrack)
	{
		uFnOnNewTrack = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.OnNewTrack");
	}

	UAkMusicAnalysis_execOnNewTrack_Params OnNewTrack_Params;
	memcpy_s(&OnNewTrack_Params.NewBPM, 0x4, &NewBPM, 0x4);

	uFnOnNewTrack->FunctionFlags |= ~0x400;

	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnOnNewTrack, &OnNewTrack_Params, nullptr);

	uFnOnNewTrack->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicAnalysis.GetInstance
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAkMusicAnalysis*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkMusicAnalysis* UAkMusicAnalysis::GetInstance()
{
	static UFunction* uFnGetInstance = nullptr;

	if (!uFnGetInstance)
	{
		uFnGetInstance = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.GetInstance");
	}

	UAkMusicAnalysis_execGetInstance_Params GetInstance_Params;

	uFnGetInstance->FunctionFlags |= ~0x400;

	UAkMusicAnalysis::StaticClass()->ProcessEvent(uFnGetInstance, &GetInstance_Params, nullptr);

	uFnGetInstance->FunctionFlags |= 0x400;

	return GetInstance_Params.ReturnValue;
};

// Function AkAudio.AkMusicAnalysis.EventMusicBar
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAkMusicAnalysis::EventMusicBar()
{
	static UFunction* uFnEventMusicBar = nullptr;

	if (!uFnEventMusicBar)
	{
		uFnEventMusicBar = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventMusicBar");
	}

	UAkMusicAnalysis_execEventMusicBar_Params EventMusicBar_Params;

	this->ProcessEvent(uFnEventMusicBar, &EventMusicBar_Params, nullptr);
};

// Function AkAudio.AkMusicAnalysis.EventMusicBeat
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAkMusicAnalysis::EventMusicBeat()
{
	static UFunction* uFnEventMusicBeat = nullptr;

	if (!uFnEventMusicBeat)
	{
		uFnEventMusicBeat = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventMusicBeat");
	}

	UAkMusicAnalysis_execEventMusicBeat_Params EventMusicBeat_Params;

	this->ProcessEvent(uFnEventMusicBeat, &EventMusicBeat_Params, nullptr);
};

// Function AkAudio.AkMusicAnalysis.EventNewMusicTrack
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlayingID                      (CPF_Parm)
// int32_t                        NewBPM                         (CPF_Parm)

void UAkMusicAnalysis::EventNewMusicTrack(int32_t PlayingID, int32_t NewBPM)
{
	static UFunction* uFnEventNewMusicTrack = nullptr;

	if (!uFnEventNewMusicTrack)
	{
		uFnEventNewMusicTrack = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventNewMusicTrack");
	}

	UAkMusicAnalysis_execEventNewMusicTrack_Params EventNewMusicTrack_Params;
	memcpy_s(&EventNewMusicTrack_Params.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventNewMusicTrack_Params.NewBPM, 0x4, &NewBPM, 0x4);

	this->ProcessEvent(uFnEventNewMusicTrack, &EventNewMusicTrack_Params, nullptr);
};

// Function AkAudio.AkMusicDevice.Seek
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// float                          PositionSeconds                (CPF_Parm)

void UAkMusicDevice::Seek(class UAkSoundCue* Sound, float PositionSeconds)
{
	static UFunction* uFnSeek = nullptr;

	if (!uFnSeek)
	{
		uFnSeek = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Seek");
	}

	UAkMusicDevice_execSeek_Params Seek_Params;
	memcpy_s(&Seek_Params.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&Seek_Params.PositionSeconds, 0x4, &PositionSeconds, 0x4);

	uFnSeek->FunctionFlags |= ~0x400;

	UAkMusicDevice::StaticClass()->ProcessEvent(uFnSeek, &Seek_Params, nullptr);

	uFnSeek->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.SetRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkMusicDevice::SetRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkMusicDevice.SetRTCP");
	}

	UAkMusicDevice_execSetRTCP_Params SetRTCP_Params;
	memcpy_s(&SetRTCP_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Params.Value, 0x4, &Value, 0x4);

	uFnSetRTCP->FunctionFlags |= ~0x400;

	UAkMusicDevice::StaticClass()->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);

	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.StopPlayingID
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlayingID                      (CPF_Parm)

void UAkMusicDevice::StopPlayingID(int32_t PlayingID)
{
	static UFunction* uFnStopPlayingID = nullptr;

	if (!uFnStopPlayingID)
	{
		uFnStopPlayingID = UFunction::FindFunction("Function AkAudio.AkMusicDevice.StopPlayingID");
	}

	UAkMusicDevice_execStopPlayingID_Params StopPlayingID_Params;
	memcpy_s(&StopPlayingID_Params.PlayingID, 0x4, &PlayingID, 0x4);

	uFnStopPlayingID->FunctionFlags |= ~0x400;

	UAkMusicDevice::StaticClass()->ProcessEvent(uFnStopPlayingID, &StopPlayingID_Params, nullptr);

	uFnStopPlayingID->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.Stop
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkMusicDevice::Stop(class UAkSoundCue* Sound)
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Stop");
	}

	UAkMusicDevice_execStop_Params Stop_Params;
	memcpy_s(&Stop_Params.Sound, 0x8, &Sound, 0x8);

	uFnStop->FunctionFlags |= ~0x400;

	UAkMusicDevice::StaticClass()->ProcessEvent(uFnStop, &Stop_Params, nullptr);

	uFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.Play
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

int32_t UAkMusicDevice::Play(class UAkSoundCue* Sound)
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Play");
	}

	UAkMusicDevice_execPlay_Params Play_Params;
	memcpy_s(&Play_Params.Sound, 0x8, &Sound, 0x8);

	uFnPlay->FunctionFlags |= ~0x400;

	UAkMusicDevice::StaticClass()->ProcessEvent(uFnPlay, &Play_Params, nullptr);

	uFnPlay->FunctionFlags |= 0x400;

	return Play_Params.ReturnValue;
};

// Function AkAudio.AkMusicDevice.EventTrackEnd
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlayingID                      (CPF_Parm)

void UAkMusicDevice::EventTrackEnd(int32_t PlayingID)
{
	static UFunction* uFnEventTrackEnd = nullptr;

	if (!uFnEventTrackEnd)
	{
		uFnEventTrackEnd = UFunction::FindFunction("Function AkAudio.AkMusicDevice.EventTrackEnd");
	}

	UAkMusicDevice_execEventTrackEnd_Params EventTrackEnd_Params;
	memcpy_s(&EventTrackEnd_Params.PlayingID, 0x4, &PlayingID, 0x4);

	this->ProcessEvent(uFnEventTrackEnd, &EventTrackEnd_Params, nullptr);
};

// Function AkAudio.AkMusicDevice.EventTrackStart
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        PlayingID                      (CPF_Parm)
// class FString                  FileMarker                     (CPF_Parm | CPF_NeedCtorLink)

void UAkMusicDevice::EventTrackStart(int32_t PlayingID, class FString FileMarker)
{
	static UFunction* uFnEventTrackStart = nullptr;

	if (!uFnEventTrackStart)
	{
		uFnEventTrackStart = UFunction::FindFunction("Function AkAudio.AkMusicDevice.EventTrackStart");
	}

	UAkMusicDevice_execEventTrackStart_Params EventTrackStart_Params;
	memcpy_s(&EventTrackStart_Params.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventTrackStart_Params.FileMarker, 0x10, &FileMarker, 0x10);

	this->ProcessEvent(uFnEventTrackStart, &EventTrackStart_Params, nullptr);
};

// Function AkAudio.AkParamGroup.SetSendToSlapbacks
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSend                          (CPF_Parm)

void UAkParamGroup::SetSendToSlapbacks(unsigned long bSend)
{
	static UFunction* uFnSetSendToSlapbacks = nullptr;

	if (!uFnSetSendToSlapbacks)
	{
		uFnSetSendToSlapbacks = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetSendToSlapbacks");
	}

	UAkParamGroup_execSetSendToSlapbacks_Params SetSendToSlapbacks_Params;
	SetSendToSlapbacks_Params.bSend = bSend;

	this->ProcessEvent(uFnSetSendToSlapbacks, &SetSendToSlapbacks_Params, nullptr);
};

// Function AkAudio.AkParamGroup.SetControllerId
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        InID                           (CPF_Parm)

void UAkParamGroup::SetControllerId(int32_t InID)
{
	static UFunction* uFnSetControllerId = nullptr;

	if (!uFnSetControllerId)
	{
		uFnSetControllerId = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetControllerId");
	}

	UAkParamGroup_execSetControllerId_Params SetControllerId_Params;
	memcpy_s(&SetControllerId_Params.InID, 0x4, &InID, 0x4);

	this->ProcessEvent(uFnSetControllerId, &SetControllerId_Params, nullptr);
};

// Function AkAudio.AkParamGroup.EnableObjectAttenuation
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkParamGroup::EnableObjectAttenuation()
{
	static UFunction* uFnEnableObjectAttenuation = nullptr;

	if (!uFnEnableObjectAttenuation)
	{
		uFnEnableObjectAttenuation = UFunction::FindFunction("Function AkAudio.AkParamGroup.EnableObjectAttenuation");
	}

	UAkParamGroup_execEnableObjectAttenuation_Params EnableObjectAttenuation_Params;

	this->ProcessEvent(uFnEnableObjectAttenuation, &EnableObjectAttenuation_Params, nullptr);
};

// Function AkAudio.AkParamGroup.DisableObjectAttenuation
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkParamGroup::DisableObjectAttenuation()
{
	static UFunction* uFnDisableObjectAttenuation = nullptr;

	if (!uFnDisableObjectAttenuation)
	{
		uFnDisableObjectAttenuation = UFunction::FindFunction("Function AkAudio.AkParamGroup.DisableObjectAttenuation");
	}

	UAkParamGroup_execDisableObjectAttenuation_Params DisableObjectAttenuation_Params;

	this->ProcessEvent(uFnDisableObjectAttenuation, &DisableObjectAttenuation_Params, nullptr);
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x400020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkParamGroup::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfo = nullptr;

	if (!uFnPrintDebugInfo)
	{
		uFnPrintDebugInfo = UFunction::FindFunction("Function AkAudio.AkParamGroup.PrintDebugInfo");
	}

	UAkParamGroup_execPrintDebugInfo_Params PrintDebugInfo_Params;
	memcpy_s(&PrintDebugInfo_Params.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(uFnPrintDebugInfo, &PrintDebugInfo_Params, nullptr);
};

// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkParamGroup::UpdateSoundSourceAttenuationScaling()
{
	static UFunction* uFnUpdateSoundSourceAttenuationScaling = nullptr;

	if (!uFnUpdateSoundSourceAttenuationScaling)
	{
		uFnUpdateSoundSourceAttenuationScaling = UFunction::FindFunction("Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling");
	}

	UAkParamGroup_execUpdateSoundSourceAttenuationScaling_Params UpdateSoundSourceAttenuationScaling_Params;

	uFnUpdateSoundSourceAttenuationScaling->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateSoundSourceAttenuationScaling, &UpdateSoundSourceAttenuationScaling_Params, nullptr);

	uFnUpdateSoundSourceAttenuationScaling->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkParamGroup::SetActorParameter(struct FName Key, class AActor* Value)
{
	static UFunction* uFnSetActorParameter = nullptr;

	if (!uFnSetActorParameter)
	{
		uFnSetActorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetActorParameter");
	}

	UAkParamGroup_execSetActorParameter_Params SetActorParameter_Params;
	memcpy_s(&SetActorParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetActorParameter_Params.Value, 0x8, &Value, 0x8);

	uFnSetActorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetActorParameter, &SetActorParameter_Params, nullptr);

	uFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkParamGroup::SetLinearColorParameter(struct FName Key, struct FLinearColor Value)
{
	static UFunction* uFnSetLinearColorParameter = nullptr;

	if (!uFnSetLinearColorParameter)
	{
		uFnSetLinearColorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetLinearColorParameter");
	}

	UAkParamGroup_execSetLinearColorParameter_Params SetLinearColorParameter_Params;
	memcpy_s(&SetLinearColorParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetLinearColorParameter_Params.Value, 0x10, &Value, 0x10);

	uFnSetLinearColorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLinearColorParameter, &SetLinearColorParameter_Params, nullptr);

	uFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkParamGroup::SetVectorParameter(struct FName Key, struct FVector Value)
{
	static UFunction* uFnSetVectorParameter = nullptr;

	if (!uFnSetVectorParameter)
	{
		uFnSetVectorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetVectorParameter");
	}

	UAkParamGroup_execSetVectorParameter_Params SetVectorParameter_Params;
	memcpy_s(&SetVectorParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetVectorParameter_Params.Value, 0xC, &Value, 0xC);

	uFnSetVectorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetVectorParameter, &SetVectorParameter_Params, nullptr);

	uFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetFloatParameter(struct FName Key, float Value)
{
	static UFunction* uFnSetFloatParameter = nullptr;

	if (!uFnSetFloatParameter)
	{
		uFnSetFloatParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetFloatParameter");
	}

	UAkParamGroup_execSetFloatParameter_Params SetFloatParameter_Params;
	memcpy_s(&SetFloatParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetFloatParameter_Params.Value, 0x4, &Value, 0x4);

	uFnSetFloatParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetFloatParameter, &SetFloatParameter_Params, nullptr);

	uFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetNameParameter(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetNameParameter = nullptr;

	if (!uFnSetNameParameter)
	{
		uFnSetNameParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetNameParameter");
	}

	UAkParamGroup_execSetNameParameter_Params SetNameParameter_Params;
	memcpy_s(&SetNameParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetNameParameter_Params.Value, 0x8, &Value, 0x8);

	uFnSetNameParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetNameParameter, &SetNameParameter_Params, nullptr);

	uFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           RTCPKeys                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<float>                  RTCPValues                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           SwitchKeys                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           SwitchValues                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkParamGroup::GetDebugData(TArray<struct FName>& RTCPKeys, TArray<float>& RTCPValues, TArray<struct FName>& SwitchKeys, TArray<struct FName>& SwitchValues)
{
	static UFunction* uFnGetDebugData = nullptr;

	if (!uFnGetDebugData)
	{
		uFnGetDebugData = UFunction::FindFunction("Function AkAudio.AkParamGroup.GetDebugData");
	}

	UAkParamGroup_execGetDebugData_Params GetDebugData_Params;
	memcpy_s(&GetDebugData_Params.RTCPKeys, 0x10, &RTCPKeys, 0x10);
	memcpy_s(&GetDebugData_Params.RTCPValues, 0x10, &RTCPValues, 0x10);
	memcpy_s(&GetDebugData_Params.SwitchKeys, 0x10, &SwitchKeys, 0x10);
	memcpy_s(&GetDebugData_Params.SwitchValues, 0x10, &SwitchValues, 0x10);

	uFnGetDebugData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetDebugData, &GetDebugData_Params, nullptr);

	uFnGetDebugData->FunctionFlags |= 0x400;

	memcpy_s(&RTCPKeys, 0x10, &GetDebugData_Params.RTCPKeys, 0x10);
	memcpy_s(&RTCPValues, 0x10, &GetDebugData_Params.RTCPValues, 0x10);
	memcpy_s(&SwitchKeys, 0x10, &GetDebugData_Params.SwitchKeys, 0x10);
	memcpy_s(&SwitchValues, 0x10, &GetDebugData_Params.SwitchValues, 0x10);
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkParamGroup::StopSound(class UAkSoundCue* Sound)
{
	static UFunction* uFnStopSound = nullptr;

	if (!uFnStopSound)
	{
		uFnStopSound = UFunction::FindFunction("Function AkAudio.AkParamGroup.StopSound");
	}

	UAkParamGroup_execStopSound_Params StopSound_Params;
	memcpy_s(&StopSound_Params.Sound, 0x8, &Sound, 0x8);

	uFnStopSound->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopSound, &StopSound_Params, nullptr);

	uFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkParamGroup::PlaySound(class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnPlaySound = nullptr;

	if (!uFnPlaySound)
	{
		uFnPlaySound = UFunction::FindFunction("Function AkAudio.AkParamGroup.PlaySound");
	}

	UAkParamGroup_execPlaySound_Params PlaySound_Params;
	memcpy_s(&PlaySound_Params.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&PlaySound_Params.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&PlaySound_Params.Rotation, 0xC, &Rotation, 0xC);

	uFnPlaySound->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlaySound, &PlaySound_Params, nullptr);

	uFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Params.ReturnValue;
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetSwitch(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetSwitch = nullptr;

	if (!uFnSetSwitch)
	{
		uFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetSwitch");
	}

	UAkParamGroup_execSetSwitch_Params SetSwitch_Params;
	memcpy_s(&SetSwitch_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetSwitch_Params.Value, 0x8, &Value, 0x8);

	uFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSwitch, &SetSwitch_Params, nullptr);

	uFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetRTCP");
	}

	UAkParamGroup_execSetRTCP_Params SetRTCP_Params;
	memcpy_s(&SetRTCP_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Params.Value, 0x4, &Value, 0x4);

	uFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);

	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetActorParameter(struct FName Key, class AActor* Value)
{
	static UFunction* uFnSetActorParameter = nullptr;

	if (!uFnSetActorParameter)
	{
		uFnSetActorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetActorParameter");
	}

	UAkPlaySoundComponent_execSetActorParameter_Params SetActorParameter_Params;
	memcpy_s(&SetActorParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetActorParameter_Params.Value, 0x8, &Value, 0x8);

	uFnSetActorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetActorParameter, &SetActorParameter_Params, nullptr);

	uFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetLinearColorParameter(struct FName Key, struct FLinearColor Value)
{
	static UFunction* uFnSetLinearColorParameter = nullptr;

	if (!uFnSetLinearColorParameter)
	{
		uFnSetLinearColorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter");
	}

	UAkPlaySoundComponent_execSetLinearColorParameter_Params SetLinearColorParameter_Params;
	memcpy_s(&SetLinearColorParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetLinearColorParameter_Params.Value, 0x10, &Value, 0x10);

	uFnSetLinearColorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLinearColorParameter, &SetLinearColorParameter_Params, nullptr);

	uFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetVectorParameter(struct FName Key, struct FVector Value)
{
	static UFunction* uFnSetVectorParameter = nullptr;

	if (!uFnSetVectorParameter)
	{
		uFnSetVectorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetVectorParameter");
	}

	UAkPlaySoundComponent_execSetVectorParameter_Params SetVectorParameter_Params;
	memcpy_s(&SetVectorParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetVectorParameter_Params.Value, 0xC, &Value, 0xC);

	uFnSetVectorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetVectorParameter, &SetVectorParameter_Params, nullptr);

	uFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetFloatParameter(struct FName Key, float Value)
{
	static UFunction* uFnSetFloatParameter = nullptr;

	if (!uFnSetFloatParameter)
	{
		uFnSetFloatParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetFloatParameter");
	}

	UAkPlaySoundComponent_execSetFloatParameter_Params SetFloatParameter_Params;
	memcpy_s(&SetFloatParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetFloatParameter_Params.Value, 0x4, &Value, 0x4);

	uFnSetFloatParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetFloatParameter, &SetFloatParameter_Params, nullptr);

	uFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetNameParameter(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetNameParameter = nullptr;

	if (!uFnSetNameParameter)
	{
		uFnSetNameParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetNameParameter");
	}

	UAkPlaySoundComponent_execSetNameParameter_Params SetNameParameter_Params;
	memcpy_s(&SetNameParameter_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetNameParameter_Params.Value, 0x8, &Value, 0x8);

	uFnSetNameParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetNameParameter, &SetNameParameter_Params, nullptr);

	uFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetRTCP(struct FName Key, float Value)
{
	static UFunction* uFnSetRTCP = nullptr;

	if (!uFnSetRTCP)
	{
		uFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetRTCP");
	}

	UAkPlaySoundComponent_execSetRTCP_Params SetRTCP_Params;
	memcpy_s(&SetRTCP_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Params.Value, 0x4, &Value, 0x4);

	uFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRTCP, &SetRTCP_Params, nullptr);

	uFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetSwitch(struct FName Key, struct FName Value)
{
	static UFunction* uFnSetSwitch = nullptr;

	if (!uFnSetSwitch)
	{
		uFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetSwitch");
	}

	UAkPlaySoundComponent_execSetSwitch_Params SetSwitch_Params;
	memcpy_s(&SetSwitch_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetSwitch_Params.Value, 0x8, &Value, 0x8);

	uFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSwitch, &SetSwitch_Params, nullptr);

	uFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UAkPlaySoundComponent::IsPlaying()
{
	static UFunction* uFnIsPlaying = nullptr;

	if (!uFnIsPlaying)
	{
		uFnIsPlaying = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.IsPlaying");
	}

	UAkPlaySoundComponent_execIsPlaying_Params IsPlaying_Params;

	uFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlaying, &IsPlaying_Params, nullptr);

	uFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Params.ReturnValue;
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkPlaySoundComponent::Stop()
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.Stop");
	}

	UAkPlaySoundComponent_execStop_Params Stop_Params;

	uFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStop, &Stop_Params, nullptr);

	uFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkPlaySoundComponent::Play()
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.Play");
	}

	UAkPlaySoundComponent_execPlay_Params Play_Params;

	uFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlay, &Play_Params, nullptr);

	uFnPlay->FunctionFlags |= 0x400;
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x400020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkRevPhysicsSimulation::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfo = nullptr;

	if (!uFnPrintDebugInfo)
	{
		uFnPrintDebugInfo = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo");
	}

	UAkRevPhysicsSimulation_execPrintDebugInfo_Params PrintDebugInfo_Params;
	memcpy_s(&PrintDebugInfo_Params.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(uFnPrintDebugInfo, &PrintDebugInfo_Params, nullptr);
};

// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Gear                           (CPF_Parm)
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UAkRevPhysicsSimulation::InterpGearRatio(int32_t Gear, struct FAkRevSimUpdateParams& SimUpdate)
{
	static UFunction* uFnInterpGearRatio = nullptr;

	if (!uFnInterpGearRatio)
	{
		uFnInterpGearRatio = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio");
	}

	UAkRevPhysicsSimulation_execInterpGearRatio_Params InterpGearRatio_Params;
	memcpy_s(&InterpGearRatio_Params.Gear, 0x4, &Gear, 0x4);
	memcpy_s(&InterpGearRatio_Params.SimUpdate, 0x48, &SimUpdate, 0x48);

	uFnInterpGearRatio->FunctionFlags |= ~0x400;

	UAkRevPhysicsSimulation::StaticClass()->ProcessEvent(uFnInterpGearRatio, &InterpGearRatio_Params, nullptr);

	uFnInterpGearRatio->FunctionFlags |= 0x400;

	memcpy_s(&SimUpdate, 0x48, &InterpGearRatio_Params.SimUpdate, 0x48);

	return InterpGearRatio_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UAkRevPhysicsSimulation::GetGearRatio(struct FAkRevSimUpdateParams& SimUpdate)
{
	static UFunction* uFnGetGearRatio = nullptr;

	if (!uFnGetGearRatio)
	{
		uFnGetGearRatio = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.GetGearRatio");
	}

	UAkRevPhysicsSimulation_execGetGearRatio_Params GetGearRatio_Params;
	memcpy_s(&GetGearRatio_Params.SimUpdate, 0x48, &SimUpdate, 0x48);

	uFnGetGearRatio->FunctionFlags |= ~0x400;

	UAkRevPhysicsSimulation::StaticClass()->ProcessEvent(uFnGetGearRatio, &GetGearRatio_Params, nullptr);

	uFnGetGearRatio->FunctionFlags |= 0x400;

	memcpy_s(&SimUpdate, 0x48, &GetGearRatio_Params.SimUpdate, 0x48);

	return GetGearRatio_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GearRatio                      (CPF_Parm)
// float                          RPM                            (CPF_Parm)

float UAkRevPhysicsSimulation::CalcVelocity(float GearRatio, float RPM)
{
	static UFunction* uFnCalcVelocity = nullptr;

	if (!uFnCalcVelocity)
	{
		uFnCalcVelocity = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.CalcVelocity");
	}

	UAkRevPhysicsSimulation_execCalcVelocity_Params CalcVelocity_Params;
	memcpy_s(&CalcVelocity_Params.GearRatio, 0x4, &GearRatio, 0x4);
	memcpy_s(&CalcVelocity_Params.RPM, 0x4, &RPM, 0x4);

	uFnCalcVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCalcVelocity, &CalcVelocity_Params, nullptr);

	uFnCalcVelocity->FunctionFlags |= 0x400;

	return CalcVelocity_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GearRatio                      (CPF_Parm)
// float                          Velocity                       (CPF_Parm)

float UAkRevPhysicsSimulation::CalcRPM(float GearRatio, float Velocity)
{
	static UFunction* uFnCalcRPM = nullptr;

	if (!uFnCalcRPM)
	{
		uFnCalcRPM = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.CalcRPM");
	}

	UAkRevPhysicsSimulation_execCalcRPM_Params CalcRPM_Params;
	memcpy_s(&CalcRPM_Params.GearRatio, 0x4, &GearRatio, 0x4);
	memcpy_s(&CalcRPM_Params.Velocity, 0x4, &Velocity, 0x4);

	uFnCalcRPM->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCalcRPM, &CalcRPM_Params, nullptr);

	uFnCalcRPM->FunctionFlags |= 0x400;

	return CalcRPM_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAkRevSimFrame          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// struct FAkRevSimUpdateParams   Params                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FAkRevSimFrame UAkRevPhysicsSimulation::Step(float DeltaTime, struct FAkRevSimUpdateParams& Params)
{
	static UFunction* uFnStep = nullptr;

	if (!uFnStep)
	{
		uFnStep = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.Step");
	}

	UAkRevPhysicsSimulation_execStep_Params Step_Params;
	memcpy_s(&Step_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&Step_Params.Params, 0x48, &Params, 0x48);

	uFnStep->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStep, &Step_Params, nullptr);

	uFnStep->FunctionFlags |= 0x400;

	memcpy_s(&Params, 0x48, &Step_Params.Params, 0x48);

	return Step_Params.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkRevPhysicsSimulation* Simulation                     (CPF_Parm)

void UAkRevPhysicsSimulation::EventGearChange(class UAkRevPhysicsSimulation* Simulation)
{
	static UFunction* uFnEventGearChange = nullptr;

	if (!uFnEventGearChange)
	{
		uFnEventGearChange = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.EventGearChange");
	}

	UAkRevPhysicsSimulation_execEventGearChange_Params EventGearChange_Params;
	memcpy_s(&EventGearChange_Params.Simulation, 0x8, &Simulation, 0x8);

	this->ProcessEvent(uFnEventGearChange, &EventGearChange_Params, nullptr);
};

// Function AkAudio.AkSoundBanksInfo.Parse
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAkSoundBanksInfo*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)

class UAkSoundBanksInfo* UAkSoundBanksInfo::Parse(class FString Text)
{
	static UFunction* uFnParse = nullptr;

	if (!uFnParse)
	{
		uFnParse = UFunction::FindFunction("Function AkAudio.AkSoundBanksInfo.Parse");
	}

	UAkSoundBanksInfo_execParse_Params Parse_Params;
	memcpy_s(&Parse_Params.Text, 0x10, &Text, 0x10);

	uFnParse->FunctionFlags |= ~0x400;

	UAkSoundBanksInfo::StaticClass()->ProcessEvent(uFnParse, &Parse_Params, nullptr);

	uFnParse->FunctionFlags |= 0x400;

	return Parse_Params.ReturnValue;
};

// Function AkAudio.AkSoundBanksInfo.LoadForNativePlatform
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAkSoundBanksInfo*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkSoundBanksInfo* UAkSoundBanksInfo::LoadForNativePlatform()
{
	static UFunction* uFnLoadForNativePlatform = nullptr;

	if (!uFnLoadForNativePlatform)
	{
		uFnLoadForNativePlatform = UFunction::FindFunction("Function AkAudio.AkSoundBanksInfo.LoadForNativePlatform");
	}

	UAkSoundBanksInfo_execLoadForNativePlatform_Params LoadForNativePlatform_Params;

	uFnLoadForNativePlatform->FunctionFlags |= ~0x400;

	UAkSoundBanksInfo::StaticClass()->ProcessEvent(uFnLoadForNativePlatform, &LoadForNativePlatform_Params, nullptr);

	uFnLoadForNativePlatform->FunctionFlags |= 0x400;

	return LoadForNativePlatform_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
// [0x04020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bValue                         (CPF_Parm)

void UAkSoundSource::eventSetSubtitlesEnabled(unsigned long bValue)
{
	static UFunction* uFnSetSubtitlesEnabled = nullptr;

	if (!uFnSetSubtitlesEnabled)
	{
		uFnSetSubtitlesEnabled = UFunction::FindFunction("Function AkAudio.AkSoundSource.SetSubtitlesEnabled");
	}

	UAkSoundSource_eventSetSubtitlesEnabled_Params SetSubtitlesEnabled_Params;
	SetSubtitlesEnabled_Params.bValue = bValue;

	this->ProcessEvent(uFnSetSubtitlesEnabled, &SetSubtitlesEnabled_Params, nullptr);
};

// Function AkAudio.AkSoundSource.SetAttenuationScaling
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// uint8_t                        AttenuationType                (CPF_Parm)

void UAkSoundSource::SetAttenuationScaling(uint8_t AttenuationType)
{
	static UFunction* uFnSetAttenuationScaling = nullptr;

	if (!uFnSetAttenuationScaling)
	{
		uFnSetAttenuationScaling = UFunction::FindFunction("Function AkAudio.AkSoundSource.SetAttenuationScaling");
	}

	UAkSoundSource_execSetAttenuationScaling_Params SetAttenuationScaling_Params;
	memcpy_s(&SetAttenuationScaling_Params.AttenuationType, 0x1, &AttenuationType, 0x1);

	uFnSetAttenuationScaling->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetAttenuationScaling, &SetAttenuationScaling_Params, nullptr);

	uFnSetAttenuationScaling->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.ForceUpdatePosition
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkSoundSource::ForceUpdatePosition()
{
	static UFunction* uFnForceUpdatePosition = nullptr;

	if (!uFnForceUpdatePosition)
	{
		uFnForceUpdatePosition = UFunction::FindFunction("Function AkAudio.AkSoundSource.ForceUpdatePosition");
	}

	UAkSoundSource_execForceUpdatePosition_Params ForceUpdatePosition_Params;

	uFnForceUpdatePosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnForceUpdatePosition, &ForceUpdatePosition_Params, nullptr);

	uFnForceUpdatePosition->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   BusName                        (CPF_Parm)
// uint8_t                        BusType                        (CPF_Parm)

void UAkSoundSource::RegisterReflectionEmitter(struct FName BusName, uint8_t BusType)
{
	static UFunction* uFnRegisterReflectionEmitter = nullptr;

	if (!uFnRegisterReflectionEmitter)
	{
		uFnRegisterReflectionEmitter = UFunction::FindFunction("Function AkAudio.AkSoundSource.RegisterReflectionEmitter");
	}

	UAkSoundSource_execRegisterReflectionEmitter_Params RegisterReflectionEmitter_Params;
	memcpy_s(&RegisterReflectionEmitter_Params.BusName, 0x8, &BusName, 0x8);
	memcpy_s(&RegisterReflectionEmitter_Params.BusType, 0x1, &BusType, 0x1);

	uFnRegisterReflectionEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterReflectionEmitter, &RegisterReflectionEmitter_Params, nullptr);

	uFnRegisterReflectionEmitter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UAkSoundSource::IsPlayingAny()
{
	static UFunction* uFnIsPlayingAny = nullptr;

	if (!uFnIsPlayingAny)
	{
		uFnIsPlayingAny = UFunction::FindFunction("Function AkAudio.AkSoundSource.IsPlayingAny");
	}

	UAkSoundSource_execIsPlayingAny_Params IsPlayingAny_Params;

	uFnIsPlayingAny->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlayingAny, &IsPlayingAny_Params, nullptr);

	uFnIsPlayingAny->FunctionFlags |= 0x400;

	return IsPlayingAny_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

bool UAkSoundSource::IsPlaying(class UAkSoundCue* Sound)
{
	static UFunction* uFnIsPlaying = nullptr;

	if (!uFnIsPlaying)
	{
		uFnIsPlaying = UFunction::FindFunction("Function AkAudio.AkSoundSource.IsPlaying");
	}

	UAkSoundSource_execIsPlaying_Params IsPlaying_Params;
	memcpy_s(&IsPlaying_Params.Sound, 0x8, &Sound, 0x8);

	uFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlaying, &IsPlaying_Params, nullptr);

	uFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.Seek
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// float                          SeekSeconds                    (CPF_Parm)

void UAkSoundSource::Seek(class UAkSoundCue* Sound, float SeekSeconds)
{
	static UFunction* uFnSeek = nullptr;

	if (!uFnSeek)
	{
		uFnSeek = UFunction::FindFunction("Function AkAudio.AkSoundSource.Seek");
	}

	UAkSoundSource_execSeek_Params Seek_Params;
	memcpy_s(&Seek_Params.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&Seek_Params.SeekSeconds, 0x4, &SeekSeconds, 0x4);

	uFnSeek->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSeek, &Seek_Params, nullptr);

	uFnSeek->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkSoundSource::StopAll()
{
	static UFunction* uFnStopAll = nullptr;

	if (!uFnStopAll)
	{
		uFnStopAll = UFunction::FindFunction("Function AkAudio.AkSoundSource.StopAll");
	}

	UAkSoundSource_execStopAll_Params StopAll_Params;

	uFnStopAll->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopAll, &StopAll_Params, nullptr);

	uFnStopAll->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Stop(class UAkSoundCue* Sound)
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkSoundSource.Stop");
	}

	UAkSoundSource_execStop_Params Stop_Params;
	memcpy_s(&Stop_Params.Sound, 0x8, &Sound, 0x8);

	uFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStop, &Stop_Params, nullptr);

	uFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

int32_t UAkSoundSource::Play(class UAkSoundCue* Sound)
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function AkAudio.AkSoundSource.Play");
	}

	UAkSoundSource_execPlay_Params Play_Params;
	memcpy_s(&Play_Params.Sound, 0x8, &Sound, 0x8);

	uFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlay, &Play_Params, nullptr);

	uFnPlay->FunctionFlags |= 0x400;

	return Play_Params.ReturnValue;
};

// Function AkAudio.AkSoundSource.EventDuration
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)
// float                          DurationMS                     (CPF_Parm)

void UAkSoundSource::EventDuration(class UAkSoundSource* Source, int32_t PlayingID, float DurationMS)
{
	static UFunction* uFnEventDuration = nullptr;

	if (!uFnEventDuration)
	{
		uFnEventDuration = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventDuration");
	}

	UAkSoundSource_execEventDuration_Params EventDuration_Params;
	memcpy_s(&EventDuration_Params.Source, 0x8, &Source, 0x8);
	memcpy_s(&EventDuration_Params.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventDuration_Params.DurationMS, 0x4, &DurationMS, 0x4);

	this->ProcessEvent(uFnEventDuration, &EventDuration_Params, nullptr);
};

// Function AkAudio.AkSoundSource.EventMarker
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)
// class FString                  Marker                         (CPF_Parm | CPF_NeedCtorLink)

void UAkSoundSource::EventMarker(class UAkSoundSource* Source, int32_t PlayingID, class FString Marker)
{
	static UFunction* uFnEventMarker = nullptr;

	if (!uFnEventMarker)
	{
		uFnEventMarker = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventMarker");
	}

	UAkSoundSource_execEventMarker_Params EventMarker_Params;
	memcpy_s(&EventMarker_Params.Source, 0x8, &Source, 0x8);
	memcpy_s(&EventMarker_Params.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventMarker_Params.Marker, 0x10, &Marker, 0x10);

	this->ProcessEvent(uFnEventMarker, &EventMarker_Params, nullptr);
};

// Function AkAudio.AkSoundSource.EventFinished
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)

void UAkSoundSource::EventFinished(class UAkSoundSource* Source, int32_t PlayingID)
{
	static UFunction* uFnEventFinished = nullptr;

	if (!uFnEventFinished)
	{
		uFnEventFinished = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventFinished");
	}

	UAkSoundSource_execEventFinished_Params EventFinished_Params;
	memcpy_s(&EventFinished_Params.Source, 0x8, &Source, 0x8);
	memcpy_s(&EventFinished_Params.PlayingID, 0x4, &PlayingID, 0x4);

	this->ProcessEvent(uFnEventFinished, &EventFinished_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
// [0x00040803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  CueName                        (CPF_Parm | CPF_NeedCtorLink)

void USeqAct_AkPlayMusicWithCues::eventTriggerEvents(class FString CueName)
{
	static UFunction* uFnTriggerEvents = nullptr;

	if (!uFnTriggerEvents)
	{
		uFnTriggerEvents = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents");
	}

	USeqAct_AkPlayMusicWithCues_eventTriggerEvents_Params TriggerEvents_Params;
	memcpy_s(&TriggerEvents_Params.CueName, 0x10, &CueName, 0x10);

	this->ProcessEvent(uFnTriggerEvents, &TriggerEvents_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  A                              (CPF_Parm)
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSoundFor(class AActor* A, unsigned long bPlay)
{
	static UFunction* uFnToggleSoundFor = nullptr;

	if (!uFnToggleSoundFor)
	{
		uFnToggleSoundFor = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor");
	}

	USeqAct_AkPlaySound_execToggleSoundFor_Params ToggleSoundFor_Params;
	memcpy_s(&ToggleSoundFor_Params.A, 0x8, &A, 0x8);
	ToggleSoundFor_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSoundFor, &ToggleSoundFor_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSound(unsigned long bPlay)
{
	static UFunction* uFnToggleSound = nullptr;

	if (!uFnToggleSound)
	{
		uFnToggleSound = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.ToggleSound");
	}

	USeqAct_AkPlaySound_execToggleSound_Params ToggleSound_Params;
	ToggleSound_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSound, &ToggleSound_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void USeqAct_AkPlaySound::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.Activated");
	}

	USeqAct_AkPlaySound_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
// [0x00040C01] (FUNC_Final | FUNC_Native | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int32_t                        PlayingID                      (CPF_Parm)

void USeqAct_AkPostEvent::eventHandleSoundCueFinished(class UAkSoundSource* Source, int32_t PlayingID)
{
	static UFunction* uFnHandleSoundCueFinished = nullptr;

	if (!uFnHandleSoundCueFinished)
	{
		uFnHandleSoundCueFinished = UFunction::FindFunction("Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished");
	}

	USeqAct_AkPostEvent_eventHandleSoundCueFinished_Params HandleSoundCueFinished_Params;
	memcpy_s(&HandleSoundCueFinished_Params.Source, 0x8, &Source, 0x8);
	memcpy_s(&HandleSoundCueFinished_Params.PlayingID, 0x4, &PlayingID, 0x4);

	uFnHandleSoundCueFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandleSoundCueFinished, &HandleSoundCueFinished_Params, nullptr);

	uFnHandleSoundCueFinished->FunctionFlags |= 0x400;
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AAkAmbientSoundActor::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkAmbientSoundActor.OnToggle");
	}

	AAkAmbientSoundActor_execOnToggle_Params OnToggle_Params;
	memcpy_s(&OnToggle_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  A                              (CPF_Parm)
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySoundAndSeek::ToggleSoundFor(class AActor* A, unsigned long bPlay)
{
	static UFunction* uFnToggleSoundFor = nullptr;

	if (!uFnToggleSoundFor)
	{
		uFnToggleSoundFor = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor");
	}

	USeqAct_AkPlaySoundAndSeek_execToggleSoundFor_Params ToggleSoundFor_Params;
	memcpy_s(&ToggleSoundFor_Params.A, 0x8, &A, 0x8);
	ToggleSoundFor_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSoundFor, &ToggleSoundFor_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySoundAndSeek::ToggleSound(unsigned long bPlay)
{
	static UFunction* uFnToggleSound = nullptr;

	if (!uFnToggleSound)
	{
		uFnToggleSound = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound");
	}

	USeqAct_AkPlaySoundAndSeek_execToggleSound_Params ToggleSound_Params;
	ToggleSound_Params.bPlay = bPlay;

	this->ProcessEvent(uFnToggleSound, &ToggleSound_Params, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void USeqAct_AkPlaySoundAndSeek::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated");
	}

	USeqAct_AkPlaySoundAndSeek_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
