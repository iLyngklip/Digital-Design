/*******************************************************************************
* File Name: xAksen_theACLK.h
* Version 2.10
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_xAksen_theACLK_H)
#define CY_CLOCK_xAksen_theACLK_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void xAksen_theACLK_Start(void) ;
void xAksen_theACLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void xAksen_theACLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void xAksen_theACLK_StandbyPower(uint8 state) ;
void xAksen_theACLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 xAksen_theACLK_GetDividerRegister(void) ;
void xAksen_theACLK_SetModeRegister(uint8 modeBitMask) ;
void xAksen_theACLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 xAksen_theACLK_GetModeRegister(void) ;
void xAksen_theACLK_SetSourceRegister(uint8 clkSource) ;
uint8 xAksen_theACLK_GetSourceRegister(void) ;
#if defined(xAksen_theACLK__CFG3)
void xAksen_theACLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 xAksen_theACLK_GetPhaseRegister(void) ;
#endif /* defined(xAksen_theACLK__CFG3) */

#define xAksen_theACLK_Enable()                       xAksen_theACLK_Start()
#define xAksen_theACLK_Disable()                      xAksen_theACLK_Stop()
#define xAksen_theACLK_SetDivider(clkDivider)         xAksen_theACLK_SetDividerRegister(clkDivider, 1u)
#define xAksen_theACLK_SetDividerValue(clkDivider)    xAksen_theACLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define xAksen_theACLK_SetMode(clkMode)               xAksen_theACLK_SetModeRegister(clkMode)
#define xAksen_theACLK_SetSource(clkSource)           xAksen_theACLK_SetSourceRegister(clkSource)
#if defined(xAksen_theACLK__CFG3)
#define xAksen_theACLK_SetPhase(clkPhase)             xAksen_theACLK_SetPhaseRegister(clkPhase)
#define xAksen_theACLK_SetPhaseValue(clkPhase)        xAksen_theACLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(xAksen_theACLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define xAksen_theACLK_CLKEN              (* (reg8 *) xAksen_theACLK__PM_ACT_CFG)
#define xAksen_theACLK_CLKEN_PTR          ((reg8 *) xAksen_theACLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define xAksen_theACLK_CLKSTBY            (* (reg8 *) xAksen_theACLK__PM_STBY_CFG)
#define xAksen_theACLK_CLKSTBY_PTR        ((reg8 *) xAksen_theACLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define xAksen_theACLK_DIV_LSB            (* (reg8 *) xAksen_theACLK__CFG0)
#define xAksen_theACLK_DIV_LSB_PTR        ((reg8 *) xAksen_theACLK__CFG0)
#define xAksen_theACLK_DIV_PTR            ((reg16 *) xAksen_theACLK__CFG0)

/* Clock MSB divider configuration register. */
#define xAksen_theACLK_DIV_MSB            (* (reg8 *) xAksen_theACLK__CFG1)
#define xAksen_theACLK_DIV_MSB_PTR        ((reg8 *) xAksen_theACLK__CFG1)

/* Mode and source configuration register */
#define xAksen_theACLK_MOD_SRC            (* (reg8 *) xAksen_theACLK__CFG2)
#define xAksen_theACLK_MOD_SRC_PTR        ((reg8 *) xAksen_theACLK__CFG2)

#if defined(xAksen_theACLK__CFG3)
/* Analog clock phase configuration register */
#define xAksen_theACLK_PHASE              (* (reg8 *) xAksen_theACLK__CFG3)
#define xAksen_theACLK_PHASE_PTR          ((reg8 *) xAksen_theACLK__CFG3)
#endif /* defined(xAksen_theACLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define xAksen_theACLK_CLKEN_MASK         xAksen_theACLK__PM_ACT_MSK
#define xAksen_theACLK_CLKSTBY_MASK       xAksen_theACLK__PM_STBY_MSK

/* CFG2 field masks */
#define xAksen_theACLK_SRC_SEL_MSK        xAksen_theACLK__CFG2_SRC_SEL_MASK
#define xAksen_theACLK_MODE_MASK          (~(xAksen_theACLK_SRC_SEL_MSK))

#if defined(xAksen_theACLK__CFG3)
/* CFG3 phase mask */
#define xAksen_theACLK_PHASE_MASK         xAksen_theACLK__CFG3_PHASE_DLY_MASK
#endif /* defined(xAksen_theACLK__CFG3) */

#endif /* CY_CLOCK_xAksen_theACLK_H */


/* [] END OF FILE */
