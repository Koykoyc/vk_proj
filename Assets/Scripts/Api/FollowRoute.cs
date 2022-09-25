using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Newtonsoft.Json;
using static GetActionList;
using SimpleJSON;
using UnityEngine.UI;

public class FollowRoute : MonoBehaviour
{
    public ParticleSystem dustFront;
    public ParticleSystem dustLeft;
    public ParticleSystem dustMiddle;
    public ParticleSystem dustRight;
    public ParticleSystem dustBack;
    public Vector3 dustPosition;
    public ParticleSystem[] confeti;

    public PathToFollow path_to_Follow;
    public int currentwaypointID = 0;
    public float speed;
    public float reachDistance = 1.0f;
    public float distance;

    [SerializeField] private TextMeshProUGUI winner;
    [SerializeField] private TextMeshProUGUI curMoney;
    [SerializeField] private TextMeshProUGUI TotalWin;
    [SerializeField] private TextMeshProUGUI oddz;
    [SerializeField] private TextMeshProUGUI race_No;
    [SerializeField] private TextMeshProUGUI userName;

    [SerializeField] private GameObject winner_container;
    [SerializeField] private TextMeshProUGUI g_Result;
    //[SerializeField] private TextMeshProUGUI g_Result_oddz;
    [SerializeField] private TextMeshProUGUI Total_Win;
    [SerializeField] private TextMeshProUGUI l_Res;
    //[SerializeField] private TextMeshProUGUI oddz_Txt;

    public AudioSource bg_Audio_Source;
    public AudioSource winner_Audio_Source;
    public AudioSource win_Audio_Source;

    private camera_Test ct;

