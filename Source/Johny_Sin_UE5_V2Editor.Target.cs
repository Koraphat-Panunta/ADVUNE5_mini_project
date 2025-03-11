// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Johny_Sin_UE5_V2EditorTarget : TargetRules
{
	public Johny_Sin_UE5_V2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Johny_Sin_UE5_V2" } );
	}
}
