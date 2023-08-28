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
	spawnPoint = GetActorLocation();
	SetActorLocation(spawnPoint);

	GetWorld()->getAll

}

// Called when the game starts or when spawned
void AHorPuss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHorPuss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