    void Start()
    {
        //l_Res.text = "<size=100>" + "6" + "</size>" + "  " + "<color=#00BF92>" + "3-5" + "</color>";
        //g_Result.text = "<size=90>" + "5" + "</size>" +  "  " + "<color=#00BF92>" + "2-3" + "</color>";
        horse_speed();
        ct = FindObjectOfType<camera_Test>();
        userName.text = PlayerPrefs.GetString("userName").ToUpper();
        curMoney.text = Timer.Instance.curmoney;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    private void FixedUpdate()
    {
        Invoke("player_movement", 1f);
    }

    void OnApplicationPause()
    {
        Application.Quit();
    }

    #region player movement

    #region player

    private void player_first_movement(string name, string speed)
    {
        dustplay_Effect(1);
        ct.offset.x = 8;
        this.gameObject.GetComponent<Animator>().SetBool("first_Anim", true);
        if (gameObject.name == name)
        {
            this.speed = float.Parse(speed);
        }
    }

    private void player_second_movement(string name, string speed)
    {
        duststop_Effect(1);
        dustplay_Effect(4);
        ct.offset.x = -8;
        ct.maxZoom = 10f;
        this.gameObject.GetComponent<Animator>().SetBool("second_Anim", true);
        if (gameObject.name == name)
        {
            this.speed = float.Parse(speed);
        }
    }

    private void player_third_movement(string name, string speed)
    {
        duststop_Effect(4);
        dustplay_Effect(3);
        this.gameObject.GetComponent<Animator>().SetBool("third_Anim", true);
        if (gameObject.name == name)
        {
            this.speed = float.Parse(speed);
        }
    }
    private void player_fourth_movement(string name, string speed)
    {
        duststop_Effect(3);
        dustplay_Effect(2);
        this.gameObject.GetComponent<Animator>().SetBool("fourth_Anim", true);
        if (gameObject.name == name)
        {
            this.speed = float.Parse(speed);
        }
    }
    private void player_fifth_movement(string name, string speed)
    {
        duststop_Effect(2);
        dustplay_Effect(5);
        ct.offset.x = -10;
        ct.maxZoom = 5f;
        this.gameObject.GetComponent<Animator>().SetBool("fifth_Anim", true);
        if (gameObject.name == name)
        {
            this.speed = float.Parse(speed);
        }
    }

    private void player_sixth_movement(string name, string speed)
    {
        duststop_Effect(2);
        dustplay_Effect(5);
        ct.offset.x = -10;
        ct.maxZoom = 5f;
        this.gameObject.GetComponent<Animator>().SetBool("sprint_Anim", true);
        if (gameObject.name == name)
        {
            this.speed = float.Parse(speed);
        }
    }

    #endregion

    public void player_movement()
    {
        distance = Vector2.Distance(path_to_Follow.path_objs[currentwaypointID].position, transform.position);
        transform.position = Vector2.MoveTowards(transform.position, path_to_Follow.path_objs[currentwaypointID].position,
            Time.fixedDeltaTime * speed);

        if (distance <= reachDistance)
        {
            if (currentwaypointID <= path_to_Follow.path_objs.Count)
            {
                currentwaypointID++;
                //if (currentwaypointID > 0)
                //{
                //    player_first_movement("player_1", "0");
                //    player_first_movement("player_2", "0");
                //    player_first_movement("player_3", "0");
                //    player_first_movement("player_4", "0");
                //    player_first_movement("player_5", "0");
                //    player_first_movement("player_6", "0");
                //}
                if (currentwaypointID < 2)
                {
                    player_first_movement("player_1", act1.H1);
                    player_first_movement("player_2", act1.H2);
                    player_first_movement("player_3", act1.H3);
                    player_first_movement("player_4", act1.H4);
                    player_first_movement("player_5", act1.H5);
                    player_first_movement("player_6", act1.H6);
                }
                else if (currentwaypointID >= 2 && currentwaypointID < 3)
                {
                    player_first_movement("player_1", act2.H1);
                    player_first_movement("player_2", act2.H2);
                    player_first_movement("player_3", act2.H3);
                    player_first_movement("player_4", act2.H4);
                    player_first_movement("player_5", act2.H5);
                    player_first_movement("player_6", act2.H6);
                }
                else if (currentwaypointID >= 3 && currentwaypointID < 4)
                {
                    player_first_movement("player_1", act3.H1);
                    player_first_movement("player_2", act3.H2);
                    player_first_movement("player_3", act3.H3);
                    player_first_movement("player_4", act3.H4);
                    player_first_movement("player_5", act3.H5);
                    player_first_movement("player_6", act3.H6);
                }
                else if (currentwaypointID >= 4 && currentwaypointID < 5)
                {
                    player_first_movement("player_1", act4.H1);
                    player_first_movement("player_2", act4.H2);
                    player_first_movement("player_3", act4.H3);
                    player_first_movement("player_4", act4.H4);
                    player_first_movement("player_5", act4.H5);
                    player_first_movement("player_6", act4.H6);
                }
                else if (currentwaypointID >= 5 && currentwaypointID < 6)
                {
                    player_first_movement("player_1", act5.H1);
                    player_first_movement("player_2", act5.H2);
                    player_first_movement("player_3", act5.H3);
                    player_first_movement("player_4", act5.H4);
                    player_first_movement("player_5", act5.H5);
                    player_first_movement("player_6", act5.H6);
                }
                else if (currentwaypointID >= 6 && currentwaypointID < 7)
                {
                    player_first_movement("player_1", act6.H1);
                    player_first_movement("player_2", act6.H2);
                    player_first_movement("player_3", act6.H3);
                    player_first_movement("player_4", act6.H4);
                    player_first_movement("player_5", act6.H5);
                    player_first_movement("player_6", act6.H6);
                }
                else if (currentwaypointID >= 7 && currentwaypointID < 8)
                {
                    player_second_movement("player_1", act7.H1);
                    player_second_movement("player_2", act7.H2);
                    player_second_movement("player_3", act7.H3);
                    player_second_movement("player_4", act7.H4);
                    player_second_movement("player_5", act7.H5);
                    player_second_movement("player_6", act7.H6);
                }
                else if (currentwaypointID >= 8 && currentwaypointID < 9)
                {
                    player_third_movement("player_1", act8.H1);
                    player_third_movement("player_2", act8.H2);
                    player_third_movement("player_3", act8.H3);
                    player_third_movement("player_4", act8.H4);
                    player_third_movement("player_5", act8.H5);
                    player_third_movement("player_6", act8.H6);
                }
                else if (currentwaypointID >= 9 && currentwaypointID < 10)
                {
                    player_fourth_movement("player_1", act9.H1);
                    player_fourth_movement("player_2", act9.H2);
                    player_fourth_movement("player_3", act9.H3);
                    player_fourth_movement("player_4", act9.H4);
                    player_fourth_movement("player_5", act9.H5);
                    player_fourth_movement("player_6", act9.H6);
                }
                else if (currentwaypointID >= 10 && currentwaypointID < 11)
                {
                    player_fifth_movement("player_1", act10.H1);
                    player_fifth_movement("player_2", act10.H2);
                    player_fifth_movement("player_3", act10.H3);
                    player_fifth_movement("player_4", act10.H4);
                    player_fifth_movement("player_5", act10.H5);
                    player_fifth_movement("player_6", act10.H6);
                }
                else if (currentwaypointID >= 11 && currentwaypointID < 12)
                {
                    player_fifth_movement("player_1", act11.H1);
                    player_fifth_movement("player_2", act11.H2);
                    player_fifth_movement("player_3", act11.H3);
                    player_fifth_movement("player_4", act11.H4);
                    player_fifth_movement("player_5", act11.H5);
                    player_fifth_movement("player_6", act11.H6);
                }
                else if (currentwaypointID >= 12 && currentwaypointID < 13)
                {
                    player_fifth_movement("player_1", act12.H1);
                    player_fifth_movement("player_2", act12.H2);
                    player_fifth_movement("player_3", act12.H3);
                    player_fifth_movement("player_4", act12.H4);
                    player_fifth_movement("player_5", act12.H5);
                    player_fifth_movement("player_6", act12.H6);
                }
                else if (currentwaypointID >= 13 && currentwaypointID < 14)
                {
                    player_fifth_movement("player_1", act13.H1);
                    player_fifth_movement("player_2", act13.H2);
                    player_fifth_movement("player_3", act13.H3);
                    player_fifth_movement("player_4", act13.H4);
                    player_fifth_movement("player_5", act13.H5);
                    player_fifth_movement("player_6", act13.H6);
                }
                else if (currentwaypointID >= 14 && currentwaypointID < 15)
                {
                    player_fifth_movement("player_1", act14.H1);
                    player_fifth_movement("player_2", act14.H2);
                    player_fifth_movement("player_3", act14.H3);
                    player_fifth_movement("player_4", act14.H4);
                    player_fifth_movement("player_5", act14.H5);
                    player_fifth_movement("player_6", act14.H6);
                }
                else if (currentwaypointID >= 15 && currentwaypointID < 16)
                {
                    player_fifth_movement("player_1", act15.H1);
                    player_fifth_movement("player_2", act15.H2);
                    player_fifth_movement("player_3", act15.H3);
                    player_fifth_movement("player_4", act15.H4);
                    player_fifth_movement("player_5", act15.H5);
                    player_fifth_movement("player_6", act15.H6);
                }
                else if (currentwaypointID >= 16 && currentwaypointID < 17)
                {
                    player_fifth_movement("player_1", act16.H1);
                    player_fifth_movement("player_2", act16.H2);
                    player_fifth_movement("player_3", act16.H3);
                    player_fifth_movement("player_4", act16.H4);
                    player_fifth_movement("player_5", act16.H5);
                    player_fifth_movement("player_6", act16.H6);
                }
                else if (currentwaypointID >= 17 && currentwaypointID < 18)
                {
                    player_fifth_movement("player_1", act17.H1);
                    player_fifth_movement("player_2", act17.H2);
                    player_fifth_movement("player_3", act17.H3);
                    player_fifth_movement("player_4", act17.H4);
                    player_fifth_movement("player_5", act17.H5);
                    player_fifth_movement("player_6", act17.H6);
                }
                else if (currentwaypointID >= 18 && currentwaypointID < 19)
                {
                    player_fifth_movement("player_1", act18.H1);
                    player_fifth_movement("player_2", act18.H2);
                    player_fifth_movement("player_3", act18.H3);
                    player_fifth_movement("player_4", act18.H4);
                    player_fifth_movement("player_5", act18.H5);
                    player_fifth_movement("player_6", act18.H6);
                }
                else if (currentwaypointID >= 19 && currentwaypointID < 20)
                {
                    player_fifth_movement("player_1", act19.H1);
                    player_fifth_movement("player_2", act19.H2);
                    player_fifth_movement("player_3", act19.H3);
                    player_fifth_movement("player_4", act19.H4);
                    player_fifth_movement("player_5", act19.H5);
                    player_fifth_movement("player_6", act19.H6);
                }
                else if (currentwaypointID >= 20 && currentwaypointID < 21)
                {
                    player_sixth_movement("player_1", act20.H1);
                    player_sixth_movement("player_2", act20.H2);
                    player_sixth_movement("player_3", act20.H3);
                    player_sixth_movement("player_4", act20.H4);
                    player_sixth_movement("player_5", act20.H5);
                    player_sixth_movement("player_6", act20.H6);
                }
                else if (currentwaypointID >= 21 && currentwaypointID < 22)
                {
                    player_sixth_movement("player_1", act21.H1);
                    player_sixth_movement("player_2", act21.H2);
                    player_sixth_movement("player_3", act21.H3);
                    player_sixth_movement("player_4", act21.H4);
                    player_sixth_movement("player_5", act21.H5);
                    player_sixth_movement("player_6", act21.H6);
                }
                else if (currentwaypointID >= 22)
                {
                    player_sixth_movement("player_1", act22.H1);
                    player_sixth_movement("player_2", act22.H2);
                    player_sixth_movement("player_3", act22.H3);
                    player_sixth_movement("player_4", act22.H4);
                    player_sixth_movement("player_5", act22.H5);
                    player_sixth_movement("player_6", act22.H6);
                }
            }
        }
        if (currentwaypointID >= path_to_Follow.path_objs.Count)
        {
            bg_Audio_Source.Stop();
            computeWinAmount();
            Time.timeScale = 0;
            StartCoroutine(betting_scene());
        }
    }

    #endregion

    #region load_scene

    private IEnumerator betting_scene()
    {
        yield return new WaitForSecondsRealtime(7);
        SceneManager.LoadScene("betting_Scene");
        Time.timeScale = 1;
    }

    #endregion

    #region dustplay_Anim

    private void dustplay_Effect(int x)
    {
        switch (x)
        {
            case 1:
                dustFront.Play();
                break;
            case 2:
                dustLeft.Play();
                break;
            case 3:
                dustMiddle.Play();
                break;
            case 4:
                dustRight.Play();
                break;
            case 5:
                dustBack.Play();
                break;
            case 6:
                dustFront.Stop();
                break;
            case 7:
                dustLeft.Stop();
                break;
            case 8:
                dustMiddle.Stop();
                break;
            case 9:
                dustRight.Stop();
                break;
        }
    }

    #endregion

    #region dust_stop_Anim

    private void duststop_Effect(int x)
    {
        switch (x)
        {
            case 1:
                dustFront.Stop();
                break;
            case 2:
                dustLeft.Stop();
                break;
            case 3:
                dustMiddle.Stop();
                break;
            case 4:
                dustRight.Stop();
                break;
        }
    }

    #endregion

    #region GetActionList

    public Action act1 = new Action();
    public Action act2 = new Action();
    public Action act3 = new Action();
    public Action act4 = new Action();
    public Action act5 = new Action();
    public Action act6 = new Action();
    public Action act7 = new Action();
    public Action act8 = new Action();
    public Action act9 = new Action();
    public Action act10 = new Action();
    public Action act11 = new Action();
    public Action act12 = new Action();
    public Action act13 = new Action();
    public Action act14 = new Action();
    public Action act15 = new Action();
    public Action act16 = new Action();
    public Action act17 = new Action();
    public Action act18 = new Action();
    public Action act19 = new Action();
    public Action act20 = new Action();
    public Action act21 = new Action();
    public Action act22 = new Action();
    public Action act23 = new Action();


    private void horse_speed()
    {
        string speed = Timer.Instance.req;
        var getActionList = JsonConvert.DeserializeObject<Root>(JSON.Parse(speed).ToString());
        string race_no = Timer.Instance.GetPrevCurrentOdds_json;
        var json_race_no = JSON.Parse(race_no);
        race_No.text = "RACE# " + "<color=#C9EBFF>" + json_race_no["Race"] + "</color>";

        int i = 0;
        foreach (Action act in getActionList.Actions)
        {
            if (i == 0)
                act1 = act;

            if (i == 1)
                act2 = act;

            if (i == 2)
                act3 = act;

            if (i == 3)
                act4 = act;

            if (i == 4)
                act5 = act;

            if (i == 5)
                act6 = act;

            if (i == 6)
                act7 = act;

            if (i == 7)
                act8 = act;

            if (i == 8)
                act9 = act;

            if (i == 9)
                act10 = act;

            if (i == 10)
                act11 = act;

            if (i == 11)
                act12 = act;

            if (i == 12)
                act13 = act;

            if (i == 13)
                act14 = act;

            if (i == 14)
                act15 = act;

            if (i == 15)
                act16 = act;

            if (i == 16)
                act17 = act;

            if (i == 17)
                act18 = act;

            if (i == 18)
                act19 = act;

            if (i == 19)
                act20 = act;

            if (i == 20)
                act21 = act;

            if (i == 21)
                act22 = act;

            if (i == 22)
                act23 = act;

            i++;
        }
    }

    #endregion

    private double computeWinAmount()
    {

        double retDouble = 0;
        string actionLst = Timer.Instance.req;
        string odds = Timer.Instance.GetPrevCurrentOdds_json;
        var jsonOdds = JSON.Parse(odds);
        var jsonActions = JSON.Parse(actionLst);
        var winStatus = jsonActions["WinStatus"];
        var oddList = jsonOdds["NextOdds"];

        //Debug.Log("Win Status: " + winStatus["Status"]);

        try
        {

            if (winStatus["Status"] == "1")
            {
                winner_Audio_Source.Stop();
                win_Audio_Source.Play();
                PlayerPrefs.SetInt("isWin", 1);
                winner_container.SetActive(true);
                foreach (ParticleSystem index in confeti)
                {
                    index.Play();
                }
                Total_Win.text = string.Format("{0:N}", System.Double.Parse(winStatus["Amount"]));
                TotalWin.text = string.Format("{0:N}", System.Double.Parse(winStatus["Amount"]));
                g_Result.text = "<size=90>" + winStatus["Odd"] + "</size>" + "  " + "<color=#00BF92>" + winStatus["Bet"] + "</color>";
                //g_Result_oddz.text = winStatus["Odd"];
                //g_Result.text = winStatus["Bet"];
            }
            else if (winStatus["Status"] == "0")
            {
                PlayerPrefs.SetInt("isWin", 0);
                l_Res.text = "<size=100>" + winStatus["Odd"] + "</size>" + "  " + "<color=#00BF92>" + winStatus["Bet"] + "</color>";
                //oddz_Txt.text = winStatus["Odd"];
                //l_Res.text = winStatus["Bet"];
                TotalWin.text = string.Format("{0:N}", System.Double.Parse(winStatus["Amount"]));
            }

            string[] arrayOdds = oddList.ToString().Split(',');
            PlayerPrefs.SetString("raceNo", jsonOdds["Race"]);
        }
        catch (System.Exception ex)
        {
            Debug.Log(ex.Message);
        }

        return retDouble;

    }

}




