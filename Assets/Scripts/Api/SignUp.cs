using EcryptAndDecrypt;
using SimpleJSON;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using api_Manager;
using System;
using System.Text.RegularExpressions;

public class SignUp : MonoBehaviour
{
    [SerializeField] private InputField username;
    [SerializeField] private InputField password;
    [SerializeField] private InputField confirm_password;
    [SerializeField] private InputField fName;
    [SerializeField] private InputField lName;
    [SerializeField] private InputField mob_No;
    [SerializeField] private InputField ref_Code;
    [SerializeField] private GameObject loading_obj;
    [SerializeField] private Button sign_up;
    [SerializeField] private InputField otp_text;
    [SerializeField] private GameObject otp_Panel;
    [SerializeField] private open_confirmation_window confirmation_window;
    private string this_username;
    private string this_mobNo;
    private string this_referral;


    private void Start()
    {
        confirmation_window = FindObjectOfType<open_confirmation_window>();
        otp_Panel.SetActive(false);
        loading_obj.SetActive(false);
    }


    #region signup

    public void close_otp()
    {
        otp_text.text = string.Empty;
        otp_Panel.SetActive(false);
    }

    public void Credentials()
    {
        var numbers_and_letters = new Regex("^[a-zA-Z0-9]*$");
        var has_space = new Regex(@"\s");

        if (username.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your username.");
        }
        else if (username.text.Length <= 5)
        {
            confirmation_window.okay_confirmation_window_method("Username must be at least 6 characters long.");
        }
        else if (has_space.IsMatch(username.text))
        {
            confirmation_window.okay_confirmation_window_method("Spaces not allowed in username.");
        }
        else if (mob_No.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your mobile number.");
        }
        else if (mob_No.text.Length <= 9)
        {
            confirmation_window.okay_confirmation_window_method("Invalid mobile number. Please try again!");
        }
        else if (password.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your password.");
        }
        else if (!numbers_and_letters.IsMatch(password.text))
        {
            confirmation_window.okay_confirmation_window_method("Password must be numbers and letters only.");
        }
        else if (password.text.Length <= 5)
        {
            confirmation_window.okay_confirmation_window_method("Password must be at least 6 characters long.");
        }
        else if (confirm_password.text != password.text)
        {
            confirmation_window.okay_confirmation_window_method("Please make sure your passwords match.");
        }
        else if (fName.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your firstname.");
        }
        else if (lName.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your last name.");
        }
        else if (ref_Code.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your referral code.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(SMSSignUpOTP());
        }
    }

    private IEnumerator Call_signup()
    {
        using (var request = UnityWebRequest.Post(api_manager.PostPlayerLogin, ""))
        {
            string pWord = EncryptDecrypt.Encrypt(password.text, EncryptDecrypt.strPassKey);
            string firstName = EncryptDecrypt.Encrypt(fName.text, EncryptDecrypt.strPassKey);
            string lastName = EncryptDecrypt.Encrypt(lName.text, EncryptDecrypt.strPassKey);
            string email_ = EncryptDecrypt.Encrypt("", EncryptDecrypt.strPassKey);
            string refCode = EncryptDecrypt.Encrypt(ref_Code.text, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", this_username);
            request.SetRequestHeader("param2", pWord);
            request.SetRequestHeader("param3", firstName);
            request.SetRequestHeader("param4", lastName);
            request.SetRequestHeader("param5", email_);
            request.SetRequestHeader("param6", this_mobNo);
            request.SetRequestHeader("param7", refCode);
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

                if (result["Status"].ToString().Contains("Email already exists"))
                {
                    confirmation_window.okay_confirmation_window_method("Email already exists, please try another one.");
                }
                else if (result["Status"].ToString().Contains("Login already exists"))
                {
                    confirmation_window.okay_confirmation_window_method("Username already exists, please try another one.");
                }
                else
                {
                    sign_up.enabled = false;
                    confirmation_window.okay_success_confirmation_window_method("Registration success.");
                }
            }
            else
            {
                confirmation_window.okay_confirmation_window_method(result["Status"]);
                loading_obj.SetActive(false);
            }
        }
    }

    #endregion

    #region SignUpOTP

    public IEnumerator SMSSignUpOTP()
    {
        using (var request = UnityWebRequest.Post(api_manager.SMSSignUpOTP, ""))
        {
            this_username = EncryptDecrypt.Encrypt(username.text, EncryptDecrypt.strPassKey);
            this_mobNo = EncryptDecrypt.Encrypt("63" + mob_No.text, EncryptDecrypt.strPassKey);
            this_referral = EncryptDecrypt.Encrypt(ref_Code.text, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", this_username);
            request.SetRequestHeader("param2", this_mobNo);
            request.SetRequestHeader("param3", this_referral);
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
                    loading_obj.SetActive(false);
                    otp_Panel.SetActive(true);
                }
                else
                { 
                    //Debug.Log(request.error);
                    loading_obj.SetActive(false);
                    confirmation_window.okay_confirmation_window_method(result["Status"]);
                    //confirmation_window.okay_confirmation_window_method("Invalid username or mobile number, please try again!");
                }
            }
            else
            {
                //Debug.Log(request.error);
                loading_obj.SetActive(false);
                confirmation_window.okay_confirmation_window_method(result["Status"]);
                //confirmation_window.okay_confirmation_window_method("Invalid username or mobile number, please try again!");
            }
        }
    }

    #endregion

    #region SendOTP

    public void SendOTP_Validations()
    {
        if (otp_text.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your OTP.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(SendSMSOTP());
        }
    }

    public IEnumerator SendSMSOTP()
    {
        using (var request = UnityWebRequest.Post(api_manager.SendSMSOTP, ""))
        {
            string OTP = EncryptDecrypt.Encrypt(otp_text.text, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", this_mobNo);
            request.SetRequestHeader("param2", OTP);
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
                    loading_obj.SetActive(false);
                    close_otp();
                    StartCoroutine(Call_signup());
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

}
