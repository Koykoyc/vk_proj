using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CageAnimation : MonoBehaviour
{
    private FollowRoute fp;
    private Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        fp = FindObjectOfType<FollowRoute>();
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
         if(fp.currentwaypointID >= 1)
         {
             animator.SetBool("cage_Open", true);
         }
    }




}
