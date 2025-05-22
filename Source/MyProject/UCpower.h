// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SNegativeActionButton.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UCpower.generated.h"

UCLASS()
class MYPROJECT_API AUCpower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUCpower();
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PowerUpMesh;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnCollected(AActor* Collector);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
