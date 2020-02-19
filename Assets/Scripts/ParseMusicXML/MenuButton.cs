using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(ParseMusicUnityEditor))]
public class MenuButton : Editor {

    public override void OnInspectorGUI()
    {

        DrawDefaultInspector();



        ParseMusicUnityEditor myScript = (ParseMusicUnityEditor)target;

        if (GUILayout.Button("Creat prefab"))
        {

            myScript.Creatprefab();

        }
        else if (GUILayout.Button("Clear prefab"))
        {

            myScript.ClearPrefab();

        }

    }

}
