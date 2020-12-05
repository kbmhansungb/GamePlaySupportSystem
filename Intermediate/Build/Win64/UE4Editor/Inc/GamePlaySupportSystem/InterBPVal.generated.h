// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPValRef;
class UProperty;
#ifdef GAMEPLAYSUPPORTSYSTEM_InterBPVal_generated_h
#error "InterBPVal.generated.h already included, missing '#pragma once' in InterBPVal.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_InterBPVal_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopy_BPVal_WithSize) \
	{ \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_ToRef); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_FromRef); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPVal::Copy_BPVal_WithSize(Z_Param_Out_ToRef,Z_Param_Out_FromRef,Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopy_BPVal_WithProperty) \
	{ \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_ToRef); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_FromRef); \
		P_GET_OBJECT(UProperty,Z_Param_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPVal::Copy_BPVal_WithProperty(Z_Param_Out_ToRef,Z_Param_Out_FromRef,Z_Param_Property); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopy_BPVal_WithSize) \
	{ \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_ToRef); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_FromRef); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPVal::Copy_BPVal_WithSize(Z_Param_Out_ToRef,Z_Param_Out_FromRef,Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopy_BPVal_WithProperty) \
	{ \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_ToRef); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_FromRef); \
		P_GET_OBJECT(UProperty,Z_Param_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBPVal::Copy_BPVal_WithProperty(Z_Param_Out_ToRef,Z_Param_Out_FromRef,Z_Param_Property); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterBPVal(); \
	friend struct Z_Construct_UClass_UInterBPVal_Statics; \
public: \
	DECLARE_CLASS(UInterBPVal, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBPVal)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInterBPVal(); \
	friend struct Z_Construct_UClass_UInterBPVal_Statics; \
public: \
	DECLARE_CLASS(UInterBPVal, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBPVal)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBPVal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBPVal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBPVal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBPVal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBPVal(UInterBPVal&&); \
	NO_API UInterBPVal(const UInterBPVal&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBPVal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBPVal(UInterBPVal&&); \
	NO_API UInterBPVal(const UInterBPVal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBPVal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBPVal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBPVal)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_10_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UInterBPVal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBPVal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
