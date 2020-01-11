using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonUIController : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] GameObject Scene2Generate;
    //private Material defaultMaterial;
    private GameObject ButtonBundary;

    void Awake()
    {
        ButtonBundary = transform.Find("ButtonBundary").gameObject;
        ButtonBundary.SetActive(false);
    }

    void Start()
    {
        Scene2Generate.SetActive(false);
        //defaultMaterial = GetComponent<MeshRenderer>().material;
    }
    public void OnGaze()
    {
        //gameObject.GetComponent<MeshRenderer>().material = selectedMaterial;
        ButtonBundary.SetActive(true);

    }
    public void OffGaze()
    {
        //gameObject.GetComponent<MeshRenderer>().material = defaultMaterial;
        ButtonBundary.SetActive(false);
    }
    public void OnClick()
    {
        Scene2Generate.SetActive(true);
    }
    

}
