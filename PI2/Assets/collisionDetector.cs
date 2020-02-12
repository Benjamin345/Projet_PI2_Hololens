using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using System.Threading;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

public class collisionDetector : MonoBehaviour
{
    public GameObject wateringCan;
    public GameObject potStart;
    public GameObject pot_bourgeon;
    public GameObject pot_eclosion;
    public GameObject pot_final;
    public GameObject nextStep;
    public GameObject text;


    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }
    void OnCollisionEnter(Collision col)
    {
        int step = nextStep.GetComponent<interactNextStep>().step;
        if (step == 0)
        {
            if (col.gameObject.name == "potStart")
            {
                text.SetActive(true);
                potStart.GetComponent<value>().water += 1;
                text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = (potStart.GetComponent<value>().water/2).ToString();
            }
        }
        if (step == 1)
        {
            if (col.gameObject.name == "pot_bourgeon")
            {
                text.SetActive(true);
                pot_bourgeon.GetComponent<value>().water += 1;
                text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = (pot_bourgeon.GetComponent<value>().water / 2).ToString();
            }
        }

        if (step == 2)
        {
            if (col.gameObject.name == "pot_eclosion")
            {
                text.SetActive(true);
                pot_eclosion.GetComponent<value>().water += 1;
                text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = (pot_eclosion.GetComponent<value>().water / 2).ToString();
            }
        }

    }
}
