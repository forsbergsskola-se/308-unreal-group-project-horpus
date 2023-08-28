// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HorPuss.generated.h"

UCLASS()
class HORPUS_API AHorPuss : public AActor
{
	GENERATED_BODY()
	

private:
	UFUNCTION()
	void SpawnPoint();
	UPROPERTY()
	FVector spawnPoint;

public:	
	// Sets default values for this actor's properties
	AHorPuss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
