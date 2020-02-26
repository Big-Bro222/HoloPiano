using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class MidiData : MonoBehaviour
{
    public string getMidiDataUrl;
    public GameObject keyboard;

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
                    
                    midiData resultdata  = JsonUtility.FromJson<midiData>(jsonResult);
                    Debug.Log(resultdata.value[1] + "---"+resultdata.value[0] + "="+ resultdata.value[2]);
                    child = getChildGameObject(keyboard, findKeyPressed(resultdata));
                    if (resultdata.value[0] == 144)
                    {
                        child.GetComponent<Renderer>().material.color = new Color(0.3f, 0.4f, 0.6f);
                    }
                    else
                    {
                        if(child.tag == "black_keys")
                        {
                            child.GetComponent<Renderer>().material.color = new Color(0.05f, 0.05f, 0.05f);
                        }
                        else
                        {
                            child.GetComponent<Renderer>().material.color = new Color(1f, 1f, 1f);
                        }
                        
                    }
                    
                }
            }
        }
    }

    static public GameObject getChildGameObject(GameObject fromGameObject, string withName)
    {
        Transform[] ts = fromGameObject.transform.GetComponentsInChildren<Transform>(true);
        foreach (Transform t in ts) if (t.gameObject.name == withName) return t.gameObject;
        return null;
    }

    static public string findKeyPressed(midiData data)
    {
        switch (data.value[1])
        {
            case 48:
                return "Box036";
                break;
            case 49:
                return "Box083";
                break;
            case 50:
                return "Box035";
                break;
            case 51:
                return "Box082";
                break;
            case 52:
                return "Box034";
                break;
            case 53:
                return "Box033";
                break;
            case 54:
                return "Box081";
                break;
            case 55:
                return "Box032";
                break;
            case 56:
                return "Box080";
                break;
            case 57:
                return "Box031";
                break;
            case 58:
                return "Box079";
                break;
            case 59:
                return "Box030";
                break;
            case 60:
                return "Box012";
                break;
            case 61:
                return "Box078";
                break;
            case 62:
                return "Box011";
                break;
            case 63:
                return "Box077";
                break;
            case 64:
                return "Box010";
                break;
            case 65:
                return "Box009";
                break;
            case 66:
                return "Box076";
                break;
            case 67:
                return "Box008";
                break;
            case 68:
                return "Box075";
                break;
            case 69:
                return "Box007";
                break;
            case 70:
                return "Box074";
                break;
            case 71:
                return "Box006";
                break;
            case 72:
                return "Box005";
                break;
            default:
                return "Box005";
                break;

        }
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(GetMidiData());
    }
}
