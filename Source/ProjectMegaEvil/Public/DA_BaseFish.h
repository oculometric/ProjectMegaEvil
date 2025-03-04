#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_BaseFish.generated.h"

UCLASS(BlueprintType)

class PROJECTMEGAEVIL_API UDa_BaseFish : public UDataAsset
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMesh> _FishMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishRarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishMaxLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishMinLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishMaxWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishMinWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _FishCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _FishCaught;
};
