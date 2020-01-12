using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirtualKeyController : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] float Keyspeed;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        gameObject.transform.Translate(new Vector3(0,-1,0)*Time.deltaTime* Keyspeed);
    }
    private void OnTriggerEnter(Collider other)
    {
        print("trigger");
        if (other.gameObject.CompareTag("Base"))
        {
            Destroy(gameObject, 0.1f);
        }
    }
}
