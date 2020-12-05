// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFunction;
struct FBPValRef;
#ifdef GAMEPLAYSUPPORTSYSTEM_InterBPFunc_generated_h
#error "InterBPFunc.generated.h already included, missing '#pragma once' in InterBPFunc.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_InterBPFunc_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCall_UFunc_NoParm) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_GET_OBJECT(UFunction,Z_Param_UFunc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPFunc::Call_UFunc_NoParm(Z_Param_Obj,Z_Param_UFunc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCall_UFunc_WithParm) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_GET_OBJECT(UFunction,Z_Param_UFunc); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_ValRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPFunc::Call_UFunc_WithParm(Z_Param_Obj,Z_Param_UFunc,Z_Param_Out_ValRef); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCall_UFunc_NoParm) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_GET_OBJECT(UFunction,Z_Param_UFunc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPFunc::Call_UFunc_NoParm(Z_Param_Obj,Z_Param_UFunc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCall_UFunc_WithParm) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_GET_OBJECT(UFunction,Z_Param_UFunc); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_ValRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPFunc::Call_UFunc_WithParm(Z_Param_Obj,Z_Param_UFunc,Z_Param_Out_ValRef); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterBPFunc(); \
	friend struct Z_Construct_UClass_UInterBPFunc_Statics; \
public: \
	DECLARE_CLASS(UInterBPFunc, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBPFunc)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInterBPFunc(); \
	friend struct Z_Construct_UClass_UInterBPFunc_Statics; \
public: \
	DECLARE_CLASS(UInterBPFunc, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBPFunc)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBPFunc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBPFunc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBPFunc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBPFunc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBPFunc(UInterBPFunc&&); \
	NO_API UInterBPFunc(const UInterBPFunc&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBPFunc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBPFunc(UInterBPFunc&&); \
	NO_API UInterBPFunc(const UInterBPFunc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBPFunc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBPFunc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBPFunc)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_17_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UInterBPFunc>();

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverride_UFunc) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPFunc2::Override_UFunc(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverride_UFunc) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPFunc2::Override_UFunc(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterBPFunc2(); \
	friend struct Z_Construct_UClass_UInterBPFunc2_Statics; \
public: \
	DECLARE_CLASS(UInterBPFunc2, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBPFunc2)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUInterBPFunc2(); \
	friend struct Z_Construct_UClass_UInterBPFunc2_Statics; \
public: \
	DECLARE_CLASS(UInterBPFunc2, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBPFunc2)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBPFunc2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBPFunc2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBPFunc2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBPFunc2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBPFunc2(UInterBPFunc2&&); \
	NO_API UInterBPFunc2(const UInterBPFunc2&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBPFunc2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBPFunc2(UInterBPFunc2&&); \
	NO_API UInterBPFunc2(const UInterBPFunc2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBPFunc2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBPFunc2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBPFunc2)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_34_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UInterBPFunc2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPFunc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
