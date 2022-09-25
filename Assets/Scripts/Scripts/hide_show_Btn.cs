using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class hide_show_Btn : MonoBehaviour
{
    //[SerializeField] private GameObject[] show_Objects;
    //[SerializeField] private GameObject[] hide_Objects;
    [SerializeField] private GameObject total_Player_Bet_Panel;
    [SerializeField] private GameObject show_guide_Panel;

    public void show_and_hide_player_bet(bool newValue)
    {
        total_Player_Bet_Panel.SetActive(newValue);
        show_guide_Panel.SetActive(newValue);
    } 

    /*public void show_hide()
    {
        for(int i = 0; i < show_Objects.Length; i++)
        {
            show_Objects[i].SetActive(true);
        }
        for (int i = 0; i < hide_Objects.Length; i++)
        {
            hide_Objects[i].SetActive(false);
        }
    }

    public void showIt(GameObject obj)
    {
        obj.SetActive(true);
    }

    public void hideIt(GameObject obj)
    {
        obj.SetActive(false);
    }*/
}
