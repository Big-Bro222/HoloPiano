using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteController : MonoBehaviour
{
    public int[] noteInformation;
    public MovementControll MovementController;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void setNoteinfo(int[] noteinfo)
    {
        noteInformation = noteinfo;
    }

    public int[] getNoteinfo()
    {
        return noteInformation;
    }
}
