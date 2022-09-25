using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using api_Manager;
using UnityEngine.UI;

public class logOut : MonoBehaviour
{
    [SerializeField] private Button close_btn;
    [SerializeField] private open_confirmation_window confirmation_window;
    private Timer timer;


    // Start is called before the first frame update
    private void Start()
    {
        confirmation_window = FindObjectOfType<open_confirmation_window>();
        timer = FindObjectOfType<Timer>();
    }

    private void Update()
    {
        if (timer.currentTime > 0)
        {
            close_btn.enabled = true;
        }
        else
        {
            close_btn.enabled = false;
        }
    }

    public void logout()
    {
        confirmation_window.logout_YesNo_confirmation_window_method();
        timer.clear_btn();
        timer.isWithdrawMode = true;
    }
}
