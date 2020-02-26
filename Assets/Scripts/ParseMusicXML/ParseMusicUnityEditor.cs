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
    //[Step,Octave,Alter,Duration]
    MusicParser instance = new MusicParser();
    private Dictionary<int, List<int[]>> MusicInfos;
    public GameObject prefab;
    //private float x;
    //private float y;
    //private float z;
    private float YPosition;
    private int[][] KeyMapping = new int[26][];


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
        int test = 3;
        Debug.Log(test / 2);
        YPosition = 0;
        //initial the key mapping in a dum way
        intiateKeyMapping(KeyMapping);
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
            Measure.transform.position = new Vector3(0,YPosition,0);
            Measure.transform.parent = transform;
            for(int j = 0; j < Measureinfo.Count; j++)
            {
                int XPosition = GenerateXOffsetIndex(Measureinfo[j],KeyMapping);
                YPosition += (float)Measureinfo[j][3] / 2;
                Vector3 NoteScale = new Vector3(1, (float)Measureinfo[j][3], 0.01f);
                Vector3 NotePosition = new Vector3(XPosition, YPosition, 0);
                GameObject Note = Instantiate(prefab, NotePosition,Quaternion.identity,Measure.transform);
                Note.GetComponent<NoteController>().setNoteinfo(XPosition);
                Note.transform.localScale = NoteScale;
                Note.name = i + "," + j;
                YPosition += (float)Measureinfo[j][3]/2;
            }

        }
        }
        private int GenerateXOffsetIndex(int[] Measureinfo,int[][]KeyMapping)
        {
            int index = 0;
            int[] Short = { Measureinfo[0], Measureinfo[1], Measureinfo[2] };
            for(int i = 0; i < KeyMapping.Length; i++)
        {
            if (Enumerable.SequenceEqual(Short, KeyMapping[i]))
            {
                index = i;
            }
        }
            return index;
        }
        private void intiateKeyMapping(int[][]KeyMapping)
        {
            for(int i = 0; i < KeyMapping.Length; i++)
        {
        KeyMapping[i] = new int[3] { 0, 0, 0 };
        }
         
            KeyMapping[1] = new int[3] { 1, 3, 0};
            KeyMapping[3] = new int[3] { 2, 3, 0 }; 
            KeyMapping[5] = new int[3] { 3, 3, 0 }; 
            KeyMapping[6] = new int[3] { 4, 3, 0 };
            KeyMapping[8] = new int[3] { 5, 3, 0 };
            KeyMapping[10] = new int[3] { 6, 3, 0 };
            KeyMapping[11] = new int[3] { 7, 3, -1 };
            KeyMapping[13] = new int[3] { 1, 4, 0 };
            KeyMapping[15] = new int[3] { 2, 4, 0 };
            KeyMapping[17] = new int[3] { 3, 4, 0 };
            KeyMapping[18] = new int[3] { 4, 4, 0 };
            KeyMapping[20] = new int[3] { 5, 4, 0 };
            KeyMapping[22] = new int[3] { 6, 4, 0 };
            KeyMapping[23] = new int[3] { 7, 4, -1 };
            KeyMapping[25] = new int[3] { 1, 5, 0 }; 


        }
}
