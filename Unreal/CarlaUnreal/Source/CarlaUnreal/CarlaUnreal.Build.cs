// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CarlaUnreal : ModuleRules
{
	public CarlaUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
    	PrivatePCHHeaderFile = "CarlaUnreal.h";
    	bUseRTTI = true;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"Chaos",
			"ChaosVehicles"
		});

		if (Target.Type == TargetType.Editor)
        {
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
        }

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
