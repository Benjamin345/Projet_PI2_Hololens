using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;

public class showVerificationPanel : MonoBehaviour, IMixedRealityPointerHandler, IMixedRealityFocusHandler
{
    public GameObject verificationPanel;
    public GameObject mainMenu;

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
        verificationPanel.SetActive(true);
        mainMenu.SetActive(false);
    }
    #endregion
}
