// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/ActivityStruct/Complement/ActivityStruct_HaveAndHold.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivityStruct_HaveAndHold() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_Have_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_Have();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAComplement();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_HoldOn_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_HoldOn();
// End Cross Module References
	void UOOAC_Have::StaticRegisterNativesUOOAC_Have()
	{
	}
	UClass* Z_Construct_UClass_UOOAC_Have_NoRegister()
	{
		return UOOAC_Have::StaticClass();
	}
	struct Z_Construct_UClass_UOOAC_Have_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Have_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Have;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Have_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOOAC_Have_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOOAComplement,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_Have_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OOA" },
		{ "Comment", "//??... ?\xce\xba??\xe4\xb8\xae?? ?\xd6\xb4? ???????? ???????? ?\xdb\xb5?.\n" },
		{ "IncludePath", "ActivityStruct/Complement/ActivityStruct_HaveAndHold.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_HaveAndHold.h" },
		{ "ToolTip", "??... ?\xce\xba??\xe4\xb8\xae?? ?\xd6\xb4? ???????? ???????? ?\xdb\xb5?." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have_MetaData[] = {
		{ "Category", "OOAC_Have" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_HaveAndHold.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have = { "Have", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOOAC_Have, Have), METADATA_PARAMS(Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have_ElementProp = { "Have", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOOAC_Have_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_Have_Statics::NewProp_Have_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOOAC_Have_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOOAC_Have>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOOAC_Have_Statics::ClassParams = {
		&UOOAC_Have::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOOAC_Have_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_Have_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOOAC_Have_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_Have_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOOAC_Have()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOOAC_Have_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOOAC_Have, 969204196);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UOOAC_Have>()
	{
		return UOOAC_Have::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOOAC_Have(Z_Construct_UClass_UOOAC_Have, &UOOAC_Have::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UOOAC_Have"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOOAC_Have);
	void UOOAC_HoldOn::StaticRegisterNativesUOOAC_HoldOn()
	{
	}
	UClass* Z_Construct_UClass_UOOAC_HoldOn_NoRegister()
	{
		return UOOAC_HoldOn::StaticClass();
	}
	struct Z_Construct_UClass_UOOAC_HoldOn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldOnObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldOnObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOOAC_HoldOn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOOAComplement,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_HoldOn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OOA" },
		{ "IncludePath", "ActivityStruct/Complement/ActivityStruct_HaveAndHold.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_HaveAndHold.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_HoldOn_Statics::NewProp_HoldOnObject_MetaData[] = {
		{ "Category", "OOAC_HoldOn" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_HaveAndHold.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOOAC_HoldOn_Statics::NewProp_HoldOnObject = { "HoldOnObject", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOOAC_HoldOn, HoldOnObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOOAC_HoldOn_Statics::NewProp_HoldOnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_HoldOn_Statics::NewProp_HoldOnObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOOAC_HoldOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_HoldOn_Statics::NewProp_HoldOnObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOOAC_HoldOn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOOAC_HoldOn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOOAC_HoldOn_Statics::ClassParams = {
		&UOOAC_HoldOn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOOAC_HoldOn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_HoldOn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOOAC_HoldOn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_HoldOn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOOAC_HoldOn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOOAC_HoldOn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOOAC_HoldOn, 2032079955);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UOOAC_HoldOn>()
	{
		return UOOAC_HoldOn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOOAC_HoldOn(Z_Construct_UClass_UOOAC_HoldOn, &UOOAC_HoldOn::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UOOAC_HoldOn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOOAC_HoldOn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
