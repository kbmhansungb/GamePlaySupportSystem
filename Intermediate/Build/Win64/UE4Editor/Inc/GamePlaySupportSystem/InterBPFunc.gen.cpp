// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/Public/InterBPFunc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterBPFunc() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBPFunc_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBPFunc();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm();
	GAMEPLAYSUPPORTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBPValRef();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBPFunc2_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UInterBPFunc2();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UInterBPFunc2_Override_UFunc();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UInterBPFunc::StaticRegisterNativesUInterBPFunc()
	{
		UClass* Class = UInterBPFunc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Call_UFunc_NoParm", &UInterBPFunc::execCall_UFunc_NoParm },
			{ "Call_UFunc_WithParm", &UInterBPFunc::execCall_UFunc_WithParm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics
	{
		struct InterBPFunc_eventCall_UFunc_NoParm_Parms
		{
			UObject* Obj;
			UFunction* UFunc;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UFunc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::NewProp_UFunc = { "UFunc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPFunc_eventCall_UFunc_NoParm_Parms, UFunc), Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPFunc_eventCall_UFunc_NoParm_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::NewProp_UFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBPFunc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBPFunc, nullptr, "Call_UFunc_NoParm", nullptr, nullptr, sizeof(InterBPFunc_eventCall_UFunc_NoParm_Parms), Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics
	{
		struct InterBPFunc_eventCall_UFunc_WithParm_Parms
		{
			UObject* Obj;
			UFunction* UFunc;
			FBPValRef ValRef;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UFunc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_ValRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_ValRef = { "ValRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPFunc_eventCall_UFunc_WithParm_Parms, ValRef), Z_Construct_UScriptStruct_FBPValRef, METADATA_PARAMS(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_ValRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_ValRef_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_UFunc = { "UFunc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPFunc_eventCall_UFunc_WithParm_Parms, UFunc), Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPFunc_eventCall_UFunc_WithParm_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_ValRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_UFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBPFunc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBPFunc, nullptr, "Call_UFunc_WithParm", nullptr, nullptr, sizeof(InterBPFunc_eventCall_UFunc_WithParm_Parms), Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterBPFunc_NoRegister()
	{
		return UInterBPFunc::StaticClass();
	}
	struct Z_Construct_UClass_UInterBPFunc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterBPFunc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterBPFunc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterBPFunc_Call_UFunc_NoParm, "Call_UFunc_NoParm" }, // 731339543
		{ &Z_Construct_UFunction_UInterBPFunc_Call_UFunc_WithParm, "Call_UFunc_WithParm" }, // 2119198924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterBPFunc_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterBPFunc.h" },
		{ "ModuleRelativePath", "Public/InterBPFunc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterBPFunc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterBPFunc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterBPFunc_Statics::ClassParams = {
		&UInterBPFunc::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterBPFunc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterBPFunc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterBPFunc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterBPFunc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterBPFunc, 3658895685);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UInterBPFunc>()
	{
		return UInterBPFunc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterBPFunc(Z_Construct_UClass_UInterBPFunc, &UInterBPFunc::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UInterBPFunc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterBPFunc);
	void UInterBPFunc2::StaticRegisterNativesUInterBPFunc2()
	{
		UClass* Class = UInterBPFunc2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Override_UFunc", &UInterBPFunc2::execOverride_UFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics
	{
		struct InterBPFunc2_eventOverride_UFunc_Parms
		{
			UClass* Class;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterBPFunc2_eventOverride_UFunc_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterBPFunc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterBPFunc2, nullptr, "Override_UFunc", nullptr, nullptr, sizeof(InterBPFunc2_eventOverride_UFunc_Parms), Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterBPFunc2_Override_UFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterBPFunc2_Override_UFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterBPFunc2_NoRegister()
	{
		return UInterBPFunc2::StaticClass();
	}
	struct Z_Construct_UClass_UInterBPFunc2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterBPFunc2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterBPFunc2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterBPFunc2_Override_UFunc, "Override_UFunc" }, // 1955201177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterBPFunc2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterBPFunc.h" },
		{ "ModuleRelativePath", "Public/InterBPFunc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterBPFunc2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterBPFunc2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterBPFunc2_Statics::ClassParams = {
		&UInterBPFunc2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterBPFunc2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterBPFunc2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterBPFunc2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterBPFunc2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterBPFunc2, 4118089008);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UInterBPFunc2>()
	{
		return UInterBPFunc2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterBPFunc2(Z_Construct_UClass_UInterBPFunc2, &UInterBPFunc2::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UInterBPFunc2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterBPFunc2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
