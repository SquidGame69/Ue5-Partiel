// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Target.generated.h"

UCLASS()
class JAIUNESPOIR_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovingTarget")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovingTarget")
	class UStaticMeshComponent* Mesh;

	FVector Direction;	
	float Totaldistance;
	float CurrentDistance;
	FVector StartLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MovingTarget")
	class AActor* Target;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MovingTarget")
	float speed;


};
