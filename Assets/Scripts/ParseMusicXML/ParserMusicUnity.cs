using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MusicSheetGenerater;
using System.Linq;
using System;

public class ParserMusicUnity : MonoBehaviour
{
    //// Start is called before the first frame update
    //MusicParser instance = new MusicParser();
    //[SerializeField] GameObject notePrefab;
    //[SerializeField] float Yvalue=1f;
    //[SerializeField] float XValue=0.5f;
    ////[SerializeField] float waitSeconds = 0.2f;
    //[SerializeField] float notespeed = 1.0f;
    //private List<int[]> MusicInfo;
    //public int MusicinfoDetector = 0;
    //private int Notes2GenerateOneTime=4;
    //private int distancePerTime;
    //private int a = 0;
    //private float xPosition ;
    //private float yPosition ;
    //private float zPosition ;
    //void Start()
    //{
    //    instance.MusicInfoGenerator();
    //    MusicInfo=instance.GetMusicInfo();
    //    for(int i = 0; i < MusicInfo.Count; i++)
    //    {
    //        string infos = String.Join(",", MusicInfo[i].Select(p => p.ToString()).ToArray());
    //        Debug.Log(infos);
    //    }
    //    StartCoroutine(WaitAndPrint());
    //    xPosition = transform.position.x;
    //    yPosition = transform.position.y;
    //    zPosition = transform.position.z;
    //}

    //public float GetnoteSpeed()
    //{
    //    return notespeed;
    //}
    //private IEnumerator WaitAndPrint()
    //{
    //    while (true)
    //    {
    //        a += Notes2GenerateOneTime;   
    //        CreateVirtualNotes(a);
    //        yield return new WaitForSeconds(distancePerTime*Yvalue/notespeed);
    //    }
    //}
    //private void Update()
    //{
    //}

    //private void CreateVirtualNotes(int a)
    //{
    //    int noteIndex = 0;
    //    int NoteCount = 0;
    //    float NextStartYValue = 0;
    //    distancePerTime = 0;
    //    foreach (int[]noteinfo in MusicInfo)
    //    {
    //        if (noteIndex > a) {

    //            if (NoteCount < Notes2GenerateOneTime)
    //            {
    //                NoteCount++;
    //                Vector3 NotePosition = new Vector3(0, 0, 0);
    //                Vector3 NoteScale = new Vector3(XValue, Yvalue, 0.01f);

    //                distancePerTime += noteinfo[2];
    //                if (noteinfo[0] > 0)
    //                {
    //                    //add Xoffset according to <step>
    //                    NotePosition += new Vector3(XValue, 0, 0) * (noteinfo[0] + 7 * (noteinfo[1] - 4));
    //                    //add Yoffset
    //                    NotePosition += new Vector3(0, NextStartYValue, 0);
    //                    //add parent positionOffset
    //                    NotePosition += new Vector3(xPosition,yPosition,zPosition);
    //                    NoteScale = new Vector3(XValue, Yvalue * noteinfo[2], 0.01f);


    //                    GameObject note = Instantiate(notePrefab, NotePosition, Quaternion.identity);
    //                    note.transform.parent = transform;
    //                    note.transform.localScale = NoteScale;
    //                    NextStartYValue += noteinfo[2] * Yvalue;
    //                }
    //                else if (noteinfo[0] == 0)
    //                {
    //                    NextStartYValue += noteinfo[2] * Yvalue;
    //                }

    //            }
    //        }

    //        noteIndex++;

    //    }

        
    //}
}
