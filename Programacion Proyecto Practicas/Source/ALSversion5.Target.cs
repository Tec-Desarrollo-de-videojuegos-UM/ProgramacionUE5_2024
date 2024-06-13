

using UnrealBuildTool;
using System.Collections.Generic;

public class ALSversion5Target : TargetRules
{
	public ALSversion5Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "ALSversion5" } );
	}
}
