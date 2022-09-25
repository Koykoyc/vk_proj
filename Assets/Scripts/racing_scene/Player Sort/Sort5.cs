using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sort5 : MonoBehaviour
{
    private int sortingOrder = 9;
    private SpriteRenderer sprite;
    private FollowRoute fp;

    // Start is called before the first frame update
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        fp = FindObjectOfType<FollowRoute>();
    }

    // Update is called once per frame
    void Update()
    {
        if (fp.currentwaypointID >= 8 )
        {
            sprite.sortingOrder = sortingOrder;
        }

    }
}
