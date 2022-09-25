using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sound_script : MonoBehaviour
{
    private FollowRoute fp;
    public AudioSource bg_Audio_Source;
    public AudioSource winner_Audio_Source;
    public AudioSource gun_shots_Audio_Source;
    // Start is called before the first frame update

    private void Awake()
    {
        StartCoroutine(audio_Source());
    }

    void Start()
    {
        fp = FindObjectOfType<FollowRoute>();
    }

    IEnumerator audio_Source()
    {
        yield return new WaitForSeconds(1f);
        gun_shots_Audio_Source.Play();
        bg_Audio_Source.Play();
        yield return new WaitForSeconds(1.3f);
        gun_shots_Audio_Source.Stop();
    }

    // Update is called once per frame
    void Update()
    {
        if (fp.currentwaypointID >= 15 && fp.currentwaypointID < 16)
        {
            bg_Audio_Source.volume = 0.7f;
        }
        else if (fp.currentwaypointID >= 16 && fp.currentwaypointID < 17)
        {
            bg_Audio_Source.volume = 0.4f;
        }
        else if(fp.currentwaypointID >= 18 && fp.currentwaypointID < 19)
        {
            bg_Audio_Source.volume = 0.2f;
        }
        else if (fp.currentwaypointID >= 19 && fp.currentwaypointID < 20)
        {
            winner_Audio_Source.Play();
        }
        else if (fp.currentwaypointID >= 22)
        {
            bg_Audio_Source.Stop();
        }
    }
}
