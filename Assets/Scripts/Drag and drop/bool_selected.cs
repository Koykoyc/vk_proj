using UnityEngine;

public class bool_selected : MonoBehaviour
{
    public bool[] inputBtn;
    public bool[] isChipsSelected;
    
    //for odds button
    public void notSelectedFalse()
    {
        for (int i = 0; i < inputBtn.Length; i++)
        {
            inputBtn[i] = false;
        }
    }

    //for chips button
    public void notSelected()
    {
        for (int i = 0; i < isChipsSelected.Length; i++)
        {
            isChipsSelected[i] = false;
        }
    }
}
