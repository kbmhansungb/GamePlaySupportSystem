// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/Actor.h"
#include "ActorTagLibrary.generated.h"

UCLASS()
class UActorTagLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "ActorTagLibrary")
	static void HasObjectTag(AActor* Actor, FName Tag, bool& IsHas)
	{
		if (!Actor) return;
		else IsHas = Actor->ActorHasTag(Tag);
	}
	UFUNCTION(BlueprintCallable, Category = "ActorTagLibrary")
	static void AddObjectTag(AActor* Actor, FName Tag)
	{
		Actor->Tags.AddUnique(Tag);
	}
	UFUNCTION(BlueprintCallable, Category = "ActorTagLibrary")
	static void RemoveObjectTag(AActor* Actor, FName Tag)
	{
		Actor->Tags.Remove(Tag);
	}
	UFUNCTION(BlueprintCallable, Category = "ActorTagLibrary")
	static void HasGameModeTag(UObject* Context, FName Tag, bool& IsHas)
	{
		if (!Context) return;
		IsHas = UGameplayStatics::GetGameMode(Context)->ActorHasTag(Tag);
	}
	UFUNCTION(BlueprintCallable, Category = "ActorTagLibrary")
	static void AddGameModeTag(UObject* Context, FName Tag)
	{
		if (!Context) return;
		UGameplayStatics::GetGameMode(Context)->Tags.AddUnique(Tag);
	}
	UFUNCTION(BlueprintCallable, Category = "ActorTagLibrary")
	static void RemoveGameModeTag(UObject* Context, FName Tag)
	{
		if (!Context) return;
		UGameplayStatics::GetGameMode(Context)->Tags.Remove(Tag);
	}
};