using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MidiJack;
public class Key_detection : MonoBehaviour
{
    [SerializeField] GameObject Notetester;
    void NoteOn(MidiChannel channel, int note, float velocity)
    {
        Debug.Log("NoteOn: " + channel + "," + note + "," + velocity);
        Notetester.BroadcastMessage("ChangeImageColor_R",note);
    }

    void NoteOff(MidiChannel channel, int note)
    {
        Debug.Log("NoteOff: " + channel + "," + note);
        Notetester.BroadcastMessage("ChangeImageColor_W", note);
    }

    void Knob(MidiChannel channel, int knobNumber, float knobValue)
    {
        Debug.Log("Knob: " + knobNumber + "," + knobValue);
    }

    void OnEnable()
    {
        MidiMaster.noteOnDelegate += NoteOn;
        MidiMaster.noteOffDelegate += NoteOff;
        MidiMaster.knobDelegate += Knob;
    }

    void OnDisable()
    {
        MidiMaster.noteOnDelegate -= NoteOn;
        MidiMaster.noteOffDelegate -= NoteOff;
        MidiMaster.knobDelegate -= Knob;
    }
}
