using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ChipsDropHandler : MonoBehaviour, IDropHandler
{
    private bool_selected bool_Selected;
    private bet Bet;
    public AudioSource bet_Sound;

    private void Start()
    {
        bool_Selected = FindObjectOfType<bool_selected>();
        Bet = FindObjectOfType<bet>();
        bet_Sound = GetComponent<AudioSource>();
    }

    //for odds button
    public void OnDrop(PointerEventData eventData)
    {
        List<GameObject> hoveredList = eventData.hovered;
        foreach (var i in hoveredList)
        {
            if(i.name == "one_six_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[0] = true;
            }
            else if(i.name == "one_five_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[1] = true;
            }
            else if (i.name == "one_four_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[2] = true;
            }
            else if (i.name == "one_three_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[3] = true;
            }
            else if (i.name == "one_two_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[4] = true;
            }
            else if (i.name == "two_six_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[5] = true;
            }
            else if (i.name == "two_five_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[6] = true;
            }
            else if (i.name == "two_four_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[7] = true;
            }
            else if (i.name == "two_three_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[8] = true;
            }
            else if (i.name == "three_six_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[9] = true;
            }
            else if (i.name == "three_five_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[10] = true;
            }
            else if (i.name == "three_four_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[11] = true;
            }
            else if (i.name == "four_six_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[12] = true;
            }
            else if (i.name == "four_five_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[13] = true;
            }
            else if (i.name == "five_six_Btn")
            {
                bool_Selected.notSelectedFalse();
                bool_Selected.inputBtn[14] = true;
            }

        }

        //for chips button
        switch (eventData.pointerDrag.name)
        {
            case "chips_One (1)"://1
                bool_Selected.notSelected();
                bool_Selected.isChipsSelected[0] = true;
                Bet.validations(1);
                break;
            case "chips_Five (1)"://5
                bool_Selected.notSelected();
                bool_Selected.isChipsSelected[1] = true;
                Bet.validations(2);
                break;
            case "chips_Ten (1)"://10
                bool_Selected.notSelected();
                bool_Selected.isChipsSelected[2] = true;
                Bet.validations(3);
                break;
            case "chips_Twenty (1)"://20
                bool_Selected.notSelected();
                bool_Selected.isChipsSelected[3] = true;
                Bet.validations(4);
                break;
            case "chips_OneHundred (1)"://100
                bool_Selected.notSelected();
                bool_Selected.isChipsSelected[4] = true;
                Bet.validations(5);
                break;
            case "chips_TwoHundred (1)"://200
                bool_Selected.notSelected();
                bool_Selected.isChipsSelected[5] = true;
                Bet.validations(6);
                break;
        }

        bet_Sound.Play();
    }

  
}
