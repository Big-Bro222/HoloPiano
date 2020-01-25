using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class MidiData : MonoBehaviour
{
    public string getMidiDataUrl;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    IEnumerator GetMidiData()
    {
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
                    //Debug.Log("**************************************************************");
                    //Debug.Log(jsonResult);
                    midiData resultdata  = JsonUtility.FromJson<midiData>(jsonResult);

                    //Debug.Log("%%%%%%%%%%%%");
                    Debug.Log(resultdata.value[1] + "---"+resultdata.value[0] + "="+ resultdata.value[2]);


                }
                //ddlCountries.options.AddRange(entities.
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(GetMidiData());
    }
}
