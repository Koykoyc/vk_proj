using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class changeInput : MonoBehaviour
{
    //FOR PC ONLY
    EventSystem system;
    public Selectable first_Input;
    public Button submit_Button;
    
    // Start is called before the first frame update
    void Start()
    {
        system = EventSystem.current;
        first_Input.Select();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Tab))
        {
            Selectable previous = system.currentSelectedGameObject.GetComponent<Selectable>().FindSelectableOnUp();
            if(previous != null)
            {
                previous.Select();
            }
            else if(Input.GetKeyDown(KeyCode.Tab))
            {
                Selectable next = system.currentSelectedGameObject.GetComponent<Selectable>().FindSelectableOnDown();
                if (next != null)
                {
                    next.Select();
                }
            }
        }
    }
}
