// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamePlaySupportSystem/Public/DirectoryAndFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectoryAndFile() {}
// Cross Module References
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UDLLC_DirectoryAndFileLib_NoRegister();
	GAMEPLAYSUPPORTSYSTEM_API UClass* Z_Construct_UClass_UDLLC_DirectoryAndFileLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamePlaySupportSystem();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory();
	GAMEPLAYSUPPORTSYSTEM_API UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile();
// End Cross Module References
	void UDLLC_DirectoryAndFileLib::StaticRegisterNativesUDLLC_DirectoryAndFileLib()
	{
		UClass* Class = UDLLC_DirectoryAndFileLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFile", &UDLLC_DirectoryAndFileLib::execCopyFile },
			{ "DeleteDirectory", &UDLLC_DirectoryAndFileLib::execDeleteDirectory },
			{ "DeleteFile", &UDLLC_DirectoryAndFileLib::execDeleteFile },
			{ "DirectoryDown", &UDLLC_DirectoryAndFileLib::execDirectoryDown },
			{ "DirectoryExists", &UDLLC_DirectoryAndFileLib::execDirectoryExists },
			{ "DirectoryUp", &UDLLC_DirectoryAndFileLib::execDirectoryUp },
			{ "FileExists", &UDLLC_DirectoryAndFileLib::execFileExists },
			{ "FindFiles", &UDLLC_DirectoryAndFileLib::execFindFiles },
			{ "FixDirectoryPath", &UDLLC_DirectoryAndFileLib::execFixDirectoryPath },
			{ "MakeDirectory", &UDLLC_DirectoryAndFileLib::execMakeDirectory },
			{ "MakeTextFile", &UDLLC_DirectoryAndFileLib::execMakeTextFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventCopyFile_Parms
		{
			FString from;
			FString to;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_to;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_from;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventCopyFile_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventCopyFile_Parms, to), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventCopyFile_Parms, from), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_to,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::NewProp_from,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done. \n//Should be write ext.\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done.\nShould be write ext." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "CopyFile", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventCopyFile_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventDeleteDirectory_Parms
		{
			FString DirPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::NewProp_DirPath = { "DirPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDeleteDirectory_Parms, DirPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::NewProp_DirPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done... need add IgnoreSubFile\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done... need add IgnoreSubFile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "DeleteDirectory", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventDeleteDirectory_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventDeleteFile_Parms
		{
			FString TargetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventDeleteFile_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDeleteFile_Parms, TargetPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::NewProp_TargetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done. \n//Should be write ext.\n//It will be delete file without backup.\n//It did not delete read only.\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done.\nShould be write ext.\nIt will be delete file without backup.\nIt did not delete read only." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "DeleteFile", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventDeleteFile_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms
		{
			FString NowPath;
			FString TargetPath;
			FString ReturnPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NowPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_ReturnPath = { "ReturnPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms, ReturnPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms, TargetPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_NowPath = { "NowPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms, NowPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_ReturnPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_TargetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::NewProp_NowPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "DirectoryDown", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventDirectoryDown_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventDirectoryExists_Parms
		{
			FString TargetPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventDirectoryExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventDirectoryExists_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDirectoryExists_Parms, TargetPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::NewProp_TargetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "DirectoryExists", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventDirectoryExists_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventDirectoryUp_Parms
		{
			FString NowPath;
			FString ReturnPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NowPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventDirectoryUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventDirectoryUp_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_ReturnPath = { "ReturnPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDirectoryUp_Parms, ReturnPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_NowPath = { "NowPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventDirectoryUp_Parms, NowPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_ReturnPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::NewProp_NowPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "DirectoryUp", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventDirectoryUp_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventFileExists_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventFileExists_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventFileExists_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//##### Files #####\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "##### Files #####" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "FileExists", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventFileExists_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventFindFiles_Parms
		{
			TArray<FString> Files;
			FString RootPath;
			FString Ext;
			bool FindFile;
			bool FindDir;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_FindDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FindDir;
		static void NewProp_FindFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FindFile;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ext;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootPath;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventFindFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventFindFiles_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindDir_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventFindFiles_Parms*)Obj)->FindDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindDir = { "FindDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventFindFiles_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindDir_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindFile_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventFindFiles_Parms*)Obj)->FindFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindFile = { "FindFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventFindFiles_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventFindFiles_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_RootPath = { "RootPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventFindFiles_Parms, RootPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventFindFiles_Parms, Files), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_FindFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_Ext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_RootPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::NewProp_Files_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "FindFiles", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventFindFiles_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventFixDirectoryPath_Parms
		{
			FString DirPath;
			FString FixDirPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FixDirPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventFixDirectoryPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventFixDirectoryPath_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_FixDirPath = { "FixDirPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventFixDirectoryPath_Parms, FixDirPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_DirPath = { "DirPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventFixDirectoryPath_Parms, DirPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_FixDirPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::NewProp_DirPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//##### Directory #####\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "##### Directory #####" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "FixDirectoryPath", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventFixDirectoryPath_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms
		{
			FString DirPath;
			bool MakeUpperDirectory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_MakeUpperDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MakeUpperDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_MakeUpperDirectory_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms*)Obj)->MakeUpperDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_MakeUpperDirectory = { "MakeUpperDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_MakeUpperDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_DirPath = { "DirPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms, DirPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_MakeUpperDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::NewProp_DirPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done \n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "MakeDirectory", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventMakeDirectory_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics
	{
		struct DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms
		{
			FString Dir;
			FString FileName;
			FString Ext;
			TArray<FString> Line;
			bool MakeUpperDirectory;
			bool AllowOverWriting;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static void NewProp_MakeUpperDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MakeUpperDirectory;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Line;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Line_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ext;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_MakeUpperDirectory_SetBit(void* Obj)
	{
		((DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms*)Obj)->MakeUpperDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_MakeUpperDirectory = { "MakeUpperDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms), &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_MakeUpperDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms, Line), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Line_Inner = { "Line", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms, Dir), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_AllowOverWriting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_MakeUpperDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Line_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Ext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::NewProp_Dir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Directory & File" },
		{ "Comment", "//Done\n" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
		{ "ToolTip", "Done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLLC_DirectoryAndFileLib, nullptr, "MakeTextFile", nullptr, nullptr, sizeof(DLLC_DirectoryAndFileLib_eventMakeTextFile_Parms), Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDLLC_DirectoryAndFileLib_NoRegister()
	{
		return UDLLC_DirectoryAndFileLib::StaticClass();
	}
	struct Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamePlaySupportSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_CopyFile, "CopyFile" }, // 3503972113
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteDirectory, "DeleteDirectory" }, // 3285317514
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DeleteFile, "DeleteFile" }, // 3321302970
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryDown, "DirectoryDown" }, // 569541781
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryExists, "DirectoryExists" }, // 1841860257
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_DirectoryUp, "DirectoryUp" }, // 2560704225
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FileExists, "FileExists" }, // 3749907458
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FindFiles, "FindFiles" }, // 521647554
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_FixDirectoryPath, "FixDirectoryPath" }, // 2832861714
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeDirectory, "MakeDirectory" }, // 2681614251
		{ &Z_Construct_UFunction_UDLLC_DirectoryAndFileLib_MakeTextFile, "MakeTextFile" }, // 291087165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectoryAndFile.h" },
		{ "ModuleRelativePath", "Public/DirectoryAndFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLLC_DirectoryAndFileLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::ClassParams = {
		&UDLLC_DirectoryAndFileLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDLLC_DirectoryAndFileLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDLLC_DirectoryAndFileLib, 2938531851);
	template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<UDLLC_DirectoryAndFileLib>()
	{
		return UDLLC_DirectoryAndFileLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDLLC_DirectoryAndFileLib(Z_Construct_UClass_UDLLC_DirectoryAndFileLib, &UDLLC_DirectoryAndFileLib::StaticClass, TEXT("/Script/GamePlaySupportSystem"), TEXT("UDLLC_DirectoryAndFileLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDLLC_DirectoryAndFileLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
