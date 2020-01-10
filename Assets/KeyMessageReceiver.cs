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

    private void ChangeImageColor_R(int note)
    {
        Child = transform.GetChild(note - Musicoffset);
        image = Child.GetComponent<Image>();
        Child.GetComponent<AudioSource>().Play();
        image.color = Color.red;
        print(Child.name);
    }

    private void ChangeImageColor_W(int note)
    {
        Child = transform.GetChild(note - Musicoffset);
        image = Child.GetComponent<Image>();
        Child.GetComponent<AudioSource>().Stop();
        image.color = Color.white;
    }
}
