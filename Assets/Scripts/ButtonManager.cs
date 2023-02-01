using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject image;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void change_screen()
    {
        if(image.activeSelf == true)
            image.SetActive(false);
        else
            image.SetActive(true);
    }
}
