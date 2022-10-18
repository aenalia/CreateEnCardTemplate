// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MetaverseSpaceMetadata.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class ENCARDBUILDER_API UMetaverseSpaceMetadata : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TSoftObjectPtr<UWorld> TargetMap;

};
