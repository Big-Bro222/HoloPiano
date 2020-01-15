/*===============================================================================
Copyright (c) 2016-2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;
using UnityEngine.Windows.Speech;
using System.Collections.Generic;
using System.Linq;
using Vuforia;

public class VoiceCommands : MonoBehaviour
{
    #region PRIVATE_MEMBERS
    Dictionary<string, System.Action> keywords = new Dictionary<string, System.Action>();
    KeywordRecognizer m_KeywordRecognizer;
    CanvasGroup m_CanvasGroup;
    UnityEngine.UI.Text m_VoiceKeywordText;
    Animator m_VoiceKeywordAnimator;
    AudioSource m_AudioSource;
    HelpMenu m_HelpMenu;
    #endregion // PRIVATE_MEMBERS

    void Awake()
    {
        // Get reference to HelpMenu before it is optionally disabled in HelpMenu.Start();
        m_HelpMenu = FindObjectOfType<HelpMenu>();
    }

    #region MONOBEHAVIOUR_METHODS
    void Start()
    {
        m_AudioSource = FindObjectOfType<AudioSource>();

        m_CanvasGroup = GetComponentInChildren<CanvasGroup>();
        m_VoiceKeywordText = m_CanvasGroup.GetComponentInChildren<UnityEngine.UI.Text>();
        m_VoiceKeywordAnimator = GetComponentInChildren<Animator>();

        // Setup the Keyword Commands
        SetupKeywordCommands();
        m_KeywordRecognizer = new KeywordRecognizer(keywords.Keys.ToArray());
        m_KeywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        m_KeywordRecognizer.Start();
    }

    #endregion //MONOBEHAVIOUR_METHODS


    #region PRIVATE_METHODS

    void SetupKeywordCommands()
    {
        keywords.Add("Reset", () =>
        {
            Reset();
        });

        keywords.Add("Show Menu", () =>
        {
            if (m_HelpMenu && !m_HelpMenu.gameObject.activeInHierarchy)
            {
                m_HelpMenu.gameObject.SetActive(true);
            }
        });

        keywords.Add("Close Menu", () =>
        {
            if (m_HelpMenu && m_HelpMenu.gameObject.activeInHierarchy)
            {
                m_HelpMenu.gameObject.SetActive(false);
            }
        });

        keywords.Add("Main Menu", () =>
        {
            LoadingScreen.SceneToLoad = "1-Menu";
            LoadingScreen.Run();
        });

        keywords.Add("Image Targets", () =>
        {
            LoadingScreen.SceneToLoad = "3-ImageTargets";
            LoadingScreen.Run();
        });

        keywords.Add("Model Targets", () =>
        {
            LoadingScreen.SceneToLoad = "3-ModelTargets";
            LoadingScreen.Run();
        });

        keywords.Add("VuMarks", () =>
        {
            LoadingScreen.SceneToLoad = "3-VuMarks";
            LoadingScreen.Run();
        });

        keywords.Add("Quit", () =>
        {
            Application.Quit();
        });

        keywords.Add("Standard", () =>
        {
            ModelTargetsManager mtm = FindObjectOfType<ModelTargetsManager>();
            if (mtm)
            {
                mtm.SelectDataSetStandard(true);
            }
        });

        keywords.Add("Advanced", () =>
        {
            ModelTargetsManager mtm = FindObjectOfType<ModelTargetsManager>();
            if (mtm)
            {
                mtm.SelectDataSetAdvanced(true);
            }
        });

        keywords.Add("Three Sixty", () =>
        {
            ModelTargetsManager mtm = FindObjectOfType<ModelTargetsManager>();
            if (mtm)
            {
                mtm.SelectDataSet360(true);
            }
        });
    }

    void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;

        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            Debug.Log("Voice Command: " + args.text);
            m_VoiceKeywordText.text = "\"" + args.text + "\"";
            m_AudioSource.Play();
            m_VoiceKeywordAnimator.SetTrigger("Toast");
            keywordAction.Invoke();
        }
    }
    
    void Reset()
    {
        var objTracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
        if (objTracker != null && objTracker.IsActive)
        {
            objTracker.Stop();

            List<DataSet> activeDataSets = objTracker.GetActiveDataSets().ToList();

            foreach (DataSet dataset in activeDataSets)
            {
                // The VuforiaEmulator.xml dataset (used by GroundPlane) is managed by Vuforia.
                if (!dataset.Path.Contains("VuforiaEmulator.xml"))
                {
                    VLog.Log("white", "Deactivating: " + dataset.Path);
                    objTracker.DeactivateDataSet(dataset);
                    VLog.Log("white", "Activating: " + dataset.Path);
                    objTracker.ActivateDataSet(dataset);
                }
            }

            objTracker.Start();
        }
    }

    #endregion //PRIVATE_METHODS
}
