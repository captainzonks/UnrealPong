// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/UI/PongServerRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongServerRow() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongServerRow_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongServerRow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMainMenu_NoRegister();
	UNREALPONG_API UScriptStruct* Z_Construct_UScriptStruct_FPongServerData();
// End Cross Module References
	DEFINE_FUNCTION(UPongServerRow::execOnRowClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRowClicked();
		P_NATIVE_END;
	}
	void UPongServerRow::StaticRegisterNativesUPongServerRow()
	{
		UClass* Class = UPongServerRow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRowClicked", &UPongServerRow::execOnRowClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPongServerRow_OnRowClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPongServerRow_OnRowClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPongServerRow_OnRowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPongServerRow, nullptr, "OnRowClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPongServerRow_OnRowClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPongServerRow_OnRowClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPongServerRow_OnRowClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPongServerRow_OnRowClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPongServerRow_NoRegister()
	{
		return UPongServerRow::StaticClass();
	}
	struct Z_Construct_UClass_UPongServerRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongServerRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPongServerRow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPongServerRow_OnRowClicked, "OnRowClicked" }, // 290958341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong Server Row widget\n */" },
		{ "IncludePath", "UI/PongServerRow.h" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
		{ "ToolTip", "UnrealPong Server Row widget" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongServerRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongServerRow, ServerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_HostUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongServerRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongServerRow, HostUser), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_ConnectionFraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongServerRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_ConnectionFraction = { "ConnectionFraction", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongServerRow, ConnectionFraction), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_ConnectionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_ConnectionFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_RowButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "PongServerRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_RowButton = { "RowButton", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongServerRow, RowButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_RowButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_RowButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_Parent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PongServerRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongServerRow, Parent), Z_Construct_UClass_UPongMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PongServerRow" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	void Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UPongServerRow*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPongServerRow), &Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PongServerRow" },
		{ "ModuleRelativePath", "Public/UI/PongServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerData = { "ServerData", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPongServerRow, ServerData), Z_Construct_UScriptStruct_FPongServerData, METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPongServerRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_HostUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_ConnectionFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_RowButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPongServerRow_Statics::NewProp_ServerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongServerRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPongServerRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongServerRow_Statics::ClassParams = {
		&UPongServerRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPongServerRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPongServerRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongServerRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongServerRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongServerRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongServerRow, 1266316689);
	template<> UNREALPONG_API UClass* StaticClass<UPongServerRow>()
	{
		return UPongServerRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongServerRow(Z_Construct_UClass_UPongServerRow, &UPongServerRow::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongServerRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongServerRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
