using UnityEngine;
using TMPro;
using System.Collections;
using UnityEngine.Networking;
using System.Collections.Generic;
using Newtonsoft.Json;
using SimpleJSON;
using System;
using EcryptAndDecrypt;
using UnityEngine.UI;
using api_Manager;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] public Text dateTime;
    [SerializeField] public TextMeshProUGUI countDownText;
    [SerializeField] public TextMeshProUGUI loading_text;
    [SerializeField] public TextMeshProUGUI bet_text;
    [SerializeField] private TextMeshProUGUI[] Odds;
    [SerializeField] private TextMeshProUGUI[] total_bet_Odds;
    [SerializeField] private Text[] betHis;
    [SerializeField] private TextMeshProUGUI[] StartSprintFinish;
    [SerializeField] private TextMeshProUGUI[] user_input;
    [SerializeField] private TextMeshProUGUI currBalance;
    [SerializeField] private TextMeshProUGUI bethis_race_No;
    [SerializeField] private TextMeshProUGUI userName;
    [SerializeField] private TextMeshProUGUI race;
    [SerializeField] public TextMeshProUGUI race_No;
    [SerializeField] private TextMeshProUGUI totalBet;
    [SerializeField] private TextMeshProUGUI throw_Logs;
    [SerializeField] private GameObject throw_Panel;
    [SerializeField] private Button[] button_Enable;
    [SerializeField] private AudioSource audio_1;

    [Header("ELEMENTS")]
    public static Timer Instance;
    public bool isWithdrawMode = false;
    public bool isDC = false;
    public float currentTime;
    private bool _raceIsRunning = false; 
    private bool _TerminateGetLastResult = false;
    private PostBetting.Root post_bettingRoot = null;
    private PostBetting.Bet post_betting = null;
    //private input_Btn input_btn;
    private last_Results lResults;
    private bet Bet;
    [NonSerialized] public string GetPrevCurrentOdds_json;
    [NonSerialized] public string req;
    [NonSerialized] public string curmoney;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
    }

    void Start()
    {
        Instance = this;
        //input_btn = FindObjectOfType<input_Btn>();
        Bet = FindObjectOfType<bet>();
        lResults = FindObjectOfType<last_Results>();
        userName.text = PlayerPrefs.GetString("userName").ToUpper();
        init();
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    void Update()
    {
        //string DT = DateTime.UtcNow.ToLocalTime().ToString("MMM dd, yyyy  HH:mm:ss");
        string DT = DateTime.UtcNow.ToLocalTime().ToString("dd-MM-yyyy  HH:mm:ss");
        dateTime.text = DT;
        timer_method();
    }

    void OnApplicationPause()
    {
        Application.Quit();
    }

    private void timer_method()
    {
        if (currentTime > 0)
        {
            currentTime -= 1 * Time.deltaTime;
            loading_text.gameObject.SetActive(false);
            countDownText.text = currentTime.ToString("0");
            countDownText.color = Color.white;
            if (isDC == true)
            {
                bet_text.gameObject.SetActive(false);
                countDownText.gameObject.SetActive(false);
                foreach(var i in button_Enable)
                {
                    i.enabled = false;
                }    
            }
            else
            {
                bet_text.gameObject.SetActive(true);
                countDownText.gameObject.SetActive(true);
                foreach (var i in button_Enable)
                {
                    i.enabled = true;
                }
            }

        }
        if (currentTime >= 1 && currentTime <= 10)
        {
            countDownText.color = Color.red;
        }
        if (currentTime < 1)
        {
            bet_text.gameObject.SetActive(false);
            countDownText.gameObject.SetActive(false);
            foreach (var i in button_Enable)
            {
                i.enabled = false;
            }
            if (isDC == true)
            {
                loading_text.gameObject.SetActive(false);
            }
            else
            {
                loading_text.gameObject.SetActive(true);
            }
        }
    }

    private void init()
    {
        _TerminateGetLastResult = false;
        CV.Clear();
        clear_btn();
        StartCoroutine(GetPrevCurrentOdds());
    }

    #region Message

    private void throw_message(bool isThrow, string message)
    {
        throw_Panel.gameObject.SetActive(isThrow);
        if (isThrow == true)
        {
            isDC = true;
            throw_Logs.text = message.ToUpper();
        }
    }

    private void login_Thrower()
    {
        SceneManager.LoadScene("login_Scene");
    }

    #endregion

    #region clear method

    public void clear_btn()
    {
        try
        {
            for (int i = 0; i < user_input.Length; i++)
            {
                if (!string.IsNullOrEmpty(user_input[i].text))
                {
                    user_input[i].text = string.Empty;

                }
            }
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
        }
        Bet.currentMoney.text = String.IsNullOrEmpty(PlayerPrefs.GetString("reloadBalance")) ? Bet.currentMoney.text = "0.00" : string.Format("{0:N}", System.Double.Parse(PlayerPrefs.GetString("reloadBalance")));

        if (Bet != null)
            Bet._totalBet = 0.00;

        totalBet.text = "0.00";

    }

    public void withdraw_clear_btn()
    {
        isWithdrawMode = true;
        for (int i = 0; i < user_input.Length; i++)
        {
            user_input[i].text = string.Empty;
        }
        totalBet.text = "0.00";
    }

    #endregion

    #region GetPrevCurrentOdds

    private IEnumerator GetPrevCurrentOdds()
    {
        using (var request = UnityWebRequest.Post(api_manager.GetPrevCurrentOdds, ""))
        {
            request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
            request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
            request.timeout = api_manager.time_out_2;
            yield return request.SendWebRequest();

            var result = JSON.Parse(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                // Debug.Log($"callGetGameResult Failed : {request.error}");
                throw_message(true, "Please check your network connection and try again!");
                Invoke("login_Thrower",6f);
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    var res = JSON.Parse(EncryptDecrypt.Decrypt(result["Return"], EncryptDecrypt.strPassKey));
                    GetPrevCurrentOdds_json = res.ToString();
                    //PlayerPrefs.SetString("getGameResult", res.ToString());
                    PlayerPrefs.SetString("ID", res["ID"]);
                    //race.text = "RACE# " + res["Race"];
                    race.text = "RACE# " + "<color=#C9EBFF>" + res["Race"] + "</color>";
                    race_No.text = "RACE#" + "<color=#C9EBFF>" + Environment.NewLine + res["UserBetHistList"]["RaceNo"] + "</color>";
                    getGameResult();
                    StartCoroutine(GetServerTime());
                    StartCoroutine(GetLastResult());
                }
                catch /*(Exception ex)*/
                {
                    //Debug.Log($"callGetGameResult catch : {ex.Message}");
                    throw_message(true, "Sorry, something went wrong. Please try again!");
                    Invoke("login_Thrower", 6f);
                }
            }
            else
            {
                //Debug.Log($"callGetGameResult Failed : {request.error}");
                throw_message(true, "Sorry, something went wrong. Please try again!");
                Invoke("login_Thrower", 6f);
            }
        }
    }

    public void getGameResult()
    {
        try
        {
            string json = GetPrevCurrentOdds_json;
            var json_parse = JSON.Parse(json);
            var betHist = json_parse["UserBetHistList"]["UserBets"];
            var starter = json_parse["HorseRank"];

            //Debug.Log(betHist.Count);
            for (int i = 0; i < betHist.Count; i++)
            {
                betHis[i].text = betHist[i]["UserBet"] + " | " + betHist[i]["Odds"] + " * " + betHist[i]["BetAmount"];
            }

            StartSprintFinish[0].text = "STARTER" + "    " + starter[0];
            StartSprintFinish[1].text = "FINISHER" + "   " + starter[1];
            StartSprintFinish[2].text = "SPRINTER" + "   " + starter[2];
          
            var nextOdds = json_parse["NextOdds"];
            for (int i = 0; i < nextOdds.Count; i++)
            {
                Odds[i].text = nextOdds[i];
                total_bet_Odds[i].text = nextOdds[i];
            }
        }
        catch/* (Exception ex)*/
        {
            //Debug.Log(ex.Message);
            throw_message(true, "Sorry, something went wrong. Please try again!");
            Invoke("login_Thrower", 6f);
        }
    }

    #endregion

    #region GetLastResult

    private IEnumerator GetLastResult()
    {
        while (true)
        {

            if (_TerminateGetLastResult)
                break;

            using (var request = UnityWebRequest.Post(api_manager.GetLastResult, ""))
            {
                request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
                request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
                request.timeout = api_manager.time_out_2;
                yield return request.SendWebRequest();


                var result = JSON.Parse(request.downloadHandler.text);
                if (request.result == UnityWebRequest.Result.ConnectionError)
                {
                    // Debug.Log($"GetLastResult Failed : {request.error}");
                    throw_message(true, "Please check your network connection and try again!");
                    Invoke("login_Thrower", 6f);
                }
                else if (request.result == UnityWebRequest.Result.Success)
                {
                    try
                    {
                        if (_raceIsRunning)
                            break;

                        var res = JSON.Parse(EncryptDecrypt.Decrypt(result["Return"], EncryptDecrypt.strPassKey));
                        if (res["CurrBalance"] == null || res["CurrBalance"] == "0")
                        {
                            Bet.currentMoney.text = "0.00";
                            // Debug.Log("cur bal: " + res["CurrBalance"]);
                            // PlayerPrefs.SetString("currBalance", currBalance.text);
                        }
                        else
                        {
                            // Debug.Log("cur bal: " + Double.Parse(res["CurrBalance"]);
                            double currB = Double.Parse(res["CurrBalance"]);
                            PlayerPrefs.SetString("reloadBalance", currB.ToString());
                            Bet._dblCurBal = currB;
                            double UIBalance = Bet.computeBalance(currB);
                            //double UIBalance = input_btn.computeBalance(currB);      
                            if(UIBalance < 0)
                                Bet.currentMoney.text = "0.00";
                            else
                                Bet.currentMoney.text = string.Format("{0:N}", UIBalance);
                        }
                        PlayerPrefs.SetString("GetLastResult", res.ToString());
                        lResults.GetLastResult();
                    }
                    catch/* (Exception ex)*/
                    {
                        //Debug.Log($"GetLastResult catch : {ex.Message}");
                        throw_message(true, "Sorry, something went wrong. Please try again!");
                        Invoke("login_Thrower", 6f);
                    }
                }
                else
                {
                    //Debug.Log($"GetLastResult Failed : {request.error}");
                    throw_message(true, "Sorry, something went wrong. Please try again!");
                    Invoke("login_Thrower", 6f);
                    break;
                }
            }


            yield return new WaitForSeconds(10f);
        }
    }

    #endregion

    #region GetServerTime

    private IEnumerator GetServerTime()
    {
        int counter = 0;
        while (true)
        {
            using (var request = UnityWebRequest.Post(api_manager.GetServerTime, ""))
            {
                var app_Version = JSON.Parse(EncryptDecrypt.Encrypt(Application.version, EncryptDecrypt.strPassKey));
                var authid = JSON.Parse(EncryptDecrypt.Encrypt(PlayerPrefs.GetString("authid"), EncryptDecrypt.strPassKey));
                request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
                request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
                request.SetRequestHeader("param3", PlayerPrefs.GetString("ID"));
                request.SetRequestHeader("param4", app_Version);
                request.SetRequestHeader("param5", authid);
                request.timeout = api_manager.time_out_3;
                yield return request.SendWebRequest();

                var result = JSON.Parse(request.downloadHandler.text);
                if (request.result == UnityWebRequest.Result.ConnectionError)
                {
                    // Debug.Log($"GetServerTime Failed : {request.error}");
                    throw_message(true, "Please check your network connection and try again!");
                    Invoke("login_Thrower", 6f);
                }
                else if (request.result == UnityWebRequest.Result.Success)
                {
                    try
                    {
                        var res = JSON.Parse(EncryptDecrypt.Decrypt(result["Return"], EncryptDecrypt.strPassKey));

                        if (res["Status"].ToString().Contains("NOK"))
                        {
                            //Debug.Log("GetServerTime: NOK");
                        }
                        else if (res["Status"].ToString().Contains("OUTDATED") || res["Status"].ToString().Contains("LOGOUT"))
                        {
                            throw_message(true, "Sorry, something went wrong. Please try again!");
                            Invoke("login_Thrower", 6f);
                            break;
                        }

                        string serverT = res["TimeLeft"];
                        currentTime = float.Parse(serverT);
                        countDownText.text = currentTime.ToString("0");
                    }
                    catch /*(Exception ex)*/
                    {
                        //Debug.Log("Getservertime: " + ex.Message);
                    }

                    if (currentTime <= 0)
                    {
                        if (!isWithdrawMode)
                        {
                            StartCoroutine(PostBeting());
                        }
                        else ///withdraw mode
                        {
                            _TerminateGetLastResult = true;
                            yield return new WaitForSeconds(11f);
                            init();
                        }
                        break;
                    }
                    else
                    {
                        counter = 0;
                    }
                }
                else
                {
                    // Debug.Log($"GetServerTime Failed : {request.error}");
                    StartCoroutine(GetServerTime());
                    break;
                }
                //not used
                if (currentTime <= 0 && counter >= 2) /// start over give 3 chances
                {
                    init();
                    break;
                }
                counter++;
            }
            yield return new WaitForSeconds(3f);
        }
    }

    #endregion

    #region PostBeting()

    private List<PostBetting.Bets> CV = new List<PostBetting.Bets>();

    private IEnumerator PostBeting()
    {
        betting();
        post_bettingRoot = new PostBetting.Root { UserID = PlayerPrefs.GetString("userName"), Bets = CV };
        string jsonData_root = JsonConvert.SerializeObject(post_bettingRoot);
        string encBet = EncryptDecrypt.Encrypt(jsonData_root, EncryptDecrypt.strPassKey);
        post_betting = new PostBetting.Bet { Request = encBet };
        string jsonData_bet = JsonConvert.SerializeObject(post_betting);
        //PlayerPrefs.SetString("betList", jsonData_root);
        //Debug.Log($"CallPostBeting OK : CallPostBeting");

        using (var request = UnityWebRequest.Put(api_manager.PostBetting, jsonData_bet))
        {
            request.method = "POST";
            request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
            request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
            request.SetRequestHeader("param3", PlayerPrefs.GetString("ID"));
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = api_manager.time_out_3;
            yield return request.SendWebRequest();

            var result = JSON.Parse(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                // Debug.Log($"CallPostBeting Failed : {request.error}");
                throw_message(true, "Please check your network connection and try again!");
                Invoke("login_Thrower", 6f);
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    var res = JSON.Parse(EncryptDecrypt.Decrypt(result["Return"], EncryptDecrypt.strPassKey));
                    if (res["Status"].ToString().Contains("NOK"))
                    {
                        //Debug.Log($"CallPostBeting NOK : Invalid Request");
                        throw_message(true, "Sorry, something went wrong. Please try again!");
                        Invoke("login_Thrower", 6f);
                    }
                    else
                    {
                       // Debug.Log($"CallPostBeting OK : Valid Request");
                    }
                }
                catch /*(Exception ex)*/
                {
                    //Debug.Log("CallPostBeting OK :" + ex.Message);
                }

                _raceIsRunning = true;
                yield return new WaitForSeconds(9);
                curmoney = Bet.currentMoney.text;
                StartCoroutine(GetActionList());
            }
            else
            {
                //Debug.Log($"CallPostBeting Failed : {request.error}");
                //yield return new WaitForSeconds(9);
                //PlayerPrefs.SetString("currBalance", "Invalid");
                //StartCoroutine(GetActionList());
                //Debug.Log(request.error);
                throw_message(true, "Sorry, something went wrong. Please try again!");
                yield return new WaitForSeconds(8f);
                throw_message(false, string.Empty);
                init();
            }
        }
    }

    private void betting()
    {
        for (int i = 0; i < Bet.validation.Length; i++)
        {
            if (!string.IsNullOrEmpty(Bet.validation[i].text))
            {
                CV.Add(new PostBetting.Bets
                {
                    Bet = Bet.validation[i].name,
                    BetAmount = Bet.validation[i].text
                });
            }
        }
    }

    #endregion

    #region getactionlist

    private int GetActionList_counter = 0;

    private IEnumerator GetActionList() //need init()
    {
        using (var request = UnityWebRequest.Post(api_manager.GetActionList, ""))
        {
            request.SetRequestHeader("param1", PlayerPrefs.GetString("encName"));
            request.SetRequestHeader("param2", PlayerPrefs.GetString("encPass"));
            request.SetRequestHeader("param3", PlayerPrefs.GetString("ID"));
            request.timeout = api_manager.time_out;
            yield return request.SendWebRequest();

            var result = JSON.Parse(request.downloadHandler.text);
            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                //Debug.Log($"GetActionList Failed : {request.error}");
                throw_message(true, "Please check your network connection and try again!");
                Invoke("login_Thrower", 6f);
            }
            else if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    var res = JSON.Parse(EncryptDecrypt.Decrypt(result["Return"], EncryptDecrypt.strPassKey));

                    if (res["Actions"].ToString().Contains("[]"))
                    {
                        //Debug.Log($"GetActionList : Actions is empty");
                        init();
                    }
                    else
                    {
                        req = res.ToString();
                        SceneManager.LoadScene("game_Scene");
                    }
                }
                catch /*(Exception ex)*/
                {
                    //Debug.Log($"GetActionList catch : {ex.Message}");
                    StartCoroutine(GetActionList());
                }
            }
            else
            {
                //Debug.Log($"GetActionList Failed : {request.error}");
                if (GetActionList_counter >= 20) ///  give 20 chances
                {
                    yield return new WaitForSeconds(10f);
                    init();
                }
                else
                {           
                    GetActionList_counter++;
                    //Debug.Log(GetActionList_counter);
                    StartCoroutine(GetActionList());
                }
                //yield return new WaitForSeconds(1);
                //throw_message(request.error);
                //yield return new WaitForSeconds(3f);
                //loadScene.LoadScene("login_Scene");
            }

        }
    }

    #endregion

}

[System.Serializable]
public class PostBetting
{

    public class Bets
    {
        public string Bet { get; set; }
        public string BetAmount { get; set; }
    }

    public class Root
    {
        public string UserID { get; set; }
        public List<Bets> Bets { get; set; }
    }

    public class Bet
    {
        public string Request { get; set; }
    }

}