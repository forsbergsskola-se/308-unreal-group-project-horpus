// Fill out your copyright notice in the Description page of Project Settings.


#include "HorPuss.h"

void AHorPuss::SpawnPoint()
{
	GetActorLocation();
}

// Sets default values
AHorPuss::AHorPuss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHorPuss::BeginPlay()
{
	Super::BeginPlay();
	spawnPoint = GetActorLocation();
}

// Called every frame
void AHorPuss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

