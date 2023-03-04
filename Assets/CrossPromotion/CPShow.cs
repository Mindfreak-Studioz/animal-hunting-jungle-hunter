using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CPShow : MonoBehaviour {
	public GameObject cPObject;
	public int interval;
	// Use this for initialization
	void OnEnable()
	{
		ShowManager.Instance.counter++;
		if (ShowManager.Instance.counter % interval == 0) {
			ShowManager.Instance.counter = 0;
			cPObject.SetActive (true);

		} else {
			cPObject.SetActive (false);
		}
	}
}
