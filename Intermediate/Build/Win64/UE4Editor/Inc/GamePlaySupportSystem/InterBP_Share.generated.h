// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFunction;
struct FBPFuncRef;
class UObject;
class UProperty;
struct FBPValRef;
#ifdef GAMEPLAYSUPPORTSYSTEM_InterBP_Share_generated_h
#error "InterBP_Share.generated.h already included, missing '#pragma once' in InterBP_Share.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_InterBP_Share_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPFuncRef_Statics; \
	GAMEPLAYSUPPORTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* StaticStruct<struct FBPFuncRef>();

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPValRef_Statics; \
	GAMEPLAYSUPPORTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* StaticStruct<struct FBPValRef>();

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBPFuncRef) \
	{ \
		P_GET_OBJECT(UFunction,Z_Param_Function); \
		P_GET_STRUCT_REF(FBPFuncRef,Z_Param_Out_BPFuncRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetBPFuncRef(Z_Param_Function,Z_Param_Out_BPFuncRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUFunctionByName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FuncName); \
		P_GET_OBJECT_REF(UFunction,Z_Param_Out_Function); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetUFunctionByName(Z_Param_Class,Z_Param_FuncName,Z_Param_Out_Function); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBPValRef) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_OBJECT(UProperty,Z_Param_Property); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_BPValRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetBPValRef(Z_Param_Object,Z_Param_Property,Z_Param_Out_BPValRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUPropertyByName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_OBJECT_REF(UProperty,Z_Param_Out_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetUPropertyByName(Z_Param_Class,Z_Param_PropertyName,Z_Param_Out_Property); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBPFuncRef) \
	{ \
		P_GET_OBJECT(UFunction,Z_Param_Function); \
		P_GET_STRUCT_REF(FBPFuncRef,Z_Param_Out_BPFuncRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetBPFuncRef(Z_Param_Function,Z_Param_Out_BPFuncRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUFunctionByName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FuncName); \
		P_GET_OBJECT_REF(UFunction,Z_Param_Out_Function); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetUFunctionByName(Z_Param_Class,Z_Param_FuncName,Z_Param_Out_Function); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBPValRef) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_OBJECT(UProperty,Z_Param_Property); \
		P_GET_STRUCT_REF(FBPValRef,Z_Param_Out_BPValRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetBPValRef(Z_Param_Object,Z_Param_Property,Z_Param_Out_BPValRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUPropertyByName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_OBJECT_REF(UProperty,Z_Param_Out_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInterBP_Share::GetUPropertyByName(Z_Param_Class,Z_Param_PropertyName,Z_Param_Out_Property); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterBP_Share(); \
	friend struct Z_Construct_UClass_UInterBP_Share_Statics; \
public: \
	DECLARE_CLASS(UInterBP_Share, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBP_Share)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUInterBP_Share(); \
	friend struct Z_Construct_UClass_UInterBP_Share_Statics; \
public: \
	DECLARE_CLASS(UInterBP_Share, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UInterBP_Share)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBP_Share(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBP_Share) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBP_Share); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBP_Share); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBP_Share(UInterBP_Share&&); \
	NO_API UInterBP_Share(const UInterBP_Share&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterBP_Share(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterBP_Share(UInterBP_Share&&); \
	NO_API UInterBP_Share(const UInterBP_Share&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterBP_Share); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterBP_Share); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterBP_Share)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_40_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UInterBP_Share>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_InterBP_Share_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
