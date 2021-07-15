// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongGameState_generated_h
#error "PongGameState.generated.h already included, missing '#pragma once' in PongGameState.h"
#endif
#define UNREALPONG_PongGameState_generated_h

#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_RPC_WRAPPERS \
	virtual void IncrementScore_Implementation(int32 PlayerNumber); \
	virtual void RestartGame_Implementation(); \
 \
	DECLARE_FUNCTION(execIncrementScore); \
	DECLARE_FUNCTION(execRestartGame);


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void IncrementScore_Implementation(int32 PlayerNumber); \
	virtual void RestartGame_Implementation(); \
 \
	DECLARE_FUNCTION(execIncrementScore); \
	DECLARE_FUNCTION(execRestartGame);


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_EVENT_PARMS \
	struct PongGameState_eventIncrementScore_Parms \
	{ \
		int32 PlayerNumber; \
	};


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_CALLBACK_WRAPPERS
#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongGameState(); \
	friend struct Z_Construct_UClass_APongGameState_Statics; \
public: \
	DECLARE_CLASS(APongGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerOneScore=NETFIELD_REP_START, \
		PlayerTwoScore, \
		bGameover, \
		NETFIELD_REP_END=bGameover	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPongGameState(); \
	friend struct Z_Construct_UClass_APongGameState_Statics; \
public: \
	DECLARE_CLASS(APongGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerOneScore=NETFIELD_REP_START, \
		PlayerTwoScore, \
		bGameover, \
		NETFIELD_REP_END=bGameover	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGameState(APongGameState&&); \
	NO_API APongGameState(const APongGameState&); \
public:


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGameState(APongGameState&&); \
	NO_API APongGameState(const APongGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGameState)


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerOneScore() { return STRUCT_OFFSET(APongGameState, PlayerOneScore); } \
	FORCEINLINE static uint32 __PPO__PlayerTwoScore() { return STRUCT_OFFSET(APongGameState, PlayerTwoScore); } \
	FORCEINLINE static uint32 __PPO__ScoreToWin() { return STRUCT_OFFSET(APongGameState, ScoreToWin); } \
	FORCEINLINE static uint32 __PPO__bGameover() { return STRUCT_OFFSET(APongGameState, bGameover); }


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_12_PROLOG \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_EVENT_PARMS


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_CALLBACK_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_INCLASS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_CALLBACK_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class APongGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_Core_PongGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
