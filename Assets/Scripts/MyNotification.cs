using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Assets.SimpleAndroidNotifications;

public class MyNotification : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        SaveData.Instance = new SaveData();
        SaveLoad.LoadProgress();

        if (!SaveData.Instance.Notified) {
            NotificationManager.CancelAll();
            ScheduleNormal();
            ScheduleAdvance();
            SaveData.Instance.Notified = true;
            SaveLoad.SaveProgress();
    }

    }

    public void ScheduleNormal()
    {
        NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(21600), "Thanks for Downloading", "Keep supporting us. Click Here to Play", new Color(0, 0.6f, 1), NotificationIcon.Bell);
    }

    public void ScheduleAdvance()
    {
       
        NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(86400), "Call to hunter", "Lets hunt some animals. Click Here to Play", new Color(0, 0.6f, 1), NotificationIcon.Bell);
        NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(259200), "Call to hunter", "Lets hunt some animals. Click Here to Play", new Color(0, 0.6f, 1), NotificationIcon.Bell);
        NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(432000), "Call to hunter", "Lets hunt some animals. Click Here to Play", new Color(0, 0.6f, 1), NotificationIcon.Bell);
        NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(604800), "Call to hunter", "Lets hunt some animals. Click Here to Play", new Color(0, 0.6f, 1), NotificationIcon.Bell);
        NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(777600), "Call to hunter", "Lets hunt some animals. Click Here to Play", new Color(0, 0.6f, 1), NotificationIcon.Bell);
    }
}
