/*===============================================================================
Copyright (c) 2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;

public class Versions : MonoBehaviour
{
    #region MONOBEHAVIOUR_METHODS
    void Start()
    {
        TextMesh m_Versions = GetComponent<TextMesh>();

        if (m_Versions)
        {
            m_Versions.text =
                "Vuforia Version: " + Vuforia.VuforiaUnity.GetVuforiaLibraryVersion() +
                "\nUnity Version: " + Application.unityVersion;
        }
    }
    #endregion // MONOBEHAVIOUR_METHODS
}
