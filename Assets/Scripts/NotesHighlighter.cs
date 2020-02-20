/*===============================================================================
Copyright (c) 2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;

public class NotesHighlighter : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    //public MeshRenderer m_ButtonHighlight;
    //public string m_SceneToLoad;
    #endregion // PUBLIC_MEMBERS

    #region PUBLIC_METHODS
    public void OnGaze(bool hasGaze)
    {
        Debug.Log("gazed !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" + gameObject.name);
       // gameObject.GetComponent<Renderer>().material.color = new Color(0.3f, 0.4f, 0.6f);
        //m_ButtonHighlight.enabled = hasGaze;
        foreach (Transform child in gameObject.transform)
        {
            Debug.Log("on Gaze of the child objects *******************" + child.name + "*******************");
            child.GetComponent<Renderer>().material.color = new Color(0.3f, 0.4f, 0.6f);
        }
    }

    public void OnSelect()
    {
        Debug.Log("OnSelect() called on: " + gameObject.name);

        /*if (!string.IsNullOrEmpty(m_SceneToLoad))
        {
            LoadingScreen.SceneToLoad = m_SceneToLoad;
            LoadingScreen.Run();
        }*/
    }
    #endregion // PUBLIC_METHODS
}
