// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongPlayer_generated_h
#error "PongPlayer.generated.h already included, missing '#pragma once' in PongPlayer.h"
#endif
#define UNREALPONG_PongPlayer_generated_h

#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMovePaddle);


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovePaddle);


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongPlayer(); \
	friend struct Z_Construct_UClass_APongPlayer_Statics; \
public: \
	DECLARE_CLASS(APongPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayer)


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPongPlayer(); \
	friend struct Z_Construct_UClass_APongPlayer_Statics; \
public: \
	DECLARE_CLASS(APongPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayer)


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayer(APongPlayer&&); \
	NO_API APongPlayer(const APongPlayer&); \
public:


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayer(APongPlayer&&); \
	NO_API APongPlayer(const APongPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongPlayer)


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(APongPlayer, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(APongPlayer, BoxComponent); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_15_PROLOG
#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_INCLASS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class APongPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_Core_PongPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
