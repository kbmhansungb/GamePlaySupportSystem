// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/Public/InterBP_Share.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterBP_Share() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBPFuncRef();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBPValRef();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBP_Share_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBP_Share();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBP_Share_GetBPValRef();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName();
// End Cross Module References
class UScriptStruct* FBPFuncRef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYSUPPORTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FBPFuncRef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFuncRef, Z_Construct_UPackage__Script_GamePlaySupportSystem(), TEXT("BPFuncRef"), sizeof(FBPFuncRef), Get_Z_Construct_UScriptStruct_FBPFuncRef_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* StaticStruct<FBPFuncRef>()
{
	return FBPFuncRef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFuncRef(FBPFuncRef::StaticStruct, TEXT("/Script/GamePlaySupportSystem"), TEXT("BPFuncRef"), false, nullptr, nullptr);
static struct FScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFBPFuncRef
{
	FScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFBPFuncRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFuncRef")),new UScriptStruct::TCppStructOps<FBPFuncRef>);
	}
} ScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFBPFuncRef;
	struct Z_Construct_UScriptStruct_FBPFuncRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFuncRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPFuncRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFuncRef>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPFuncRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
		nullptr,
		&NewStructOps,
		"BPFuncRef",
		sizeof(FBPFuncRef),
		alignof(FBPFuncRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFuncRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFuncRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPFuncRef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFuncRef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GamePlaySupportSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFuncRef"), sizeof(FBPFuncRef), Get_Z_Construct_UScriptStruct_FBPFuncRef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPFuncRef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFuncRef_Hash() { return 836266989U; }
class UScriptStruct* FBPValRef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYSUPPORTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FBPValRef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPValRef, Z_Construct_UPackage__Script_GamePlaySupportSystem(), TEXT("BPValRef"), sizeof(FBPValRef), Get_Z_Construct_UScriptStruct_FBPValRef_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* StaticStruct<FBPValRef>()
{
	return FBPValRef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPValRef(FBPValRef::StaticStruct, TEXT("/Script/GamePlaySupportSystem"), TEXT("BPValRef"), false, nullptr, nullptr);
static struct FScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFBPValRef
{
	FScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFBPValRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPValRef")),new UScriptStruct::TCppStructOps<FBPValRef>);
	}
} ScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFBPValRef;
	struct Z_Construct_UScriptStruct_FBPValRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPValRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPValRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPValRef>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPValRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
		nullptr,
		&NewStructOps,
		"BPValRef",
		sizeof(FBPValRef),
		alignof(FBPValRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPValRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPValRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPValRef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPValRef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GamePlaySupportSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPValRef"), sizeof(FBPValRef), Get_Z_Construct_UScriptStruct_FBPValRef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPValRef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPValRef_Hash() { return 988602534U; }
	void UInterBP_Share::StaticRegisterNativesUInterBP_Share()
	{
		UClass* Class = UInterBP_Share::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBPFuncRef", &UInterBP_Share::execGetBPFuncRef },
			{ "GetBPValRef", &UInterBP_Share::execGetBPValRef },
			{ "GetUFunctionByName", &UInterBP_Share::execGetUFunctionByName },
			{ "GetUPropertyByName", &UInterBP_Share::execGetUPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics
	{
		struct InterBP_Share_eventGetBPFuncRef_Parms
		{
			UFunction* Function;
			FBPFuncRef BPFuncRef;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BPFuncRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::NewProp_BPFuncRef = { "BPFuncRef", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetBPFuncRef_Parms, BPFuncRef), Z_Construct_UScriptStruct_FBPFuncRef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetBPFuncRef_Parms, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::NewProp_BPFuncRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::NewProp_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBP_Share, nullptr, "GetBPFuncRef", nullptr, nullptr, sizeof(InterBP_Share_eventGetBPFuncRef_Parms), Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics
	{
		struct InterBP_Share_eventGetBPValRef_Parms
		{
			UObject* Object;
			UProperty* Property;
			FBPValRef BPValRef;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BPValRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::NewProp_BPValRef = { "BPValRef", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetBPValRef_Parms, BPValRef), Z_Construct_UScriptStruct_FBPValRef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetBPValRef_Parms, Property), Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetBPValRef_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::NewProp_BPValRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBP_Share, nullptr, "GetBPValRef", nullptr, nullptr, sizeof(InterBP_Share_eventGetBPValRef_Parms), Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBP_Share_GetBPValRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBP_Share_GetBPValRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics
	{
		struct InterBP_Share_eventGetUFunctionByName_Parms
		{
			UClass* Class;
			FName FuncName;
			UFunction* Function;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FuncName;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetUFunctionByName_Parms, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::NewProp_FuncName = { "FuncName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetUFunctionByName_Parms, FuncName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetUFunctionByName_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::NewProp_FuncName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBP_Share, nullptr, "GetUFunctionByName", nullptr, nullptr, sizeof(InterBP_Share_eventGetUFunctionByName_Parms), Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics
	{
		struct InterBP_Share_eventGetUPropertyByName_Parms
		{
			UClass* Class;
			FName PropertyName;
			UProperty* Property;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetUPropertyByName_Parms, Property), Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetUPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBP_Share_eventGetUPropertyByName_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBP_Share, nullptr, "GetUPropertyByName", nullptr, nullptr, sizeof(InterBP_Share_eventGetUPropertyByName_Parms), Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterBP_Share_NoRegister()
	{
		return UInterBP_Share::StaticClass();
	}
	struct Z_Construct_UClass_UInterBP_Share_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterBP_Share_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterBP_Share_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterBP_Share_GetBPFuncRef, "GetBPFuncRef" }, // 2701013591
		{ &Z_Construct_UFunction_UInterBP_Share_GetBPValRef, "GetBPValRef" }, // 270243449
		{ &Z_Construct_UFunction_UInterBP_Share_GetUFunctionByName, "GetUFunctionByName" }, // 1015410396
		{ &Z_Construct_UFunction_UInterBP_Share_GetUPropertyByName, "GetUPropertyByName" }, // 1500950375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterBP_Share_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterBP_Share.h" },
		{ "ModuleRelativePath", "Public/InterBP_Share.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterBP_Share_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterBP_Share>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterBP_Share_Statics::ClassParams = {
		&UInterBP_Share::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterBP_Share_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterBP_Share_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterBP_Share()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterBP_Share_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterBP_Share, 3831639717);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UInterBP_Share>()
	{
		return UInterBP_Share::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterBP_Share(Z_Construct_UClass_UInterBP_Share, &UInterBP_Share::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UInterBP_Share"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterBP_Share);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
