/*******************************************************************************
* File Name: yAksen_PM.c
* Version 3.0
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "yAksen.h"


/***************************************
* Local data allocation
***************************************/

static yAksen_BACKUP_STRUCT  yAksen_backup =
{
    yAksen_DISABLED
};


/*******************************************************************************
* Function Name: yAksen_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void yAksen_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: yAksen_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void yAksen_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: yAksen_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The yAksen_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  yAksen_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void yAksen_Sleep(void)
{
    if((yAksen_PWRMGR_SAR_REG  & yAksen_ACT_PWR_SAR_EN) != 0u)
    {
        if((yAksen_SAR_CSR0_REG & yAksen_SAR_SOF_START_CONV) != 0u)
        {
            yAksen_backup.enableState = yAksen_ENABLED | yAksen_STARTED;
        }
        else
        {
            yAksen_backup.enableState = yAksen_ENABLED;
        }
        yAksen_Stop();
    }
    else
    {
        yAksen_backup.enableState = yAksen_DISABLED;
    }
}


/*******************************************************************************
* Function Name: yAksen_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  yAksen_Sleep() was called. If the component was enabled before the
*  yAksen_Sleep() function was called, the
*  yAksen_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  yAksen_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void yAksen_Wakeup(void)
{
    if(yAksen_backup.enableState != yAksen_DISABLED)
    {
        yAksen_Enable();
        #if(yAksen_DEFAULT_CONV_MODE != yAksen__HARDWARE_TRIGGER)
            if((yAksen_backup.enableState & yAksen_STARTED) != 0u)
            {
                yAksen_StartConvert();
            }
        #endif /* End yAksen_DEFAULT_CONV_MODE != yAksen__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */
