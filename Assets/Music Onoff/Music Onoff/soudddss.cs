using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class soudddss : MonoBehaviour
{
    public Music music;
    public Button musictoggleButton;
    public Sprite musicOnSprite;
    public Sprite musicOffSprite;


     // Start is called before the first frame update
    void Start()
    {
        music = GameObject.FindObjectOfType<Music>();
        UpdateIcon();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PasueMusic()
    {
        music.ToggleSounds();
        UpdateIcon();
    }
    void UpdateIcon()
    {
        if (PlayerPrefs.GetInt("Muted",0)==0)
        {
            AudioListener.volume = 1;
            musictoggleButton.GetComponent<Image>().sprite = musicOnSprite;

        }
        else
        {
            AudioListener.volume = 0;
            musictoggleButton.GetComponent<Image>().sprite = musicOffSprite;
        }
    }
}
