using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class DataLoader : MonoBehaviour
{
//	string JsonDataString;
//	private string OriginalJsonSite = "http://technologywings.com/CrossPromotion/CPA1/CrossPromo.json";
//	private string OriginalJpegSite = "http://technologywings.com/CrossPromotion/CPA1";
//	public Text[] GameName;
//	public RawImage[] GameImage;
	public string[] GameLink;
	public Image[] cPImage;
	public Sprite[] icons;
	int randomNumber;

	void Start ()
	{
//		WWW readingsite = new WWW (OriginalJsonSite);
//		yield return readingsite;
//		if (string.IsNullOrEmpty (readingsite.error)) {
//			JsonDataString = readingsite.text;
//		}
//		JSONNode jsonNode = SimpleJSON.JSON.Parse (JsonDataString);
//		int totalNumber = jsonNode["TOTAL"];
		//Debug.Log ("total number string : " + totalNumber);
		randomNumber = Random.Range (0, GameLink.Length);
		//Debug.Log ("random number : " + randomNumber);
//		#if UNITY_IOS
//		GameLink = jsonNode ["IOSLINK"+randomNumber.ToString()];
//		#elif UNITY_ANDROID || UNITY_EDITOR
//		GameLink = jsonNode ["ANDROIDLINK"+randomNumber.ToString()];
//		#endif

//		Debug.Log ("Game Link : " + GameLink);
//		foreach (Text gameName in GameName) {
//			gameName.text = jsonNode ["NAME" + randomNumber.ToString ()].ToString ().ToUpper ();
//		}


//		WWW imageLink = new WWW (OriginalJpegSite+"/ICON"+randomNumber.ToString()+".png");
//		yield return imageLink;
//		Texture2D icon = new Texture2D (1, 1);
//		icon = imageLink.texture;
		foreach (Image image in cPImage) {
			image.GetComponent<Image> ().sprite = icons[randomNumber];
		}
	}

	public void OpenGameLink()
	{
		
		Application.OpenURL (GameLink[randomNumber]);
		Debug.Log (GameLink);

	}
}
