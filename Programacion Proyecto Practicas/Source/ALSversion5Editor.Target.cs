

using UnrealBuildTool;
using System.Collections.Generic;

public class ALSversion5EditorTarget : TargetRules
{
	public ALSversion5EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "ALSversion5" } );
	}
}
