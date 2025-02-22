#include "Core.hpp"
#include "../Includes.hpp"

CoreComponent::CoreComponent() : Component("Core", "Initializes globals, components, and modules.") { OnCreate(); }

CoreComponent::~CoreComponent() { OnDestroy(); }

void CoreComponent::OnCreate()
{
	MainThread = nullptr;
}

void CoreComponent::OnDestroy() {
	DestroyThread();
}

void CoreComponent::InitializeThread()
{
	MainThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(InitializeGlobals), nullptr, 0, nullptr);
}

void CoreComponent::DestroyThread()
{
	CloseHandle(MainThread);
}

uintptr_t CoreComponent::GetGObjects() {
	// pattern scan can go here
	return NULL;
}

uintptr_t CoreComponent::GetGNames() {
	// pattern scan can go here
	return NULL;
}

void CoreComponent::InitializeGlobals(HMODULE hModule)
{
	Console.Initialize(std::filesystem::current_path(), "Template.log");

	//GObjects = reinterpret_cast<TArray<UObject*>*>(GetGObjects());  for pattern scanning
	//GNames = reinterpret_cast<TArray<FNameEntry*>*>(GetGNames());  for pattern scanning
	uintptr_t BaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
	GObjects = reinterpret_cast<TArray<UObject*>*>(BaseAddress + 0x243EF58);
	GNames = reinterpret_cast<TArray<FNameEntry*>*>(BaseAddress + 0x243EF10);

	if (AreGlobalsValid())
	{
		Console.Notify("[Core Module] Entry Point " + Format::ToHex(reinterpret_cast<void*>(GetModuleHandle(NULL))));
		Console.Notify("[Core Module] Global Objects: " + Format::ToHex(GObjects));
		Console.Notify("[Core Module] Global Names: " + Format::ToHex(GNames));
		Console.Write("[Core Module] Initialized!");

		void** UnrealVTable = reinterpret_cast<void**>(UObject::StaticClass()->VfTableObject.Dummy);
		EventsComponent::AttachDetour(reinterpret_cast<ProcessEventType>(UnrealVTable[67]));

		Instances.Initialize();
		Events.Initialize();
		GUI.Initialize();
		Main.Initialize();
	}
	else
	{
		Console.Error("[Core Module] GObject and GNames are not valid, wrong address detected!");
	}
}

bool CoreComponent::AreGlobalsValid()
{
	return (AreGObjectsValid() && AreGNamesValid());
}

bool CoreComponent::AreGObjectsValid()
{
	if (GObjects
		&& UObject::GObjObjects()->Num() > 0
		&& UObject::GObjObjects()->Max() > UObject::GObjObjects()->Num())
	{
		return true;
	}

	return false;
}

bool CoreComponent::AreGNamesValid()
{
	if (GNames
		&& FName::Names()->Num() > 0
		&& FName::Names()->Max() > FName::Names()->Num())
	{
		return true;
	}

	return false;
}

class CoreComponent Core {};