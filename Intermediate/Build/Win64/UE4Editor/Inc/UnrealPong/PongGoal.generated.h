// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALPONG_PongGoal_generated_h
#error "PongGoal.generated.h already included, missing '#pragma once' in PongGoal.h"
#endif
#define UNREALPONG_PongGoal_generated_h

#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScore);


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScore);


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongGoal(); \
	friend struct Z_Construct_UClass_APongGoal_Statics; \
public: \
	DECLARE_CLASS(APongGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongGoal)


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPongGoal(); \
	friend struct Z_Construct_UClass_APongGoal_Statics; \
public: \
	DECLARE_CLASS(APongGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPong"), NO_API) \
	DECLARE_SERIALIZER(APongGoal)


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGoal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGoal(APongGoal&&); \
	NO_API APongGoal(const APongGoal&); \
public:


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGoal(APongGoal&&); \
	NO_API APongGoal(const APongGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGoal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongGoal)


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(APongGoal, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(APongGoal, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__PlayerNumber() { return STRUCT_OFFSET(APongGoal, PlayerNumber); }


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_10_PROLOG
#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_INCLASS \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_INCLASS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class APongGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_Actors_PongGoal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
