using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManagerScript : MonoBehaviour
{
    public int Count;
    public int[] TargetCount;
    public AudioSource DieSound;


    public Text counterText;
    public Text TargetText;

    public Text RangeText;
    public Text OutRangeText;


    public GameObject Player;
    public GameObject[] Spawnpoints;


    public GameObject[] GunsParts;
    public Material[] materials;

    // Start is called before the first frame update
    void Start()
    {
        Count = 0;
        PlayerPrefs.DeleteKey("count");
        showCounterTextUI();
        PlayerSlection();
        GunTexturesChanger();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.G)) {

            Counters();
        }

        
    }

    public void RangeTextShow()
    {
        RangeText.text = "".ToString();
    }
    public void OutRangeTexts()
    {
        OutRangeText.text = "Out Of Range".ToString();
        StartCoroutine(waitforRangeMessage());
    }

    IEnumerator waitforRangeMessage()
    {
        yield return new WaitForSeconds(1);
        OutRangeText.text = "".ToString();
    }
    public void Counters()
    {
       Count= PlayerPrefs.GetInt("count", 0);
       
       Count += 1;
   
        PlayerPrefs.SetInt("count", Count);
        Debug.Log("Count Is:"+PlayerPrefs.GetInt("count"));
    }

    public void levelComplete()
    {
        if (GameManager.Instance.CurrentLevel==1)
        {
            if (PlayerPrefs.GetInt("count")==2)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==2)
        {
            if (PlayerPrefs.GetInt("count") == 2)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==3)
        {
            if (PlayerPrefs.GetInt("count") == 3)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==4)
        {
            if (PlayerPrefs.GetInt("count") == 4)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==5)
        {
            if (PlayerPrefs.GetInt("count") == 4)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==6)
        {
            if (PlayerPrefs.GetInt("count") == 5)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==7)
        {
            if (PlayerPrefs.GetInt("count") == 5)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==8)
        {
            if (PlayerPrefs.GetInt("count") == 5)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==9)
        {
            if (PlayerPrefs.GetInt("count") == 6)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==10)
        {
            if (PlayerPrefs.GetInt("count") == 6)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==11)
        {
            if (PlayerPrefs.GetInt("count") == 6)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==12)
        {
            if (PlayerPrefs.GetInt("count") == 6)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==13)
        {
            if (PlayerPrefs.GetInt("count") == 7)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==14)
        {
            if (PlayerPrefs.GetInt("count") == 7)
            {
                GameManager.Instance.TaskComplete();
            }
        }
        else if (GameManager.Instance.CurrentLevel==15)
        {
            if (PlayerPrefs.GetInt("count") == 6)
            {
                GameManager.Instance.TaskComplete();
            }
        }
    }

    public void showCounterTextUI()
    {
        counterText.text = PlayerPrefs.GetInt("count").ToString();
        
        if (GameManager.Instance.CurrentLevel==1)
        {
            TargetText.text = TargetCount[0].ToString();
        }
        else if (GameManager.Instance.CurrentLevel==2)
        {
            TargetText.text = TargetCount[1].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 3)
        {
            TargetText.text = TargetCount[2].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 4)
        {
            TargetText.text = TargetCount[3].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 5)
        {
            TargetText.text = TargetCount[4].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 6)
        {
            TargetText.text = TargetCount[5].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 7)
        {
            TargetText.text = TargetCount[6].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 8)
        {
            TargetText.text = TargetCount[7].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 9)
        {
            TargetText.text = TargetCount[8].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 10)
        {
            TargetText.text = TargetCount[9].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 11)
        {
            TargetText.text = TargetCount[10].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 12)
        {
            TargetText.text = TargetCount[11].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 13)
        {
            TargetText.text = TargetCount[12].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 14)
        {
            TargetText.text = TargetCount[13].ToString();
        }
        else if (GameManager.Instance.CurrentLevel == 15)
        {
            TargetText.text = TargetCount[14].ToString();
        }
    }

    public void PlayerSlection()
    {
        Player.transform.position = Spawnpoints[GameManager.Instance.CurrentLevel - 1].transform.position;

    }



    void GunTexturesChanger()
    {
        foreach (var item in GunsParts)
        {
            item.GetComponent<MeshRenderer>().material = materials[GameManager.Instance.CurrentPlayer-1];
        }
    }

}
