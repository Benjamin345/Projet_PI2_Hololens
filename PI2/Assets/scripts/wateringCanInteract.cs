using UnityEngine;

public class wateringCanInteract : MonoBehaviour
{
    public GameObject pot_bourgeon;


    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("ok");
    }
}