#pragma once
#include "../Component.hpp"
#include "../Includes.hpp"
#include "Main.hpp"
#include <algorithm>

// THIS COMPONENT IS LARGELY DEPENDENT ON YOUR GAME
// Automatically stores active class instances that can be retrieved at any time.
class InstancesComponent : public Component
{
public:
	InstancesComponent();
	~InstancesComponent() override;

public:
	void OnCreate() override;
	void OnDestroy() override;

public:
	std::map<std::string, class UClass*> StaticClasses;
	std::map<std::string, class UFunction*> StaticFunctions;
	std::vector<class UObject*> CreatedInstances;

public: // Helper functions for class instance grabbing/manipulation.
	// All GetInstanceOf related functions loop through the entire GObject TArray, which can be resource heavy if you're using them everywhere.
	// So rely on hooking functions and storing classes here instead, only use GetInstanceOf functions them when needed.

	// Get the default constructor of a class type. Example: UGameData_TA* gameData = GetDefaultInstanceOf<UGameData_TA>();

	template<typename T> T* GetDefaultInstanceOf()
	{
		if (std::is_base_of<UObject, T>::value)
		{
			UClass* staticClass = T::StaticClass();

			if (staticClass && UObject::GObjObjects())
			{
				int32_t numObjects = UObject::GObjObjects()->Num();
				for (int32_t i = numObjects - 1; i >= 0; i--)
				{
					if (i >= numObjects)
						continue;

					UObject* uObject = UObject::GObjObjects()->At(i);

					if (uObject && uObject->IsA(staticClass))
					{
						if (uObject->GetFullName().find("Default__") != std::string::npos)
						{
							return static_cast<T*>(uObject);
						}
					}
				}
			}
		}

		return nullptr;
	}

	// Get the most current/active instance of a class. Example: UEngine* engine = GetInstanceOf<UEngine>();
	template<typename T> T* xorbita()
	{
		if (std::is_base_of<UObject, T>::value)
		{
			UClass* staticClass = T::StaticClass();

			if (staticClass && UObject::GObjObjects())
			{
				int32_t numObjects = UObject::GObjObjects()->Num();
				for (int32_t i = numObjects - 1; i >= 0; i--)
				{
					if (i >= numObjects)
						continue;

					UObject* uObject = UObject::GObjObjects()->At(i);

					if (uObject && uObject->IsA(staticClass))
					{
						if (uObject->GetFullName().find("Default__") == std::string::npos)
						{
							return static_cast<T*>(uObject);
						}
					}
				}
			}
		}

		return nullptr;
	}

	// Get all active instances of a class type. Example: std::vector<APawn*> pawns = GetAllInstancesOf<APawn>();
	template<typename T> std::vector<T*> GetAllInstancesOf()
	{
		std::vector<T*> objectInstances;

		if (std::is_base_of<UObject, T>::value)
		{
			UClass* staticClass = T::StaticClass();

			if (staticClass)
			{
				for (UObject* uObject : *UObject::GObjObjects())
				{
					if (uObject && uObject->IsA(staticClass))
					{
						if (uObject->GetFullName().find("Default__") == std::string::npos)
						{
							objectInstances.push_back(static_cast<T*>(uObject));
						}
					}
				}
			}
		}

		return objectInstances;
	}

	// Get all default instances of a class type.
	template<typename T> std::vector<T*> GetAllDefaultInstancesOf()
	{
		std::vector<T*> objectInstances;

		if (std::is_base_of<UObject, T>::value)
		{
			UClass* staticClass = T::StaticClass();

			if (staticClass)
			{
				for (UObject* uObject : *UObject::GObjObjects())
				{
					if (uObject && uObject->IsA(staticClass))
					{
						if (uObject->GetFullName().find("Default__") != std::string::npos)
						{
							objectInstances.push_back(static_cast<T*>(uObject));
						}
					}
				}
			}
		}

		return objectInstances;
	}

