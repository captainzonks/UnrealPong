// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Actors/PongBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongBall() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_APongBall_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_APongBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APongBall::execOnPaddleHit)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPaddleHit(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void APongBall::StaticRegisterNativesAPongBall()
	{
		UClass* Class = APongBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPaddleHit", &APongBall::execOnPaddleHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APongBall_OnPaddleHit_Statics
	{
		struct PongBall_eventOnPaddleHit_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PongBall_eventOnPaddleHit_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PongBall_eventOnPaddleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongBall, nullptr, "OnPaddleHit", nullptr, nullptr, sizeof(PongBall_eventOnPaddleHit_Parms), Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongBall_OnPaddleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongBall_OnPaddleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APongBall_NoRegister()
	{
		return APongBall::StaticClass();
	}
	struct Z_Construct_UClass_APongBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameover_MetaData[];
#endif
		static void NewProp_bGameover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameover;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APongBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APongBall_OnPaddleHit, "OnPaddleHit" }, // 1432047015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PongBall.h" },
		{ "ModuleRelativePath", "Public/Actors/PongBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "PongBall|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongBall, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "PongBall|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongBall, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_BallMesh_MetaData[] = {
		{ "Category", "PongBall|Config" },
		{ "ModuleRelativePath", "Public/Actors/PongBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongBall, BallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_BallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_BallMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongBall_Statics::NewProp_bGameover_MetaData[] = {
		{ "Category", "PongBall|Config" },
		{ "ModuleRelativePath", "Public/Actors/PongBall.h" },
	};
#endif
	void Z_Construct_UClass_APongBall_Statics::NewProp_bGameover_SetBit(void* Obj)
	{
		((APongBall*)Obj)->bGameover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APongBall_Statics::NewProp_bGameover = { "bGameover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APongBall), &Z_Construct_UClass_APongBall_Statics::NewProp_bGameover_SetBit, METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::NewProp_bGameover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::NewProp_bGameover_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_BallMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBall_Statics::NewProp_bGameover,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongBall_Statics::ClassParams = {
		&APongBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APongBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APongBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongBall, 1971437147);
	template<> UNREALPONG_API UClass* StaticClass<APongBall>()
	{
		return APongBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongBall(Z_Construct_UClass_APongBall, &APongBall::StaticClass, TEXT("/Script/UnrealPong"), TEXT("APongBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
