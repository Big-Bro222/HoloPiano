using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlignmentTest : MonoBehaviour
{
    int CurrentMeasure;
    MeshRenderer[] meshRenderers;
    Color Holdcolor;
    int[] color;
    // Start is called before the first frame update
    void Start()
    {
        Holdcolor = Color.white;
        CurrentMeasure = 0;
        meshRenderers= GetComponentsInChildren<MeshRenderer>();
        color = new int[26] { 0,0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0 };
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

    public void ReSetKey(int currentkey)
    {
        if (color[currentkey] == 1)
        {
            meshRenderers[currentkey].material.color = Color.gray;
        }else if (color[currentkey] == 0)
        {
            meshRenderers[currentkey].material.color = Color.white;
        }
    }

    public void SetKeyindicator(bool RightKey,int currentkey)
    {
        if (RightKey)
        {
            meshRenderers[currentkey].material.color = Color.green;
        }
        else
        {
            meshRenderers[currentkey].material.color = Color.red;
        }
    }

    public void SetCurrentMeasure(int Measure)
    {
        if (color[CurrentMeasure] == 1)
        {
            meshRenderers[CurrentMeasure].material.color = Color.gray;
        }else if (color[CurrentMeasure] == 0)
        {
            meshRenderers[CurrentMeasure].material.color = Color.white;

        }
        CurrentMeasure = Measure;
    }
}
