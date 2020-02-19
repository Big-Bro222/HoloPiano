using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MusicSheetGenerater;
using System.Linq;
using System;
using UnityEditor;

[ExecuteInEditMode]
public class ParseMusicUnityEditor:MonoBehaviour
{
    MusicParser instance = new MusicParser();
    private Dictionary<int, List<int[]>> MusicInfos;
    public GameObject prefab;
    //private float x;
    //private float y;
    //private float z;
    private float YPosition;
    private int[][] KeyMapping = new int[25][];


    //private void Start()
    //{
    //    x = transform.position.x;
    //    y = transform.position.y;
    //    z = transform.position.z;
    //    YPosition =0;

    //}


    public void ClearPrefab()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            DestroyImmediate(transform.GetChild(0).gameObject);
        }
        MusicInfos.Clear();
        Debug.Log("Destroy everything");
    }
    public void Creatprefab()
    {
        YPosition = 0;

        instance.MusicInfoGenerator();
        MusicInfos = instance.GetMusicInfo();
        foreach (var item in MusicInfos)

        {
            Debug.Log("yes");
        }
        Debug.Log("Creatprefab");
        for(int i = 0; i < MusicInfos.Count; i++)
        {
            List<int[]> Measureinfo = new List<int[]>();
            MusicInfos.TryGetValue(i, out Measureinfo);
            GameObject Measure = new GameObject("Measure "+i);
            Measure.transform.parent = transform;
            for(int j = 0; j < Measureinfo.Count; j++)
            {
                YPosition += Measureinfo[j][3] / 2;
                Vector3 NoteScale = new Vector3(1, Measureinfo[j][3], 0.01f);
                Vector3 NotePosition = new Vector3(0, YPosition, 0);
                GameObject Note = Instantiate(prefab, NotePosition,Quaternion.identity,Measure.transform);
                Note.transform.localScale = NoteScale;
                Note.name = i + "," + j;
                YPosition += Measureinfo[j][3]/2;
            }

        }
            //for (int i = 0; i < MusicInfo.Count; i++)
            //{
            //    Vector3 NotePosition = new Vector3(0, YPosition, 0);
            //    if (MusicInfo[i][0] != 0)
            //    {
            //        Vector3 NoteScale = new Vector3(1, MusicInfo[i][2], 1);
            //        GameObject instatiatedNote = Instantiate(prefab, NotePosition, Quaternion.identity);
            //        instatiatedNote.name = i.ToString();
            //        instatiatedNote.transform.parent = FolderObj.transform;
            //        instatiatedNote.transform.localScale = NoteScale;
            //    }
            //    YPosition += MusicInfo[i][2];
            //}
        }

            private void intiateKeyMapping(int[][]KeyMapping)
            {
                //KeyMapping[0] = new int[4] { 1, 2, 3, 4,};
                //KeyMapping[1] = new int[4] { 0, 1 };
                //KeyMapping[2] = new int[4] { };
    }
    }
