// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UPrimitiveComponent;
class AActor;
class UActorComponent;
#ifdef GAMEPLAYSUPPORTSYSTEM_ComponentSupportFunctionLibrary_generated_h
#error "ComponentSupportFunctionLibrary.generated.h already included, missing '#pragma once' in ComponentSupportFunctionLibrary.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_ComponentSupportFunctionLibrary_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::SpawnComponent(Z_Param_Parent,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildComponentByClass) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Start); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::GetChildComponentByClass(Z_Param_Start,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMostParentPrimitiveComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_StartComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::MostParentPrimitiveComponent(Z_Param_StartComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegister) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::Register(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRegisted) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UComponentSupportFunctionLibrary::IsRegisted(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnRegister) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::UnRegister(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindComponentByNameInActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SearchedActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::FindComponentByNameInActor(Z_Param_SearchedActor,Z_Param_TargetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindComponentByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Start); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TargetName); \
		P_GET_OBJECT_REF(UActorComponent,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::FindComponentByName(Z_Param_Start,Z_Param_TargetName,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UComponentSupportFunctionLibrary::GetComponentName(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmartFindComponentByClass) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::SmartFindComponentByClass(Z_Param_Actor,Z_Param_ComponentClass,Z_Param_Name); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::SpawnComponent(Z_Param_Parent,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildComponentByClass) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Start); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::GetChildComponentByClass(Z_Param_Start,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMostParentPrimitiveComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_StartComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::MostParentPrimitiveComponent(Z_Param_StartComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegister) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::Register(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRegisted) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UComponentSupportFunctionLibrary::IsRegisted(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnRegister) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::UnRegister(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindComponentByNameInActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SearchedActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::FindComponentByNameInActor(Z_Param_SearchedActor,Z_Param_TargetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindComponentByName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Start); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TargetName); \
		P_GET_OBJECT_REF(UActorComponent,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentSupportFunctionLibrary::FindComponentByName(Z_Param_Start,Z_Param_TargetName,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentName) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UComponentSupportFunctionLibrary::GetComponentName(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSmartFindComponentByClass) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UComponentSupportFunctionLibrary::SmartFindComponentByClass(Z_Param_Actor,Z_Param_ComponentClass,Z_Param_Name); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentSupportFunctionLibrary(); \
	friend struct Z_Construct_UClass_UComponentSupportFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UComponentSupportFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UComponentSupportFunctionLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUComponentSupportFunctionLibrary(); \
	friend struct Z_Construct_UClass_UComponentSupportFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UComponentSupportFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UComponentSupportFunctionLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentSupportFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentSupportFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentSupportFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentSupportFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentSupportFunctionLibrary(UComponentSupportFunctionLibrary&&); \
	NO_API UComponentSupportFunctionLibrary(const UComponentSupportFunctionLibrary&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentSupportFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentSupportFunctionLibrary(UComponentSupportFunctionLibrary&&); \
	NO_API UComponentSupportFunctionLibrary(const UComponentSupportFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentSupportFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentSupportFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentSupportFunctionLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_13_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UComponentSupportFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_ComponentSupportFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
