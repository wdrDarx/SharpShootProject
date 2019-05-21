// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SharpShootEditorTarget : TargetRules
{
	public SharpShootEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
        bUsesSteam = true;
        ExtraModuleNames.AddRange( new string[] { "SharpShoot" } );
	}
}
