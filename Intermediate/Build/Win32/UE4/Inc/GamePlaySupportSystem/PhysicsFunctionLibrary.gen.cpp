// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/Public/PhysicsFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsFunctionLibrary() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UPhysicsFunctionLibrary_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UPhysicsFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement();
// End Cross Module References
	void UPhysicsFunctionLibrary::StaticRegisterNativesUPhysicsFunctionLibrary()
	{
		UClass* Class = UPhysicsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustMassCenterLocationToDesire", &UPhysicsFunctionLibrary::execAdjustMassCenterLocationToDesire },
			{ "AdjustRotationToDesire", &UPhysicsFunctionLibrary::execAdjustRotationToDesire },
			{ "ExpectMassCenterLocation", &UPhysicsFunctionLibrary::execExpectMassCenterLocation },
			{ "ExpectRotator", &UPhysicsFunctionLibrary::execExpectRotator },
			{ "GetTargetMassCenter", &UPhysicsFunctionLibrary::execGetTargetMassCenter },
			{ "MakeAngularVelocity", &UPhysicsFunctionLibrary::execMakeAngularVelocity },
			{ "MakeLinearVelocity", &UPhysicsFunctionLibrary::execMakeLinearVelocity },
			{ "MinAngularMovement", &UPhysicsFunctionLibrary::execMinAngularMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics
	{
		struct PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms
		{
			FVector MassCenter;
			FVector NowLinearVelocity;
			FVector Desire;
			float Time;
			FVector AddLinearVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddLinearVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desire;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NowLinearVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MassCenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_AddLinearVelocity = { "AddLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms, AddLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_Desire = { "Desire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms, Desire), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_NowLinearVelocity = { "NowLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms, NowLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_MassCenter = { "MassCenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms, MassCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_AddLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_Desire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_NowLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::NewProp_MassCenter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "AdjustMassCenterLocationToDesire", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventAdjustMassCenterLocationToDesire_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics
	{
		struct PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms
		{
			FRotator TargetWorldRotator;
			FVector NowAngularVelocity;
			FRotator Desire;
			float Time;
			FVector AddAngularVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddAngularVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desire;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NowAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetWorldRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_AddAngularVelocity = { "AddAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms, AddAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_Desire = { "Desire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms, Desire), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_NowAngularVelocity = { "NowAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms, NowAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_TargetWorldRotator = { "TargetWorldRotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms, TargetWorldRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_AddAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_Desire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_NowAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::NewProp_TargetWorldRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "AdjustRotationToDesire", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventAdjustRotationToDesire_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics
	{
		struct PhysicsFunctionLibrary_eventExpectMassCenterLocation_Parms
		{
			FVector LinearVelocity;
			FVector MassCenter;
			float Time;
			FVector ExpectMassCenterLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectMassCenterLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MassCenter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_ExpectMassCenterLocation = { "ExpectMassCenterLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectMassCenterLocation_Parms, ExpectMassCenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectMassCenterLocation_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_MassCenter = { "MassCenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectMassCenterLocation_Parms, MassCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectMassCenterLocation_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_ExpectMassCenterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_MassCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::NewProp_LinearVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Location\n" },
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
		{ "ToolTip", "Location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "ExpectMassCenterLocation", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventExpectMassCenterLocation_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics
	{
		struct PhysicsFunctionLibrary_eventExpectRotator_Parms
		{
			FRotator Rotator;
			float Time;
			FVector NowAngularVelocity;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NowAngularVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_NowAngularVelocity = { "NowAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectRotator_Parms, NowAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectRotator_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventExpectRotator_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_NowAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::NewProp_Rotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n//\x09Rotation\n//\x09RelativeRotation?\xcc\xb6??? ?????? ?\xc8\xb5??? ??????..\n//\n" },
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
		{ "ToolTip", "Rotation\nRelativeRotation?\xcc\xb6??? ?????? ?\xc8\xb5??? ??????.." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "ExpectRotator", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventExpectRotator_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics
	{
		struct PhysicsFunctionLibrary_eventGetTargetMassCenter_Parms
		{
			UPrimitiveComponent* Target;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventGetTargetMassCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventGetTargetMassCenter_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "GetTargetMassCenter", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventGetTargetMassCenter_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics
	{
		struct PhysicsFunctionLibrary_eventMakeAngularVelocity_Parms
		{
			float Time;
			FRotator Now;
			FRotator Desire;
			FVector DesireAngularVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesireAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desire;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Now;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_DesireAngularVelocity = { "DesireAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeAngularVelocity_Parms, DesireAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_Desire = { "Desire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeAngularVelocity_Parms, Desire), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_Now = { "Now", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeAngularVelocity_Parms, Now), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeAngularVelocity_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_DesireAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_Desire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_Now,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "MakeAngularVelocity", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventMakeAngularVelocity_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics
	{
		struct PhysicsFunctionLibrary_eventMakeLinearVelocity_Parms
		{
			float Time;
			FVector Now;
			FVector Desire;
			FVector DesireLinearVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesireLinearVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desire;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Now;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_DesireLinearVelocity = { "DesireLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeLinearVelocity_Parms, DesireLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_Desire = { "Desire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeLinearVelocity_Parms, Desire), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_Now = { "Now", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeLinearVelocity_Parms, Now), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMakeLinearVelocity_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_DesireLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_Desire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_Now,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "MakeLinearVelocity", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventMakeLinearVelocity_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics
	{
		struct PhysicsFunctionLibrary_eventMinAngularMovement_Parms
		{
			float Desire;
			float Angular;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angular;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Desire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMinAngularMovement_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::NewProp_Angular = { "Angular", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMinAngularMovement_Parms, Angular), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::NewProp_Desire = { "Desire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsFunctionLibrary_eventMinAngularMovement_Parms, Desire), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::NewProp_Angular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::NewProp_Desire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFunctionLibrary, nullptr, "MinAngularMovement", nullptr, nullptr, sizeof(PhysicsFunctionLibrary_eventMinAngularMovement_Parms), Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsFunctionLibrary_NoRegister()
	{
		return UPhysicsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustMassCenterLocationToDesire, "AdjustMassCenterLocationToDesire" }, // 1734359762
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_AdjustRotationToDesire, "AdjustRotationToDesire" }, // 1254211090
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectMassCenterLocation, "ExpectMassCenterLocation" }, // 2942783007
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_ExpectRotator, "ExpectRotator" }, // 1037857021
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_GetTargetMassCenter, "GetTargetMassCenter" }, // 3374624051
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeAngularVelocity, "MakeAngularVelocity" }, // 34478160
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_MakeLinearVelocity, "MakeLinearVelocity" }, // 3349130661
		{ &Z_Construct_UFunction_UPhysicsFunctionLibrary_MinAngularMovement, "MinAngularMovement" }, // 1488416552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PhysicsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::ClassParams = {
		&UPhysicsFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsFunctionLibrary, 2450778881);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UPhysicsFunctionLibrary>()
	{
		return UPhysicsFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsFunctionLibrary(Z_Construct_UClass_UPhysicsFunctionLibrary, &UPhysicsFunctionLibrary::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UPhysicsFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
