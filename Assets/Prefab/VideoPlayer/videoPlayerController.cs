using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class videoPlayerController : MonoBehaviour
{
    public VideoPlayer videoPlayer;

    void awake()
    {
        videoPlayer.Pause();
        Debug.Log("In video Player !!!!!!!!!!!");
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnSelect()
    {
        Debug.Log("OnSelect() called on: " + gameObject.name);
        playPause();
    }

        public void playPause()
    {
        if(videoPlayer.isPlaying)
        {
            videoPlayer.Pause();
        }
        else
        {
            videoPlayer.Play();
        }
    }
}
