using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JsonHelper
{
    public static T getJsonArray<T>(string json)
    {
        string newJson = json;
        Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(newJson);
        return wrapper.array;
    }

    [System.Serializable]
    private class Wrapper<T>
    {
        public T array;
    }
}


[System.Serializable]
public class midiData
{
    public string _id;
    public int[] value;
    public int __v;

}