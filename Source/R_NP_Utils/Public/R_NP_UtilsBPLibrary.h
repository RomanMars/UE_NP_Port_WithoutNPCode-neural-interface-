// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include <NpUtilsObject.h>
#include <NeuroPlayProcessor.h>


#include "R_NP_UtilsBPLibrary.generated.h"



/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/



UCLASS()
class UR_NP_UtilsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
	static float R_NP_UtilsSampleFunction(float Param);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static bool BLSignalConverter(TArray<uint8> TArr, TArray<float>& outdata, TMap<int32, float>& expDataMap);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:Create CreateNeuroPlayProcessor ue Object", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static UNpUtilsObject* CreateUClassOject();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:addData", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static bool addData(UNpUtilsObject* NpUtilsObject, TArray<uint8> TArr);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:lastFilteredData", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static 	TMap<int32, float> lastFilteredData(UNpUtilsObject* NpUtilsObject);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:lastRhythms", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static 	TMap<int32, float> lastRhythms(UNpUtilsObject* NpUtilsObject);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:lastSpectrums", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static 	TMap<int32, float> lastSpectrums(UNpUtilsObject* NpUtilsObject);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:TestaddData", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static bool testaddData(UNpUtilsObject* NpUtilsObject);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:GetData", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static 	TArray<float> GetFilteredData(UNpUtilsObject* NpUtilsObject, TArray<float>& Key, TArray<float>& Val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:GetRhythms", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static 	TArray<float> GetRhythms(UNpUtilsObject* NpUtilsObject, TArray<float>& Key, TArray<float>& Val);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RNPUE Utils:GetSpectrums", Keywords = "R_NP_Utils sample test testing"), Category = "R_NP_UtilsTesting")
		static 	TArray<float> GetSpectrums(UNpUtilsObject* NpUtilsObject, TArray<float>& Key, TArray<float>& Val);
};
