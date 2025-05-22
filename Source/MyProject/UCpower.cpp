// Fill out your copyright notice in the Description page of Project Settings.


#include "UCpower.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AUCpower::AUCpower()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PowerUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PowerUpMesh"));
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));

	SetRootComponent(CollisionSphere);
    PowerUpMesh->SetupAttachment(RootComponent);
}

void AUCpower::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin over lap"));
	OnCollected(OtherActor);
}
// Called when the game starts or when spawned
void AUCpower::BeginPlay()
{
	Super::BeginPlay();

	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AUCpower::OnOverlapBegin);
}


