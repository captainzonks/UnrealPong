// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/UI/PongMainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongMainMenu() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMainMenu_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMainMenu();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPongMainMenu::execRefreshServerList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshServerList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongMainMenu::execOpenJoinMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenJoinMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongMainMenu::execOpenMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongMainMenu::execQuitPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongMainMenu::execJoinServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongMainMenu::execHostServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostServer();
		P_NATIVE_END;
	}
	void UPongMainMenu::StaticRegisterNativesUPongMainMenu()
	{
		UClass* Class = UPongMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostServer", &UPongMainMenu::execHostServer },
			{ "JoinServer", &UPongMainMenu::execJoinServer },
			{ "OpenJoinMenu", &UPongMainMenu::execOpenJoinMenu },
			{ "OpenMainMenu", &UPongMainMenu::execOpenMainMenu },
			{ "QuitPressed", &UPongMainMenu::execQuitPressed },
			{ "RefreshServerList", &UPongMainMenu::execRefreshServerList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPongMainMenu_HostServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongMainMenu_HostServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback Functions */" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
		{ "ToolTip", "Callback Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongMainMenu_HostServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongMainMenu, nullptr, "HostServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongMainMenu_HostServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongMainMenu_HostServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongMainMenu_HostServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongMainMenu_HostServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongMainMenu_JoinServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongMainMenu_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongMainMenu_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongMainMenu, nullptr, "JoinServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongMainMenu_JoinServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongMainMenu_JoinServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongMainMenu_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongMainMenu_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongMainMenu, nullptr, "OpenJoinMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongMainMenu_OpenMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongMainMenu_OpenMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongMainMenu_OpenMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongMainMenu, nullptr, "OpenMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongMainMenu_OpenMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongMainMenu_OpenMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongMainMenu_OpenMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongMainMenu_OpenMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongMainMenu_QuitPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongMainMenu_QuitPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongMainMenu_QuitPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongMainMenu, nullptr, "QuitPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongMainMenu_QuitPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongMainMenu_QuitPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongMainMenu_QuitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongMainMenu_QuitPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongMainMenu_RefreshServerList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongMainMenu_RefreshServerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongMainMenu_RefreshServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongMainMenu, nullptr, "RefreshServerList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongMainMenu_RefreshServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongMainMenu_RefreshServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongMainMenu_RefreshServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongMainMenu_RefreshServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPongMainMenu_NoRegister()
	{
		return UPongMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPongMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelJoinMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelJoinMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshListJoinMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefreshListJoinMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmJoinMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmJoinMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerRowWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ServerRowWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPongMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPongMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPongMainMenu_HostServer, "HostServer" }, // 1294817798
		{ &Z_Construct_UFunction_UPongMainMenu_JoinServer, "JoinServer" }, // 3079845438
		{ &Z_Construct_UFunction_UPongMainMenu_OpenJoinMenu, "OpenJoinMenu" }, // 4098314215
		{ &Z_Construct_UFunction_UPongMainMenu_OpenMainMenu, "OpenMainMenu" }, // 3221737881
		{ &Z_Construct_UFunction_UPongMainMenu_QuitPressed, "QuitPressed" }, // 189641850
		{ &Z_Construct_UFunction_UPongMainMenu_RefreshServerList, "RefreshServerList" }, // 2608905410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong Main Menu Widget\n */" },
		{ "IncludePath", "UI/PongMainMenu.h" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UnrealPong Main Menu Widget" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MenuSwitcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "Comment", "/** Main Menu Widgets */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
		{ "ToolTip", "Main Menu Widgets" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MenuSwitcher = { "MenuSwitcher", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, MenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MenuSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MenuSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MainMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MainMenu = { "MainMenu", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, MainMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinMenu = { "JoinMenu", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, JoinMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerList = { "ServerList", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, ServerList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_HostButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "Comment", "/** Main Menu Buttons */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
		{ "ToolTip", "Main Menu Buttons" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_HostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_HostButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_QuitButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_CancelJoinMenuButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "Comment", "/** Join Menu Buttons */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
		{ "ToolTip", "Join Menu Buttons" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_CancelJoinMenuButton = { "CancelJoinMenuButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, CancelJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_CancelJoinMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_CancelJoinMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_RefreshListJoinMenuButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_RefreshListJoinMenuButton = { "RefreshListJoinMenuButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, RefreshListJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_RefreshListJoinMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_RefreshListJoinMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ConfirmJoinMenuButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ConfirmJoinMenuButton = { "ConfirmJoinMenuButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, ConfirmJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ConfirmJoinMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ConfirmJoinMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerRowWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PongMainMenu|Config" },
		{ "Comment", "/** Class References */" },
		{ "ModuleRelativePath", "Public/UI/PongMainMenu.h" },
		{ "ToolTip", "Class References" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerRowWidgetClass = { "ServerRowWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongMainMenu, ServerRowWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerRowWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerRowWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPongMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MenuSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_MainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_HostButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_JoinButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_CancelJoinMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_RefreshListJoinMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ConfirmJoinMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongMainMenu_Statics::NewProp_ServerRowWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPongMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongMainMenu_Statics::ClassParams = {
		&UPongMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPongMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPongMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongMainMenu, 1512408849);
	template<> UNREALPONG_API UClass* StaticClass<UPongMainMenu>()
	{
		return UPongMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongMainMenu(Z_Construct_UClass_UPongMainMenu, &UPongMainMenu::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
