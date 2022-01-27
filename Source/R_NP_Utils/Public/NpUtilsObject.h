// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include <NeuroPlayProcessor.h>

#include "UObject/UObjectBaseUtility.h" //addtoroot

#include "NpUtilsObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class R_NP_UTILS_API UNpUtilsObject : public UObject
{
    GENERATED_BODY()

public:
    float a = 10.0;
    explicit UNpUtilsObject();

    NeuroPlayProcessor *np;

    bool testaddData();

    bool addData(std::vector<char> data);

    std::vector<std::vector<float>> lastFilteredData();
    std::vector<std::vector<float>> lastRhythms();
    std::vector<std::vector<float>> lastSpectrums();
};
