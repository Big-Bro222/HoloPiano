using System;
using UnityEngine;

public class SheetSectionController : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public MeshRenderer m_ButtonHighlight;
    public NoteBehavior NoteBehavior;
    public Material SeletingMaterial;
    public Material DeSeletingMaterial;
    public Vector2 IndicatorStartPos;
    #endregion // PUBLIC_MEMBERS

    #region PUBLIC_METHODS
    public void OnGaze(bool hasGaze)
    {
        m_ButtonHighlight.enabled = hasGaze;
    }

    private void OnMouseDown()
    {
        OnSelect();
    }

    public void OnselectRender()
    {
        gameObject.GetComponent<Renderer>().material = SeletingMaterial;
    }


    public void DeSelectRender()
    {
        print("yes"+gameObject.name);
        gameObject.GetComponent<Renderer>().material = DeSeletingMaterial;
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

