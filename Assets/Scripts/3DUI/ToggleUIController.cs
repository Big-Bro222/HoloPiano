using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleUIController : MonoBehaviour
{
    [SerializeField] GameObject PlayScene;
    [SerializeField] GameObject RepeatScene;
    private GameObject Bundary;
    private GameObject Switch;
    private bool Repeat;

    // Start is called before the first frame update
    void Awake()
    {
        Bundary = transform.Find("Bundary").gameObject;
        Switch = transform.Find("Switch").gameObject;
        Bundary.SetActive(false);
        Repeat = false;
    }
    private void Start()
    {
        PlayScene.SetActive(false);
        RepeatScene.SetActive(false);
    }
    public void OnGaze()
    {
        //gameObject.GetComponent<MeshRenderer>().material = selectedMaterial;
        Bundary.SetActive(true);

    }
    public void OffGaze()
    {
        //gameObject.GetComponent<MeshRenderer>().material = defaultMaterial;
        Bundary.SetActive(false);
    }
    public void OnClick()
    {
        Repeat = !Repeat;
        if (Repeat)
        {
            RepeatScene.SetActive(false);
            Switch.transform.Translate(new Vector3(0.09f, 0, 0));
            PlayScene.SetActive(true);
        }
        else
        {
            PlayScene.SetActive(false);
            Switch.transform.Translate(new Vector3(-0.09f, 0, 0));
            RepeatScene.SetActive(true);
        }
        
    }
}
