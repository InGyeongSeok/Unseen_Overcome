// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/OVInteractionInterface.h"
#include "OVInterfaceTestActor.generated.h"

UCLASS()
class OVERCOME_API AOVInterfaceTestActor : public AActor , public IOVInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOVInterfaceTestActor();

protected:
	UPROPERTY(EditAnywhere, Category = "Test Actor")
	TObjectPtr<UStaticMeshComponent> Mesh;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginFocus() override;
	virtual void EndFocus() override;
	virtual void BeginInteract() override;
	virtual void EndInteract() override;
	virtual void Interact() override;
};
