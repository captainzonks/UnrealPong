// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPong/Public/UI/PongMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongMenuWidget() {}
// Cross Module References
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuWidget_NoRegister();
	UNREALPONG_API UClass* Z_Construct_UClass_UPongMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealPong();
// End Cross Module References
	void UPongMenuWidget::StaticRegisterNativesUPongMenuWidget()
	{
	}
	UClass* Z_Construct_UClass_UPongMenuWidget_NoRegister()
	{
		return UPongMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPongMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPongMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPongMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnrealPong parent widget class for menus\n */" },
		{ "IncludePath", "UI/PongMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PongMenuWidget.h" },
		{ "ToolTip", "UnrealPong parent widget class for menus" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPongMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPongMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPongMenuWidget_Statics::ClassParams = {
		&UPongMenuWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPongMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPongMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPongMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPongMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPongMenuWidget, 4216717861);
	template<> UNREALPONG_API UClass* StaticClass<UPongMenuWidget>()
	{
		return UPongMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPongMenuWidget(Z_Construct_UClass_UPongMenuWidget, &UPongMenuWidget::StaticClass, TEXT("/Script/UnrealPong"), TEXT("UPongMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPongMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
