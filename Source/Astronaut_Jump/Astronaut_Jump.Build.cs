// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Astronaut_Jump : ModuleRules
{
	public Astronaut_Jump(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
