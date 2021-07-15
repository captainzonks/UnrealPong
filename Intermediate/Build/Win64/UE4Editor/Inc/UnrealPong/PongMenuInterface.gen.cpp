// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/UI/PongMenuInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongMenuInterface() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuInterface_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
// End Cross Module References
	void UPongMenuInterface::StaticRegisterNativesUPongMenuInterface()
	{
	}
	UClass* Z_Construct_UClass_UPongMenuInterface_NoRegister()
	{
		return UPongMenuInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPongMenuInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongMenuInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMenuInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongMenuInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongMenuInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPongMenuInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongMenuInterface_Statics::ClassParams = {
		&UPongMenuInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPongMenuInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMenuInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongMenuInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongMenuInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongMenuInterface, 4042627288);
	template<> UNREALPONG_API UClass* StaticClass<UPongMenuInterface>()
	{
		return UPongMenuInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongMenuInterface(Z_Construct_UClass_UPongMenuInterface, &UPongMenuInterface::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongMenuInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongMenuInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
