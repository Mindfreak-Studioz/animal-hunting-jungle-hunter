using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PromoUpdater : MonoBehaviour
{
    IEnumerator updateInfo;
    public string[] GameLink;
    public Image cPImage;
    public Sprite[] icons;
    int randomNumber;

    private void Start()
    {
        randomNumber = Random.Range(0, GameLink.Length);
        updateInfo = UpdateInfo();
        StartCoroutine(updateInfo);
    }

    IEnumerator UpdateInfo()
    {
        while (true)
        {
            cPImage.GetComponent<Image>().sprite = icons[randomNumber];
            yield return new WaitForSeconds(20f);
            randomNumber = Random.Range(0, GameLink.Length);
            cPImage.GetComponent<Image>().sprite = icons[randomNumber];
        }
    }

    public void OpenGameLink()
    {

        Application.OpenURL(GameLink[randomNumber]);
        Debug.Log(GameLink);

    }

    private void OnDisable()
    {
        StopCoroutine(updateInfo);
        //updateInfo = null;
    }
}
