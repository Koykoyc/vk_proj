using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class open_close_panel : MonoBehaviour
{
    public GameObject Panel;
    private Timer timer;
    [SerializeField] private Button bet_btn;

    // Start is called before the first frame update
    void Start()
    {
        Panel.SetActive(false);
        timer = FindObjectOfType<Timer>();
    }

    private void Update()
    {
        if (timer.currentTime > 0)
        {
            bet_btn.enabled = true;
        }
        else
        {
            bet_btn.enabled = false;
        }
    }

    public void close_open_panel()
    {
        if (Panel != null)
        {
            bool isActive = Panel.activeSelf;

            Panel.SetActive(!isActive);
        }
    }

    public void open_panel()
    {
        Panel.SetActive(true);
        timer.clear_btn();
        timer.isWithdrawMode = true;
    }
     

    public void close_panel()
    {
        Panel.SetActive(false); 
        timer.isWithdrawMode = false;

    }
}
 