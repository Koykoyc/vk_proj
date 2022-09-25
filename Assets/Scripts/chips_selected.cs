using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class chips_selected : MonoBehaviour
{
    public bool[] isChipsSelected;

    public void Selected(int chips)
    {
        switch (chips)
        {
            case 1://1
                notSelected();
                isChipsSelected[0] = true;
                break;
            case 2://5
                notSelected();
                isChipsSelected[1] = true;
                break;
            case 3://10
                notSelected();
                isChipsSelected[2] = true;
                break;
            case 4://20
                notSelected();
                isChipsSelected[3] = true;
                break;
            case 5://100
                notSelected();
                isChipsSelected[4] = true;
                break;
            case 6://200
                notSelected();
                isChipsSelected[5] = true;
                break;
        }
    }

    public void notSelected()
    {
        for (int i = 0; i < isChipsSelected.Length; i++)
        {
            isChipsSelected[i] = false;
        }
    }
}
