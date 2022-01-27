// Copyright Epic Games, Inc. All Rights Reserved.

#include "R_NP_Utils.h"

#define LOCTEXT_NAMESPACE "FR_NP_UtilsModule"

void FR_NP_UtilsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FR_NP_UtilsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FR_NP_UtilsModule, R_NP_Utils)