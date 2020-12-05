// COPYWRITE KBM, email : kbmhansungb@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "1_InterBP_Share.generated.h"

namespace InterBP
{
	static void* AddPtrOff(void* Ptr, int MemOff)
	{
		return (uint8*)Ptr + MemOff;
	}
	static void Copy_BPMem(void* To, const void* From, int ElemSize)
	{
		FMemory::Memcpy(To, From, ElemSize);
	}
	static FNativeFuncPtr Replace_BPFunc(UFunction* UFunc, FNativeFuncPtr FuncPtr)
	{
		FNativeFuncPtr Old = UFunc->GetNativeFunc();
		UFunc->SetNativeFunc(FuncPtr);
		return Old;
	}
}
USTRUCT(BlueprintType)
struct FBPValRef
{
	GENERATED_BODY()
public:
	uint8* PropertyPtr = nullptr;
};
USTRUCT(BlueprintType)
struct FBPFuncRef
{
	GENERATED_BODY()
public:
	FNativeFuncPtr FuncPtr = nullptr;	//Rarely used. Only Remember for override.
};

UCLASS()
class UInterBP_Share : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="InterBP")
	static void GetUPropertyByName(UClass* Class, FName PropertyName, UProperty*& Property)
	{
		UProperty* PropertyLink = Class->PropertyLink;
		while (PropertyName.ToString() != PropertyLink->GetName())
		{
			if (PropertyLink->PropertyLinkNext) PropertyLink = PropertyLink->PropertyLinkNext;
			else								break;
		}
		Property = PropertyLink;
	}
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void GetBPValRef(UObject* Object, UProperty* Property, FBPValRef& BPValRef)
	{
		BPValRef.PropertyPtr = (uint8*)Object + Property->GetOffset_ForInternal();
	}
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void GetUFunctionByName(UClass* Class, FName FuncName, UFunction*& Function)
	{
		Function = Class->FindFunctionByName(FuncName);
	}
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void GetBPFuncRef(UFunction* Function, FBPFuncRef& BPFuncRef)
	{
		BPFuncRef.FuncPtr = Function->GetNativeFunc();
	}
};
