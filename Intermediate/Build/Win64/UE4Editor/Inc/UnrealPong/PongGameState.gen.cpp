// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Core/PongGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameState() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_APongGameState_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_APongGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
// End Cross Module References
	DEFINE_FUNCTION(APongGameState::execIncrementScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementScore_Implementation(Z_Param_PlayerNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APongGameState::execRestartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartGame_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APongGameState_IncrementScore = FName(TEXT("IncrementScore"));
	void APongGameState::IncrementScore(int32 PlayerNumber)
	{
		PongGameState_eventIncrementScore_Parms Parms;
		Parms.PlayerNumber=PlayerNumber;
		ProcessEvent(FindFunctionChecked(NAME_APongGameState_IncrementScore),&Parms);
	}
	static FName NAME_APongGameState_RestartGame = FName(TEXT("RestartGame"));
	void APongGameState::RestartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_APongGameState_RestartGame),NULL);
	}
	void APongGameState::StaticRegisterNativesAPongGameState()
	{
		UClass* Class = APongGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementScore", &APongGameState::execIncrementScore },
			{ "RestartGame", &APongGameState::execRestartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APongGameState_IncrementScore_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APongGameState_IncrementScore_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PongGameState_eventIncrementScore_Parms, PlayerNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APongGameState_IncrementScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongGameState_IncrementScore_Statics::NewProp_PlayerNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGameState_IncrementScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameState_IncrementScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameState, nullptr, "IncrementScore", nullptr, nullptr, sizeof(PongGameState_eventIncrementScore_Parms), Z_Construct_UFunction_APongGameState_IncrementScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APongGameState_IncrementScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongGameState_IncrementScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APongGameState_IncrementScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongGameState_IncrementScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongGameState_IncrementScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APongGameState_RestartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGameState_RestartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameState_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameState, nullptr, "RestartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongGameState_RestartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APongGameState_RestartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongGameState_RestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongGameState_RestartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APongGameState_NoRegister()
	{
		return APongGameState::StaticClass();
	}
	struct Z_Construct_UClass_APongGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOneScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerOneScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTwoScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerTwoScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameover_MetaData[];
#endif
		static void NewProp_bGameover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameover;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APongGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APongGameState_IncrementScore, "IncrementScore" }, // 519804408
		{ &Z_Construct_UFunction_APongGameState_RestartGame, "RestartGame" }, // 2858094360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong Game State\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Core/PongGameState.h" },
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "UnrealPong Game State" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerOneScore_MetaData[] = {
		{ "Category", "PongGameState|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerOneScore = { "PlayerOneScore", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameState, PlayerOneScore), METADATA_PARAMS(Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerOneScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerOneScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerTwoScore_MetaData[] = {
		{ "Category", "PongGameState|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerTwoScore = { "PlayerTwoScore", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameState, PlayerTwoScore), METADATA_PARAMS(Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerTwoScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerTwoScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameState_Statics::NewProp_ScoreToWin_MetaData[] = {
		{ "Category", "PongGameState|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APongGameState_Statics::NewProp_ScoreToWin = { "ScoreToWin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameState, ScoreToWin), METADATA_PARAMS(Z_Construct_UClass_APongGameState_Statics::NewProp_ScoreToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::NewProp_ScoreToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover_MetaData[] = {
		{ "Category", "PongGameState|Config" },
		{ "ModuleRelativePath", "Public/Core/PongGameState.h" },
	};
#endif
	void Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover_SetBit(void* Obj)
	{
		((APongGameState*)Obj)->bGameover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover = { "bGameover", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APongGameState), &Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover_SetBit, METADATA_PARAMS(Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerOneScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameState_Statics::NewProp_PlayerTwoScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameState_Statics::NewProp_ScoreToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameState_Statics::NewProp_bGameover,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongGameState_Statics::ClassParams = {
		&APongGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APongGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APongGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongGameState, 1023667568);
	template<> UNREALPONG_API UClass* StaticClass<APongGameState>()
	{
		return APongGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongGameState(Z_Construct_UClass_APongGameState, &APongGameState::StaticClass, TEXT("/Script/UnrealPong"), TEXT("APongGameState"), false, nullptr, nullptr, nullptr);

	void APongGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayerOneScore(TEXT("PlayerOneScore"));
		static const FName Name_PlayerTwoScore(TEXT("PlayerTwoScore"));
		static const FName Name_bGameover(TEXT("bGameover"));

		const bool bIsValid = true
			&& Name_PlayerOneScore == ClassReps[(int32)ENetFields_Private::PlayerOneScore].Property->GetFName()
			&& Name_PlayerTwoScore == ClassReps[(int32)ENetFields_Private::PlayerTwoScore].Property->GetFName()
			&& Name_bGameover == ClassReps[(int32)ENetFields_Private::bGameover].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APongGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
