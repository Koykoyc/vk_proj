using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class show_and_hide_pass : MonoBehaviour
{
    [SerializeField] private InputField passWord;
    public Button show_hide_pass_btn;
    public Sprite show;
    public Sprite hide;

    public void show_hide_Pass()
    {
        if (passWord.contentType == InputField.ContentType.Standard)
        {
            show_hide_pass_btn.GetComponent<Image>().sprite = hide;
            passWord.contentType = InputField.ContentType.Password;
        }
        else if (passWord.contentType == InputField.ContentType.Password)
        {
            show_hide_pass_btn.GetComponent<Image>().sprite = show;
            passWord.contentType = InputField.ContentType.Standard;
        }
        passWord.ForceLabelUpdate();
    }

}
