// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Core/PongPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongPlayerState() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_APongPlayerState_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_APongPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
// End Cross Module References
	DEFINE_FUNCTION(APongPlayerState::execSetPlayAgain)
	{
		P_GET_UBOOL(Z_Param_bInPlayAgain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayAgain_Implementation(Z_Param_bInPlayAgain);
		P_NATIVE_END;
	}
	static FName NAME_APongPlayerState_SetPlayAgain = FName(TEXT("SetPlayAgain"));
	void APongPlayerState::SetPlayAgain(bool bInPlayAgain)
	{
		PongPlayerState_eventSetPlayAgain_Parms Parms;
		Parms.bInPlayAgain=bInPlayAgain ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APongPlayerState_SetPlayAgain),&Parms);
	}
	void APongPlayerState::StaticRegisterNativesAPongPlayerState()
	{
		UClass* Class = APongPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayAgain", &APongPlayerState::execSetPlayAgain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics
	{
		static void NewProp_bInPlayAgain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInPlayAgain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::NewProp_bInPlayAgain_SetBit(void* Obj)
	{
		((PongPlayerState_eventSetPlayAgain_Parms*)Obj)->bInPlayAgain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::NewProp_bInPlayAgain = { "bInPlayAgain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PongPlayerState_eventSetPlayAgain_Parms), &Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::NewProp_bInPlayAgain_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::NewProp_bInPlayAgain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PongPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongPlayerState, nullptr, "SetPlayAgain", nullptr, nullptr, sizeof(PongPlayerState_eventSetPlayAgain_Parms), Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongPlayerState_SetPlayAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongPlayerState_SetPlayAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APongPlayerState_NoRegister()
	{
		return APongPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_APongPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayAgain_MetaData[];
#endif
		static void NewProp_bPlayAgain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayAgain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APongPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APongPlayerState_SetPlayAgain, "SetPlayAgain" }, // 1026515731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong Player State\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Core/PongPlayerState.h" },
		{ "ModuleRelativePath", "Public/Core/PongPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "UnrealPong Player State" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/PongPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain_SetBit(void* Obj)
	{
		((APongPlayerState*)Obj)->bPlayAgain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain = { "bPlayAgain", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APongPlayerState), &Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain_SetBit, METADATA_PARAMS(Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongPlayerState_Statics::NewProp_bPlayAgain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongPlayerState_Statics::ClassParams = {
		&APongPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APongPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APongPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APongPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongPlayerState, 2529748123);
	template<> UNREALPONG_API UClass* StaticClass<APongPlayerState>()
	{
		return APongPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongPlayerState(Z_Construct_UClass_APongPlayerState, &APongPlayerState::StaticClass, TEXT("/Script/UnrealPong"), TEXT("APongPlayerState"), false, nullptr, nullptr, nullptr);

	void APongPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bPlayAgain(TEXT("bPlayAgain"));

		const bool bIsValid = true
			&& Name_bPlayAgain == ClassReps[(int32)ENetFields_Private::bPlayAgain].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APongPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
