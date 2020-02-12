using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using System.Threading;

[RequireComponent(typeof(Collider))] //A collider is needed to receive clicks
public class openMenu : MonoBehaviour, IMixedRealityPointerHandler, IMixedRealityFocusHandler
{


    public GameObject buttonWatering;
    public GameObject pinchSlider;

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
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        buttonWatering.SetActive(!buttonWatering.activeInHierarchy);
        pinchSlider.SetActive(!pinchSlider.activeInHierarchy);
    }
    #endregion
}