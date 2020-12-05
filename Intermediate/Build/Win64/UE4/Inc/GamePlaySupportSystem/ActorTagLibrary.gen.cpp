// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/Public/Tags/ActorTagLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorTagLibrary() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UActorTagLibrary_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UActorTagLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UActorTagLibrary_AddObjectTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UActorTagLibrary_HasObjectTag();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag();
// End Cross Module References
	void UActorTagLibrary::StaticRegisterNativesUActorTagLibrary()
	{
		UClass* Class = UActorTagLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameModeTag", &UActorTagLibrary::execAddGameModeTag },
			{ "AddObjectTag", &UActorTagLibrary::execAddObjectTag },
			{ "HasGameModeTag", &UActorTagLibrary::execHasGameModeTag },
			{ "HasObjectTag", &UActorTagLibrary::execHasObjectTag },
			{ "RemoveGameModeTag", &UActorTagLibrary::execRemoveGameModeTag },
			{ "RemoveObjectTag", &UActorTagLibrary::execRemoveObjectTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics
	{
		struct ActorTagLibrary_eventAddGameModeTag_Parms
		{
			UObject* Context;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventAddGameModeTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventAddGameModeTag_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorTagLibrary, nullptr, "AddGameModeTag", nullptr, nullptr, sizeof(ActorTagLibrary_eventAddGameModeTag_Parms), Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics
	{
		struct ActorTagLibrary_eventAddObjectTag_Parms
		{
			AActor* Actor;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventAddObjectTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventAddObjectTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorTagLibrary, nullptr, "AddObjectTag", nullptr, nullptr, sizeof(ActorTagLibrary_eventAddObjectTag_Parms), Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorTagLibrary_AddObjectTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorTagLibrary_AddObjectTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics
	{
		struct ActorTagLibrary_eventHasGameModeTag_Parms
		{
			UObject* Context;
			FName Tag;
			bool IsHas;
		};
		static void NewProp_IsHas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHas;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_IsHas_SetBit(void* Obj)
	{
		((ActorTagLibrary_eventHasGameModeTag_Parms*)Obj)->IsHas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_IsHas = { "IsHas", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorTagLibrary_eventHasGameModeTag_Parms), &Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_IsHas_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventHasGameModeTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventHasGameModeTag_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_IsHas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorTagLibrary, nullptr, "HasGameModeTag", nullptr, nullptr, sizeof(ActorTagLibrary_eventHasGameModeTag_Parms), Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics
	{
		struct ActorTagLibrary_eventHasObjectTag_Parms
		{
			AActor* Actor;
			FName Tag;
			bool IsHas;
		};
		static void NewProp_IsHas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHas;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_IsHas_SetBit(void* Obj)
	{
		((ActorTagLibrary_eventHasObjectTag_Parms*)Obj)->IsHas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_IsHas = { "IsHas", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorTagLibrary_eventHasObjectTag_Parms), &Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_IsHas_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventHasObjectTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventHasObjectTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_IsHas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorTagLibrary, nullptr, "HasObjectTag", nullptr, nullptr, sizeof(ActorTagLibrary_eventHasObjectTag_Parms), Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorTagLibrary_HasObjectTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorTagLibrary_HasObjectTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics
	{
		struct ActorTagLibrary_eventRemoveGameModeTag_Parms
		{
			UObject* Context;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventRemoveGameModeTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventRemoveGameModeTag_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorTagLibrary, nullptr, "RemoveGameModeTag", nullptr, nullptr, sizeof(ActorTagLibrary_eventRemoveGameModeTag_Parms), Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics
	{
		struct ActorTagLibrary_eventRemoveObjectTag_Parms
		{
			AActor* Actor;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventRemoveObjectTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorTagLibrary_eventRemoveObjectTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorTagLibrary, nullptr, "RemoveObjectTag", nullptr, nullptr, sizeof(ActorTagLibrary_eventRemoveObjectTag_Parms), Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorTagLibrary_NoRegister()
	{
		return UActorTagLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UActorTagLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorTagLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorTagLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorTagLibrary_AddGameModeTag, "AddGameModeTag" }, // 1905763763
		{ &Z_Construct_UFunction_UActorTagLibrary_AddObjectTag, "AddObjectTag" }, // 2381382274
		{ &Z_Construct_UFunction_UActorTagLibrary_HasGameModeTag, "HasGameModeTag" }, // 3646552615
		{ &Z_Construct_UFunction_UActorTagLibrary_HasObjectTag, "HasObjectTag" }, // 1591938374
		{ &Z_Construct_UFunction_UActorTagLibrary_RemoveGameModeTag, "RemoveGameModeTag" }, // 2634856656
		{ &Z_Construct_UFunction_UActorTagLibrary_RemoveObjectTag, "RemoveObjectTag" }, // 3126442514
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorTagLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tags/ActorTagLibrary.h" },
		{ "ModuleRelativePath", "Public/Tags/ActorTagLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorTagLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTagLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorTagLibrary_Statics::ClassParams = {
		&UActorTagLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorTagLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorTagLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorTagLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorTagLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorTagLibrary, 2343613829);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UActorTagLibrary>()
	{
		return UActorTagLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorTagLibrary(Z_Construct_UClass_UActorTagLibrary, &UActorTagLibrary::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UActorTagLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTagLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
