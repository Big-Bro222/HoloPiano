using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KeyMessageReceiver : MonoBehaviour
{
    // Start is called before the first frame update
    private Transform Child;
    private Image image;
    private int Musicoffset = 48;
    void Start()
    {
        
    }

    private void KeyPressed(Vector2Int keyInfo)
    {
        Child = transform.GetChild(keyInfo[0] - Musicoffset);
        //image = Child.GetComponent<Image>();

        Child.transform.Rotate(new Vector3(0, 1, 0), -10, Space.Self);

        Debug.Log("Note ON");
        if (keyInfo[1] == 0)
        {
            Child.GetChild(0).GetComponent<AudioSource>().volume = 0.2f;
            Child.GetChild(0).GetComponent<AudioSource>().Play();
        }
        else if (keyInfo[1] == 1)
        {
            Child.GetChild(0).GetComponent<AudioSource>().volume = 0.4f;
            Child.GetChild(0).GetComponent<AudioSource>().Play();
        }
        else if (keyInfo[1] == 2)
        {
            Child.GetChild(1).GetComponent<AudioSource>().volume = 0.3f;
            Child.GetChild(1).GetComponent<AudioSource>().Play();
        }
        else if (keyInfo[1] == 3)
        {
            Child.GetChild(1).GetComponent<AudioSource>().volume = 0.6f;
            Child.GetChild(1).GetComponent<AudioSource>().Play();
        }
        else if (keyInfo[1] == 4)
        {
            Child.GetChild(1).GetComponent<AudioSource>().volume = 1.0f;
            Child.GetChild(1).GetComponent<AudioSource>().Play();
        }
        else if (keyInfo[1] == 5)
        {
            Child.GetChild(2).GetComponent<AudioSource>().volume = 0.5f;
            Child.GetChild(2).GetComponent<AudioSource>().Play();
        }
        else if (keyInfo[1] == 6)
        {
            Child.GetChild(2).GetComponent<AudioSource>().volume = 0.8f;
            Child.GetChild(2).GetComponent<AudioSource>().Play();
        }

        //image.color = Color.red;
        print(Child.name);
    }

    private void KeyReleased(int note)
    {
        Debug.Log("Note OFF");
        Child = transform.GetChild(note - Musicoffset);

        Child.transform.Rotate(new Vector3(0, 1, 0), 10, Space.Self);

        Child.GetChild(0).GetComponent<AudioSource>().volume = 0.0f;
        Child.GetChild(1).GetComponent<AudioSource>().volume = 0.0f;
        Child.GetChild(2).GetComponent<AudioSource>().volume = 0.0f;

        //Child.GetChild(0).GetComponent<AudioSource>().Stop();
        //Child.GetChild(1).GetComponent<AudioSource>().Stop();
        //Child.GetChild(2).GetComponent<AudioSource>().Stop();
        

        //image = Child.GetComponent<Image>();
        //image.color = Color.white;
    }
}