	// Get an object instance by it's name and class type. Example: UTexture2D* texture = FindObject<UTexture2D>("WhiteSquare");
	template<typename T> T* FindObject(const std::string& objectName)
	{
		if (std::is_base_of<UObject, T>::value)
		{
			UClass* staticClass = T::StaticClass();

			if (staticClass)
			{
				for (int32_t i = (UObject::GObjObjects()->Num() - 5); i > 0; i--)
				{
					UObject* uObject = UObject::GObjObjects()->At(i);

					if (dynamic_cast<T*>(uObject) && uObject && uObject->IsA(staticClass))
					{
						std::string objectFullName = uObject->GetFullName();

						if (objectFullName == objectName || objectFullName.find(objectName) != std::string::npos)
						{
							return static_cast<T*>(uObject);
						}
					}
				}
			}
		}

		return nullptr;
	}

	// Get all object instances by it's name and class type. Example: std::vector<UTexture2D*> textures = FindAllObjects<UTexture2D>("Noise");
	template<typename T> std::vector<T*> FindAllObjects(const std::string& objectName)
	{
		std::vector<T*> objectInstances;

		if (std::is_base_of<UObject, T>::value)
		{
			UClass* staticClass = T::StaticClass();

			if (staticClass)
			{
				for (int32_t i = (UObject::GObjObjects()->Num() - 5); i > 0; i--)
				{
					UObject* uObject = UObject::GObjObjects()->At(i);

					if (uObject && uObject->IsA(staticClass))
					{
						std::string objectFullName = uObject->GetFullName();

						if (objectFullName == objectName || objectFullName.find(objectName) != std::string::npos)
						{
							objectInstances.push_back(static_cast<T*>(uObject));
						}
					}
				}
			}
		}

		return objectInstances;
	}


	class UClass* FindStaticClass(const std::string& className);

	class UFunction* FindStaticFunction(const std::string& functionName);

	// Creates a new transient instance of a class which then adds it to globals.
	// YOU are required to make sure these objects eventually get eaten up by the garbage collector in some shape or form.
	// Example: UObject* newObject = CreateInstance<UObject>();
	template<typename T> T* CreateInstance()
	{
		T* returnObject = nullptr;

		if (std::is_base_of<UObject, T>::value)
		{
			T* defaultObject = GetDefaultInstanceOf<T>();
			UClass* staticClass = T::StaticClass();

			if (defaultObject && staticClass)
			{
				returnObject = static_cast<T*>(defaultObject->DuplicateObject(defaultObject, defaultObject->Outer, staticClass));
			}

			// Making sure newly created object doesn't get randomly destoyed by the garbage collector when we don't want it do.
			/*if (returnObject)
			{
				MarkInvincible(returnObject);
				CreatedInstances.push_back(returnObject);
			}*/
		}

		return returnObject;
	}

	// Set an object's flags to prevent it from being destoryed.
	void MarkInvincible(class UObject* object);

	// Set object as a temporary object and marks it for the garbage collector to destroy.
	void MarkForDestory(class UObject* object);

private:
	class UCanvas* I_UCanvas;
	class AHUD* I_AHUD;
	class UGameViewportClient* I_UGameViewportClient;
	class APlayerController* I_APlayerController;

public: // Use these functions to access these specific class instances, they will be set automatically; always remember to null check!
	class UEngine* IUEngine();
	class UAudioDevice* IUAudioDevice();
	class AWorldInfo* IAWorldInfo();
	class UCanvas* IUCanvas();
	class AHUD* IAHUD();
	class UGameViewportClient* IUGameViewportClient();
	class ULocalPlayer* IULocalPlayer();
	class APlayerController* IAPlayerController();

public: // These should only be used by function hooks, do not manually call these.
	void SetCanvas(class UCanvas* canvas);
	void SetHUD(class AHUD* hud);
	void SetGameViewportClient(class UGameViewportClient* viewportClient);
	void SetPlayerController(class APlayerController* playerController);
	void MapObjects(); // Maps all static objects to "StaticClasses" and "StaticFunctions".
	void Initialize(); // Initialize classes that can't be grabbed from function hooks.
};

extern class InstancesComponent Instances;
