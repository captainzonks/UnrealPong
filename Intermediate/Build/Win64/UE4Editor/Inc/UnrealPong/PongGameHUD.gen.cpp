// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/UI/PongGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameHUD() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongGameHUD_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongGameHUD();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPongGameHUD::execQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPongGameHUD::execRestartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartGame();
		P_NATIVE_END;
	}
	void UPongGameHUD::StaticRegisterNativesUPongGameHUD()
	{
		UClass* Class = UPongGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QuitGame", &UPongGameHUD::execQuitGame },
			{ "RestartGame", &UPongGameHUD::execRestartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPongGameHUD_QuitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongGameHUD_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongGameHUD_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongGameHUD, nullptr, "QuitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongGameHUD_QuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongGameHUD_QuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongGameHUD_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongGameHUD_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPongGameHUD_RestartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongGameHUD_RestartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongGameHUD_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongGameHUD, nullptr, "RestartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongGameHUD_RestartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongGameHUD_RestartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongGameHUD_RestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongGameHUD_RestartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPongGameHUD_NoRegister()
	{
		return UPongGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UPongGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOneScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerOneScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTwoScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerTwoScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YesButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YesButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPongMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPongGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPongGameHUD_QuitGame, "QuitGame" }, // 1283913205
		{ &Z_Construct_UFunction_UPongGameHUD_RestartGame, "RestartGame" }, // 2174143005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong GameHUD\n */" },
		{ "IncludePath", "UI/PongGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
		{ "ToolTip", "UnrealPong GameHUD" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerOneScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongGameHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerOneScore = { "PlayerOneScore", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameHUD, PlayerOneScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerOneScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerOneScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerTwoScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongGameHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerTwoScore = { "PlayerTwoScore", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameHUD, PlayerTwoScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerTwoScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerTwoScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameHUD_Statics::NewProp_NoButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongGameHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameHUD_Statics::NewProp_NoButton = { "NoButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameHUD, NoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_NoButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_NoButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongGameHUD_Statics::NewProp_YesButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongGameHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongGameHUD_Statics::NewProp_YesButton = { "YesButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongGameHUD, YesButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_YesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameHUD_Statics::NewProp_YesButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPongGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerOneScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameHUD_Statics::NewProp_PlayerTwoScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameHUD_Statics::NewProp_NoButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongGameHUD_Statics::NewProp_YesButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPongGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongGameHUD_Statics::ClassParams = {
		&UPongGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPongGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPongGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongGameHUD, 2694070593);
	template<> UNREALPONG_API UClass* StaticClass<UPongGameHUD>()
	{
		return UPongGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongGameHUD(Z_Construct_UClass_UPongGameHUD, &UPongGameHUD::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
