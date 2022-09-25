using UnityEngine;
using UnityEngine.SceneManagement;

public class load_Scene : MonoBehaviour
{
    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
        Time.timeScale = 1;
    }
}
