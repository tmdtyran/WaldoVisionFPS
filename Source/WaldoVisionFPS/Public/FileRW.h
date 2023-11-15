// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileRW.generated.h"

/**
 * 
 */
UCLASS()
class WALDOVISIONFPS_API UFileRW : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadFile"))
	static bool LoadFileInProject(FString FileName, FString& OutText);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveFile"))
	static bool SaveFileInProject(FString TextToSave, FString FileName);

	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "DoesFileExist"))
	static bool DoesFileExistInProject(FString FileName);

private:
	static FString GetProjectFilePath();
};
