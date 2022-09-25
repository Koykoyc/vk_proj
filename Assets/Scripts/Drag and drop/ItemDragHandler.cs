using UnityEngine;
using UnityEngine.EventSystems;

public class ItemDragHandler : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    //https://www.youtube.com/watch?v=Pc8K_DVPgVM
    //If you assume just one drag at a time in your code it is a good idea to add
    //Input.multiTouchEnabled = false;
    //to prevent user from using multiple drags with multiple fingers.

    [SerializeField] private Canvas canvas;
    private RectTransform rectTransform;
    private CanvasGroup canvasGroup;
    public bool[] isChipsSelected;
    private Timer timer;

    private void Awake()
    {
        canvasGroup = GetComponent<CanvasGroup>();
        rectTransform = GetComponent<RectTransform>();
        timer = FindObjectOfType<Timer>();
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        canvasGroup.alpha = .6f;
        canvasGroup.blocksRaycasts = false;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (timer.currentTime > 0)
        {
            rectTransform.anchoredPosition += eventData.delta / canvas.scaleFactor;
        }
        else
        {
            transform.localPosition = Vector3.zero;
            canvasGroup.blocksRaycasts = true;
            canvasGroup.alpha = 1f;
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        transform.localPosition = Vector3.zero;
        canvasGroup.blocksRaycasts = true;
        canvasGroup.alpha = 1f;
    }

    public void notSelected()
    {
        for (int i = 0; i < isChipsSelected.Length; i++)
        {
            isChipsSelected[i] = false;
        }
    }


}
