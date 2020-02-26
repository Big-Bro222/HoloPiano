using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MidiJack;
using UnityEngine.Networking;
public class Key_detection : MonoBehaviour
{
    [SerializeField] GameObject Notetester;
    public string getMidiDataUrl;

    void NoteOn(MidiChannel channel, int note, float velocity)
    {
        if (velocity > 0)
        {
            Debug.Log("NoteOn: " + channel + "," + note + "," + velocity);
            int volume = 0;
            if (velocity < 0.1)
            {
                volume = 0;
            }
            else if (velocity >= 0.1 && velocity < 0.2)
            {
                volume = 1;
            }
            else if (velocity >= 0.2 && velocity < 0.4)
            {
                volume = 2;
            }
            else if (velocity >= 0.4 && velocity < 0.6)
            {
                volume = 3;
            }
            else if (velocity >= 0.6 && velocity < 0.8)
            {
                volume = 4;
            }
            else if (velocity >= 0.8 && velocity < 0.9)
            {
                volume = 5;
            }
            else if (velocity >= 0.9)
            {
                volume = 6;
            }

            Notetester.BroadcastMessage("KeyPressed", new Vector2Int(note, volume));
        }
    }

    void NoteOff(MidiChannel channel, int note)
    {
        Debug.Log("NoteOff: " + channel + "," + note);
        Notetester.BroadcastMessage("KeyReleased", note);
    }

    void Knob(MidiChannel channel, int knobNumber, float knobValue)
    {
        Debug.Log("Knob: " + knobNumber + "," + knobValue);
    }

    void OnEnable()
    {
        MidiMaster.noteOnDelegate += NoteOn;
        MidiMaster.noteOffDelegate += NoteOff;
        //MidiMaster.knobDelegate += Knob;
    }

    void OnDisable()
    {
        MidiMaster.noteOnDelegate -= NoteOn;
        MidiMaster.noteOffDelegate -= NoteOff;
        //MidiMaster.knobDelegate -= Knob;
    }

    IEnumerator GetMidiData()
    {
        GameObject child = null;

        /*string getCountriesUrl = "http://localhost:8081/midi-input-last";*/
        using (UnityWebRequest www = UnityWebRequest.Get(getMidiDataUrl))
        {
            //www.chunkedTransfer = false;
            yield return www.Send();
            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                if (www.isDone)
                {
                    string jsonResult =
                        System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);

                    midiData resultdata = JsonUtility.FromJson<midiData>(jsonResult);
                    Debug.Log(resultdata.value[1] + "---" + resultdata.value[0] + "=" + resultdata.value[2]);
                    //child = getChildGameObject(keyboard, findKeyPressed(resultdata));
                    int note = resultdata.value[1];
                    int velocity = resultdata.value[2];

                    if (velocity > 0)
                    {
                        int volume = 0;
                        if (velocity < 13)
                        {
                            volume = 0;
                        }
                        else if (velocity >= 13 && velocity < 25)
                        {
                            volume = 1;
                        }
                        else if (velocity >= 25 && velocity < 50)
                        {
                            volume = 2;
                        }
                        else if (velocity >= 50 && velocity < 76)
                        {
                            volume = 3;
                        }
                        else if (velocity >= 76 && velocity < 102)
                        {
                            volume = 4;
                        }
                        else if (velocity >= 102 && velocity < 114)
                        {
                            volume = 5;
                        }
                        else if (velocity >= 114)
                        {
                            volume = 6;
                        }

                        Notetester.BroadcastMessage("KeyPressed", new Vector2Int(note, volume));
                        //child.GetComponent<Renderer>().material.color = new Color(0.3f, 0.4f, 0.6f);
                    }
                    else
                    {
                        /* if (child.tag == "black_keys")
                         {
                             child.GetComponent<Renderer>().material.color = new Color(0.05f, 0.05f, 0.05f);
                         }
                         else
                         {
                             child.GetComponent<Renderer>().material.color = new Color(1f, 1f, 1f);
                         }*/
                        Debug.Log("NoteOFF: " + resultdata.value[0] + "," + note);
                        Notetester.BroadcastMessage("KeyReleased", note);
                    }

                }
            }
        }
    }

    //void Update()
    //{
    //    StartCoroutine(GetMidiData());
    //}
}
