using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Music : MonoBehaviour
{
    static Music Instance = null;
    // Start is called before the first frame update
    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);

        }
        else;
        {
            Instance = this;
            GameObject.DontDestroyOnLoad(gameObject);
        }
    }
    

    public void ToggleSounds()
    {
        if (PlayerPrefs.GetInt("Muted",0)==0)
        {
            PlayerPrefs.SetInt("Muted",1);
        }
        else
        {
            PlayerPrefs.SetInt("Muted",0);
        }
    }
}
