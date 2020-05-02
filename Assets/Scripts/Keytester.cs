using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Keytester : MonoBehaviour
{
    public Key_detection key_detection;
    public NoteBehavior noteBehavior;
    public Notedetector notedetector;
    public AlignmentColorIndicator alignmentColorIndicator;


    private int currentKey;
    private int currentNote;

    private int previousKey;

    private string currentObjName;
    private bool KeyPressing;
    private bool keySeperator;

    // Start is called before the first frame update
    void Start()
    {
        currentObjName = "Null";
        currentKey = 999;
        currentNote = 999;
        previousKey = 999;
        KeyPressing = false;
        keySeperator = true;

    }

    // Update is called once per frame
    void Update()
    {
        currentNote = notedetector.GetCurrentKeyValueOnBase();
        MidiKeydetection();
        KeyboardKeySimulation();

        print(currentKey);
        currentNote = notedetector.GetCurrentKeyValueOnBase();
        if (currentNote == currentKey&&currentObjName==notedetector.GetCurrentObjNameOnBase())
        {
            noteBehavior.Running = true;
            alignmentColorIndicator.keycolorIndicator(currentKey, "true");
        }
        else
        {
            noteBehavior.Running = false;
            alignmentColorIndicator.keycolorIndicator(currentKey, "false");
        }

        if (previousKey != currentKey)
        {
            if (currentKey == 999)
            {
                alignmentColorIndicator.keycolorIndicator(previousKey, "default");
            }
            previousKey = currentKey;

        }


    }

    private void KeyboardKeySimulation()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Alpha2) || Input.GetKeyDown(KeyCode.Alpha3) || Input.GetKeyDown(KeyCode.Alpha4))
        {
            if (keySeperator)
            {
                currentObjName = notedetector.GetCurrentObjNameOnBase();
                keySeperator = false;
            }
        }

        if (Input.GetKeyUp(KeyCode.Alpha1) || Input.GetKeyUp(KeyCode.Alpha2) || Input.GetKeyUp(KeyCode.Alpha3) || Input.GetKeyUp(KeyCode.Alpha4))
        {
            keySeperator = true;

        }



        if (Input.GetKey(KeyCode.Alpha1))
        {
            currentKey = 22;
        }
        else if (Input.GetKey(KeyCode.Alpha2))
        {
            currentKey = 23;
        }
        else if (Input.GetKey(KeyCode.Alpha3))
        {
            currentKey = 24;
        }
        else if (Input.GetKey(KeyCode.Alpha4))
        {
            currentKey = 25;
        }


    }

    private void MidiKeydetection()
    {

        KeyPressing = key_detection.Keypressing();

        if (KeyPressing)
        {
            if (keySeperator)
            {
                currentObjName = notedetector.GetCurrentObjNameOnBase();
                keySeperator = false;
            }
        }
        else if (!KeyPressing)
        {
            keySeperator = true;
        }
        currentKey = key_detection.offsetRemovedValue();
    }
}
