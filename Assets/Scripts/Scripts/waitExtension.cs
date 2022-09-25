using UnityEngine;
using UnityEngine.Events;
using System.Collections;

public static class waitExtension
{
    public static void Wait(this MonoBehaviour mono, float delay, UnityAction action)
    {
        mono.StartCoroutine(executeAction(delay, action));
    }

    private static IEnumerator executeAction(float delay, UnityAction aciton)
    {
        yield return new WaitForSecondsRealtime(delay);
        aciton.Invoke();
        yield break;
    }
}