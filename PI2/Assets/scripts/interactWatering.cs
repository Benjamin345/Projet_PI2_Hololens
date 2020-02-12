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

[RequireComponent(typeof(Collider))] //A collider is needed to receive clicks
public class interactWatering : MonoBehaviour, IMixedRealityPointerHandler, IMixedRealityFocusHandler
{
    public GameObject potStart;
    public GameObject pot_bourgeon;
    public GameObject pot_eclosion;
    public GameObject pot_final;
    public GameObject nextStep;
    public GameObject text;
    public GameObject wateringCanStart;
    public GameObject wateringCanBourgeon;
    public GameObject wateringCanEclosion;


    private IMixedRealityPointer activePointer;


    #region IMixedRealityFocusHandler
    public void OnFocusEnter(FocusEventData eventData)
    {
    }

    public void OnFocusExit(FocusEventData eventData)
    {
    }
    #endregion
    #region IMixedRealityPointerHandler

    public void OnPointerUp(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
    }

    public void OnPointerDragged(MixedRealityPointerEventData eventData)
    {
    }
    IEnumerator SeflHideBourgeon()
    {
        wateringCanBourgeon.SetActive(true);
        yield return new WaitForSeconds(1);
        wateringCanBourgeon.SetActive(false); // referencing 'self' as a local variable is probably not needed, but not wrong, either.
    }
    IEnumerator SeflHideStart()
    {
        wateringCanStart.SetActive(true);
        yield return new WaitForSeconds(1);
        wateringCanStart.SetActive(false); // referencing 'self' as a local variable is probably not needed, but not wrong, either.
    }
    IEnumerator SeflHideEclosion()
    {
        wateringCanEclosion.SetActive(true);
        yield return new WaitForSeconds(1);
        wateringCanEclosion.SetActive(false); // referencing 'self' as a local variable is probably not needed, but not wrong, either.
    }
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        int step = nextStep.GetComponent<interactNextStep>().step;
        if (step == 0)
        {
            text.SetActive(true);
            potStart.GetComponent<value>().water += 1;
            text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = potStart.GetComponent<value>().water.ToString();
            StartCoroutine(SeflHideStart());
        }
        if (step == 1)
        {
            text.SetActive(true);
            pot_bourgeon.GetComponent<value>().water += 1;
            text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = pot_bourgeon.GetComponent<value>().water.ToString();
            StartCoroutine(SeflHideBourgeon());
        }

        if(step == 2)
        {
            text.SetActive(true);
            pot_eclosion.GetComponent<value>().water += 1;
            text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = pot_eclosion.GetComponent<value>().water.ToString();
            StartCoroutine(SeflHideEclosion());
        }
    }
    #endregion
}