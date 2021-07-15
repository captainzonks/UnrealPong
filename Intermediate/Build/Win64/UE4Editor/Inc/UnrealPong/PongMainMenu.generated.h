// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongMainMenu_generated_h
#error "PongMainMenu.generated.h already included, missing '#pragma once' in PongMainMenu.h"
#endif
#define UNREALPONG_PongMainMenu_generated_h

#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshServerList); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshServerList); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPongMainMenu(); \
	friend struct Z_Construct_UClass_UPongMainMenu_Statics; \
public: \
	DECLARE_CLASS(UPongMainMenu, UPongMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongMainMenu)


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPongMainMenu(); \
	friend struct Z_Construct_UClass_UPongMainMenu_Statics; \
public: \
	DECLARE_CLASS(UPongMainMenu, UPongMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongMainMenu)


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongMainMenu(UPongMainMenu&&); \
	NO_API UPongMainMenu(const UPongMainMenu&); \
public:


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongMainMenu(UPongMainMenu&&); \
	NO_API UPongMainMenu(const UPongMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongMainMenu)


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuSwitcher() { return STRUCT_OFFSET(UPongMainMenu, MenuSwitcher); } \
	FORCEINLINE static uint32 __PPO__MainMenu() { return STRUCT_OFFSET(UPongMainMenu, MainMenu); } \
	FORCEINLINE static uint32 __PPO__JoinMenu() { return STRUCT_OFFSET(UPongMainMenu, JoinMenu); } \
	FORCEINLINE static uint32 __PPO__ServerList() { return STRUCT_OFFSET(UPongMainMenu, ServerList); } \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UPongMainMenu, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UPongMainMenu, JoinButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UPongMainMenu, QuitButton); } \
	FORCEINLINE static uint32 __PPO__CancelJoinMenuButton() { return STRUCT_OFFSET(UPongMainMenu, CancelJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__RefreshListJoinMenuButton() { return STRUCT_OFFSET(UPongMainMenu, RefreshListJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__ConfirmJoinMenuButton() { return STRUCT_OFFSET(UPongMainMenu, ConfirmJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__ServerRowWidgetClass() { return STRUCT_OFFSET(UPongMainMenu, ServerRowWidgetClass); }


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_19_PROLOG
#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_INCLASS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class UPongMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_UI_PongMainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
