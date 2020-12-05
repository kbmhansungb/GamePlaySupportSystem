// Copyright KimBumMoo(Birth:1994.10, Live:Korea, Start making:2020.5)
#pragma once

#include "CoreMinimal.h"

#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"

#include "DirectoryAndFile.generated.h"

UCLASS()
class UDLLC_DirectoryAndFileLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//##### Directory #####
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool FixDirectoryPath(FString DirPath, FString& FixDirPath);
	//Done
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool DirectoryUp(FString NowPath, FString& ReturnPath);
	//Done
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool DirectoryDown(FString NowPath, FString TargetPath, FString& ReturnPath);
	//Done
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool DirectoryExists(FString TargetPath);

	static bool MakeDirectory_MakeUpper(FString Path, IFileManager& FileManager);
	//Done 
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool MakeDirectory(FString DirPath, bool MakeUpperDirectory);
	//Done... need add IgnoreSubFile
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool DeleteDirectory(FString DirPath);

	//##### Files #####
	UFUNCTION(BlueprintCallable)
	static bool FileExists(FString FilePath);
	//Done
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool FindFiles(TArray<FString>& Files, FString RootPath, FString Ext, bool FindFile, bool FindDir);
	//Done. 
	//Should be write ext.
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool CopyFile(FString from, FString to);
	//Done. 
	//Should be write ext.
	//It will be delete file without backup.
	//It did not delete read only.
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool DeleteFile(FString TargetPath);
	//Done
	UFUNCTION(BlueprintCallable, Category = "Directory & File")
	static bool MakeTextFile(FString Dir, FString FileName, FString Ext, TArray<FString> Line, bool MakeUpperDirectory, bool AllowOverWriting);
};