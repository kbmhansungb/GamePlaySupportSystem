// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
#ifdef GAMEPLAYSUPPORTSYSTEM_ActorTagLibrary_generated_h
#error "ActorTagLibrary.generated.h already included, missing '#pragma once' in ActorTagLibrary.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_ActorTagLibrary_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGameModeTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Context); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::RemoveGameModeTag(Z_Param_Context,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameModeTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Context); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::AddGameModeTag(Z_Param_Context,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGameModeTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Context); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_UBOOL_REF(Z_Param_Out_IsHas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::HasGameModeTag(Z_Param_Context,Z_Param_Tag,Z_Param_Out_IsHas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveObjectTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::RemoveObjectTag(Z_Param_Actor,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddObjectTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::AddObjectTag(Z_Param_Actor,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasObjectTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_UBOOL_REF(Z_Param_Out_IsHas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::HasObjectTag(Z_Param_Actor,Z_Param_Tag,Z_Param_Out_IsHas); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGameModeTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Context); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::RemoveGameModeTag(Z_Param_Context,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameModeTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Context); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::AddGameModeTag(Z_Param_Context,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGameModeTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Context); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_UBOOL_REF(Z_Param_Out_IsHas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::HasGameModeTag(Z_Param_Context,Z_Param_Tag,Z_Param_Out_IsHas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveObjectTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::RemoveObjectTag(Z_Param_Actor,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddObjectTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::AddObjectTag(Z_Param_Actor,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasObjectTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_GET_UBOOL_REF(Z_Param_Out_IsHas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorTagLibrary::HasObjectTag(Z_Param_Actor,Z_Param_Tag,Z_Param_Out_IsHas); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTagLibrary(); \
	friend struct Z_Construct_UClass_UActorTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UActorTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UActorTagLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorTagLibrary(); \
	friend struct Z_Construct_UClass_UActorTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UActorTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UActorTagLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTagLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTagLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTagLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorTagLibrary(UActorTagLibrary&&); \
	NO_API UActorTagLibrary(const UActorTagLibrary&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorTagLibrary(UActorTagLibrary&&); \
	NO_API UActorTagLibrary(const UActorTagLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTagLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTagLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_12_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UActorTagLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_Tags_ActorTagLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
