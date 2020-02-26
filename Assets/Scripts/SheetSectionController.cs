using System;
using UnityEngine;

public class SheetSectionController : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public MeshRenderer m_ButtonHighlight;
    public NoteBehavior NoteBehavior;
    public Vector2 IndicatorStartPos;
    public Color DefaultColor;
    public Color SelectingColor;

    #endregion // PUBLIC_MEMBERS
    public bool OnGazeEnabled;

    private void Start()
    {
        GetComponent<Renderer>().material.color = DefaultColor;
        OnGazeEnabled = true;
    }

    #region PUBLIC_METHODS
    public void OnGaze(bool hasGaze)
    {
        if (!OnGazeEnabled) { return; }
        if (hasGaze)
        {
            GetComponent<Renderer>().material.color = SelectingColor;
        }
        else
        {
            GetComponent<Renderer>().material.color = DefaultColor;
        }
    }

    private void OnMouseDown()
    {
        OnSelect();
    }

    public void OnselectRender()
    {
        GetComponent<Renderer>().material.color = SelectingColor;
    }


    public void DeSelectRender()
    {
        print("yes"+gameObject.name);
        GetComponent<Renderer>().material.color = DefaultColor;
    }
    public void OnSelect()
    {
        if (gameObject.CompareTag("Practise"))
        {
            NoteBehavior.PlaySection();
        }

        if (gameObject.CompareTag("Sheet"))
        {
            int Setsection = gameObject.transform.GetSiblingIndex();
            NoteBehavior.SetPracticeSection(Setsection);
        }  
    }
    #endregion // PUBLIC_METHODS
}

