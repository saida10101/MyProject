// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyProject/MyProjectCharacter.h"
#include "UCustomCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AUCustomCharacter : public AMyProjectCharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's propertiez

	UFUNCTION(BlueprintCallable)
	int GetPoints();

	UFUNCTION(BlueprintCallable)
	void IncrementPoints(int Quantity);

private:
	int points = 0;
};
