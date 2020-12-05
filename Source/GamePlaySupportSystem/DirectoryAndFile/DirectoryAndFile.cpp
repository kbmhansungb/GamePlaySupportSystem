// Copyright KimBumMoo(Birth:1994.10, Live:Korea, Start making:2020.5)
#pragma once
#include "DirectoryAndFile.h"

bool UDLLC_DirectoryAndFileLib::FixDirectoryPath(FString DirPath, FString& FixDirPath)
{
	if (DirPath.Find(FString("\\"), ESearchCase::IgnoreCase, ESearchDir::FromEnd, DirPath.Len()) == DirPath.Len() - 1)
		DirPath.RemoveAt(DirPath.Len());

	FixDirPath = DirPath;
	return true;
}

bool UDLLC_DirectoryAndFileLib::DirectoryUp(FString NowPath, FString& ReturnPath)
{
	if (NowPath.Find("\\") == -1)
		return false;

	FixDirectoryPath(NowPath, NowPath);

	FString Temp;
	NowPath.Split("\\", &ReturnPath, &Temp, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	ReturnPath.Append("\\");
	return true;
}

bool UDLLC_DirectoryAndFileLib::DirectoryDown(FString NowPath, FString TargetPath, FString& ReturnPath)
{
	if (NowPath.Find(FString("\\"), ESearchCase::IgnoreCase, ESearchDir::FromEnd, NowPath.Len()) != NowPath.Len() - 1)
		return false;
	ReturnPath = NowPath.Append(TargetPath);
	return true;
}

bool UDLLC_DirectoryAndFileLib::DirectoryExists(FString TargetPath)
{
	return FPaths::DirectoryExists(TargetPath);
}

bool UDLLC_DirectoryAndFileLib::MakeDirectory_MakeUpper(FString Path, IFileManager& FileManager)
{
	if (FileManager.MakeDirectory(*Path)) {} // go return
	else
	{
		FString UpperPath;
		DirectoryUp(Path, UpperPath);
		if (MakeDirectory_MakeUpper(UpperPath, FileManager))
		{
			//retry
			FileManager.MakeDirectory(*Path); //go return
		}
		else
			return false;
	}
	return true;
}

bool UDLLC_DirectoryAndFileLib::MakeDirectory(FString DirPath, bool MakeUpperDirectory)
{
	IFileManager& FileManager = IFileManager::Get();
	if (!DirectoryExists(DirPath))
		if (MakeUpperDirectory)
		{
			FString Upper;
			DirectoryUp(DirPath, Upper);
			if (MakeDirectory_MakeUpper(Upper, FileManager)) {}
			else return false;
		}

	return FileManager.MakeDirectory(*(DirPath));
}

bool UDLLC_DirectoryAndFileLib::DeleteDirectory(FString DirPath)
{
	return FPlatformFileManager::Get().GetPlatformFile().DeleteDirectory(*DirPath);
}

bool UDLLC_DirectoryAndFileLib::FileExists(FString FilePath)
{
	return FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath);
}

bool UDLLC_DirectoryAndFileLib::FindFiles(TArray<FString>& Files, FString RootPath, FString Ext, bool FindFile, bool FindDir)
{
	if (RootPath.Len() < 1) return false;
	FPaths::NormalizeDirectoryName(RootPath);
	IFileManager& FileManager = IFileManager::Get();
	if (Ext == "")    // All file
		Ext = "*.*";
	else
		Ext = (Ext.Left(1) == ".") ? "*" + Ext : "*." + Ext;

	FString FinalPath = RootPath + "/" + Ext;
	FileManager.FindFiles(Files, *FinalPath, FindFile, FindDir);
	return true;
}

bool UDLLC_DirectoryAndFileLib::CopyFile(FString from, FString to)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	return PlatformFile.CopyFile(*to, *from);
}

bool UDLLC_DirectoryAndFileLib::DeleteFile(FString TargetPath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	return PlatformFile.DeleteFile(*TargetPath);
}

bool UDLLC_DirectoryAndFileLib::MakeTextFile(FString Dir, FString FileName, FString Ext, TArray<FString> Line, bool MakeUpperDirectory, bool AllowOverWriting)
{
	FString DirPath = Dir;
	FixDirectoryPath(Dir, Dir);
	FString FilePath = DirPath + FileName + "." + Ext;

	if (!DirectoryExists(Dir))
		if (!MakeDirectory(Dir, MakeUpperDirectory))
			return false;

	if (!AllowOverWriting)
		if (FileExists(Dir))
			return false;

	UE_LOG(LogTemp, Error, TEXT("%s"), *Dir);
	return FFileHelper::SaveStringArrayToFile(Line, *FilePath);
}