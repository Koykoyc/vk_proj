using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sceneTransitionManager : MonoBehaviour
{
    [SerializeField] Animator transition;

    public IEnumerator transitionOut(Action onComplete)
    {
        Debug.Log("transition out");
        transition.SetTrigger("wipeOut");
        yield return new WaitForSeconds(0.5f);
        onComplete();
    }

    public IEnumerator transitionIn(Action onComplete)
    {
        Debug.Log("transition in");
        transition.SetTrigger("wipeIn");
        yield return new WaitForSeconds(0.5f);
        onComplete();
    }

}
