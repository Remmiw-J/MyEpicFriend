// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyEpicFriend : ModuleRules
{
	public MyEpicFriend(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
