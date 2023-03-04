using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class LevelSelection : MonoBehaviour {

	[Header("Scene Selection")]
	public Scenes PreviousScene;
	public Scenes NextScene;

	[Header("Settings")]
	public bool Locked;
	public int PlayableLevels = 6;

	[Header("UI Panels")]
	public GameObject LoadingScreen;
	public Slider FillBar;

	[Header("Level Buttons")]
	public List<Button> LevelButtons = new List<Button>();
   // public GameObject[] locks;

	[Header("Ad Sequence ID")]
	public int SequenceID;

	AsyncOperation async = null;

	void Start () {
		FillBar.value = 0;
		Time.timeScale = 1;
		AudioListener.pause = false;
		LoadingScreen.SetActive(false);
		if (!GameManager.Instance.Initialized) {
			InitializeGame();
		}
		LevelsInit();
		ShowAds(SequenceID);
	}

	void InitializeGame() {
		SaveData.Instance = new SaveData();
		SaveLoad.LoadProgress();
		GameManager.Instance.Initialized = true;
	}

	void ShowAds(int id) {
		//AdsManager.ShowAdvertisement (id, "Level Selection");
	}

	void Update(){
		if (Application.platform == RuntimePlatform.Android)
		{
			if (Input.GetKey(KeyCode.Escape))
			{
				SceneManager.LoadScene(PreviousScene.ToString());
			}
		}

		if (async != null)
		{
			FillBar.value = async.progress;
			if (async.progress >= 0.9f)
			{
				FillBar.value = 1.0f;
			}
		}

	}

	void LevelsInit(){
		if (!Locked){
			for (int i = 0; i < LevelButtons.Count; i++){
				if (i < PlayableLevels) 
					
                    {
                    LevelButtons[i].interactable = true;
                   //locks[i].SetActive(true);
                }
                else
                {
                    LevelButtons[i].interactable = false;
                   // locks[i].SetActive(false);

                }
               
			}
		} 
		else{
			for (int i = 0; i < LevelButtons.Count; i++){
				LevelButtons[i].interactable = false;
                //locks[i].SetActive(false);

            }

            for (int i = 0; i < LevelButtons.Count; i++){
				if (i < SaveData.Instance.Level && i < PlayableLevels){
					LevelButtons[i].interactable = true;
                    //locks[i].SetActive(true);

                }
            }
		}
	}

	public void PlayLevel(int level){
		GameManager.Instance.CurrentLevel = level;
		GameManager.Instance.SessionStatus = 1;
		LoadingScreen.SetActive(true);
		StartCoroutine(LevelStart());
	}

	IEnumerator LevelStart(){
		async = SceneManager.LoadSceneAsync(NextScene.ToString());
		LoadingScreen.SetActive(true);
		yield return async;
	}

	public void BackBtn(){
		SceneManager.LoadScene(PreviousScene.ToString());
	}
}
