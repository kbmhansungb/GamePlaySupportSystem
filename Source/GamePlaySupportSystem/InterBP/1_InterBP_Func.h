// COPYWRITE KBM, email : kbmhansungb@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "0_InterBP_Share.h"
#include "InterBPFunc.generated.h"

namespace InterBP
{
	static void Call_UFunc_InCPP(UObject* Obj, UFunction* UFunc, void* Ptr)
	{
		Obj->ProcessEvent(UFunc, Ptr);
	}
}
UCLASS()
class UInterBPFunc : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void Call_UFunc_WithParm(UObject* Obj, UFunction* UFunc, const FBPValRef& ValRef)
	{
		Obj->ProcessEvent(UFunc, ValRef.PropertyPtr);
	}
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void Call_UFunc_NoParm(UObject* Obj, UFunction* UFunc)
	{
		Obj->ProcessEvent(UFunc, nullptr);
	}
};