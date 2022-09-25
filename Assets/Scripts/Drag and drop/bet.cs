using UnityEngine;
using TMPro;

public class bet : MonoBehaviour
{
    public TextMeshProUGUI[] validation;
    public TextMeshProUGUI totalBet;
    public TextMeshProUGUI currentMoney;
    private bool_selected bool_Selected;
    private Timer timer;
    public double curbal;
    public double _dblCurBal;
    public double _totalBet;

    private void Start()
    {
        bool_Selected = FindObjectOfType<bool_selected>();
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

            for (int i = 0; i < bool_Selected.inputBtn.Length; i++)
            {
                if (bool_Selected.inputBtn[i] == true && double.Parse(currentMoney.text) > 0)
                {
                    switch (x)
                    {
                        case 1:
                            if (double.Parse(currentMoney.text) >= 1 && bool_Selected.isChipsSelected[0] == true)
                            {
                                _totalBet = _totalBet + 1;
                                one += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (one).ToString();
                            }
                            break;

                        case 2:
                            if (double.Parse(currentMoney.text) >= 5 && bool_Selected.isChipsSelected[1] == true)
                            {
                                _totalBet = _totalBet + 5;
                                five += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (five).ToString();
                            }
                            break;

                        case 3:
                            if (double.Parse(currentMoney.text) >= 10 && bool_Selected.isChipsSelected[2] == true)
                            {

                                _totalBet = _totalBet + 10;
                                ten += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (ten).ToString();

                            }
                            break;

                        case 4:
                            if (double.Parse(currentMoney.text) >= 20 && bool_Selected.isChipsSelected[3] == true)
                            {
                                _totalBet = _totalBet + 20;
                                twenty += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (twenty).ToString();
                            }
                            break;

                        case 5:
                            if (double.Parse(currentMoney.text) >= 100 && bool_Selected.isChipsSelected[4] == true)
                            {
                                _totalBet = _totalBet + 100;
                                oneHundred += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (oneHundred).ToString();
                            }
                            break;

                        case 6:
                            if (double.Parse(currentMoney.text) >= 200 && bool_Selected.isChipsSelected[5] == true)
                            {

                                _totalBet = _totalBet + 200;
                                twoHundred += int.Parse(validation[i].text.PadLeft(1, '0'));
                                validation[i].text = (twoHundred).ToString();
                            }
                            break;
                    }

                    curbal = double.Parse((_dblCurBal - _totalBet).ToString());

                    if (curbal < 0)
                    {
                        currentMoney.text = "0.00";
                    }
                    else
                    {
                        currentMoney.text = string.Format("{0:N}", curbal);
                    }

                    totalBet.text = string.Format("{0:N}", _totalBet);
                }
            }
        }
    }
}
