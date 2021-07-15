// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/Core/PongData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongData() {}
// Cross Module References
	UNREALPONG_API UScriptStruct* Z_Construct_UScriptStruct_FPongServerData();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
// End Cross Module References
class UScriptStruct* FPongServerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALPONG_API uint32 Get_Z_Construct_UScriptStruct_FPongServerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPongServerData, Z_Construct_UPackage__Script_UnrealPong(), TEXT("PongServerData"), sizeof(FPongServerData), Get_Z_Construct_UScriptStruct_FPongServerData_Hash());
	}
	return Singleton;
}
template<> UNREALPONG_API UScriptStruct* StaticStruct<FPongServerData>()
{
	return FPongServerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPongServerData(FPongServerData::StaticStruct, TEXT("/Script/UnrealPong"), TEXT("PongServerData"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealPong_StaticRegisterNativesFPongServerData
{
	FScriptStruct_UnrealPong_StaticRegisterNativesFPongServerData()
	{
		UScriptStruct::DeferCppStructOps<FPongServerData>(FName(TEXT("PongServerData")));
	}
} ScriptStruct_UnrealPong_StaticRegisterNativesFPongServerData;
	struct Z_Construct_UScriptStruct_FPongServerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUsername_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUsername;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPongServerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/PongData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPongServerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPongServerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/PongData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPongServerData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/PongData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPongServerData, CurrentPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_CurrentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_CurrentPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_HostUsername_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/PongData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_HostUsername = { "HostUsername", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPongServerData, HostUsername), METADATA_PARAMS(Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_HostUsername_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_HostUsername_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPongServerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_CurrentPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPongServerData_Statics::NewProp_HostUsername,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPongServerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
		nullptr,
		&NewStructOps,
		"PongServerData",
		sizeof(FPongServerData),
		alignof(FPongServerData),
		Z_Construct_UScriptStruct_FPongServerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPongServerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPongServerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPongServerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPongServerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPongServerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealPong();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PongServerData"), sizeof(FPongServerData), Get_Z_Construct_UScriptStruct_FPongServerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPongServerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPongServerData_Hash() { return 1635847530U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
