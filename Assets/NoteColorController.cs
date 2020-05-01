using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteColorController : MonoBehaviour
{
    private Color originalcolor;

    private void Start()
    {
        originalcolor = GetComponent<MeshRenderer>().material.color;
    }

    //set color of the note

    public void NoteSetup(string state)
    {
        switch (state)
        {
            case "true":
                GetComponent<MeshRenderer>().material.color = Color.green;
                break;
            case "false":
                GetComponent<MeshRenderer>().material.color = Color.red;
                break;
            case "default":
                GetComponent<MeshRenderer>().material.color = originalcolor;
                break;
            default:
                break;

        }
    }

}
