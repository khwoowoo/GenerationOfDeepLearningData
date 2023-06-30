// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonSaver.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UJsonSaver::SaveStringToFile(const FString& Content, const FString& FilePath)
{
    FString AbsoluteFilePath;
    if (FPaths::IsRelative(FilePath))
    {
        AbsoluteFilePath = FPaths::ProjectSavedDir() + FilePath;
    }
    else
    {
        AbsoluteFilePath = FilePath;
    }

    return FFileHelper::SaveStringToFile(Content, *AbsoluteFilePath);
}
