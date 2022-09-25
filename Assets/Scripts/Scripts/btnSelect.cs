using UnityEngine;

public class btnSelect : MonoBehaviour
{
    public bool[] inputBtn;


    public void Selected(int btn)
    {
        switch(btn)
        {
            case 1://1-6
                selectedFalse();
                inputBtn[0] = true;
                //selected_chips(0);
                break;
            case 2://1-5
                selectedFalse();
                inputBtn[1] = true;
                //selected_chips(1);
                break;
            case 3://1-4
                selectedFalse();
                inputBtn[2] = true;
                //selected_chips(2);
                break;
            case 4://1-3
                selectedFalse();
                inputBtn[3] = true;
                //selected_chips(3);
                break;
            case 5://1-2
                selectedFalse();
                inputBtn[4] = true;
                //selected_chips(4);
                break;
            case 6://2-6
                selectedFalse();
                inputBtn[5] = true;
                //selected_chips(5);
                break;
            case 7://2-5
                selectedFalse();
                inputBtn[6] = true;
                //selected_chips(6);
                break;
            case 8://2-4
                selectedFalse();
                inputBtn[7] = true;
                //selected_chips(7);
                break;
            case 9://2-3
                selectedFalse();
                inputBtn[8] = true;
                //selected_chips(8);
                break;
            case 10://3-6
                selectedFalse();
                inputBtn[9] = true;
                //selected_chips(9);
                break;
            case 11://3-5
                selectedFalse();
                inputBtn[10] = true;
               // selected_chips(10);
                break;
            case 12://3-4
                selectedFalse();
                inputBtn[11] = true;
                //selected_chips(11);
                break;
            case 13://4-6
                selectedFalse();
                inputBtn[12] = true;
               // selected_chips(12);
                break;
            case 14://4-5
                selectedFalse();
                inputBtn[13] = true;
                //selected_chips(13);
                break;
            case 15://5-6
                selectedFalse();
                inputBtn[14] = true;
                //selected_chips(14);
                break;
        }      
    }

    void selectedFalse()
    {
        for (int i = 0; i < inputBtn.Length; i++)
        {
            inputBtn[i] = false;         
        }
    }
}
