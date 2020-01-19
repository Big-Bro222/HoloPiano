using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuController : MonoBehaviour
{
    [SerializeField] GameObject StartingInstruction;
    [SerializeField] GameObject MainMenu;
    // Start is called before the first frame update
    void Start()
    {
        StartingInstruction.SetActive(true);
        MainMenu.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void JumpToMainMenu()
    {
        StartingInstruction.SetActive(false);
        MainMenu.SetActive(true);
    }
}
