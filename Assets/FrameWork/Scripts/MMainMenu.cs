using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class MMainMenu : MonoBehaviour{

	[Header("Scene Selection")]
	public Scenes NextScene;

	[Header("UI Panels")]
	public GameObject HelpScreen;
	public GameObject ExitDialogue;

	[Header("Ad Sequence ID")]
	public int SequenceID;

    public Button revokeConsent;


    void Awake()
    {
        
    }

    void Start(){
		Time.timeScale = 1;
		AudioListener.pause = false;

		if (!GameManager.Instance.Initialized) {
			InitializeGame();
		}

		InitializeUI();
	}

	void InitializeGame() {
		SaveData.Instance = new SaveData();
		SaveLoad.LoadProgress();
		GameManager.Instance.Initialized = true;
	}

	void ShowAds(int id) {
		//AdsManager.ShowAdvertisement (id, "Main Menu");
		//AdsManager.ShowBanner ();
	}

	void Update(){
		if (Application.platform == RuntimePlatform.Android){
			if (Input.GetKey(KeyCode.Escape))
			{
				ExitDialogue.SetActive(true);
			}
		}
       
    }

	void InitializeUI() {
		HelpScreen.SetActive(false);
		ExitDialogue.SetActive(false);
	}

	public void PlayBtn(){
		SceneManager.LoadScene(NextScene.ToString());
	}

	public void RemoveAds() {
	}

	public void RestorePurchases() {
	}

	public void ShowRateUs(){
	}

	public void Exit(){
		Application.Quit();
	}

	public void ResetSaveData() {
		SaveData.Instance = null;
		SaveLoad.DeleteProgress();
		SaveData.Instance = new SaveData();
		SaveLoad.LoadProgress();
	}

    public void MoreFunBtn()
    {
        Application.OpenURL("https://play.google.com/store/apps/developer?id=Mindfreak+Studios");
    }

   

    public void PrivacyPolicy()
    {
        Application.OpenURL("http://mindfreakstudios.com/privacy-policy/");
    }
}
