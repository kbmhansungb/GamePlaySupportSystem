// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameMode.h"
#include "ComponentSupportFunctionLibrary.generated.h"

UCLASS()
class UComponentSupportFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	static UActorComponent* SmartFindComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass, FName Name)
	{
		auto Component = Actor->FindComponentByClass(ComponentClass);
		if (!Component)
		{
			Component = NewObject<UActorComponent>(Actor, ComponentClass);
			Component->RegisterComponent();
			Actor->AddComponent(Name, false, FTransform(), Component);
		}
		return Component;
	}
	UFUNCTION(BlueprintCallable)
	static FName GetComponentName(UActorComponent* Component)
	{
		return Component->GetFName();
	}

	template <typename T>
	static T* CPP_FindComponentByName(AActor* SearchedActor, FName TargetName)
	{
		auto Components = SearchedActor->GetComponents();
		for (auto Component : Components)
		{
			if (Component->GetFName() == TargetName)
			{
				return Cast<T>(Component);
			}
		}
		return NULL;
	}
	UFUNCTION(BlueprintCallable)
	static void FindComponentByName(UActorComponent* Start, FName TargetName, UActorComponent*& Target)
	{
		Target = CPP_FindComponentByName<UActorComponent>(Start->GetOwner(), TargetName);
	}
	UFUNCTION(BlueprintCallable)
	static UActorComponent* FindComponentByNameInActor(AActor* SearchedActor, FName TargetName)
	{
		return CPP_FindComponentByName<UActorComponent>(SearchedActor, TargetName);
	}
	
	UFUNCTION(BlueprintCallable)
	static void UnRegister(UPrimitiveComponent* Target)
	{
		Target->UnregisterComponent();
	}
	UFUNCTION(BlueprintCallable)
	static bool IsRegisted(UPrimitiveComponent* Target)
	{
		return Target->IsRegistered();
	}
	UFUNCTION(BlueprintCallable)
	static void Register(UPrimitiveComponent* Target)
	{
		Target->RegisterComponent();
	}

	UFUNCTION(BlueprintCallable)
	static UPrimitiveComponent* MostParentPrimitiveComponent(UPrimitiveComponent* StartComponent)
	{
		UPrimitiveComponent* ReturnComponent = StartComponent;
		while (ReturnComponent->GetAttachParent())
		{
			if (Cast<UPrimitiveComponent>(ReturnComponent->GetAttachParent()))
				ReturnComponent = Cast<UPrimitiveComponent>(ReturnComponent->GetAttachParent());
			else
				return ReturnComponent;
		}
		return ReturnComponent;
	}
	UFUNCTION(BlueprintCallable)
	static USceneComponent* GetChildComponentByClass(USceneComponent* Start, TSubclassOf<UPrimitiveComponent> Class)
	{
		if (!Start) return NULL;
		TArray<USceneComponent*> Children;
		Start->GetChildrenComponents(true, Children);
		for (auto Elum : Children)
		{
			if (Elum->GetClass() == Class.Get()) return Elum;
		}
		return NULL;
	}
	UFUNCTION(BlueprintCallable)
	static void SpawnComponent(USceneComponent* Parent, TSubclassOf<USceneComponent> Class)
	{
		USceneComponent* NewComponent = 
			NewObject<USceneComponent>(UGameplayStatics::GetGameMode(Parent), Class.Get());
		NewComponent->AttachToComponent(Parent, FAttachmentTransformRules::KeepWorldTransform);
		NewComponent->RegisterComponent();
	}
};