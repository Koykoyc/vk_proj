using UnityEngine;
using UnityEngine.UI;

public class sound_Setting : MonoBehaviour
{
    [SerializeField] Image soundOnIcon;
    [SerializeField] Image soundOffIcon;
    private bool Muted = false;

    private void Start()
    {
        if(!PlayerPrefs.HasKey("muted"))
        {
            PlayerPrefs.SetInt("muted", 0);
            load();
        }
        else
        {
            load();
        }
        updateButtonIcon();
        AudioListener.pause = Muted;
    }

    public void onButtonPressed()
    {
        if(Muted == false)
        {
            Muted = true;
            AudioListener.pause = true;
        }
        else
        {
            Muted = false;
            AudioListener.pause = false;
        }

        save();
        updateButtonIcon();
    }

    private void updateButtonIcon()
    {
        if (Muted == false)
        {
            soundOnIcon.enabled = true;
            soundOffIcon.enabled = false;
        }
        else
        {
            soundOnIcon.enabled = false;
            soundOffIcon.enabled = true;
        }
    }

    private void load()
    {

        Muted = PlayerPrefs.GetInt("muted") == 1;
    }

    private void save()
    {
        PlayerPrefs.SetInt("muted", Muted ? 1 : 0);
    }
}
