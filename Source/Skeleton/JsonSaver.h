// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonSaver.generated.h"

/**
 * 
 */
UCLASS()
class SKELETON_API UJsonSaver : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool SaveStringToFile(const FString& Content, const FString& FilePath);
};
