using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheetBehaviorContoller : MonoBehaviour
{
    public GameObject SheetsectionFolder;
    private SheetSectionController[] Sections;
    // Start is called before the first frame update
    void Start()
    {
        Sections=SheetsectionFolder.GetComponentsInChildren<SheetSectionController>();
    }

    public void PracticeMode(bool PracticeState)
    {
        SheetsectionFolder.SetActive(PracticeState);
    }

    public void HighLightSheet(int StartMeasure,int EndMeasure)
    {
        print("HighLight: " +StartMeasure+" and "+EndMeasure);
        for(int i = StartMeasure; i < EndMeasure+1; i++)
        {
            Sections[i].OnselectRender();
        }
        
    }

    public void SingleSelect(int Measure)
    {
        print("SingleSelect: " + Measure);
        print("The:" + Sections.Length);
        for(int j = 0; j < Sections.Length; j++)
        {
            Sections[j].DeSelectRender();

        }
        Sections[Measure].OnselectRender();
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
