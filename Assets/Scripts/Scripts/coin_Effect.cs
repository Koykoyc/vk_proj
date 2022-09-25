using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class coin_Effect : MonoBehaviour
{
    public float speed;

    public Transform target;
    public GameObject coinPrefab;
    public Camera cam;

    // Start is called before the first frame update
    void Start()
    {
     if(cam == null)
        {
            cam = Camera.main;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void startCoinMove(Vector3 _initial, Action onComplete)
    {
       // Vector3 initialPos = cam.ScreenToWorldPoint(new Vector3(initial.position.x, initial.position.y, cam.transform.position.z * -1));
        Vector3 targetPos = cam.ScreenToWorldPoint(new Vector3(target.position.x, target.position.y, cam.transform.position.z * -1));
        GameObject _coin = Instantiate(coinPrefab, transform);

        StartCoroutine (moveCoin (_coin.transform, _initial, targetPos, onComplete)); 

    }


    IEnumerator moveCoin(Transform obj, Vector3 startPos,Vector3 EndPos, Action onComplete)
    {
        float time = 0;

        while(time < 1)
        {
            time += speed * Time.deltaTime;
            obj.position = Vector3.Lerp(startPos, EndPos, time);

            yield return new WaitForEndOfFrame();
        }

        onComplete.Invoke();
        Destroy(obj.gameObject);
    }
}
