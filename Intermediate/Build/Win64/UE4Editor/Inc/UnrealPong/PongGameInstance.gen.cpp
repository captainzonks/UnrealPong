// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Core/PongGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameInstance() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongGameInstance_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMainMenu_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongGameHUD_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongInGameMenu_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UNREALPONG_API UScriptStruct* Z_Construct_UScriptStruct_FPongServerData();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPongGameInstance::execInGameLoadMenuWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InGameLoadMenuWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongGameInstance::execLoadGameHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGameHUDWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongGameInstance::execLoadMainMenuWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMainMenuWidget();
		P_NATIVE_END;
	}
	void UPongGameInstance::StaticRegisterNativesUPongGameInstance()
	{
		UClass* Class = UPongGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InGameLoadMenuWidget", &UPongGameInstance::execInGameLoadMenuWidget },
			{ "LoadGameHUDWidget", &UPongGameInstance::execLoadGameHUDWidget },
			{ "LoadMainMenuWidget", &UPongGameInstance::execLoadMainMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PongGameInstance|UI" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongGameInstance, nullptr, "InGameLoadMenuWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PongGameInstance|UI" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongGameInstance, nullptr, "LoadGameHUDWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "PongGameInstance|UI" },
		{ "Comment", "/////////////////////\n/// UI Creation\n" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
		{ "ToolTip", "UI Creation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongGameInstance, nullptr, "LoadMainMenuWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPongGameInstance_NoRegister()
	{
		return UPongGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPongGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Menu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InGameMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InGameMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoading_MetaData[];
#endif
		static void NewProp_bLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPongGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPongGameInstance_InGameLoadMenuWidget, "InGameLoadMenuWidget" }, // 118450805
		{ &Z_Construct_UFunction_UPongGameInstance_LoadGameHUDWidget, "LoadGameHUDWidget" }, // 2276693847
		{ &Z_Construct_UFunction_UPongGameInstance_LoadMainMenuWidget, "LoadMainMenuWidget" }, // 1554318510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong GameInstance\n */" },
		{ "IncludePath", "Core/PongGameInstance.h" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
		{ "ToolTip", "UnrealPong GameInstance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_Menu_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "Comment", "///////////////////\n/// UI Pointers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
		{ "ToolTip", "/\n UI Pointers" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, Menu), Z_Construct_UClass_UPongMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_Menu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUD_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUD = { "GameHUD", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, GameHUD), Z_Construct_UClass_UPongGameHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenu_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenu = { "InGameMenu", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, InGameMenu), Z_Construct_UClass_UPongInGameMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "Comment", "///////////////////////\n/// Blueprint References, to be set in Editor on defaults\n" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
		{ "ToolTip", "Blueprint References, to be set in Editor on defaults" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, MainMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_MainMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_MainMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUDClass_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUDClass = { "GameHUDClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, GameHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenuClass_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenuClass = { "InGameMenuClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, InGameMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "Comment", "////////////////////////\n/// Variables\n" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	void Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading_SetBit(void* Obj)
	{
		((UPongGameInstance*)Obj)->bLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading = { "bLoading", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPongGameInstance), &Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameInstance_Statics::NewProp_ServerData_MetaData[] = {
		{ "Category", "PongGameInstance|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPongGameInstance_Statics::NewProp_ServerData = { "ServerData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameInstance, ServerData), Z_Construct_UScriptStruct_FPongServerData, METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_ServerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::NewProp_ServerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPongGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_Menu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_MainMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_GameHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_InGameMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_bLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameInstance_Statics::NewProp_ServerData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPongGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPongMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UPongGameInstance, IPongMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPongGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongGameInstance_Statics::ClassParams = {
		&UPongGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPongGameInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPongGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongGameInstance, 3060024967);
	template<> UNREALPONG_API UClass* StaticClass<UPongGameInstance>()
	{
		return UPongGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongGameInstance(Z_Construct_UClass_UPongGameInstance, &UPongGameInstance::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
