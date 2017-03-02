/*******************************************************************************
* File Name: xAkse.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_xAkse_H) /* Pins xAkse_H */
#define CY_PINS_xAkse_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "xAkse_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 xAkse__PORT == 15 && ((xAkse__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    xAkse_Write(uint8 value);
void    xAkse_SetDriveMode(uint8 mode);
uint8   xAkse_ReadDataReg(void);
uint8   xAkse_Read(void);
void    xAkse_SetInterruptMode(uint16 position, uint16 mode);
uint8   xAkse_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the xAkse_SetDriveMode() function.
     *  @{
     */
        #define xAkse_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define xAkse_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define xAkse_DM_RES_UP          PIN_DM_RES_UP
        #define xAkse_DM_RES_DWN         PIN_DM_RES_DWN
        #define xAkse_DM_OD_LO           PIN_DM_OD_LO
        #define xAkse_DM_OD_HI           PIN_DM_OD_HI
        #define xAkse_DM_STRONG          PIN_DM_STRONG
        #define xAkse_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define xAkse_MASK               xAkse__MASK
#define xAkse_SHIFT              xAkse__SHIFT
#define xAkse_WIDTH              1u

/* Interrupt constants */
#if defined(xAkse__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in xAkse_SetInterruptMode() function.
     *  @{
     */
        #define xAkse_INTR_NONE      (uint16)(0x0000u)
        #define xAkse_INTR_RISING    (uint16)(0x0001u)
        #define xAkse_INTR_FALLING   (uint16)(0x0002u)
        #define xAkse_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define xAkse_INTR_MASK      (0x01u) 
#endif /* (xAkse__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define xAkse_PS                     (* (reg8 *) xAkse__PS)
/* Data Register */
#define xAkse_DR                     (* (reg8 *) xAkse__DR)
/* Port Number */
#define xAkse_PRT_NUM                (* (reg8 *) xAkse__PRT) 
/* Connect to Analog Globals */                                                  
#define xAkse_AG                     (* (reg8 *) xAkse__AG)                       
/* Analog MUX bux enable */
#define xAkse_AMUX                   (* (reg8 *) xAkse__AMUX) 
/* Bidirectional Enable */                                                        
#define xAkse_BIE                    (* (reg8 *) xAkse__BIE)
/* Bit-mask for Aliased Register Access */
#define xAkse_BIT_MASK               (* (reg8 *) xAkse__BIT_MASK)
/* Bypass Enable */
#define xAkse_BYP                    (* (reg8 *) xAkse__BYP)
/* Port wide control signals */                                                   
#define xAkse_CTL                    (* (reg8 *) xAkse__CTL)
/* Drive Modes */
#define xAkse_DM0                    (* (reg8 *) xAkse__DM0) 
#define xAkse_DM1                    (* (reg8 *) xAkse__DM1)
#define xAkse_DM2                    (* (reg8 *) xAkse__DM2) 
/* Input Buffer Disable Override */
#define xAkse_INP_DIS                (* (reg8 *) xAkse__INP_DIS)
/* LCD Common or Segment Drive */
#define xAkse_LCD_COM_SEG            (* (reg8 *) xAkse__LCD_COM_SEG)
/* Enable Segment LCD */
#define xAkse_LCD_EN                 (* (reg8 *) xAkse__LCD_EN)
/* Slew Rate Control */
#define xAkse_SLW                    (* (reg8 *) xAkse__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define xAkse_PRTDSI__CAPS_SEL       (* (reg8 *) xAkse__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define xAkse_PRTDSI__DBL_SYNC_IN    (* (reg8 *) xAkse__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define xAkse_PRTDSI__OE_SEL0        (* (reg8 *) xAkse__PRTDSI__OE_SEL0) 
#define xAkse_PRTDSI__OE_SEL1        (* (reg8 *) xAkse__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define xAkse_PRTDSI__OUT_SEL0       (* (reg8 *) xAkse__PRTDSI__OUT_SEL0) 
#define xAkse_PRTDSI__OUT_SEL1       (* (reg8 *) xAkse__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define xAkse_PRTDSI__SYNC_OUT       (* (reg8 *) xAkse__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(xAkse__SIO_CFG)
    #define xAkse_SIO_HYST_EN        (* (reg8 *) xAkse__SIO_HYST_EN)
    #define xAkse_SIO_REG_HIFREQ     (* (reg8 *) xAkse__SIO_REG_HIFREQ)
    #define xAkse_SIO_CFG            (* (reg8 *) xAkse__SIO_CFG)
    #define xAkse_SIO_DIFF           (* (reg8 *) xAkse__SIO_DIFF)
#endif /* (xAkse__SIO_CFG) */

/* Interrupt Registers */
#if defined(xAkse__INTSTAT)
    #define xAkse_INTSTAT            (* (reg8 *) xAkse__INTSTAT)
    #define xAkse_SNAP               (* (reg8 *) xAkse__SNAP)
    
	#define xAkse_0_INTTYPE_REG 		(* (reg8 *) xAkse__0__INTTYPE)
#endif /* (xAkse__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_xAkse_H */


/* [] END OF FILE */
