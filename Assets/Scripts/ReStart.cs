using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReStart : MonoBehaviour
{

    public MeshRenderer m_ButtonHighlight;
    public NoteBehavior noteBehavior;



    public void OnGaze(bool hasGaze)
    {
        m_ButtonHighlight.enabled = hasGaze;
    }

    private void OnMouseDown()
    {
        OnSelect();
    }
    public void OnSelect()
    {
            noteBehavior.PlaySection();
        
    }

}

