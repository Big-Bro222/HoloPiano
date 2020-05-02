using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorController : MonoBehaviour
{
    // Start is called before the first frame update
    public string color;
    void Start()
    {
        if (color.Equals("White"))
        {
            GetComponent<Renderer>().material.color = Color.white;
        }else if(color.Equals("Black"))
        {
            GetComponent<Renderer>().material.color = Color.gray;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
