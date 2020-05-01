using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Notedetector : MonoBehaviour
{

    //this script is for detecting the current value for the key that should be pressed

    private int CurrentKeyValueShouldbe;
    private string CurrentObjName;
    // Start is called before the first frame update
    void Start()
    {
        // currentKeyValue should be
        CurrentKeyValueShouldbe =999;
        CurrentObjName = "Null";
    }

    // Update is called once per frame
    void Update()
    {
        print("Current Key value should be : " + CurrentKeyValueShouldbe);
    }

    //private void OnTriggerStay(Collider other)
    //{
    //    if (other.gameObject.CompareTag("VirtualNote"))
    //    {
    //        CurrentKeyValueShouldbe = other.gameObject.GetComponent<NoteController>().getNoteinfo();

    //    }
    //}
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("VirtualNote"))
        {
            CurrentKeyValueShouldbe = other.gameObject.GetComponent<NoteController>().getNoteinfo();
            CurrentObjName = other.gameObject.name;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("VirtualNote"))
        {
            other.gameObject.SetActive(false);
        }
    

    }

    public string GetCurrentObjNameOnBase()
    {
        return CurrentObjName;
    }
    public int GetCurrentKeyValueOnBase()
    {
        return CurrentKeyValueShouldbe;
    }
}
