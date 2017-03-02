/*******************************************************************************
* File Name: xAksen_PM.c
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

#include "xAksen.h"


/***************************************
* Local data allocation
***************************************/

static xAksen_BACKUP_STRUCT  xAksen_backup =
{
    xAksen_DISABLED
};


/*******************************************************************************
* Function Name: xAksen_SaveConfig
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
void xAksen_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: xAksen_RestoreConfig
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
void xAksen_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: xAksen_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The xAksen_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  xAksen_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void xAksen_Sleep(void)
{
    if((xAksen_PWRMGR_SAR_REG  & xAksen_ACT_PWR_SAR_EN) != 0u)
    {
        if((xAksen_SAR_CSR0_REG & xAksen_SAR_SOF_START_CONV) != 0u)
        {
            xAksen_backup.enableState = xAksen_ENABLED | xAksen_STARTED;
        }
        else
        {
            xAksen_backup.enableState = xAksen_ENABLED;
        }
        xAksen_Stop();
    }
    else
    {
        xAksen_backup.enableState = xAksen_DISABLED;
    }
}


/*******************************************************************************
* Function Name: xAksen_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  xAksen_Sleep() was called. If the component was enabled before the
*  xAksen_Sleep() function was called, the
*  xAksen_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  xAksen_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void xAksen_Wakeup(void)
{
    if(xAksen_backup.enableState != xAksen_DISABLED)
    {
        xAksen_Enable();
        #if(xAksen_DEFAULT_CONV_MODE != xAksen__HARDWARE_TRIGGER)
            if((xAksen_backup.enableState & xAksen_STARTED) != 0u)
            {
                xAksen_StartConvert();
            }
        #endif /* End xAksen_DEFAULT_CONV_MODE != xAksen__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */
