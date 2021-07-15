// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Core/PongController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongController() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_APongController_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_APongController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APongController::execToggleInGameMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInGameMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APongController::execSetupGameUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupGameUI_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APongController_SetupGameUI = FName(TEXT("SetupGameUI"));
	void APongController::SetupGameUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_APongController_SetupGameUI),NULL);
	}
	void APongController::StaticRegisterNativesAPongController()
	{
		UClass* Class = APongController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupGameUI", &APongController::execSetupGameUI },
			{ "ToggleInGameMenu", &APongController::execToggleInGameMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APongController_SetupGameUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongController_SetupGameUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "PongController|UI" },
		{ "ModuleRelativePath", "Public/Core/PongController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongController_SetupGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongController, nullptr, "SetupGameUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongController_SetupGameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APongController_SetupGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongController_SetupGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongController_SetupGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APongController_ToggleInGameMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongController_ToggleInGameMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PongController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongController_ToggleInGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongController, nullptr, "ToggleInGameMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongController_ToggleInGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APongController_ToggleInGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongController_ToggleInGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongController_ToggleInGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APongController_NoRegister()
	{
		return APongController::StaticClass();
	}
	struct Z_Construct_UClass_APongController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PongGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PongGameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APongController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APongController_SetupGameUI, "SetupGameUI" }, // 2160927796
		{ &Z_Construct_UFunction_APongController_ToggleInGameMenu, "ToggleInGameMenu" }, // 226902280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong PlayerController\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Core/PongController.h" },
		{ "ModuleRelativePath", "Public/Core/PongController.h" },
		{ "ToolTip", "UnrealPong PlayerController" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongController_Statics::NewProp_PongGameInstance_MetaData[] = {
		{ "Category", "PongController|Config" },
		{ "ModuleRelativePath", "Public/Core/PongController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongController_Statics::NewProp_PongGameInstance = { "PongGameInstance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongController, PongGameInstance), Z_Construct_UClass_UPongGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongController_Statics::NewProp_PongGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongController_Statics::NewProp_PongGameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongController_Statics::NewProp_PongGameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongController_Statics::ClassParams = {
		&APongController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APongController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APongController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APongController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongController, 955914092);
	template<> UNREALPONG_API UClass* StaticClass<APongController>()
	{
		return APongController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongController(Z_Construct_UClass_APongController, &APongController::StaticClass, TEXT("/Script/UnrealPong"), TEXT("APongController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
