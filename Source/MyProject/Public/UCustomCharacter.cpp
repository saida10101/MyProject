// Fill out your copyright notice in the Description page of Project Settings.


#include "UCustomCharacter.h"


int AUCustomCharacter::GetPoints()
{
	return points;
}

void AUCustomCharacter::IncrementPoints(int Quantity)
{
	points += Quantity;
}
