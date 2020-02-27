using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Keytester : MonoBehaviour
{
    public Key_detection key_detection;
    public NoteBehavior noteBehavior;
    public Notedetector notedetector;

    private int currentKey;
    private int currentNote;
    private string currentObjName;
    private bool KeyPressing;
    private bool y;
    // Start is called before the first frame update
    void Start()
    {
        currentObjName = "Null";
        currentKey = 999;
        currentNote = 999;
        KeyPressing = false;
        y = true;
    }

    // Update is called once per frame
    void Update()
    {
        KeyPressing = key_detection.Keypressing();

        if (KeyPressing)
        {
            if (y) { 
                currentObjName = notedetector.GetCurrentObjNameOnBase();
                y = false;
               }  
        }
        else if(!KeyPressing)
        {
            y = true;
        }
        currentKey = key_detection.offsetRemovedValue();
        print(currentKey);
        currentNote = notedetector.GetCurrentKeyValueOnBase();
        if (currentNote == currentKey&&currentObjName==notedetector.GetCurrentObjNameOnBase())
        {
            noteBehavior.Running = true;
        }
        else
        {
            noteBehavior.Running = false;
        }

        

    }
}
