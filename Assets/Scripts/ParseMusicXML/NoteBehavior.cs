using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteBehavior : MonoBehaviour
{
    public float StartingHeight = 0.1f;
    public float Speed = 10f;
    public bool Running = true;
    public SheetBehaviorContoller sheetBehaviorContoller;


    private int StopMeasure =99;
    private int CurrentMeasure = 0;
    private float[] Defalutposition ={0, 0, 0, 0, 0,0,0,0,0,0,0,0,0,0,0,0};
    private int[] PracticeSection= { 99,99};
    void Start()
    {
       
        for(int i = 0; i < transform.childCount; i++)
        {
            Defalutposition[i] = transform.GetChild(i).localPosition.y;
        }
        setCurrentMeasure(0);
    }

    public void SetPracticeSection(int SectionNum)
    {
        if (PracticeSection[0] == 99)
        {
            PracticeSection[0] = SectionNum;
            sheetBehaviorContoller.SingleSelect(PracticeSection[0]);
            print(1);
        }
        else if (PracticeSection[1] == 99)
        {
            PracticeSection[1] = SectionNum;
            sheetBehaviorContoller.HighLightSheet(PracticeSection[0],PracticeSection[1]);
            print(2);
        }
        else
        {
            PracticeSection[0] = SectionNum;
            PracticeSection[1] = 99;
            sheetBehaviorContoller.SingleSelect(PracticeSection[0]);
            print(3);

        }
    }

    public void PlaySection()
    {
        setCurrentMeasure(PracticeSection[0]);
        StopMeasure = PracticeSection[1];
    }
    private void setCurrentMeasure(int Measureindex)
    {
        CurrentMeasure = Measureindex;
        for(int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).localPosition = new Vector3(0, Defalutposition[i]-Defalutposition[Measureindex]+ StartingHeight, 0);
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

        if (CurrentMeasure == StopMeasure + 1 || CurrentMeasure >= 16)
        {
            Running = false;
        }


        //if the Note is running, move every measure with the same speed
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
        if (!CurrentMeasureobj.transform.GetChild(CurrentMeasureobj.transform.childCount-1).gameObject.activeSelf)
        {
            SwitchMeasure = true;
        }

        if (SwitchMeasure&&CurrentMeasure<transform.childCount&&CurrentMeasure<16)
        {
            CurrentMeasure++;
        }



    }
}
