/*===============================================================================
Copyright (c) 2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class MainMenu : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public GameObject FocusedObject { get; private set; }
    #endregion // PUBLIC_MEMBERS

    #region PRIVATE_MEMBERS
    GameObject FocusedObjectPrevFrame;
    GestureRecognizer m_GestureRecognizer;
    AudioSource m_AudioButtonPress;
    #endregion // PRIVATE_MEMBERS


    #region MONOBEHAVIOUR_METHODS

    void Start()
    {
        m_AudioButtonPress = FindObjectOfType<AudioSource>();

        // Set up a GestureRecognizer to detect Select gestures.
        m_GestureRecognizer = new GestureRecognizer();
        GestureSettings m_GestureSettings = m_GestureRecognizer.GetRecognizableGestures();
        m_GestureSettings |= GestureSettings.DoubleTap;
        m_GestureRecognizer.SetRecognizableGestures(m_GestureSettings);
        SetupGestureEvents();
        m_GestureRecognizer.StartCapturingGestures();
    }

    void Update()
    {
        FocusedObjectPrevFrame = FocusedObject;

        var headPosition = Camera.main.transform.position;
        var gazeDirection = Camera.main.transform.forward;

        RaycastHit hitInfo;

        if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            FocusedObject = hitInfo.collider.gameObject;
        }
        else
        {
            FocusedObject = null;
        }

        // If the focused object changed this frame, start detecting fresh gestures again.
        if (FocusedObject != FocusedObjectPrevFrame)
        {
            m_GestureRecognizer.CancelGestures();
            m_GestureRecognizer.StartCapturingGestures();

            if (FocusedObjectPrevFrame)
            {
                FocusedObjectPrevFrame.SendMessage("OnGaze", false, SendMessageOptions.DontRequireReceiver);
            }
            if (FocusedObject)
            {
                FocusedObject.SendMessage("OnGaze", true, SendMessageOptions.DontRequireReceiver);
            }
        }
    }

    #endregion // MONOBEHAVIOUR_METHODS


    #region PRIVATE_METHODS

    void SetupGestureEvents()
    {
        m_GestureRecognizer.Tapped += (args) =>
        {
            if (FocusedObject != null)
            {
                if (args.tapCount > 1)
                {
                    m_AudioButtonPress.Play();
                    Application.Quit();
                }
                else
                {
                    Debug.Log("Tap Gesture Detected On: " + FocusedObject.name);
                    m_AudioButtonPress.Play();
                    // Send an OnSelect message to the focused object and its ancestors.
                    FocusedObject.SendMessageUpwards("OnSelect", SendMessageOptions.DontRequireReceiver);
                }
            }
        };
    }

    #endregion // PRIVATE_METHODS
}