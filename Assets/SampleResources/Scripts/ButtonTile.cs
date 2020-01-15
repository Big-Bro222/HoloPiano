/*===============================================================================
Copyright (c) 2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;

public class ButtonTile : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public MeshRenderer m_ButtonHighlight;
    public string m_SceneToLoad;
    #endregion // PUBLIC_MEMBERS

    #region PUBLIC_METHODS
    public void OnGaze(bool hasGaze)
    {
        m_ButtonHighlight.enabled = hasGaze;
    }

    public void OnSelect()
    {
        Debug.Log("OnSelect() called on: " + gameObject.name);

        if (!string.IsNullOrEmpty(m_SceneToLoad))
        {
            LoadingScreen.SceneToLoad = m_SceneToLoad;
            LoadingScreen.Run();
        }
    }
    #endregion // PUBLIC_METHODS
}
