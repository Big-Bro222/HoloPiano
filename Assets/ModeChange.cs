using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeChange : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public MeshRenderer m_ButtonHighlight;
    public List<GameObject> DisableObjs;
    public List<GameObject> EnableObjs;

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
    public void OnSelect()
    {
        foreach (GameObject DisableObj in DisableObjs){
            DisableObj.SetActive(false);
        }

        foreach (GameObject EnableObj in EnableObjs)
        {
            EnableObj.SetActive(true);
        }

    }
    #endregion // PUBLIC_METHODS
}
