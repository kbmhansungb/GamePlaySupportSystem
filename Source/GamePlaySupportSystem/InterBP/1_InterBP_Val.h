// COPYWRITE KBM, email : kbmhansungb@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "0_InterBP_Share.h"
#include "InterBPVal.generated.h"

UCLASS()
class UInterBPVal : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// It is same, that get From val and set To Val.
	// it is used test that Copy BP Val.
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void Copy_BPVal_WithProperty(const FBPValRef& ToRef, const FBPValRef& FromRef, UProperty* Property)
	{
		if(ToRef.PropertyPtr && FromRef.PropertyPtr && Property)
		InterBP::Copy_BPMem(ToRef.PropertyPtr, FromRef.PropertyPtr, Property->ElementSize);
	}
	// Copy some value to blueprint value.
	// Only based on ToRef RefSize.
	UFUNCTION(BlueprintCallable, Category = "InterBP")
	static void Copy_BPVal_WithSize(const FBPValRef& ToRef, const FBPValRef& FromRef, int Size)
	{
		if (ToRef.PropertyPtr && FromRef.PropertyPtr)
		InterBP::Copy_BPMem(ToRef.PropertyPtr, FromRef.PropertyPtr, Size);
	}
};
