// 2020   BS Studio (KBM)

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActivityStruct.generated.h"

struct FActivityStruct;
class UOOAComplement;

//	(S : Subject) (V : ActivityType) (O : Object)
USTRUCT(BlueprintType)
struct FActivityStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
		UObject* Subject;
	UPROPERTY(BlueprintReadWrite)
		UObject* Object;
	UPROPERTY(BlueprintReadWrite)
		TMap<TSubclassOf<UOOAComplement*>, UOOAComplement*> Class_Complement_map;
};

UCLASS(Blueprintable, BlueprintType, abstract, ClassGroup = (OOA))
class GAMEPLAYSUPPORTSYSTEM_API UOOAComplement : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent)
		void Update();
	virtual void Update_Implementation() {}
};