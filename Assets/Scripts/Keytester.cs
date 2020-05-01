using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Keytester : MonoBehaviour
{
    public MidiData midiData;
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

        Debug.Log(currentObjName + "is name1");
        Debug.Log(notedetector.GetCurrentObjNameOnBase() + "is name2");

        //current press should be the same as current keyshould be, and also current obj should be the same as current gameobject.
        if (currentNote == currentKey && currentObjName == notedetector.GetCurrentObjNameOnBase())
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


    //key simulation by keyboard via Unity Editor
    private void KeyboardKeySimulation()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1)|| Input.GetKeyDown(KeyCode.Alpha2) || Input.GetKeyDown(KeyCode.Alpha3) || Input.GetKeyDown(KeyCode.Alpha4))
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


    //key detection behavior on the Midi keyboard
    private void MidiKeydetection()
    {
        KeyPressing = midiData.Keypressing();

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


        currentKey = midiData.offsetRemovedValue();
    }
}
