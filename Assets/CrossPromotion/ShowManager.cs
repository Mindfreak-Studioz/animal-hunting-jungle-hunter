using UnityEngine;
using System.Collections;

public class ShowManager {

	private static ShowManager instance;

	private ShowManager() { }

	public static ShowManager Instance
	{
		get
		{
			if (instance == null)
			{
				instance = new ShowManager();
			}
			return instance;
		}
	}

	public int counter = 0;






}