using UnityEngine;
using UnityEngine.SceneManagement;

public class MainFlow : MonoBehaviour
{
    public void PresentImageSample()
    {
        SceneManager.LoadScene("VideoCreator/Demo/Scenes/ImageSample", LoadSceneMode.Single);
    }

    public void PresentMovSample()
    {
        SceneManager.LoadScene("VideoCreator/Demo/Scenes/MovSample", LoadSceneMode.Single);
    }

    public void PresentLivePhotosSample()
    {
        SceneManager.LoadScene("VideoCreator/Demo/Scenes/LivePhotosSample", LoadSceneMode.Single);
    }

    public void PresentHlsSample()
    {
        SceneManager.LoadScene("VideoCreator/Demo/Scenes/HlsSample", LoadSceneMode.Single);
    }

    public void Close()
    {
        SceneManager.LoadScene("VideoCreator/Demo/Scenes/Main", LoadSceneMode.Single);
    }
}
