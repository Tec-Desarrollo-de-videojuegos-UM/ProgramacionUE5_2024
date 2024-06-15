// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class U4_TP2 : ModuleRules
{
	public U4_TP2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
