using EcryptAndDecrypt;
using SimpleJSON;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using api_Manager;
using System.Text.RegularExpressions;

public class forgotPassword : MonoBehaviour
{
    [SerializeField] InputField mobileNo;
    [SerializeField] InputField otp;
    [SerializeField] InputField pass;
    [SerializeField] InputField confirm_pass;
    [SerializeField] GameObject loading_obj;
    [SerializeField] Button BTN;
    [SerializeField] private open_confirmation_window confirmation_window;

    private void Start()
    {
        confirmation_window = FindObjectOfType<open_confirmation_window>();
        loading_obj.SetActive(false);
    }

    #region CheckMobileNo

    public void CheckMobileNoValidations()
    {
        if (mobileNo.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your mobile number.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(CheckMobileNo());
        }
    }


    public IEnumerator CheckMobileNo()
    {
        using (var request = UnityWebRequest.Post(api_manager.CheckMobileNo, ""))
        {
            string mobileNo = EncryptDecrypt.Encrypt("63" + this.mobileNo.text, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", mobileNo);
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();

            var result = JSON.Parse(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method("Please check your network connection and try again!");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                if (result["Status"].ToString().Contains("OK"))
                {
                    PlayerPrefs.SetString("mobileNo", mobileNo);
                    SceneManager.LoadSceneAsync("OTP");
                }

                else
                {
                    loading_obj.SetActive(false);
                    confirmation_window.okay_confirmation_window_method(result["Status"]);
                    //confirmation_window.okay_confirmation_window_method("Invalid mobile number, please try again!");
                }
            }
            else
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method(result["Status"]);
                //confirmation_window.okay_confirmation_window_method("Invalid mobile number, please try again!");
            }
        }
    }

    #endregion

    #region SendOTP

    public void SendOTP_Validations()
    {
        if (otp.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your OTP.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(SendOTP());
        }
    }

    public IEnumerator SendOTP()
    {
        using (var request = UnityWebRequest.Post(api_manager.SendSMSOTP, ""))
        {
            string SendSMSOTP = EncryptDecrypt.Encrypt(otp.text, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", PlayerPrefs.GetString("mobileNo"));
            request.SetRequestHeader("param2", SendSMSOTP);
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();

            var result = JSON.Parse(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method("Please check your network connection and try again!");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                if (result["Status"].ToString().Contains("OK"))
                {
                    SceneManager.LoadSceneAsync("New Password");
                }
                else
                {
                    loading_obj.SetActive(false);
                    confirmation_window.okay_confirmation_window_method(result["Status"]);
                    //confirmation_window.okay_confirmation_window_method("Invalid OTP, please try again!");
                }
            }
            else
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method(result["Status"]);
                //confirmation_window.okay_confirmation_window_method("Invalid OTP, please try again!");
            }
        }
    }

    #endregion

    #region change pass


    public void PostNewPasswordValidations()
    {
        Regex numbers_and_letters = new Regex("^[a-zA-Z0-9]*$");

        if (pass.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your new password.");
        }
        else if (!numbers_and_letters.IsMatch(pass.text))
        {
            confirmation_window.okay_confirmation_window_method("Password must be numbers and letters only.");
        }
        else if (pass.text.Length <= 5)
        {
            confirmation_window.okay_confirmation_window_method("Password must be at least 6 characters long.");
        }
        else if (confirm_pass.text != pass.text)
        {
            confirmation_window.okay_confirmation_window_method("Please make sure your passwords match.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(PostNewPassword());
        }
    }

    public IEnumerator PostNewPassword()
    {
        using (var request = UnityWebRequest.Post(api_manager.SMSPostNewPassword, ""))
        {
            string newPassword = EncryptDecrypt.Encrypt(pass.text, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", PlayerPrefs.GetString("mobileNo"));
            request.SetRequestHeader("param2", newPassword);
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();

            var result = JSON.Parse(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method("Please check your network connection and try again!");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                loading_obj.SetActive(false);
                if (result["Status"].ToString().Contains("OK"))
                {
                    BTN.enabled = false;
                    confirmation_window.okay_success_confirmation_window_method("Password change successfully!");
                }
                else
                {
                    loading_obj.SetActive(false);
                    confirmation_window.okay_confirmation_window_method(result["Status"]);
                }
            }
            else
            {
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method(result["Status"]);
                //confirmation_window.okay_confirmation_window_method("Invalid password, please try again!");
            }
        }
    }

    #endregion

}
