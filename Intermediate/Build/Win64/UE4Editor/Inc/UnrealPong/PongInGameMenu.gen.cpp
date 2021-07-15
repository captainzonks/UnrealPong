// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/UI/PongInGameMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongInGameMenu() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongInGameMenu_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongInGameMenu();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPongInGameMenu::execQuitToDesktopPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitToDesktopPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongInGameMenu::execLeaveGamePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveGamePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongInGameMenu::execResumePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumePressed();
		P_NATIVE_END;
	}
	void UPongInGameMenu::StaticRegisterNativesUPongInGameMenu()
	{
		UClass* Class = UPongInGameMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LeaveGamePressed", &UPongInGameMenu::execLeaveGamePressed },
			{ "QuitToDesktopPressed", &UPongInGameMenu::execQuitToDesktopPressed },
			{ "ResumePressed", &UPongInGameMenu::execResumePressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// UFUNCTION()\n// void OptionsPressed();\n" },
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OptionsPressed();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongInGameMenu, nullptr, "LeaveGamePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongInGameMenu, nullptr, "QuitToDesktopPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongInGameMenu_ResumePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongInGameMenu_ResumePressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** InGame Menu Button Callbacks */" },
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
		{ "ToolTip", "InGame Menu Button Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongInGameMenu_ResumePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongInGameMenu, nullptr, "ResumePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongInGameMenu_ResumePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongInGameMenu_ResumePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongInGameMenu_ResumePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongInGameMenu_ResumePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPongInGameMenu_NoRegister()
	{
		return UPongInGameMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPongInGameMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaveGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitToDesktopButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitToDesktopButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongInGameMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPongMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPongInGameMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPongInGameMenu_LeaveGamePressed, "LeaveGamePressed" }, // 1264850170
		{ &Z_Construct_UFunction_UPongInGameMenu_QuitToDesktopPressed, "QuitToDesktopPressed" }, // 744278021
		{ &Z_Construct_UFunction_UPongInGameMenu_ResumePressed, "ResumePressed" }, // 2977158316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongInGameMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong In-Game Menu widget\n */" },
		{ "IncludePath", "UI/PongInGameMenu.h" },
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
		{ "ToolTip", "UnrealPong In-Game Menu widget" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongInGameMenu" },
		{ "Comment", "/** InGame Menu Buttons */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
		{ "ToolTip", "InGame Menu Buttons" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongInGameMenu, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_LeaveGameButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongInGameMenu" },
		{ "Comment", "// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))\n// UButton* OptionsMenuButton;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))\nUButton* OptionsMenuButton;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_LeaveGameButton = { "LeaveGameButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongInGameMenu, LeaveGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_LeaveGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_LeaveGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_QuitToDesktopButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongInGameMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongInGameMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_QuitToDesktopButton = { "QuitToDesktopButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongInGameMenu, QuitToDesktopButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_QuitToDesktopButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_QuitToDesktopButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPongInGameMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_ResumeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_LeaveGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongInGameMenu_Statics::NewProp_QuitToDesktopButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongInGameMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPongInGameMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongInGameMenu_Statics::ClassParams = {
		&UPongInGameMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPongInGameMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPongInGameMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPongInGameMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongInGameMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongInGameMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongInGameMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongInGameMenu, 1856942783);
	template<> UNREALPONG_API UClass* StaticClass<UPongInGameMenu>()
	{
		return UPongInGameMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongInGameMenu(Z_Construct_UClass_UPongInGameMenu, &UPongInGameMenu::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongInGameMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongInGameMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
