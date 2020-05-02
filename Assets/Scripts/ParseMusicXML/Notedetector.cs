using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Notedetector : MonoBehaviour
{
    public AlignmentTest alignmentTest;
    private int CurrentKeyValue;
    private string CurrentObjName;
    // Start is called before the first frame update
    void Start()
    {
        CurrentKeyValue =999;
        CurrentObjName = "Null";
    }

    // Update is called once per frame
    void Update()
    {
        print("Current Key value should be : " + CurrentKeyValue);
    }


    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("VirtualNote"))
        {
            CurrentKeyValue = other.gameObject.GetComponent<NoteController>().getNoteinfo();
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("VirtualNote"))
        {
            CurrentKeyValue = other.gameObject.GetComponent<NoteController>().getNoteinfo();
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
        return CurrentKeyValue;
    }
}
