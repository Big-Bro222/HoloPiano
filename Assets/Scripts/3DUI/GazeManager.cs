using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GazeManager : MonoBehaviour
{
   

    private Transform _selection;
    private string selectableTag;
    private GameObject FocusObj ;
    // Start is called before the first frame update
    void Start()
    {
        selectableTag = "Button";
        
    }

    // Update is called once per frame
    void Update()
    {
        var headPosition = Camera.main.transform.position;
        var gazeDirection = Camera.main.transform.forward;
        RaycastHit hitInfo;

        if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            
            _selection = hitInfo.transform;
            if (_selection.CompareTag(selectableTag))
            {
                FocusObj = hitInfo.transform.gameObject;
                FocusObj.BroadcastMessage("OnGaze");
            }
            else if(FocusObj != null)
            {
                FocusObj.BroadcastMessage("OffGaze");
                FocusObj = null;   
            }
        }
        if (Input.GetMouseButtonDown(0))
        {
            print(FocusObj.name);
            FocusObj.BroadcastMessage("OnClick");
        }
    }
}
