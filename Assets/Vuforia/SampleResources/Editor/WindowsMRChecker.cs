/*===============================================================================
Copyright (c) 2019 PTC Inc. All Rights Reserved.

Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/


using UnityEditor;
using UnityEditor.PackageManager;

/// <summary>
/// Imports the latest version of the Windows Mixed Reality package
/// This works around an issue where this dependency is somethimes not updated correctly by Unity
/// </summary>
[InitializeOnLoad]
public static class WindowsMRChecker
{
    static WindowsMRChecker()
    {
        // this will automatically update this package to the latest compatible version
        Client.Add("com.unity.xr.windowsmr.metro");
    }
}
