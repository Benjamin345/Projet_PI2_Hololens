using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Globalization;
using UnityEngine.EventSystems;

using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;

[RequireComponent(typeof(Collider))] //A collider is needed to receive clicks
public class interactNextStep : MonoBehaviour, IMixedRealityPointerHandler, IMixedRealityFocusHandler
{
    public GameObject potStart;
    public GameObject pot_bourgeon;
    public GameObject pot_eclosion;
    public GameObject pot_final;
    public GameObject pot_bourgeon_mort;
    public GameObject pot_eclosion_mort;
    public GameObject pot_final_mort;
    public GameObject text;
    public GameObject buttonsToDisable;
    public GameObject gameOverPanel;
    public GameObject endGamePanel;
    public GameObject heatValue;
    public GameObject waterPanel;
    public GameObject heatPanel;

    public int step;

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
        int water_start = potStart.GetComponent<value>().water/2;
        if (potStart.GetComponent<value>().water == 1)
            water_start = 1;
        int water_bourgeon = pot_bourgeon.GetComponent<value>().water/2;
        int water_eclosion = pot_eclosion.GetComponent<value>().water/2;
        float heat = float.Parse(heatValue.GetComponentInChildren<TextMeshPro>().text);
        float heatMinStart = 6;
        float heatMaxStart = 8;
        float heatMinBourgeon = 10;
        float heatMaxBourgeon = 13;
        float heatMinEclosion = 13;
        float heatMaxEclosion = 16;
        // int water_final = por_final.GetComponent<value>().water;
        int waterMinStart = 1;
        int waterMaxStart = 2;
        int waterMinBourgeon = 2;
        int waterMaxBourgeon = 3;
        int waterMinEclosion = 3;
        int waterMaxEclosion = 4;
        if (step == 0)
        {
            text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = "0";
            potStart.GetComponent<value>().water = 0;
            if (water_start >= waterMinStart && water_start <= waterMaxStart && heat <= heatMaxStart && heat >= heatMinStart)
            {
                step += 1;
                pot_bourgeon.SetActive(true);
                potStart.SetActive(false);
            }
            else if (water_start > waterMaxStart)
            {
                waterPanel.transform.GetChild(0).gameObject.SetActive(true);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
            else if (water_start < waterMinStart)
            {
                waterPanel.transform.GetChild(1).gameObject.SetActive(true);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
            else if (heat > heatMaxStart)
            {
                heatPanel.transform.GetChild(0).gameObject.SetActive(true);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
            else if (heat < heatMinStart)
            {
                heatPanel.transform.GetChild(1).gameObject.SetActive(true);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
        }
        else if (step == 1)
        {
            text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = "0";
            pot_bourgeon.GetComponent<value>().water = 0;

            if (water_bourgeon <= waterMaxBourgeon && water_bourgeon >= waterMinBourgeon && heat <= heatMaxBourgeon && heat >= heatMinBourgeon)
            {
                step += 1;
                pot_eclosion.SetActive(true);
                pot_bourgeon.SetActive(false);
            }
            else if (water_bourgeon > waterMaxBourgeon)
            {
                waterPanel.transform.GetChild(2).gameObject.SetActive(true);
                pot_bourgeon_mort.SetActive(true);
                pot_bourgeon.SetActive(false);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
            else if (water_bourgeon < waterMinBourgeon)
            {
                waterPanel.transform.GetChild(3).gameObject.SetActive(true);
                pot_bourgeon_mort.SetActive(true);
                pot_bourgeon.SetActive(false);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
            else if (heat > heatMaxBourgeon)
            {
                heatPanel.transform.GetChild(2).gameObject.SetActive(true);
                pot_bourgeon_mort.SetActive(true);
                pot_bourgeon.SetActive(false);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
            else if (heat < heatMinBourgeon)
            {
                heatPanel.transform.GetChild(3).gameObject.SetActive(true);
                pot_bourgeon_mort.SetActive(true);
                pot_bourgeon.SetActive(false);
                buttonsToDisable.SetActive(false);
                gameOverPanel.SetActive(true);
            }
        }
        else if (step == 2)
            {
                pot_eclosion.GetComponent<value>().water = 0;
                text.transform.GetChild(3).gameObject.GetComponentInChildren<TextMeshPro>().text = "0";

                if (water_eclosion >=waterMinEclosion && water_eclosion <= waterMaxEclosion && heat <= heatMaxEclosion && heat >= heatMinEclosion)
                {
                    pot_final.SetActive(true);
                    pot_eclosion.SetActive(false);
                    endGamePanel.SetActive(true);
                    buttonsToDisable.SetActive(false);
                }
                else if (heat > heatMaxEclosion)
                {
                    heatPanel.transform.GetChild(4).gameObject.SetActive(true);
                    pot_eclosion_mort.SetActive(true);
                    pot_eclosion.SetActive(false);
                    buttonsToDisable.SetActive(false);
                    gameOverPanel.SetActive(true);
                }
                else if (heat < heatMinEclosion)
                {
                    heatPanel.transform.GetChild(5).gameObject.SetActive(true);
                    pot_eclosion_mort.SetActive(true);
                    pot_eclosion.SetActive(false);
                    buttonsToDisable.SetActive(false);
                    gameOverPanel.SetActive(true);
                }
                else if (water_eclosion > waterMaxEclosion)
                {
                    waterPanel.transform.GetChild(4).gameObject.SetActive(true);
                    pot_eclosion_mort.SetActive(true);
                    pot_eclosion.SetActive(false);
                    buttonsToDisable.SetActive(false);
                    gameOverPanel.SetActive(true);
                }
                else if (water_eclosion < waterMinEclosion)
                {
                    waterPanel.transform.GetChild(5).gameObject.SetActive(true);
                    pot_eclosion_mort.SetActive(true);
                    pot_eclosion.SetActive(false);
                    buttonsToDisable.SetActive(false);
                    gameOverPanel.SetActive(true);
                }
            
        }
    }
    #endregion
}

