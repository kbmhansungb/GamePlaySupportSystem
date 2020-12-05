// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/ActivityStruct/Complement/ActivityStruct_With.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivityStruct_With() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_With_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAC_With();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UOOAComplement();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UOOAC_With::StaticRegisterNativesUOOAC_With()
	{
	}
	UClass* Z_Construct_UClass_UOOAC_With_NoRegister()
	{
		return UOOAC_With::StaticClass();
	}
	struct Z_Construct_UClass_UOOAC_With_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_With_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_With;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOOAC_With_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOOAComplement,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_With_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OOA" },
		{ "Comment", "//??... ?\xce\xba??\xe4\xb8\xae?? ?\xd6\xb4? ???????? ???????? ?\xdb\xb5?.\n" },
		{ "IncludePath", "ActivityStruct/Complement/ActivityStruct_With.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_With.h" },
		{ "ToolTip", "??... ?\xce\xba??\xe4\xb8\xae?? ?\xd6\xb4? ???????? ???????? ?\xdb\xb5?." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOOAC_With_Statics::NewProp_With_MetaData[] = {
		{ "Category", "OOAC_With" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "ActivityStruct/Complement/ActivityStruct_With.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOOAC_With_Statics::NewProp_With = { "With", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOOAC_With, With), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOOAC_With_Statics::NewProp_With_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_With_Statics::NewProp_With_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOOAC_With_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOOAC_With_Statics::NewProp_With,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOOAC_With_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOOAC_With>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOOAC_With_Statics::ClassParams = {
		&UOOAC_With::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOOAC_With_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_With_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOOAC_With_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOOAC_With_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOOAC_With()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOOAC_With_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOOAC_With, 4172213300);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UOOAC_With>()
	{
		return UOOAC_With::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOOAC_With(Z_Construct_UClass_UOOAC_With, &UOOAC_With::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UOOAC_With"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOOAC_With);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
