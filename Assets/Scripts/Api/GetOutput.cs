using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Collections;
using UnityEngine.SceneManagement;
using EcryptAndDecrypt;
using SimpleJSON;
using api_Manager;
using System.Collections.Generic;
using System;

public class GetOutput : MonoBehaviour
{
    [SerializeField] Text version_text;
    [SerializeField] InputField username;
    [SerializeField] public InputField password;
    [SerializeField] GameObject loading_obj;
    [SerializeField] GameObject game_Version_Container;
    [SerializeField] private open_confirmation_window confirmation_window;
    //private sceneTransitionManager sceneTransition;

    private void Awake()
    {
        StartCoroutine(GetLatestAppVersion());
        //sceneTransition = FindObjectOfType<sceneTransitionManager>();
        confirmation_window = FindObjectOfType<open_confirmation_window>();
    }

    private void Start()
    {
        version_text.text = "v" + Application.version;
        loading_obj.SetActive(false);
        //PlayerPrefs.DeleteAll();
    }

    public void Credentials()
    {
        if (username.text == "")
        {
            confirmation_window.okay_confirmation_window_method("Please enter your username.");
            //Message(true, "Please enter your username.");
        }
        else if (password.text == "")
        {
            //Message(true, "Please enter your password.");
            confirmation_window.okay_confirmation_window_method("Please enter your password.");
        }
        else
        {
            loading_obj.SetActive(true);
            StartCoroutine(CallLogin());
        }
    }

    private IEnumerator GetLatestAppVersion()
    {
        using (var request = UnityWebRequest.Post(api_manager.GetLatestAppVersion, ""))
        {
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                //confirmation_window.okay_confirmation_window_method("Please check your network connection and try again!");
                //Debug.Log($"Failed: {request.error}");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                var result = JSON.Parse(request.downloadHandler.text);
                var res = JSON.Parse(EncryptDecrypt.Decrypt(result["Return"], EncryptDecrypt.strPassKey));
                if (res["mobileAppVersion"] == Application.version)
                {
                    //Debug.Log("OK");
                    game_Version_Container.SetActive(false);
                }
                else
                {
                    //Debug.Log("NOK");
                    game_Version_Container.SetActive(true);
                }
            }
            else
            {
                confirmation_window.okay_confirmation_window_method("Sorry, something went wrong. Please try again!");
                //Debug.Log($"Failed: {request.error}");
            }
        }
    }


    public string result;

    private IEnumerator CallLogin()
    {
        using (var request = UnityWebRequest.Post(api_manager.GetLogin, ""))
        {
            string encUser = EncryptDecrypt.Encrypt(username.text, EncryptDecrypt.strPassKey);
            string encPass = EncryptDecrypt.Encrypt(password.text, EncryptDecrypt.strPassKey);
            string appV = EncryptDecrypt.Encrypt(Application.version, EncryptDecrypt.strPassKey);
            string device_ID = EncryptDecrypt.Encrypt(SystemInfo.deviceUniqueIdentifier, EncryptDecrypt.strPassKey);
            //string ios_ID = EncryptDecrypt.Encrypt(Device.advertisingIdentifier, EncryptDecrypt.strPassKey);
            request.SetRequestHeader("param1", encUser);
            request.SetRequestHeader("param2", encPass);
            request.SetRequestHeader("param3", appV); 
            request.SetRequestHeader("param4", device_ID);
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                loading_obj.SetActive(false);
                //Debug.Log($"Failed: {request.error}");
                confirmation_window.okay_confirmation_window_method("Please check your network connection and try again!");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                var api_result = JSON.Parse(request.downloadHandler.text);
                if(api_result["Status"].ToString().Contains("Please install the latest video karera version."))
                {
                    game_Version_Container.SetActive(true);
                }
                else
                {
                    //game_Version_Container.SetActive(false);
                    PlayerPrefs.SetString("encName", encUser);
                    PlayerPrefs.SetString("encPass", encPass);
                    PlayerPrefs.SetString("deviceID", device_ID);
                    PlayerPrefs.SetString("userName", username.text);
                    PlayerPrefs.SetString("authid", api_result["AuthID"]);
                    //StartCoroutine(sceneTransition.transitionIn(loadScene));
                    SceneManager.LoadSceneAsync("betting_Scene");
                }
            }
            else 
            {
                loading_obj.SetActive(false);
                //Debug.Log($"Failed: {request.error}");
                confirmation_window.okay_confirmation_window_method("Invalid username or password.");
            }
        }
    }

    private void loadScene()
    {
        SceneManager.LoadSceneAsync("betting_Scene");
    }

    public void update_apk()
    {
        Application.OpenURL("http://maxbet247.net:81/vkgame.apk");
    }

    public void open_fb()
    {
        Application.OpenURL("https://www.facebook.com/maxbetgaming247");
    }


}

