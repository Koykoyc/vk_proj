using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class hide_show_objects : MonoBehaviour
{
    [SerializeField] public InputField amount;
    [SerializeField] public InputField remarks;
    [SerializeField] Image img;
    public void hide()
    {
        img.enabled = true;
        amount.text = "";
        remarks.text = "";
    }

}
