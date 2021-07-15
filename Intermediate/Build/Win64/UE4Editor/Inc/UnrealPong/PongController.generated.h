// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongController_generated_h
#error "PongController.generated.h already included, missing '#pragma once' in PongController.h"
#endif
#define UNREALPONG_PongController_generated_h

#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_RPC_WRAPPERS \
	virtual void SetupGameUI_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleInGameMenu); \
	DECLARE_FUNCTION(execSetupGameUI);


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupGameUI_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleInGameMenu); \
	DECLARE_FUNCTION(execSetupGameUI);


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_EVENT_PARMS
#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_CALLBACK_WRAPPERS
#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongController(); \
	friend struct Z_Construct_UClass_APongController_Statics; \
public: \
	DECLARE_CLASS(APongController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongController)


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPongController(); \
	friend struct Z_Construct_UClass_APongController_Statics; \
public: \
	DECLARE_CLASS(APongController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongController)


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongController(APongController&&); \
	NO_API APongController(const APongController&); \
public:


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongController(APongController&&); \
	NO_API APongController(const APongController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongController)


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PongGameInstance() { return STRUCT_OFFSET(APongController, PongGameInstance); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_13_PROLOG \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_EVENT_PARMS


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_CALLBACK_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_INCLASS \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_CALLBACK_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class APongController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_Core_PongController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
