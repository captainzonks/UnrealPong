// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongServerRow_generated_h
#error "PongServerRow.generated.h already included, missing '#pragma once' in PongServerRow.h"
#endif
#define UNREALPONG_PongServerRow_generated_h

#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRowClicked);


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRowClicked);


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPongServerRow(); \
	friend struct Z_Construct_UClass_UPongServerRow_Statics; \
public: \
	DECLARE_CLASS(UPongServerRow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongServerRow)


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPongServerRow(); \
	friend struct Z_Construct_UClass_UPongServerRow_Statics; \
public: \
	DECLARE_CLASS(UPongServerRow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongServerRow)


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongServerRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongServerRow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongServerRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongServerRow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongServerRow(UPongServerRow&&); \
	NO_API UPongServerRow(const UPongServerRow&); \
public:


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongServerRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongServerRow(UPongServerRow&&); \
	NO_API UPongServerRow(const UPongServerRow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongServerRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongServerRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongServerRow)


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerName() { return STRUCT_OFFSET(UPongServerRow, ServerName); } \
	FORCEINLINE static uint32 __PPO__HostUser() { return STRUCT_OFFSET(UPongServerRow, HostUser); } \
	FORCEINLINE static uint32 __PPO__ConnectionFraction() { return STRUCT_OFFSET(UPongServerRow, ConnectionFraction); } \
	FORCEINLINE static uint32 __PPO__RowButton() { return STRUCT_OFFSET(UPongServerRow, RowButton); } \
	FORCEINLINE static uint32 __PPO__Parent() { return STRUCT_OFFSET(UPongServerRow, Parent); } \
	FORCEINLINE static uint32 __PPO__bIsSelected() { return STRUCT_OFFSET(UPongServerRow, bIsSelected); } \
	FORCEINLINE static uint32 __PPO__ServerData() { return STRUCT_OFFSET(UPongServerRow, ServerData); }


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_19_PROLOG
#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_INCLASS \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class UPongServerRow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_UI_PongServerRow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
