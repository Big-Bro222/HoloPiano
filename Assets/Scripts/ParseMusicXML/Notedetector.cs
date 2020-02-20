using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Notedetector : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("VirtualNote"))
        {
            other.gameObject.SetActive(false);
        }

    }
}
