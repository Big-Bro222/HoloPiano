/*===============================================================================
Copyright (c) 2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class HelpMenu : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public bool m_DisplayOnLoad;
    #endregion // PUBLIC_MEMBERS

    #region PRIVATE_MEMBERS
    GestureRecognizer m_GestureRecognizer;
    AudioSource m_AudioButtonPress;
    #endregion // PRIVATE_MEMBERS


    #region MONOBEHAVIOUR_METHODS
    void Start()
    {
        m_AudioButtonPress = FindObjectOfType<AudioSource>();

        m_GestureRecognizer = new GestureRecognizer();
        GestureSettings m_GestureSettings = m_GestureRecognizer.GetRecognizableGestures();
        m_GestureSettings |= GestureSettings.DoubleTap;
        m_GestureRecognizer.SetRecognizableGestures(m_GestureSettings);
        SetupGestureEvents();
        m_GestureRecognizer.StartCapturingGestures();

        if (!m_DisplayOnLoad)
            gameObject.SetActive(false);
    }

    private void OnDestroy()
    {
        m_GestureRecognizer.StopCapturingGestures();
    }
    #endregion // MONOBEHAVIOUR_METHODS


    #region PRIVATE_METHODS
    void SetupGestureEvents()
    {
        m_GestureRecognizer.Tapped += (args) =>
        {
            if (args.tapCount > 1)
            {
                Debug.Log("Double-Air-Tap Recognized");
                LoadingScreen.SceneToLoad = "1-Menu";
                LoadingScreen.Run();
            }
            else
            {
                Debug.Log("Air-Tap Recognized");
                if (gameObject.activeInHierarchy)
                {
                    // Play audio before game object is deactivated
                    m_AudioButtonPress.Play();
                    gameObject.SetActive(!gameObject.activeInHierarchy);
                }
                else
                {
                    // Play audio after game object is actived
                    gameObject.SetActive(!gameObject.activeInHierarchy);
                    m_AudioButtonPress.Play();
                }
            }
        };
    }
    #endregion // PRIVATE_METHODS
}
