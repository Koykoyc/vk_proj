using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using api_Manager;
using System.Collections;

public class open_confirmation_window : MonoBehaviour
{
    [SerializeField] private confirmation_Window confirmation_window;
    //private sceneTransitionManager sceneTransition;
    private Timer timer;

    private void Awake()
    {
       //sceneTransition = FindObjectOfType<sceneTransitionManager>();
        timer = FindObjectOfType<Timer>();
    }

    #region Method

    public void okay_confirmation_window_method(string message)
    {
        confirmation_window.okay_Btn.onClick.AddListener(ok_Clicked);
        confirmation_window.yes_Btn.onClick.AddListener(loadScene);
        confirmation_window.no_Btn.onClick.AddListener(no_Clicked);
        confirmation_window.gameObject.SetActive(true);
        confirmation_window.yes_no_Panel.SetActive(false);
        confirmation_window.okay_Panel.SetActive(true);
        confirmation_window.warning.enabled = true;
        confirmation_window.questionMark.enabled = false;
        confirmation_window.message_Txt.text = message;
    }

    public void okay_success_confirmation_window_method(string message)
    {
        confirmation_window.okay_Btn.onClick.AddListener(loadScene);
        confirmation_window.gameObject.SetActive(true);
        confirmation_window.yes_no_Panel.SetActive(false);
        confirmation_window.okay_Panel.SetActive(true);
        confirmation_window.warning.enabled = true;
        confirmation_window.questionMark.enabled = false;
        confirmation_window.message_Txt.text = message;
    }

    public void yesNo_confirmation_windo_method(string message)
    {
        confirmation_window.okay_Btn.onClick.AddListener(ok_Clicked);
        confirmation_window.yes_Btn.onClick.AddListener(loadScene);
        confirmation_window.no_Btn.onClick.AddListener(no_Clicked);
        timer.isWithdrawMode = true;
        confirmation_window.gameObject.SetActive(true);
        confirmation_window.yes_no_Panel.SetActive(true);
        confirmation_window.okay_Panel.SetActive(false);
        confirmation_window.warning.enabled = true;
        confirmation_window.questionMark.enabled = false;
        confirmation_window.message_Txt.text = message;
    }

    public void logout_YesNo_confirmation_window_method()
    {
        confirmation_window.okay_Btn.onClick.AddListener(ok_Clicked);
        confirmation_window.yes_Btn.onClick.AddListener(logout_yes_Clicked);
        confirmation_window.no_Btn.onClick.AddListener(no_Clicked);
        timer.isWithdrawMode = true;
        confirmation_window.gameObject.SetActive(true);
        confirmation_window.yes_no_Panel.SetActive(true);
        confirmation_window.okay_Panel.SetActive(false);
        confirmation_window.warning.enabled = false;
        confirmation_window.questionMark.enabled = true;
        confirmation_window.message_Txt.text = "Are you sure you want to quit the game?";
    }

    #endregion

    #region Button

    private void logout_yes_Clicked()
    {
        StartCoroutine(PostLogout());
    }


    private void ok_Clicked()
    {
        confirmation_window.gameObject.SetActive(false);
    }


    //private void scene_Trigger()
    //{
    //    StartCoroutine(sceneTransition.transitionIn(loadScene));
    //}

    private void loadScene()
    {
        confirmation_window.gameObject.SetActive(false);
        SceneManager.LoadSceneAsync("login_Scene");
    }

    private void no_Clicked()
    {
        timer.isWithdrawMode = false;
        confirmation_window.gameObject.SetActive(false);
    }

    #endregion

    #region PostLogout()

    public IEnumerator PostLogout()
    {
        using (var request = UnityWebRequest.Post(api_manager.PostLogout, ""))
        {
            request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
            request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
            request.SetRequestHeader("param3", PlayerPrefs.GetString("deviceID"));
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                //Debug.Log($"Failed: {request.error}");
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                confirmation_window.gameObject.SetActive(false);
                loadScene();
                //SceneManager.LoadScene("login_Scene");
            }
            else
            {
                confirmation_window.gameObject.SetActive(false);
                loadScene();
                //SceneManager.LoadScene("login_Scene");
                //Debug.Log($"Failed: {request.error}");
            }
        }
    }

    #endregion

}
