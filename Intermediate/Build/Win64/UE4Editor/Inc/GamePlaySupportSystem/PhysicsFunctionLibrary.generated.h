// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
struct FRotator;
#ifdef GAMEPLAYSUPPORTSYSTEM_PhysicsFunctionLibrary_generated_h
#error "PhysicsFunctionLibrary.generated.h already included, missing '#pragma once' in PhysicsFunctionLibrary.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_PhysicsFunctionLibrary_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustMassCenterLocationToDesire) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MassCenter); \
		P_GET_STRUCT(FVector,Z_Param_NowLinearVelocity); \
		P_GET_STRUCT(FVector,Z_Param_Desire); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AddLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::AdjustMassCenterLocationToDesire(Z_Param_MassCenter,Z_Param_NowLinearVelocity,Z_Param_Desire,Z_Param_Time,Z_Param_Out_AddLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLinearVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FVector,Z_Param_Now); \
		P_GET_STRUCT(FVector,Z_Param_Desire); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DesireLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::MakeLinearVelocity(Z_Param_Time,Z_Param_Now,Z_Param_Desire,Z_Param_Out_DesireLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpectMassCenterLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LinearVelocity); \
		P_GET_STRUCT(FVector,Z_Param_MassCenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectMassCenterLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::ExpectMassCenterLocation(Z_Param_LinearVelocity,Z_Param_MassCenter,Z_Param_Time,Z_Param_Out_ExpectMassCenterLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetMassCenter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPhysicsFunctionLibrary::GetTargetMassCenter(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustRotationToDesire) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_TargetWorldRotator); \
		P_GET_STRUCT(FVector,Z_Param_NowAngularVelocity); \
		P_GET_STRUCT(FRotator,Z_Param_Desire); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AddAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::AdjustRotationToDesire(Z_Param_TargetWorldRotator,Z_Param_NowAngularVelocity,Z_Param_Desire,Z_Param_Time,Z_Param_Out_AddAngularVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeAngularVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FRotator,Z_Param_Now); \
		P_GET_STRUCT(FRotator,Z_Param_Desire); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DesireAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::MakeAngularVelocity(Z_Param_Time,Z_Param_Now,Z_Param_Desire,Z_Param_Out_DesireAngularVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinAngularMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Desire); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angular); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPhysicsFunctionLibrary::MinAngularMovement(Z_Param_Desire,Z_Param_Angular); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpectRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FVector,Z_Param_NowAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UPhysicsFunctionLibrary::ExpectRotator(Z_Param_Rotator,Z_Param_Time,Z_Param_NowAngularVelocity); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustMassCenterLocationToDesire) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MassCenter); \
		P_GET_STRUCT(FVector,Z_Param_NowLinearVelocity); \
		P_GET_STRUCT(FVector,Z_Param_Desire); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AddLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::AdjustMassCenterLocationToDesire(Z_Param_MassCenter,Z_Param_NowLinearVelocity,Z_Param_Desire,Z_Param_Time,Z_Param_Out_AddLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLinearVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FVector,Z_Param_Now); \
		P_GET_STRUCT(FVector,Z_Param_Desire); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DesireLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::MakeLinearVelocity(Z_Param_Time,Z_Param_Now,Z_Param_Desire,Z_Param_Out_DesireLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpectMassCenterLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LinearVelocity); \
		P_GET_STRUCT(FVector,Z_Param_MassCenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectMassCenterLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::ExpectMassCenterLocation(Z_Param_LinearVelocity,Z_Param_MassCenter,Z_Param_Time,Z_Param_Out_ExpectMassCenterLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetMassCenter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPhysicsFunctionLibrary::GetTargetMassCenter(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustRotationToDesire) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_TargetWorldRotator); \
		P_GET_STRUCT(FVector,Z_Param_NowAngularVelocity); \
		P_GET_STRUCT(FRotator,Z_Param_Desire); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AddAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::AdjustRotationToDesire(Z_Param_TargetWorldRotator,Z_Param_NowAngularVelocity,Z_Param_Desire,Z_Param_Time,Z_Param_Out_AddAngularVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeAngularVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FRotator,Z_Param_Now); \
		P_GET_STRUCT(FRotator,Z_Param_Desire); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DesireAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPhysicsFunctionLibrary::MakeAngularVelocity(Z_Param_Time,Z_Param_Now,Z_Param_Desire,Z_Param_Out_DesireAngularVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinAngularMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Desire); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angular); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UPhysicsFunctionLibrary::MinAngularMovement(Z_Param_Desire,Z_Param_Angular); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExpectRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_STRUCT(FVector,Z_Param_NowAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UPhysicsFunctionLibrary::ExpectRotator(Z_Param_Rotator,Z_Param_Time,Z_Param_NowAngularVelocity); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPhysicsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPhysicsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsFunctionLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPhysicsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPhysicsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsFunctionLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsFunctionLibrary(UPhysicsFunctionLibrary&&); \
	NO_API UPhysicsFunctionLibrary(const UPhysicsFunctionLibrary&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsFunctionLibrary(UPhysicsFunctionLibrary&&); \
	NO_API UPhysicsFunctionLibrary(const UPhysicsFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsFunctionLibrary)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_10_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UPhysicsFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_PhysicsFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
