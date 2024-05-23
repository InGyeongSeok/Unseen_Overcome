// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AI/OVEnemy_Base.h"

// Sets default values
AOVEnemy_Base::AOVEnemy_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOVEnemy_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOVEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOVEnemy_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

