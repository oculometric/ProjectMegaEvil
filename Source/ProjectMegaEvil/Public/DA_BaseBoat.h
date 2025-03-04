// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_BaseBoat.generated.h"


UCLASS()
class PROJECTMEGAEVIL_API UDA_BaseBoat : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMesh> _BoatMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _BoatMaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _BoatSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _BoatStrength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _BoatCost;
	
};
