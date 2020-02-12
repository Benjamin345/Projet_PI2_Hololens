using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;


[RequireComponent(typeof(Collider))] //A collider is needed to receive clicks
public class returnMainMenu : MonoBehaviour, IMixedRealityPointerHandler, IMixedRealityFocusHandler
{
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
        SceneManager.LoadScene("accueilScene");
    }
    #endregion
}
