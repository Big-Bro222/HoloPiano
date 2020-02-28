using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlignmentTest : MonoBehaviour
{
    int CurrentMeasure;
    MeshRenderer[] meshRenderers;
    Color Holdcolor;
    // Start is called before the first frame update
    void Start()
    {
        Holdcolor = Color.white;
        CurrentMeasure = 0;
        meshRenderers= GetComponentsInChildren<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeColor(bool running)
    {
        
        Holdcolor = meshRenderers[CurrentMeasure].material.color;
        if (running) {
            meshRenderers[CurrentMeasure].material.color = Color.green;
        } else
        {
            meshRenderers[CurrentMeasure].material.color = Color.red;

        }
    }
    public void SetCurrentMeasure(int Measure)
    {
        meshRenderers[CurrentMeasure].material.color = Holdcolor;
        CurrentMeasure = Measure;
    }
}
