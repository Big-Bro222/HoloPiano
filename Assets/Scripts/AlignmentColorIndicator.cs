using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlignmentColorIndicator : MonoBehaviour
{

    public void keycolorIndicator(int currentKey,string state)
    {
        if (currentKey  > transform.childCount)
        {
            return;
        }
        transform.GetChild(currentKey).GetComponent<NoteColorController>().NoteSetup(state);
    }

    // Update is called once per frame
    //void Update()
    //{
    //    keycolorIndicator(25,"right");
    //}
}
