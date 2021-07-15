// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongInGameMenu_generated_h
#error "PongInGameMenu.generated.h already included, missing '#pragma once' in PongInGameMenu.h"
#endif
#define UNREALPONG_PongInGameMenu_generated_h

#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitToDesktopPressed); \
	DECLARE_FUNCTION(execLeaveGamePressed); \
	DECLARE_FUNCTION(execResumePressed);


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitToDesktopPressed); \
	DECLARE_FUNCTION(execLeaveGamePressed); \
	DECLARE_FUNCTION(execResumePressed);


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPongInGameMenu(); \
	friend struct Z_Construct_UClass_UPongInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UPongInGameMenu, UPongMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongInGameMenu)


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPongInGameMenu(); \
	friend struct Z_Construct_UClass_UPongInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UPongInGameMenu, UPongMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongInGameMenu)


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongInGameMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongInGameMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongInGameMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongInGameMenu(UPongInGameMenu&&); \
	NO_API UPongInGameMenu(const UPongInGameMenu&); \
public:


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongInGameMenu(UPongInGameMenu&&); \
	NO_API UPongInGameMenu(const UPongInGameMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongInGameMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongInGameMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongInGameMenu)


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UPongInGameMenu, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__LeaveGameButton() { return STRUCT_OFFSET(UPongInGameMenu, LeaveGameButton); } \
	FORCEINLINE static uint32 __PPO__QuitToDesktopButton() { return STRUCT_OFFSET(UPongInGameMenu, QuitToDesktopButton); }


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_13_PROLOG
#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_INCLASS \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class UPongInGameMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_UI_PongInGameMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
