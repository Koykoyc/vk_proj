using UnityEngine;

namespace api_Manager
{
    public class api_manager : MonoBehaviour
    {
        public static int time_out = 30;
        public static int time_out_2 = 20;
        public static int time_out_3 = 10;

        #region Maxbet

        public static string GetLatestAppVersion = "http://maxbet247.net/vkapiEncrypt/GetLatestAppVersion";
        public static string GetLogin = "http://maxbet247.net/vkapiEncrypt/GetLogin";
        public static string CheckMobileNo = "http://maxbet247.net/vkapiEncrypt/CheckMobileNo";
        public static string SendSMSOTP = "http://maxbet247.net/vkapiEncrypt/SendSMSOTP";
        public static string SMSPostNewPassword = "http://maxbet247.net/vkapiEncrypt/SMSPostNewPassword";
        public static string SMSSignUpOTP = "http://maxbet247.net/vkapiEncrypt/SMSSignUpOTP";
        public static string PostPlayerLogin = "http://maxbet247.net/vkapiEncrypt/PostPlayerLogin";
        public static string GetPrevCurrentOdds = "http://maxbet247.net/vkapiEncrypt/GetPrevCurrentOdds";
        public static string GetLastResult = "http://maxbet247.net/vkapiEncrypt/GetLastResult";
        public static string GetServerTime = "http://maxbet247.net/vkapiEncrypt/GetServerTime";
        public static string PostBetting = "http://maxbet247.net/vkapiEncrypt/PostBetting";
        public static string GetActionList = "http://maxbet247.net/vkapiEncrypt/GetActionList";
        public static string PostRequestWithdraw = "http://maxbet247.net/vkapiEncrypt/PostRequestWithdraw";
        public static string PostLogout = "http://maxbet247.net/vkapiEncrypt/PostLogout";

        #endregion

        #region new ip

        //public static string GetLatestAppVersion = "http://3.38.173.221/vkapiEncrypt/GetLatestAppVersion";
        //public static string GetLogin = "http://3.38.173.221/vkapiEncrypt/GetLogin";
        //public static string CheckMobileNo = "http://3.38.173.221/vkapiEncrypt/CheckMobileNo";
        //public static string SendSMSOTP = "http://3.38.173.221/vkapiEncrypt/SendSMSOTP";
        //public static string SMSPostNewPassword = "http://3.38.173.221/vkapiEncrypt/SMSPostNewPassword";
        //public static string SMSSignUpOTP = "http://3.38.173.221/vkapiEncrypt/SMSSignUpOTP";
        //public static string PostPlayerLogin = "http://3.38.173.221/vkapiEncrypt/PostPlayerLogin";
        //public static string GetPrevCurrentOdds = "http://3.38.173.221/vkapiEncrypt/GetPrevCurrentOdds";
        //public static string GetLastResult = "http://3.38.173.221/vkapiEncrypt/GetLastResult";
        //public static string GetServerTime = "http://3.38.173.221/vkapiEncrypt/GetServerTime";
        //public static string PostBetting = "http://3.38.173.221/vkapiEncrypt/PostBetting";
        //public static string GetActionList = "http://3.38.173.221/vkapiEncrypt/GetActionList";
        //public static string PostRequestWithdraw = "http://3.38.173.221/vkapiEncrypt/PostRequestWithdraw";
        //public static string PostLogout = "http://3.38.173.221/vkapiEncrypt/PostLogout";

        #endregion

        #region prod

        //public static string GetLatestAppVersion = "http://3.34.30.146/vkapiEncrypt/GetLatestAppVersion";
        //public static string GetLogin = "http://3.34.30.146/vkapiEncrypt/GetLogin";
        //public static string CheckMobileNo = "http://3.34.30.146/vkapiEncrypt/CheckMobileNo";
        //public static string SendSMSOTP = "http://3.34.30.146/vkapiEncrypt/SendSMSOTP";
        //public static string SMSPostNewPassword = "http://3.34.30.146/vkapiEncrypt/SMSPostNewPassword";
        //public static string SMSSignUpOTP = "http://3.34.30.146/vkapiEncrypt/SMSSignUpOTP";
        //public static string PostPlayerLogin = "http://3.34.30.146/vkapiEncrypt/PostPlayerLogin";
        //public static string GetPrevCurrentOdds = "http://3.34.30.146/vkapiEncrypt/GetPrevCurrentOdds";
        //public static string GetLastResult = "http://3.34.30.146/vkapiEncrypt/GetLastResult";
        //public static string GetServerTime = "http://3.34.30.146/vkapiEncrypt/GetServerTime";
        //public static string PostBetting = "http://3.34.30.146/vkapiEncrypt/PostBetting";
        //public static string GetActionList = "http://3.34.30.146/vkapiEncrypt/GetActionList";
        //public static string PostRequestWithdraw = "http://3.34.30.146/vkapiEncrypt/PostRequestWithdraw";
        //public static string PostLogout = "http://3.34.30.146/vkapiEncrypt/PostLogout";

        #endregion

        #region pre-prod

        //public static string GetLatestAppVersion = "http://3.34.30.146/PLAYGROUND_VK/GetLatestAppVersion";
        //public static string GetLogin = "http://3.34.30.146/PLAYGROUND_VK/GetLogin";
        //public static string CheckMobileNo = "http://3.34.30.146/vkSMS/CheckMobileNo";
        //public static string SendSMSOTP = "http://3.34.30.146/vkSMS/SendSMSOTP";
        //public static string SMSPostNewPassword = "http://3.34.30.146/vkSMS/SMSPostNewPassword";
        //public static string SMSSignUpOTP = "http://3.34.30.146/vkSMS/SMSSignUpOTP";
        //public static string PostPlayerLogin = "http://3.34.30.146/PLAYGROUND_VK/PostPlayerLogin";
        //public static string GetPrevCurrentOdds = "http://3.34.30.146/PLAYGROUND_VK/GetPrevCurrentOdds";
        //public static string GetLastResult = "http://3.34.30.146/PLAYGROUND_VK/GetLastResult";
        //public static string GetServerTime = "http://3.34.30.146/PLAYGROUND_VK/GetServerTime";
        //public static string PostBetting = "http://3.34.30.146/PLAYGROUND_VK/PostBetting";
        //public static string GetActionList = "http://3.34.30.146/PLAYGROUND_VK/GetActionList";
        //public static string PostRequestWithdraw = "http://3.34.30.146/PLAYGROUND_VK/PostRequestWithdraw";
        //public static string PostLogout = "http://3.34.30.146/PLAYGROUND_VK/PostLogout";

        #endregion

    }
}