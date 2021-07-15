// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPONG_PongMenuInterface_generated_h
#error "PongMenuInterface.generated.h already included, missing '#pragma once' in PongMenuInterface.h"
#endif
#define UNREALPONG_PongMenuInterface_generated_h

#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_SPARSE_DATA
#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_RPC_WRAPPERS
#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALPONG_API UPongMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALPONG_API, UPongMenuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALPONG_API UPongMenuInterface(UPongMenuInterface&&); \
	UNREALPONG_API UPongMenuInterface(const UPongMenuInterface&); \
public:


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALPONG_API UPongMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALPONG_API UPongMenuInterface(UPongMenuInterface&&); \
	UNREALPONG_API UPongMenuInterface(const UPongMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALPONG_API, UPongMenuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPongMenuInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPongMenuInterface)


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPongMenuInterface(); \
	friend struct Z_Construct_UClass_UPongMenuInterface_Statics; \
public: \
	DECLARE_CLASS(UPongMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealPong"), UNREALPONG_API) \
	DECLARE_SERIALIZER(UPongMenuInterface)


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_GENERATED_UINTERFACE_BODY() \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_GENERATED_UINTERFACE_BODY() \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPongMenuInterface() {} \
public: \
	typedef UPongMenuInterface UClassType; \
	typedef IPongMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IPongMenuInterface() {} \
public: \
	typedef UPongMenuInterface UClassType; \
	typedef IPongMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_14_PROLOG
#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_RPC_WRAPPERS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_SPARSE_DATA \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPONG_API UClass* StaticClass<class UPongMenuInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPong_Source_UnrealPong_Public_UI_PongMenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
