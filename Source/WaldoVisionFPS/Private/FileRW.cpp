// Fill out your copyright notice in the Description page of Project Settings.


#include "FileRW.h"

bool UFileRW::LoadFileInProject(FString FileName, FString& OutText)
{
	FString tempString = *FPaths::GetProjectFilePath();
	tempString.RemoveFromEnd("WaldoVisionFPS.uproject");
	return FFileHelper::LoadFileToString(OutText, *(tempString + FileName));
}

bool UFileRW::SaveFileInProject(FString TextToSave, FString FileName)
{
	FString tempString = *FPaths::GetProjectFilePath();
	tempString.RemoveFromEnd("WaldoVisionFPS.uproject");
	return FFileHelper::SaveStringToFile(TextToSave, *(tempString + FileName));
}

bool UFileRW::DoesFileExistInProject(FString FileName)
{
	FString tempString = *FPaths::GetProjectFilePath();
	tempString.RemoveFromEnd("WaldoVisionFPS.uproject");
	return FPaths::FileExists(*(tempString + FileName));
}

FString UFileRW::GetProjectFilePath()
{
	FString tempString = *FPaths::GetProjectFilePath();
	tempString.RemoveFromEnd("WaldoVisionFPS.uproject");
	return *tempString;
}


 