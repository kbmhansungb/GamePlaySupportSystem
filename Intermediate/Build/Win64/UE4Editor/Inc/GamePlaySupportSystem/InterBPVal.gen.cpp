// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/Public/InterBPVal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterBPVal() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBPVal_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBPVal();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBPValRef();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize();
// End Cross Module References
	void UInterBPVal::StaticRegisterNativesUInterBPVal()
	{
		UClass* Class = UInterBPVal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Copy_BPVal_WithProperty", &UInterBPVal::execCopy_BPVal_WithProperty },
			{ "Copy_BPVal_WithSize", &UInterBPVal::execCopy_BPVal_WithSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics
	{
		struct InterBPVal_eventCopy_BPVal_WithProperty_Parms
		{
			FBPValRef ToRef;
			FBPValRef FromRef;
			UProperty* Property;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPVal_eventCopy_BPVal_WithProperty_Parms, Property), Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_FromRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_FromRef = { "FromRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPVal_eventCopy_BPVal_WithProperty_Parms, FromRef), Z_Construct_UScriptStruct_FBPValRef, METADATA_PARAMS(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_FromRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_FromRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_ToRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_ToRef = { "ToRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPVal_eventCopy_BPVal_WithProperty_Parms, ToRef), Z_Construct_UScriptStruct_FBPValRef, METADATA_PARAMS(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_ToRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_ToRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_FromRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::NewProp_ToRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// It is same, that get From val and set To Val.\n// it is used test that Copy BP Val.\n" },
		{ "ModuleRelativePath", "Public/InterBPVal.h" },
		{ "ToolTip", "It is same, that get From val and set To Val.\nit is used test that Copy BP Val." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBPVal, nullptr, "Copy_BPVal_WithProperty", nullptr, nullptr, sizeof(InterBPVal_eventCopy_BPVal_WithProperty_Parms), Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics
	{
		struct InterBPVal_eventCopy_BPVal_WithSize_Parms
		{
			FBPValRef ToRef;
			FBPValRef FromRef;
			int32 Size;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPVal_eventCopy_BPVal_WithSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_FromRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_FromRef = { "FromRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPVal_eventCopy_BPVal_WithSize_Parms, FromRef), Z_Construct_UScriptStruct_FBPValRef, METADATA_PARAMS(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_FromRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_FromRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_ToRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_ToRef = { "ToRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPVal_eventCopy_BPVal_WithSize_Parms, ToRef), Z_Construct_UScriptStruct_FBPValRef, METADATA_PARAMS(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_ToRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_ToRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_FromRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::NewProp_ToRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Copy some value to blueprint value.\n// Only based on ToRef RefSize.\n" },
		{ "ModuleRelativePath", "Public/InterBPVal.h" },
		{ "ToolTip", "Copy some value to blueprint value.\nOnly based on ToRef RefSize." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBPVal, nullptr, "Copy_BPVal_WithSize", nullptr, nullptr, sizeof(InterBPVal_eventCopy_BPVal_WithSize_Parms), Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterBPVal_NoRegister()
	{
		return UInterBPVal::StaticClass();
	}
	struct Z_Construct_UClass_UInterBPVal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterBPVal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterBPVal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithProperty, "Copy_BPVal_WithProperty" }, // 2889515180
		{ &Z_Construct_UFunction_UInterBPVal_Copy_BPVal_WithSize, "Copy_BPVal_WithSize" }, // 2870355281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterBPVal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterBPVal.h" },
		{ "ModuleRelativePath", "Public/InterBPVal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterBPVal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterBPVal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterBPVal_Statics::ClassParams = {
		&UInterBPVal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterBPVal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterBPVal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterBPVal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterBPVal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterBPVal, 2285018847);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UInterBPVal>()
	{
		return UInterBPVal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterBPVal(Z_Construct_UClass_UInterBPVal, &UInterBPVal::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UInterBPVal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterBPVal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
