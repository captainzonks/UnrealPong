// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongGameHUD_generated_h
#error "PongGameHUD.generated.h already included, missing '#pragma once' in PongGameHUD.h"
#endif
#define UNREALPONG_PongGameHUD_generated_h

#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execRestartGame);


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execRestartGame);


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPongGameHUD(); \
	friend struct Z_Construct_UClass_UPongGameHUD_Statics; \
public: \
	DECLARE_CLASS(UPongGameHUD, UPongMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongGameHUD)


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPongGameHUD(); \
	friend struct Z_Construct_UClass_UPongGameHUD_Statics; \
public: \
	DECLARE_CLASS(UPongGameHUD, UPongMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongGameHUD)


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongGameHUD(UPongGameHUD&&); \
	NO_API UPongGameHUD(const UPongGameHUD&); \
public:


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongGameHUD(UPongGameHUD&&); \
	NO_API UPongGameHUD(const UPongGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongGameHUD)


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerOneScore() { return STRUCT_OFFSET(UPongGameHUD, PlayerOneScore); } \
	FORCEINLINE static uint32 __PPO__PlayerTwoScore() { return STRUCT_OFFSET(UPongGameHUD, PlayerTwoScore); } \
	FORCEINLINE static uint32 __PPO__NoButton() { return STRUCT_OFFSET(UPongGameHUD, NoButton); } \
	FORCEINLINE static uint32 __PPO__YesButton() { return STRUCT_OFFSET(UPongGameHUD, YesButton); }


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_16_PROLOG
#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_INCLASS \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class UPongGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_UI_PongGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
