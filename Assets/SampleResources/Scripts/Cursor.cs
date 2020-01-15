/*===============================================================================
Copyright (c) 2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class Cursor : MonoBehaviour
{
    #region PRIVATE_MEMBERS
    Material m_CursorDot;
    Material m_CursorRing;
    MeshRenderer m_Cursor;
    GestureRecognizer m_GestureRecognizer;
    #endregion // PRIVATE_MEMBERS


    #region MONOBEHAVIOUR_METHODS
    void Start()
    {
        m_CursorDot = (Material)Resources.Load("CursorDot");
        m_CursorRing = (Material)Resources.Load("CursorRing");

        m_Cursor = GetComponentInChildren<MeshRenderer>();

        m_GestureRecognizer = new GestureRecognizer();

        m_GestureRecognizer.RecognitionStarted += (args) =>
        {
            m_Cursor.material = m_CursorDot;
        };

        m_GestureRecognizer.RecognitionEnded += (args) =>
        {
            m_Cursor.material = m_CursorRing;
        };

        m_GestureRecognizer.StartCapturingGestures();
    }

    void Update()
    {
        var headPosition = Camera.main.transform.position;
        var gazeDirection = Camera.main.transform.forward;

        RaycastHit hitInfo;

        if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            m_Cursor.enabled = true;
            transform.position = hitInfo.point;
        }
        else
        {
            m_Cursor.enabled = false;
        }
    }

    void OnDestroy()
    {
        m_GestureRecognizer.StopCapturingGestures();
    }

    #endregion // MONOBEHAVIOUR_METHODS
}
