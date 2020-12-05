// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/ActivityStruct/Complement/ActivityStruct_ObjectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivityStruct_ObjectType() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_SubObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_SubObject();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAComplement();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_MultipleObjects_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_MultipleObjects();
// End Cross Module References
	void UOOAC_SubObject::StaticRegisterNativesUOOAC_SubObject()
	{
	}
	UClass* Z_Construct_UClass_UOOAC_SubObject_NoRegister()
	{
		return UOOAC_SubObject::StaticClass();
	}
	struct Z_Construct_UClass_UOOAC_SubObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOOAC_SubObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOOAComplement,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_SubObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OOA" },
		{ "Comment", "//??... ?\xce\xba??\xe4\xb8\xae?? ?\xd6\xb4? ???????? ???????? ?\xdb\xb5?.\n" },
		{ "IncludePath", "ActivityStruct/Complement/ActivityStruct_ObjectType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_ObjectType.h" },
		{ "ToolTip", "??... ?\xce\xba??\xe4\xb8\xae?? ?\xd6\xb4? ???????? ???????? ?\xdb\xb5?." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_SubObject_Statics::NewProp_SubObject_MetaData[] = {
		{ "Category", "OOAC_SubObject" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_ObjectType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOOAC_SubObject_Statics::NewProp_SubObject = { "SubObject", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOOAC_SubObject, SubObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOOAC_SubObject_Statics::NewProp_SubObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_SubObject_Statics::NewProp_SubObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOOAC_SubObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_SubObject_Statics::NewProp_SubObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOOAC_SubObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOOAC_SubObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOOAC_SubObject_Statics::ClassParams = {
		&UOOAC_SubObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOOAC_SubObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_SubObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOOAC_SubObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_SubObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOOAC_SubObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOOAC_SubObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOOAC_SubObject, 4268317537);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UOOAC_SubObject>()
	{
		return UOOAC_SubObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOOAC_SubObject(Z_Construct_UClass_UOOAC_SubObject, &UOOAC_SubObject::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UOOAC_SubObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOOAC_SubObject);
	void UOOAC_MultipleObjects::StaticRegisterNativesUOOAC_MultipleObjects()
	{
	}
	UClass* Z_Construct_UClass_UOOAC_MultipleObjects_NoRegister()
	{
		return UOOAC_MultipleObjects::StaticClass();
	}
	struct Z_Construct_UClass_UOOAC_MultipleObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MultipleObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultipleObjects_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOOAC_MultipleObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOOAComplement,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_MultipleObjects_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OOA" },
		{ "IncludePath", "ActivityStruct/Complement/ActivityStruct_ObjectType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_ObjectType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects_MetaData[] = {
		{ "Category", "OOAC_MultipleObjects" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_ObjectType.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects = { "MultipleObjects", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOOAC_MultipleObjects, MultipleObjects), METADATA_PARAMS(Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects_ElementProp = { "MultipleObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOOAC_MultipleObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_MultipleObjects_Statics::NewProp_MultipleObjects_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOOAC_MultipleObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOOAC_MultipleObjects>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOOAC_MultipleObjects_Statics::ClassParams = {
		&UOOAC_MultipleObjects::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOOAC_MultipleObjects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_MultipleObjects_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOOAC_MultipleObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_MultipleObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOOAC_MultipleObjects()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOOAC_MultipleObjects_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOOAC_MultipleObjects, 2704703613);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UOOAC_MultipleObjects>()
	{
		return UOOAC_MultipleObjects::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOOAC_MultipleObjects(Z_Construct_UClass_UOOAC_MultipleObjects, &UOOAC_MultipleObjects::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UOOAC_MultipleObjects"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOOAC_MultipleObjects);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
