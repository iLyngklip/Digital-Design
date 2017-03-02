/*******************************************************************************
* File Name: KNAP.h  
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

#if !defined(CY_PINS_KNAP_H) /* Pins KNAP_H */
#define CY_PINS_KNAP_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "KNAP_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 KNAP__PORT == 15 && ((KNAP__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    KNAP_Write(uint8 value);
void    KNAP_SetDriveMode(uint8 mode);
uint8   KNAP_ReadDataReg(void);
uint8   KNAP_Read(void);
void    KNAP_SetInterruptMode(uint16 position, uint16 mode);
uint8   KNAP_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the KNAP_SetDriveMode() function.
     *  @{
     */
        #define KNAP_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define KNAP_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define KNAP_DM_RES_UP          PIN_DM_RES_UP
        #define KNAP_DM_RES_DWN         PIN_DM_RES_DWN
        #define KNAP_DM_OD_LO           PIN_DM_OD_LO
        #define KNAP_DM_OD_HI           PIN_DM_OD_HI
        #define KNAP_DM_STRONG          PIN_DM_STRONG
        #define KNAP_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define KNAP_MASK               KNAP__MASK
#define KNAP_SHIFT              KNAP__SHIFT
#define KNAP_WIDTH              1u

/* Interrupt constants */
#if defined(KNAP__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in KNAP_SetInterruptMode() function.
     *  @{
     */
        #define KNAP_INTR_NONE      (uint16)(0x0000u)
        #define KNAP_INTR_RISING    (uint16)(0x0001u)
        #define KNAP_INTR_FALLING   (uint16)(0x0002u)
        #define KNAP_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define KNAP_INTR_MASK      (0x01u) 
#endif /* (KNAP__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define KNAP_PS                     (* (reg8 *) KNAP__PS)
/* Data Register */
#define KNAP_DR                     (* (reg8 *) KNAP__DR)
/* Port Number */
#define KNAP_PRT_NUM                (* (reg8 *) KNAP__PRT) 
/* Connect to Analog Globals */                                                  
#define KNAP_AG                     (* (reg8 *) KNAP__AG)                       
/* Analog MUX bux enable */
#define KNAP_AMUX                   (* (reg8 *) KNAP__AMUX) 
/* Bidirectional Enable */                                                        
#define KNAP_BIE                    (* (reg8 *) KNAP__BIE)
/* Bit-mask for Aliased Register Access */
#define KNAP_BIT_MASK               (* (reg8 *) KNAP__BIT_MASK)
/* Bypass Enable */
#define KNAP_BYP                    (* (reg8 *) KNAP__BYP)
/* Port wide control signals */                                                   
#define KNAP_CTL                    (* (reg8 *) KNAP__CTL)
/* Drive Modes */
#define KNAP_DM0                    (* (reg8 *) KNAP__DM0) 
#define KNAP_DM1                    (* (reg8 *) KNAP__DM1)
#define KNAP_DM2                    (* (reg8 *) KNAP__DM2) 
/* Input Buffer Disable Override */
#define KNAP_INP_DIS                (* (reg8 *) KNAP__INP_DIS)
/* LCD Common or Segment Drive */
#define KNAP_LCD_COM_SEG            (* (reg8 *) KNAP__LCD_COM_SEG)
/* Enable Segment LCD */
#define KNAP_LCD_EN                 (* (reg8 *) KNAP__LCD_EN)
/* Slew Rate Control */
#define KNAP_SLW                    (* (reg8 *) KNAP__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define KNAP_PRTDSI__CAPS_SEL       (* (reg8 *) KNAP__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define KNAP_PRTDSI__DBL_SYNC_IN    (* (reg8 *) KNAP__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define KNAP_PRTDSI__OE_SEL0        (* (reg8 *) KNAP__PRTDSI__OE_SEL0) 
#define KNAP_PRTDSI__OE_SEL1        (* (reg8 *) KNAP__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define KNAP_PRTDSI__OUT_SEL0       (* (reg8 *) KNAP__PRTDSI__OUT_SEL0) 
#define KNAP_PRTDSI__OUT_SEL1       (* (reg8 *) KNAP__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define KNAP_PRTDSI__SYNC_OUT       (* (reg8 *) KNAP__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(KNAP__SIO_CFG)
    #define KNAP_SIO_HYST_EN        (* (reg8 *) KNAP__SIO_HYST_EN)
    #define KNAP_SIO_REG_HIFREQ     (* (reg8 *) KNAP__SIO_REG_HIFREQ)
    #define KNAP_SIO_CFG            (* (reg8 *) KNAP__SIO_CFG)
    #define KNAP_SIO_DIFF           (* (reg8 *) KNAP__SIO_DIFF)
#endif /* (KNAP__SIO_CFG) */

/* Interrupt Registers */
#if defined(KNAP__INTSTAT)
    #define KNAP_INTSTAT            (* (reg8 *) KNAP__INTSTAT)
    #define KNAP_SNAP               (* (reg8 *) KNAP__SNAP)
    
	#define KNAP_0_INTTYPE_REG 		(* (reg8 *) KNAP__0__INTTYPE)
#endif /* (KNAP__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_KNAP_H */


/* [] END OF FILE */
