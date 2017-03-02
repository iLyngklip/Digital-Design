/*******************************************************************************
* File Name: yAkse.h  
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

#if !defined(CY_PINS_yAkse_H) /* Pins yAkse_H */
#define CY_PINS_yAkse_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "yAkse_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 yAkse__PORT == 15 && ((yAkse__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    yAkse_Write(uint8 value);
void    yAkse_SetDriveMode(uint8 mode);
uint8   yAkse_ReadDataReg(void);
uint8   yAkse_Read(void);
void    yAkse_SetInterruptMode(uint16 position, uint16 mode);
uint8   yAkse_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the yAkse_SetDriveMode() function.
     *  @{
     */
        #define yAkse_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define yAkse_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define yAkse_DM_RES_UP          PIN_DM_RES_UP
        #define yAkse_DM_RES_DWN         PIN_DM_RES_DWN
        #define yAkse_DM_OD_LO           PIN_DM_OD_LO
        #define yAkse_DM_OD_HI           PIN_DM_OD_HI
        #define yAkse_DM_STRONG          PIN_DM_STRONG
        #define yAkse_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define yAkse_MASK               yAkse__MASK
#define yAkse_SHIFT              yAkse__SHIFT
#define yAkse_WIDTH              1u

/* Interrupt constants */
#if defined(yAkse__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in yAkse_SetInterruptMode() function.
     *  @{
     */
        #define yAkse_INTR_NONE      (uint16)(0x0000u)
        #define yAkse_INTR_RISING    (uint16)(0x0001u)
        #define yAkse_INTR_FALLING   (uint16)(0x0002u)
        #define yAkse_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define yAkse_INTR_MASK      (0x01u) 
#endif /* (yAkse__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define yAkse_PS                     (* (reg8 *) yAkse__PS)
/* Data Register */
#define yAkse_DR                     (* (reg8 *) yAkse__DR)
/* Port Number */
#define yAkse_PRT_NUM                (* (reg8 *) yAkse__PRT) 
/* Connect to Analog Globals */                                                  
#define yAkse_AG                     (* (reg8 *) yAkse__AG)                       
/* Analog MUX bux enable */
#define yAkse_AMUX                   (* (reg8 *) yAkse__AMUX) 
/* Bidirectional Enable */                                                        
#define yAkse_BIE                    (* (reg8 *) yAkse__BIE)
/* Bit-mask for Aliased Register Access */
#define yAkse_BIT_MASK               (* (reg8 *) yAkse__BIT_MASK)
/* Bypass Enable */
#define yAkse_BYP                    (* (reg8 *) yAkse__BYP)
/* Port wide control signals */                                                   
#define yAkse_CTL                    (* (reg8 *) yAkse__CTL)
/* Drive Modes */
#define yAkse_DM0                    (* (reg8 *) yAkse__DM0) 
#define yAkse_DM1                    (* (reg8 *) yAkse__DM1)
#define yAkse_DM2                    (* (reg8 *) yAkse__DM2) 
/* Input Buffer Disable Override */
#define yAkse_INP_DIS                (* (reg8 *) yAkse__INP_DIS)
/* LCD Common or Segment Drive */
#define yAkse_LCD_COM_SEG            (* (reg8 *) yAkse__LCD_COM_SEG)
/* Enable Segment LCD */
#define yAkse_LCD_EN                 (* (reg8 *) yAkse__LCD_EN)
/* Slew Rate Control */
#define yAkse_SLW                    (* (reg8 *) yAkse__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define yAkse_PRTDSI__CAPS_SEL       (* (reg8 *) yAkse__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define yAkse_PRTDSI__DBL_SYNC_IN    (* (reg8 *) yAkse__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define yAkse_PRTDSI__OE_SEL0        (* (reg8 *) yAkse__PRTDSI__OE_SEL0) 
#define yAkse_PRTDSI__OE_SEL1        (* (reg8 *) yAkse__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define yAkse_PRTDSI__OUT_SEL0       (* (reg8 *) yAkse__PRTDSI__OUT_SEL0) 
#define yAkse_PRTDSI__OUT_SEL1       (* (reg8 *) yAkse__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define yAkse_PRTDSI__SYNC_OUT       (* (reg8 *) yAkse__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(yAkse__SIO_CFG)
    #define yAkse_SIO_HYST_EN        (* (reg8 *) yAkse__SIO_HYST_EN)
    #define yAkse_SIO_REG_HIFREQ     (* (reg8 *) yAkse__SIO_REG_HIFREQ)
    #define yAkse_SIO_CFG            (* (reg8 *) yAkse__SIO_CFG)
    #define yAkse_SIO_DIFF           (* (reg8 *) yAkse__SIO_DIFF)
#endif /* (yAkse__SIO_CFG) */

/* Interrupt Registers */
#if defined(yAkse__INTSTAT)
    #define yAkse_INTSTAT            (* (reg8 *) yAkse__INTSTAT)
    #define yAkse_SNAP               (* (reg8 *) yAkse__SNAP)
    
	#define yAkse_0_INTTYPE_REG 		(* (reg8 *) yAkse__0__INTTYPE)
#endif /* (yAkse__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_yAkse_H */


/* [] END OF FILE */
