// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/ActivityStruct/ActivityStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivityStruct() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActivityStruct();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAComplement_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAComplement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UComplementFunctionLibrary_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UComplementFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UComplementFunctionLibrary_AddLast();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass();
// End Cross Module References
class UScriptStruct* FActivityStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYSUPPORTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FActivityStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActivityStruct, Z_Construct_UPackage__Script_GamePlaySupportSystem(), TEXT("ActivityStruct"), sizeof(FActivityStruct), Get_Z_Construct_UScriptStruct_FActivityStruct_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* StaticStruct<FActivityStruct>()
{
	return FActivityStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActivityStruct(FActivityStruct::StaticStruct, TEXT("/Script/GamePlaySupportSystem"), TEXT("ActivityStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFActivityStruct
{
	FScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFActivityStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActivityStruct")),new UScriptStruct::TCppStructOps<FActivityStruct>);
	}
} ScriptStruct_GamePlaySupportSystem_StaticRegisterNativesFActivityStruct;
	struct Z_Construct_UScriptStruct_FActivityStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Complement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Complement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivityStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\x09(S : Subject) (V : ActivityType) (O : Object)\n//\x09\x09+ \n//\n//\n" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
		{ "ToolTip", "(S : Subject) (V : ActivityType) (O : Object)\n       +" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActivityStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActivityStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Complement_MetaData[] = {
		{ "Category", "ActivityStruct" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Complement = { "Complement", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActivityStruct, Complement), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Complement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Complement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "ActivityStruct" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActivityStruct, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Subject_MetaData[] = {
		{ "Category", "ActivityStruct" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActivityStruct, Subject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Subject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActivityStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Complement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivityStruct_Statics::NewProp_Subject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActivityStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
		nullptr,
		&NewStructOps,
		"ActivityStruct",
		sizeof(FActivityStruct),
		alignof(FActivityStruct),
		Z_Construct_UScriptStruct_FActivityStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActivityStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActivityStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActivityStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GamePlaySupportSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActivityStruct"), sizeof(FActivityStruct), Get_Z_Construct_UScriptStruct_FActivityStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActivityStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActivityStruct_Hash() { return 283865147U; }
	void UOOAComplement::StaticRegisterNativesUOOAComplement()
	{
	}
	UClass* Z_Construct_UClass_UOOAComplement_NoRegister()
	{
		return UOOAComplement::StaticClass();
	}
	struct Z_Construct_UClass_UOOAComplement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextComplement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextComplement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOOAComplement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAComplement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OOA" },
		{ "Comment", "//\x09----------------------------------------\n//\x09 There are many different types of bore.\n//\x09In order to use this, it must be used as\n//\x09""an object type.\n" },
		{ "IncludePath", "ActivityStruct/ActivityStruct.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
		{ "ToolTip", "There are many different types of bore.\nIn order to use this, it must be used as\nan object type." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAComplement_Statics::NewProp_NextComplement_MetaData[] = {
		{ "Category", "OOAComplement" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOOAComplement_Statics::NewProp_NextComplement = { "NextComplement", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOOAComplement, NextComplement), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOOAComplement_Statics::NewProp_NextComplement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAComplement_Statics::NewProp_NextComplement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOOAComplement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAComplement_Statics::NewProp_NextComplement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOOAComplement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOOAComplement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOOAComplement_Statics::ClassParams = {
		&UOOAComplement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOOAComplement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOOAComplement_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOOAComplement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAComplement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOOAComplement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOOAComplement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOOAComplement, 696794693);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UOOAComplement>()
	{
		return UOOAComplement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOOAComplement(Z_Construct_UClass_UOOAComplement, &UOOAComplement::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UOOAComplement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOOAComplement);
	void UComplementFunctionLibrary::StaticRegisterNativesUComplementFunctionLibrary()
	{
		UClass* Class = UComplementFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLast", &UComplementFunctionLibrary::execAddLast },
			{ "FindComplementByClassAllowSubClass", &UComplementFunctionLibrary::execFindComplementByClassAllowSubClass },
			{ "FindComplementBySpecificClass", &UComplementFunctionLibrary::execFindComplementBySpecificClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics
	{
		struct ComplementFunctionLibrary_eventAddLast_Parms
		{
			UOOAComplement* Front;
			UOOAComplement* Insert;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Insert;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Front;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::NewProp_Insert = { "Insert", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventAddLast_Parms, Insert), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventAddLast_Parms, Front), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::NewProp_Insert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::NewProp_Front,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComplementFunctionLibrary, nullptr, "AddLast", nullptr, nullptr, sizeof(ComplementFunctionLibrary_eventAddLast_Parms), Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComplementFunctionLibrary_AddLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComplementFunctionLibrary_AddLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics
	{
		struct ComplementFunctionLibrary_eventFindComplementByClassAllowSubClass_Parms
		{
			TSubclassOf<UOOAComplement>  TargetClass;
			UOOAComplement* SearchTarget;
			UOOAComplement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchTarget;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventFindComplementByClassAllowSubClass_Parms, ReturnValue), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::NewProp_SearchTarget = { "SearchTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventFindComplementByClassAllowSubClass_Parms, SearchTarget), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::NewProp_TargetClass = { "TargetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventFindComplementByClassAllowSubClass_Parms, TargetClass), Z_Construct_UClass_UOOAComplement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::NewProp_SearchTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::NewProp_TargetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComplementFunctionLibrary, nullptr, "FindComplementByClassAllowSubClass", nullptr, nullptr, sizeof(ComplementFunctionLibrary_eventFindComplementByClassAllowSubClass_Parms), Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics
	{
		struct ComplementFunctionLibrary_eventFindComplementBySpecificClass_Parms
		{
			TSubclassOf<UOOAComplement>  TargetClass;
			UOOAComplement* SearchTarget;
			UOOAComplement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchTarget;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventFindComplementBySpecificClass_Parms, ReturnValue), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::NewProp_SearchTarget = { "SearchTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventFindComplementBySpecificClass_Parms, SearchTarget), Z_Construct_UClass_UOOAComplement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::NewProp_TargetClass = { "TargetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComplementFunctionLibrary_eventFindComplementBySpecificClass_Parms, TargetClass), Z_Construct_UClass_UOOAComplement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::NewProp_SearchTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::NewProp_TargetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComplementFunctionLibrary, nullptr, "FindComplementBySpecificClass", nullptr, nullptr, sizeof(ComplementFunctionLibrary_eventFindComplementBySpecificClass_Parms), Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComplementFunctionLibrary_NoRegister()
	{
		return UComplementFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UComplementFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComplementFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComplementFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComplementFunctionLibrary_AddLast, "AddLast" }, // 3429835459
		{ &Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementByClassAllowSubClass, "FindComplementByClassAllowSubClass" }, // 4199864812
		{ &Z_Construct_UFunction_UComplementFunctionLibrary_FindComplementBySpecificClass, "FindComplementBySpecificClass" }, // 1513776478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplementFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActivityStruct/ActivityStruct.h" },
		{ "ModuleRelativePath", "ActivityStruct/ActivityStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComplementFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComplementFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComplementFunctionLibrary_Statics::ClassParams = {
		&UComplementFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComplementFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComplementFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComplementFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComplementFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComplementFunctionLibrary, 2951235275);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UComplementFunctionLibrary>()
	{
		return UComplementFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComplementFunctionLibrary(Z_Construct_UClass_UComplementFunctionLibrary, &UComplementFunctionLibrary::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UComplementFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComplementFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
