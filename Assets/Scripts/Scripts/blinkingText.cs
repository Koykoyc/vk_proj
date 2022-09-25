using UnityEngine;
using TMPro;

public class blinkingText : MonoBehaviour
{
    [SerializeField] public TextMeshProUGUI blinking_Txt;
    public float blinkFadeInTime = 0.3f;
    public float blinkStayTime = 0.8f;
    public float blinkFadeOutTime = 0.5f;
    private float _timeChecker = 0;
    private Color _color;

    // Start is called before the first frame update
    void Start()
    {
        _color = blinking_Txt.color;
    }

    // Update is called once per frame
    void Update()
    {
        blinkingMethod();
    }

    public void blinkingMethod()
    {
        _timeChecker += Time.unscaledDeltaTime;
        if (_timeChecker < blinkFadeInTime)
        {
            blinking_Txt.color = new Color(_color.r, _color.g, _color.b, _timeChecker / blinkFadeInTime);
        }
        else if (_timeChecker < blinkFadeInTime + blinkStayTime)
        {
            blinking_Txt.color = new Color(_color.r, _color.g, _color.b, 1);
        }
        else if (_timeChecker < blinkFadeInTime + blinkStayTime + blinkFadeOutTime)
        {
            blinking_Txt.color = new Color(_color.r, _color.g, _color.b, 1 - (_timeChecker - (blinkFadeInTime + blinkStayTime)) / blinkFadeOutTime);
        }
        else
        {
            _timeChecker = 0;
        }
    }
}
