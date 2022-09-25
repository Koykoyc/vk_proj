    using SimpleJSON;
using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class last_Results : MonoBehaviour
{ 
    public TextMeshProUGUI[] leftResult;
    public TextMeshProUGUI[] rightResult; 
    public Text[] lResults;

    public float blinkFadeInTime = 0.3f;
    public float blinkStayTime = 0.8f;
    public float blinkFadeOutTime = 0.5f;
    private float _timeChecker = 0;
    private Color left_color;
    //private Color right_color;

    int left_index;
    int right_index;
    string raceNo;

    private void Update()
    {
        if(PlayerPrefs.GetInt("isWin") == 1 && PlayerPrefs.GetString("raceNo") == raceNo)
        {
            left_color = leftResult[left_index].color;
            //left_color = rightResult[right_index].color;
            blinkingMethod(leftResult[left_index], rightResult[right_index]);
            //right_color = leftResult[right_index].color;
           // blinkingMethod2(rightResult[right_index]);
        }
    }
 
    public void GetLastResult()
    {
        string result = PlayerPrefs.GetString("GetLastResult");
        var res = JSON.Parse(result);
        var gameHist = res["GameHistList"];


        for (int i = 0; i < gameHist.Count; i++)
        {
            lResults[i].text = gameHist[i]["RaceNo"] + " | " + gameHist[i]["Winner"] + " | " + gameHist[i]["Odds"];
        }

        raceNo = gameHist[0]["RaceNo"];
        string str = gameHist[0]["Winner"].ToString().Replace("\"", "");
        string left_Result = str.Substring(0, 1);
        string right_Result = str.Substring(str.Length - 1);

        for (int i = 0; i < leftResult.Length; i++)
        {
            if (leftResult[i].name == left_Result)
            {
                left_index = i;
            }
            else
            {
                leftResult[i].color = new Color(0, 191, 146, 255);
            }
        }


        for (int i = 0; i < rightResult.Length; i++)
        {
            if (rightResult[i].name == right_Result)
            {
                right_index = i;
            }
            else
            {
                rightResult[i].color = new Color(0, 191, 146, 255);
            }
        }
    }

    public void blinkingMethod(TextMeshProUGUI blinking_Txt, TextMeshProUGUI blinking_Txt2)
    {
        _timeChecker += Time.deltaTime;
        if (_timeChecker < blinkFadeInTime)
        {
            blinking_Txt.color = new Color(left_color.r, left_color.g, left_color.b, _timeChecker / blinkFadeInTime);
            blinking_Txt2.color = new Color(left_color.r, left_color.g, left_color.b, _timeChecker / blinkFadeInTime);
        }
        else if (_timeChecker < blinkFadeInTime + blinkStayTime)
        {
            blinking_Txt.color = new Color(left_color.r, left_color.g, left_color.b, 1);
            blinking_Txt2.color = new Color(left_color.r, left_color.g, left_color.b, 1);
        }
        else if (_timeChecker < blinkFadeInTime + blinkStayTime + blinkFadeOutTime)
        {
            blinking_Txt.color = new Color(left_color.r, left_color.g, left_color.b, 1 - (_timeChecker - (blinkFadeInTime + blinkStayTime)) / blinkFadeOutTime);
            blinking_Txt2.color = new Color(left_color.r, left_color.g, left_color.b, 1 - (_timeChecker - (blinkFadeInTime + blinkStayTime)) / blinkFadeOutTime);
        }
        else
        {
            _timeChecker = 0;
        }
    }

    //public void blinkingMethod2(TextMeshProUGUI blinking_Txt)
    //{
    //    _timeChecker += Time.deltaTime;
    //    if (_timeChecker < blinkFadeInTime)
    //    {
    //        blinking_Txt.color = new Color(right_color.r, right_color.g, right_color.b, _timeChecker / blinkFadeInTime);
    //    }
    //    else if (_timeChecker < blinkFadeInTime + blinkStayTime)
    //    {
    //        blinking_Txt.color = new Color(right_color.r, right_color.g, right_color.b, 1);
    //    }
    //    else if (_timeChecker < blinkFadeInTime + blinkStayTime + blinkFadeOutTime)
    //    {
    //        blinking_Txt.color = new Color(right_color.r, right_color.g, right_color.b, 1 - (_timeChecker - (blinkFadeInTime + blinkStayTime)) / blinkFadeOutTime);
    //    }
    //    else
    //    {
    //        _timeChecker = 0;
    //    }
    //}

}


