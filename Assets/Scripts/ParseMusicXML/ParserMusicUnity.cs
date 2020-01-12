using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MusicSheetGenerater;
public class ParserMusicUnity : MonoBehaviour
{
    // Start is called before the first frame update
    MusicParser instance = new MusicParser();
    [SerializeField] GameObject notePrefab;
    [SerializeField] float Yvalue=1f;
    [SerializeField] float XValue=0.5f;
    private List<int[]> MusicInfo;
    public int MusicinfoDetector = 0;
    void Start()
    {
        instance.MusicInfoGenerator();
        MusicInfo=instance.GetMusicInfo();
        CreateVirtualNotes();
        
    }
    private void Update()
    {
        
    }

    private void CreateVirtualNotes()
    {
        int noteIndex = 0;
        float NextStartYValue = 0;
        
        foreach(int[]noteinfo in MusicInfo)
        {
            Vector3 NotePosition = new Vector3(0, 0, 0);
            Vector3 NoteScale = new Vector3(XValue, Yvalue, 0.01f);
            if (noteinfo[0] > 0)
            {
                NextStartYValue += noteinfo[2] * Yvalue/2;
                NotePosition += new Vector3(XValue, 0, 0) *(noteinfo[0]+7*(noteinfo[1]-4));
                NotePosition += new Vector3(0, NextStartYValue, 0);
                NoteScale = new Vector3(XValue, Yvalue*noteinfo[2], 0.01f);
                

                GameObject note = Instantiate(notePrefab, NotePosition, Quaternion.identity);
                note.transform.parent = transform;
                note.transform.localScale = NoteScale;
                NextStartYValue += noteinfo[2] * Yvalue/2;
            }
            else if(noteinfo[0]==0)
            {
                NextStartYValue += noteinfo[2] * Yvalue/2;
            }

            
            noteIndex++;
        }

        
    }
}
