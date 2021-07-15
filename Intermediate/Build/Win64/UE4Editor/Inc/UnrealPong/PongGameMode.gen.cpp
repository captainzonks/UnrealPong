// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Core/PongGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameMode() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_APongGameMode_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_APongGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
// End Cross Module References
	void APongGameMode::StaticRegisterNativesAPongGameMode()
	{
	}
	UClass* Z_Construct_UClass_APongGameMode_NoRegister()
	{
		return APongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong Game Mode\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Core/PongGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/PongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "UnrealPong Game Mode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongGameMode_Statics::ClassParams = {
		&APongGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongGameMode, 2571254135);
	template<> UNREALPONG_API UClass* StaticClass<APongGameMode>()
	{
		return APongGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongGameMode(Z_Construct_UClass_APongGameMode, &APongGameMode::StaticClass, TEXT("/Script/UnrealPong"), TEXT("APongGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
