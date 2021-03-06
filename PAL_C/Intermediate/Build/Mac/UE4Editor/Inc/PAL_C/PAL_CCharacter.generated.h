// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAL_C_PAL_CCharacter_generated_h
#error "PAL_CCharacter.generated.h already included, missing '#pragma once' in PAL_CCharacter.h"
#endif
#define PAL_C_PAL_CCharacter_generated_h

#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_RPC_WRAPPERS
#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPAL_CCharacter(); \
	friend PAL_C_API class UClass* Z_Construct_UClass_APAL_CCharacter(); \
	public: \
	DECLARE_CLASS(APAL_CCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, PAL_C, NO_API) \
	DECLARE_SERIALIZER(APAL_CCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<APAL_CCharacter*>(this); }


#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesAPAL_CCharacter(); \
	friend PAL_C_API class UClass* Z_Construct_UClass_APAL_CCharacter(); \
	public: \
	DECLARE_CLASS(APAL_CCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, PAL_C, NO_API) \
	DECLARE_SERIALIZER(APAL_CCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<APAL_CCharacter*>(this); }


#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APAL_CCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APAL_CCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APAL_CCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APAL_CCharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APAL_CCharacter(const APAL_CCharacter& InCopy); \
public:


#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APAL_CCharacter(const APAL_CCharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APAL_CCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APAL_CCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APAL_CCharacter)


#define PAL_C_Source_PAL_C_PAL_CCharacter_h_17_PROLOG
#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAL_C_Source_PAL_C_PAL_CCharacter_h_20_RPC_WRAPPERS \
	PAL_C_Source_PAL_C_PAL_CCharacter_h_20_INCLASS \
	PAL_C_Source_PAL_C_PAL_CCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAL_C_Source_PAL_C_PAL_CCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAL_C_Source_PAL_C_PAL_CCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAL_C_Source_PAL_C_PAL_CCharacter_h_20_INCLASS_NO_PURE_DECLS \
	PAL_C_Source_PAL_C_PAL_CCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAL_C_Source_PAL_C_PAL_CCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
