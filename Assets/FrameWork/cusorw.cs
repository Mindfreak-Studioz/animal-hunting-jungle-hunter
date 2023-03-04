using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cusorw : MonoBehaviour {


    ////public GameObject hammerDialog;
    ////public GameObject WingsDialog;
    ////public GameObject TankDialog;


	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
        ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        ControlFreak2.CFCursor.visible = true;

        //if (Input.GetButtonDown("Fire1"))
        //{
        //    Debug.Log("shooting");
        //    FindObjectOfType<GunTankScript>().Shooting();

        //}


    }

  //   GunTankScript []Temp;


  //public void shootingggg()
  //  {
  //      FindObjectOfType<GunTankScript>().Shooting();
  //  }

  //  public void ShootingRobot()
  //  {
  //      Temp = FindObjectsOfType<GunTankScript>();
  //      foreach (GunTankScript a in Temp)
  //      {
  //          a.Shooting();
  //      }
        
  //  }


  //  public void hideHammer()
  //  {
  //      SoundManager.PlaySound(SoundManager.NameOfSounds.Button);
  //      hammerDialog.SetActive(false);
  //  }
   
  //  public void hidewing()
  //  {
  //      SoundManager.PlaySound(SoundManager.NameOfSounds.Button);
  //      WingsDialog.SetActive(false);
  //  }

  //  public void hideTank()
  //  {
  //      SoundManager.PlaySound(SoundManager.NameOfSounds.Button);
  //      TankDialog.SetActive(false);
  //  }

   
}