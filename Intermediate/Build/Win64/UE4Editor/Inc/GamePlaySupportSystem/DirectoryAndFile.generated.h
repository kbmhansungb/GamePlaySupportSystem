// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYSUPPORTSYSTEM_DirectoryAndFile_generated_h
#error "DirectoryAndFile.generated.h already included, missing '#pragma once' in DirectoryAndFile.h"
#endif
#define GAMEPLAYSUPPORTSYSTEM_DirectoryAndFile_generated_h

#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_SPARSE_DATA
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeTextFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Dir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_GET_TARRAY(FString,Z_Param_Line); \
		P_GET_UBOOL(Z_Param_MakeUpperDirectory); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::MakeTextFile(Z_Param_Dir,Z_Param_FileName,Z_Param_Ext,Z_Param_Line,Z_Param_MakeUpperDirectory,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DeleteFile(Z_Param_TargetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_from); \
		P_GET_PROPERTY(UStrProperty,Z_Param_to); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::CopyFile(Z_Param_from,Z_Param_to); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFiles) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_GET_UBOOL(Z_Param_FindFile); \
		P_GET_UBOOL(Z_Param_FindDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::FindFiles(Z_Param_Out_Files,Z_Param_RootPath,Z_Param_Ext,Z_Param_FindFile,Z_Param_FindDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::FileExists(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DeleteDirectory(Z_Param_DirPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirPath); \
		P_GET_UBOOL(Z_Param_MakeUpperDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::MakeDirectory(Z_Param_DirPath,Z_Param_MakeUpperDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DirectoryExists(Z_Param_TargetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryDown) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NowPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DirectoryDown(Z_Param_NowPath,Z_Param_TargetPath,Z_Param_Out_ReturnPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryUp) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NowPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DirectoryUp(Z_Param_NowPath,Z_Param_Out_ReturnPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixDirectoryPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FixDirPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::FixDirectoryPath(Z_Param_DirPath,Z_Param_Out_FixDirPath); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeTextFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Dir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_GET_TARRAY(FString,Z_Param_Line); \
		P_GET_UBOOL(Z_Param_MakeUpperDirectory); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::MakeTextFile(Z_Param_Dir,Z_Param_FileName,Z_Param_Ext,Z_Param_Line,Z_Param_MakeUpperDirectory,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DeleteFile(Z_Param_TargetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_from); \
		P_GET_PROPERTY(UStrProperty,Z_Param_to); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::CopyFile(Z_Param_from,Z_Param_to); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFiles) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_GET_UBOOL(Z_Param_FindFile); \
		P_GET_UBOOL(Z_Param_FindDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::FindFiles(Z_Param_Out_Files,Z_Param_RootPath,Z_Param_Ext,Z_Param_FindFile,Z_Param_FindDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::FileExists(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DeleteDirectory(Z_Param_DirPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirPath); \
		P_GET_UBOOL(Z_Param_MakeUpperDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::MakeDirectory(Z_Param_DirPath,Z_Param_MakeUpperDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DirectoryExists(Z_Param_TargetPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryDown) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NowPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DirectoryDown(Z_Param_NowPath,Z_Param_TargetPath,Z_Param_Out_ReturnPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryUp) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NowPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ReturnPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::DirectoryUp(Z_Param_NowPath,Z_Param_Out_ReturnPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixDirectoryPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FixDirPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDLLC_DirectoryAndFileLib::FixDirectoryPath(Z_Param_DirPath,Z_Param_Out_FixDirPath); \
		P_NATIVE_END; \
	}


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDLLC_DirectoryAndFileLib(); \
	friend struct Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics; \
public: \
	DECLARE_CLASS(UDLLC_DirectoryAndFileLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UDLLC_DirectoryAndFileLib)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDLLC_DirectoryAndFileLib(); \
	friend struct Z_Construct_UClass_UDLLC_DirectoryAndFileLib_Statics; \
public: \
	DECLARE_CLASS(UDLLC_DirectoryAndFileLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamePlaySupportSystem"), NO_API) \
	DECLARE_SERIALIZER(UDLLC_DirectoryAndFileLib)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDLLC_DirectoryAndFileLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLLC_DirectoryAndFileLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLLC_DirectoryAndFileLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLLC_DirectoryAndFileLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDLLC_DirectoryAndFileLib(UDLLC_DirectoryAndFileLib&&); \
	NO_API UDLLC_DirectoryAndFileLib(const UDLLC_DirectoryAndFileLib&); \
public:


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDLLC_DirectoryAndFileLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDLLC_DirectoryAndFileLib(UDLLC_DirectoryAndFileLib&&); \
	NO_API UDLLC_DirectoryAndFileLib(const UDLLC_DirectoryAndFileLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLLC_DirectoryAndFileLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLLC_DirectoryAndFileLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLLC_DirectoryAndFileLib)


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_PRIVATE_PROPERTY_OFFSET
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_13_PROLOG
#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_RPC_WRAPPERS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_INCLASS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_PRIVATE_PROPERTY_OFFSET \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_SPARSE_DATA \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_INCLASS_NO_PURE_DECLS \
	EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSUPPORTSYSTEM_API UClass* StaticClass<class UDLLC_DirectoryAndFileLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoomSimulator_Plugins_GamePlaySupportSystem_Source_GamePlaySupportSystem_Public_DirectoryAndFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
