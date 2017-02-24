/*******************************************************************************
* File Name: PORE.h  
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

#if !defined(CY_PINS_PORE_H) /* Pins PORE_H */
#define CY_PINS_PORE_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PORE_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PORE__PORT == 15 && ((PORE__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    PORE_Write(uint8 value);
void    PORE_SetDriveMode(uint8 mode);
uint8   PORE_ReadDataReg(void);
uint8   PORE_Read(void);
void    PORE_SetInterruptMode(uint16 position, uint16 mode);
uint8   PORE_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the PORE_SetDriveMode() function.
     *  @{
     */
        #define PORE_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define PORE_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define PORE_DM_RES_UP          PIN_DM_RES_UP
        #define PORE_DM_RES_DWN         PIN_DM_RES_DWN
        #define PORE_DM_OD_LO           PIN_DM_OD_LO
        #define PORE_DM_OD_HI           PIN_DM_OD_HI
        #define PORE_DM_STRONG          PIN_DM_STRONG
        #define PORE_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define PORE_MASK               PORE__MASK
#define PORE_SHIFT              PORE__SHIFT
#define PORE_WIDTH              1u

/* Interrupt constants */
#if defined(PORE__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PORE_SetInterruptMode() function.
     *  @{
     */
        #define PORE_INTR_NONE      (uint16)(0x0000u)
        #define PORE_INTR_RISING    (uint16)(0x0001u)
        #define PORE_INTR_FALLING   (uint16)(0x0002u)
        #define PORE_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define PORE_INTR_MASK      (0x01u) 
#endif /* (PORE__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PORE_PS                     (* (reg8 *) PORE__PS)
/* Data Register */
#define PORE_DR                     (* (reg8 *) PORE__DR)
/* Port Number */
#define PORE_PRT_NUM                (* (reg8 *) PORE__PRT) 
/* Connect to Analog Globals */                                                  
#define PORE_AG                     (* (reg8 *) PORE__AG)                       
/* Analog MUX bux enable */
#define PORE_AMUX                   (* (reg8 *) PORE__AMUX) 
/* Bidirectional Enable */                                                        
#define PORE_BIE                    (* (reg8 *) PORE__BIE)
/* Bit-mask for Aliased Register Access */
#define PORE_BIT_MASK               (* (reg8 *) PORE__BIT_MASK)
/* Bypass Enable */
#define PORE_BYP                    (* (reg8 *) PORE__BYP)
/* Port wide control signals */                                                   
#define PORE_CTL                    (* (reg8 *) PORE__CTL)
/* Drive Modes */
#define PORE_DM0                    (* (reg8 *) PORE__DM0) 
#define PORE_DM1                    (* (reg8 *) PORE__DM1)
#define PORE_DM2                    (* (reg8 *) PORE__DM2) 
/* Input Buffer Disable Override */
#define PORE_INP_DIS                (* (reg8 *) PORE__INP_DIS)
/* LCD Common or Segment Drive */
#define PORE_LCD_COM_SEG            (* (reg8 *) PORE__LCD_COM_SEG)
/* Enable Segment LCD */
#define PORE_LCD_EN                 (* (reg8 *) PORE__LCD_EN)
/* Slew Rate Control */
#define PORE_SLW                    (* (reg8 *) PORE__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PORE_PRTDSI__CAPS_SEL       (* (reg8 *) PORE__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PORE_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PORE__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PORE_PRTDSI__OE_SEL0        (* (reg8 *) PORE__PRTDSI__OE_SEL0) 
#define PORE_PRTDSI__OE_SEL1        (* (reg8 *) PORE__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PORE_PRTDSI__OUT_SEL0       (* (reg8 *) PORE__PRTDSI__OUT_SEL0) 
#define PORE_PRTDSI__OUT_SEL1       (* (reg8 *) PORE__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PORE_PRTDSI__SYNC_OUT       (* (reg8 *) PORE__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(PORE__SIO_CFG)
    #define PORE_SIO_HYST_EN        (* (reg8 *) PORE__SIO_HYST_EN)
    #define PORE_SIO_REG_HIFREQ     (* (reg8 *) PORE__SIO_REG_HIFREQ)
    #define PORE_SIO_CFG            (* (reg8 *) PORE__SIO_CFG)
    #define PORE_SIO_DIFF           (* (reg8 *) PORE__SIO_DIFF)
#endif /* (PORE__SIO_CFG) */

/* Interrupt Registers */
#if defined(PORE__INTSTAT)
    #define PORE_INTSTAT            (* (reg8 *) PORE__INTSTAT)
    #define PORE_SNAP               (* (reg8 *) PORE__SNAP)
    
	#define PORE_0_INTTYPE_REG 		(* (reg8 *) PORE__0__INTTYPE)
#endif /* (PORE__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PORE_H */


/* [] END OF FILE */
