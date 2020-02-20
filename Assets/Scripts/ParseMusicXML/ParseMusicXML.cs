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
        private string xmlFilePath = "Assets/Music/Ode to Joy F Major.xml";
        //MusicInfo contains all the info of the sheet.
        //each int[]contains three information of a sigle note["step,octave,alter,duration"]
        //the default int[] is set to {0,0,0,0}
        //for rest note, the step value is 0
        private Dictionary<int, List<int[]>> MusicInfos;

        public MusicParser()
        {            
            doc = new XmlDocument();
            doc.Load(xmlFilePath);
            MusicInfos = new Dictionary<int, List<int[]>>();
        }
        
        public void MusicInfoGenerator()
        {
            XmlNode Part1 = doc.GetElementsByTagName("part")[0];
            for(int i = 0; i < Part1.ChildNodes.Count; i++)
            {
                List<int[]> MeasureList = new List<int[]>();
                XmlNode MeasureNode = Part1.ChildNodes[i];
                for(int j = 0; j < MeasureNode.ChildNodes.Count; j++)
                {
                    XmlNode NoteSiblingNode = MeasureNode.ChildNodes[j];
                    if (NoteSiblingNode.Name == "note")
                    {
                        int[] Noteinfo = { 0, 0, 0, 0 };
                        Noteinfo = NoteParser(NoteSiblingNode);
                        MeasureList.Add(Noteinfo);
                    }
                }
                MusicInfos.Add(i, MeasureList);
            } 
        }



        public Dictionary<int, List<int[]>> GetMusicInfo()
        {
            return MusicInfos;
        }
        private int[] NoteParser(XmlNode NoteSiblingNode)
        {
            //[Step,Octave,Alter,Duration]
            int[] Noteinfo = { 0, 0, 0, 0 };

            XmlNodeList NoteChilds = NoteSiblingNode.ChildNodes;
            for (int k = 0; k < NoteChilds.Count; k++)
            {

                switch (NoteChilds[k].Name)
                {
                    case "duration":
                        Noteinfo[3] = int.Parse(NoteChilds[k].InnerText);
                        break;
                    case "rest":
                        Noteinfo[0] = 0;
                        break;
                    case "pitch":
                        Noteinfo = parsePitch(NoteChilds[k], Noteinfo);
                        break;
                    default:

                        break;
                }
            }

                return Noteinfo;
        }
        private int[] parsePitch(XmlNode PithNode, int[] Noteinfo)
        {
            int[] note = Noteinfo;
                XmlNodeList PitchChilds = PithNode.ChildNodes;
            for (int k = 0; k < PitchChilds.Count; k++)
            {
                switch (PitchChilds[k].Name)
                {
                    case "step":
                        note[0] = Step2Num(PitchChilds[k].InnerText);
                        break;
                    case "alter":
                        note[2] = int.Parse(PitchChilds[k].InnerText);
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
                    stepnum = 1;
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