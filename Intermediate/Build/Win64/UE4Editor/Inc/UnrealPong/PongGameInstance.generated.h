// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongGameInstance_generated_h
#error "PongGameInstance.generated.h already included, missing '#pragma once' in PongGameInstance.h"
#endif
#define UNREALPONG_PongGameInstance_generated_h

#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInGameLoadMenuWidget); \
	DECLARE_FUNCTION(execLoadGameHUDWidget); \
	DECLARE_FUNCTION(execLoadMainMenuWidget);


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInGameLoadMenuWidget); \
	DECLARE_FUNCTION(execLoadGameHUDWidget); \
	DECLARE_FUNCTION(execLoadMainMenuWidget);


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPongGameInstance(); \
	friend struct Z_Construct_UClass_UPongGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPongGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPongGameInstance*>(this); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPongGameInstance(); \
	friend struct Z_Construct_UClass_UPongGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPongGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(UPongGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPongGameInstance*>(this); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongGameInstance(UPongGameInstance&&); \
	NO_API UPongGameInstance(const UPongGameInstance&); \
public:


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPongGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPongGameInstance(UPongGameInstance&&); \
	NO_API UPongGameInstance(const UPongGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPongGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongGameInstance)


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Menu() { return STRUCT_OFFSET(UPongGameInstance, Menu); } \
	FORCEINLINE static uint32 __PPO__GameHUD() { return STRUCT_OFFSET(UPongGameInstance, GameHUD); } \
	FORCEINLINE static uint32 __PPO__InGameMenu() { return STRUCT_OFFSET(UPongGameInstance, InGameMenu); } \
	FORCEINLINE static uint32 __PPO__MainMenuClass() { return STRUCT_OFFSET(UPongGameInstance, MainMenuClass); } \
	FORCEINLINE static uint32 __PPO__GameHUDClass() { return STRUCT_OFFSET(UPongGameInstance, GameHUDClass); } \
	FORCEINLINE static uint32 __PPO__InGameMenuClass() { return STRUCT_OFFSET(UPongGameInstance, InGameMenuClass); } \
	FORCEINLINE static uint32 __PPO__ServerData() { return STRUCT_OFFSET(UPongGameInstance, ServerData); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_22_PROLOG
#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_INCLASS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class UPongGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_Core_PongGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
