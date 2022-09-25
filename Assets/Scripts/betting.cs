using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class betting : MonoBehaviour
{
    public TextMeshProUGUI[] validation;
    public TextMeshProUGUI totalBet;
    public TextMeshProUGUI currentMoney;
    private chips_and_odds_validation chips_and_oddsValidations;
    private Timer timer;
    public double curbal;
    public double _dblCurBal;
    public double _totalBet;

    private void Start()
    {
        chips_and_oddsValidations = FindObjectOfType<chips_and_odds_validation>();
        timer = FindObjectOfType<Timer>();
    }

    public double computeBalance(double CurrentBalance)
    {
        _dblCurBal = CurrentBalance;
        return CurrentBalance - this._totalBet;
    }

    public void validations(int x)
    {
        //if (!timer.countDownText.text.Contains("LOADING"))
        if (timer.currentTime >= 1)
        {
            int one = 1;
            int five = 5;
            int ten = 10;
            int twenty = 20;
            int oneHundred = 100;
            int twoHundred = 200;

            for (int i = 0; i < chips_and_oddsValidations.isOddsSelected.Length; i++)
            {
                if (chips_and_oddsValidations.isOddsSelected[i] == true && double.Parse(currentMoney.text) > 0)
                {
                    switch (x)
                    {
                        case 1:
                            if (double.Parse(currentMoney.text) >= 1)
                            {
                                _totalBet = _totalBet + 1;
                                one += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (one).ToString();
                            }
                            break;

                        case 2:
                            if (double.Parse(currentMoney.text) >= 5)
                            {
                                _totalBet = _totalBet + 5;
                                five += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (five).ToString();
                            }
                            break;

                        case 3:
                            if (double.Parse(currentMoney.text) >= 10)
                            {

                                _totalBet = _totalBet + 10;
                                ten += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (ten).ToString();

                            }
                            break;

                        case 4:
                            if (double.Parse(currentMoney.text) >= 20)
                            {
                                _totalBet = _totalBet + 20;
                                twenty += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (twenty).ToString();
                            }
                            break;

                        case 5:
                            if (double.Parse(currentMoney.text) >= 100)
                            {
                                _totalBet = _totalBet + 100;
                                oneHundred += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (oneHundred).ToString();
                            }
                            break;

                        case 6:
                            if (double.Parse(currentMoney.text) >= 200)
                            {

                                _totalBet = _totalBet + 200;
                                twoHundred += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (twoHundred).ToString();
                            }
                            break;
                    }
                }
            }

            curbal = double.Parse((_dblCurBal - _totalBet).ToString());

            if (curbal < 0)
                currentMoney.text = "0.00";
            else
                currentMoney.text = string.Format("{0:N}", curbal);

            totalBet.text = string.Format("{0:N}", _totalBet);

        }

    }
}
