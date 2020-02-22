using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteBehavior : MonoBehaviour
{
    public Vector3 StartingPoint = new Vector3(0, 4, 0);
    public float Speed = 10f;
    public float KeyStartHeight = 5f;
    public bool Running = true;

    private int CurrentMeasure = 0;
    private float[] Defalutposition ={0, 0, 0, 0, 0,0,0,0,0,0,0,0,0,0,0,0};
    void Start()
    {

        for(int i = 0; i < transform.childCount; i++)
        {
            Defalutposition[i] = transform.GetChild(i).position.y;
        }
    }

    public void setCurrentMeasure(int Measureindex)
    {
        CurrentMeasure = Measureindex;
        for(int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).position = new Vector3(0, Defalutposition[i]-Defalutposition[Measureindex], 0);
            if (i < Measureindex)
            {
                DeactivateChildren(transform.GetChild(i).gameObject, false);
            }
            else
            {
                DeactivateChildren(transform.GetChild(i).gameObject, true);
                transform.GetChild(i).gameObject.SetActive(false);
            }
            

        }
        //CurrentMeasure = Measureindex;
        //CalculatePos = true;
    }

    private void DeactivateChildren(GameObject g, bool a)
    {
        g.SetActive(a);



        foreach (Transform child in g.transform)
        {

            DeactivateChildren(child.gameObject, a);

        }

    }
    void Update()
    {
        if (Running)
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                transform.GetChild(i).transform.Translate(Vector3.down * Speed * Time.deltaTime);
            }
        }
        
        
        GameObject CurrentMeasureobj = transform.GetChild(CurrentMeasure).gameObject;
        CurrentMeasureobj.SetActive(true);

        bool SwitchMeasure = false;
        if (!CurrentMeasureobj.transform.GetChild(1).gameObject.activeSelf)
        {
            SwitchMeasure = true;
        }

        if (SwitchMeasure&&CurrentMeasure<transform.childCount)
        {
            CurrentMeasure++;
        }

    }
}
