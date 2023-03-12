﻿// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Importer.h"

class USkeletonImporter : public IImporter {
public:
	USkeletonImporter(const FString& FileName, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg, TArray<TSharedPtr<FJsonValue>>& AllJsonObjects):
		IImporter(FileName, JsonObject, Package, OutermostPkg, AllJsonObjects) {
	}

	virtual bool ImportData() override;
};