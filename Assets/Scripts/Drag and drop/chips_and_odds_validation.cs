using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class chips_and_odds_validation : MonoBehaviour
{
    public bool[] isOddsSelected = new bool[15];
    [SerializeField]private Button[] chips_btn;


    private void Start()
    {
        foreach (Button index in chips_btn)
        {
            index.onClick.AddListener(HitChips);
        }
    }

    public void HitChips()
    {
        OddsIsEnabled();
    }

    public void OddsIsEnabled()
    {
        for (int i = 0; i < isOddsSelected.Length; i++)
        {
            isOddsSelected[i] = true;
        }
    }

    public void OddsIsDisabled()
    {
        for (int i = 0; i < isOddsSelected.Length; i++)
        {
            isOddsSelected[i] = false;
        }
    }
}
