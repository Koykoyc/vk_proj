using EcryptAndDecrypt;
using Newtonsoft.Json;
using SimpleJSON;
using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using api_Manager;

public class withdraw : MonoBehaviour
{
    [SerializeField] private InputField enter_amount;
    [SerializeField] private InputField remarks;
    [SerializeField] private GameObject loading_obj;
    [SerializeField] private Button this_BTN;
    [SerializeField] private open_confirmation_window confirmation_window;
    private withdrawDTLS wdrawDTLS = null;
    private withdrawDTLSResult json_Result = null;
    private input_Btn input_btn;
    private Timer timer;

    private void Start()
    {
        timer = FindObjectOfType<Timer>();
        confirmation_window = FindObjectOfType<open_confirmation_window>();
        loading_obj.SetActive(false);
        input_btn = FindObjectOfType<input_Btn>();
    }

    public void validations(string input)
    {
        double one = 1;
        double five = 5;
        double ten = 10;
        double twenty = 20;
        double oneHundred = 100;
        double twoHundred = 200;

        decimal d;
        if(!decimal.TryParse(enter_amount.text, out d))
        {
            enter_amount.text = string.Empty;
            if (!string.IsNullOrEmpty(enter_amount.text))
            {
                enter_amount.text = string.Format("{0:N}", Double.Parse(enter_amount.text));
            }
        }

        try
        {
            switch (input)
            {
                case "1":
                    one += double.Parse(enter_amount.text.PadLeft(1, '0'));
                    enter_amount.text = string.Format("{0:N}", Double.Parse(one.ToString()));
                    break;
                case "2":
                    five += double.Parse(enter_amount.text.PadLeft(1, '0'));
                    enter_amount.text = string.Format("{0:N}", Double.Parse(five.ToString()));
                    break;
                case "3":
                    ten += double.Parse(enter_amount.text.PadLeft(1, '0'));
                    enter_amount.text = string.Format("{0:N}", Double.Parse(ten.ToString()));
                    break;
                case "4":
                    twenty += double.Parse(enter_amount.text.PadLeft(1, '0'));
                    enter_amount.text = string.Format("{0:N}", Double.Parse(twenty.ToString()));
                    break;
                case "5":
                    oneHundred += double.Parse(enter_amount.text.PadLeft(1, '0'));
                    enter_amount.text = string.Format("{0:N}", Double.Parse(oneHundred.ToString()));
                    break;
                case "6":
                    twoHundred += double.Parse(enter_amount.text.PadLeft(1, '0'));
                    enter_amount.text = string.Format("{0:N}", Double.Parse(twoHundred.ToString()));
                    break;
            }
        }
        catch
        {
            confirmation_window.okay_confirmation_window_method("Please enter a valid amount.");
            enter_amount.text = string.Empty;
        }

    }


    public void Withdraw()
    {
        decimal d;
        if (!decimal.TryParse(enter_amount.text, out d))
        {
            confirmation_window.okay_confirmation_window_method("Please enter a valid amount.");
            enter_amount.text = string.Empty;
        }
        else if (enter_amount.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter a valid amount.");
        }
        else if (remarks.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your remarks.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(CallWithdraw());
        }
    }

    #region callWithDraw

    private IEnumerator CallWithdraw()
    {
        wdrawDTLS = new withdrawDTLS() { UserID = PlayerPrefs.GetString("userName"), Amount = enter_amount.text, Remarks = remarks.text };
        string jsonData_Root = JsonConvert.SerializeObject(wdrawDTLS);
        string encWithdraw= EncryptDecrypt.Encrypt(jsonData_Root, EncryptDecrypt.strPassKey);
        json_Result = new withdrawDTLSResult() { Request = encWithdraw };
        string jsonData_Withdraw= JsonConvert.SerializeObject(json_Result);

        using (var request = UnityWebRequest.Put(api_manager.PostRequestWithdraw, jsonData_Withdraw))
        {
            request.method = "POST";
            request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
            request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method("Please check your network connection and try again!");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                var res = JSON.Parse(request.downloadHandler.text);
                loading_obj.SetActive(false);
                if (res["Status"].ToString().Contains("Insufficient"))
                {
                    confirmation_window.okay_confirmation_window_method(res["Status"]);
                }
                else if(res["Status"].ToString().Contains("Request failed!"))
                {
                    confirmation_window.okay_confirmation_window_method("Request Failed!");
                }
                else if(res["Status"].ToString().Contains("Invalid Amount!"))
                {
                    confirmation_window.okay_confirmation_window_method("You have insufficient balance to complete this transaction.");
                }
                else
                {
                    enter_amount.text = string.Empty;
                    remarks.text = string.Empty;
                    input_btn.currentMoney.text = string.Format("{0:N}", Double.Parse(res["CurrBalance"]));
                    timer.withdraw_clear_btn();
                    confirmation_window.okay_confirmation_window_method(res["Status"]);
                }
            }
            else
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method("Invalid Request.");
            }
        }

    }

    #endregion

}


[System.Serializable]
public class withdrawDTLS
{
    public string UserID { get; set; }
    public string Amount { get; set; }
    public string Remarks { get; set; }
}

public class withdrawDTLSResult
{
    public string Request { get; set; }
}
