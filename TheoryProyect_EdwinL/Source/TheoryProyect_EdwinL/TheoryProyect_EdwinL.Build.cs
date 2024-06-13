// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheoryProyect_EdwinL : ModuleRules
{
	public TheoryProyect_EdwinL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
