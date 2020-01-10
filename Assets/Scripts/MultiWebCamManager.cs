using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MultiWebCamManager : MonoBehaviour
{

    public GameObject webCamTexturePrefab;

    private string[] nameOfCams;

    private List<WebCamTexture> webCamTextures = new List<WebCamTexture>();

    // Start is called before the first frame update
    void Start()
    {
        int camCount = WebCamTexture.devices.Length;
        nameOfCams = new string[camCount];

        for (int i = 0; i < camCount; i++)
        {
            nameOfCams[i] = WebCamTexture.devices[i].name;
            GameObject g = Instantiate(webCamTexturePrefab, new Vector3(i * 6, 0, 0),
                                                            Quaternion.identity) as GameObject;

            g.transform.parent = gameObject.transform;

            WebCamTexture texture = new WebCamTexture();
            texture.deviceName = nameOfCams[i];
            webCamTextures.Add(texture);

            g.transform.GetChild(0).GetComponent<Renderer>().material.mainTexture = webCamTextures[i];
            webCamTextures[i].Play();
        }
    }

   
}
