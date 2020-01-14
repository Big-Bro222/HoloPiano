using System;
using UnityEngine;
using System.Xml;
using System.IO;
using System.Collections.Generic;

namespace MusicSheetGenerater
{
    
    class MusicParser
    {
        private XmlDocument doc;

        //Change xmlFilepath here to switch between different musics
        private string xmlFilePath = "Assets/Music/Ode_to_Joy.xml";
        //MusicInfo contains all the info of the sheet.
        //each int[]contains three information of a sigle note["step,octave,duration"]
        //the default int[] is set to {0,4,0}
        //for rest note, the step value is 0
        private List<int[]> MusicInfo;
        public MusicParser()
        {            
            doc = new XmlDocument();
            doc.Load(xmlFilePath);
            MusicInfo = new List<int[]>();
        }
        
        public void MusicInfoGenerator()
        {

            XmlNodeList MeasureList = doc.GetElementsByTagName("measure");
            for (int i = 0; i < MeasureList.Count; i++)
            {
                XmlNodeList NoteSiblings = MeasureList[i].ChildNodes;
                for (int j = 0; j < NoteSiblings.Count; j++)
                {
                   
                    int[] noteinfo = { 0, 4, 0 };
                    if (NoteSiblings[j].Name == "backup")
                    {
                        break;
                    }
                    if (NoteSiblings[j].Name == "note")
                    {   
                        XmlNodeList NoteChilds = NoteSiblings[j].ChildNodes;
                        for (int k = 0; k < NoteChilds.Count; k++)
                        {

                            switch (NoteChilds[k].Name)
                            {
                                case "duration":
                                    noteinfo[2] = int.Parse(NoteChilds[k].InnerText);
                                    break;
                                case "rest":
                                    noteinfo[0] = 0;
                                    break;
                                case "pitch":
                                    noteinfo = parsePitch(NoteChilds[k], noteinfo);
                                    break;
                                default:
                                    
                                    break;
                            }
                        }

                        MusicInfo.Add(noteinfo);
                    }
                }


            }
        }

        public List<int[]> GetMusicInfo ()
        {
            return MusicInfo;
        }
        //get 'step'and 'octave' information from <pitch> note
        private int[] parsePitch(XmlNode NoteChilds, int[] noteinfo)
        {
            int[] note = new int[] { 0, 0, 0 };
            note= noteinfo;
            XmlNodeList PitchChilds =NoteChilds.ChildNodes;
            for (int k = 0; k < PitchChilds.Count; k++)
            {
                switch (PitchChilds[k].Name)
                {
                    case "step":
                        note[0] = Step2Num(PitchChilds[k].InnerText);
                        break;
                    case "octave":
                        note[1] = int.Parse(PitchChilds[k].InnerText);
                        break;
                    default:
                        Debug.Log("Default error");
                        break;
                }
            }
            return note;
        }
    

        private int Step2Num(string stepStr)
        {
            int stepnum = 0;
            switch (stepStr)
            {
                case "C":
                    stepnum=1;
                    break;
                case "D":
                    stepnum = 2;
                    break;
                case "E":
                    stepnum = 3;
                    break;
                case "F":
                    stepnum = 4;
                    break;
                case "G":
                    stepnum = 5;
                    break;
                case "A":
                    stepnum = 6;
                    break;
                case "B":
                    stepnum = 7;
                    break;
                default:
                    Console.WriteLine("Default case");
                    break;
            }
            return stepnum;
        }
    }
}