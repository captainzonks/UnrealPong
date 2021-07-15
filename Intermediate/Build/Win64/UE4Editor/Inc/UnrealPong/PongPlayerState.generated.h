// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongPlayerState_generated_h
#error "PongPlayerState.generated.h already included, missing '#pragma once' in PongPlayerState.h"
#endif
#define UNREALPONG_PongPlayerState_generated_h

#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_RPC_WRAPPERS \
	virtual void SetPlayAgain_Implementation(bool bInPlayAgain); \
 \
	DECLARE_FUNCTION(execSetPlayAgain);


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetPlayAgain_Implementation(bool bInPlayAgain); \
 \
	DECLARE_FUNCTION(execSetPlayAgain);


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_EVENT_PARMS \
	struct PongPlayerState_eventSetPlayAgain_Parms \
	{ \
		bool bInPlayAgain; \
	};


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_CALLBACK_WRAPPERS
#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongPlayerState(); \
	friend struct Z_Construct_UClass_APongPlayerState_Statics; \
public: \
	DECLARE_CLASS(APongPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bPlayAgain=NETFIELD_REP_START, \
		NETFIELD_REP_END=bPlayAgain	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPongPlayerState(); \
	friend struct Z_Construct_UClass_APongPlayerState_Statics; \
public: \
	DECLARE_CLASS(APongPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bPlayAgain=NETFIELD_REP_START, \
		NETFIELD_REP_END=bPlayAgain	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayerState(APongPlayerState&&); \
	NO_API APongPlayerState(const APongPlayerState&); \
public:


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongPlayerState(APongPlayerState&&); \
	NO_API APongPlayerState(const APongPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongPlayerState)


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bPlayAgain() { return STRUCT_OFFSET(APongPlayerState, bPlayAgain); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_12_PROLOG \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_EVENT_PARMS


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_CALLBACK_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_INCLASS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_CALLBACK_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class APongPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_Core_PongPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
