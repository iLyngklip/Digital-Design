/*******************************************************************************
* File Name: yAksen_Bypass.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_yAksen_Bypass_H) /* Pins yAksen_Bypass_H */
#define CY_PINS_yAksen_Bypass_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "yAksen_Bypass_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 yAksen_Bypass__PORT == 15 && ((yAksen_Bypass__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    yAksen_Bypass_Write(uint8 value) ;
void    yAksen_Bypass_SetDriveMode(uint8 mode) ;
uint8   yAksen_Bypass_ReadDataReg(void) ;
uint8   yAksen_Bypass_Read(void) ;
uint8   yAksen_Bypass_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define yAksen_Bypass_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define yAksen_Bypass_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define yAksen_Bypass_DM_RES_UP          PIN_DM_RES_UP
#define yAksen_Bypass_DM_RES_DWN         PIN_DM_RES_DWN
#define yAksen_Bypass_DM_OD_LO           PIN_DM_OD_LO
#define yAksen_Bypass_DM_OD_HI           PIN_DM_OD_HI
#define yAksen_Bypass_DM_STRONG          PIN_DM_STRONG
#define yAksen_Bypass_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define yAksen_Bypass_MASK               yAksen_Bypass__MASK
#define yAksen_Bypass_SHIFT              yAksen_Bypass__SHIFT
#define yAksen_Bypass_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define yAksen_Bypass_PS                     (* (reg8 *) yAksen_Bypass__PS)
/* Data Register */
#define yAksen_Bypass_DR                     (* (reg8 *) yAksen_Bypass__DR)
/* Port Number */
#define yAksen_Bypass_PRT_NUM                (* (reg8 *) yAksen_Bypass__PRT) 
/* Connect to Analog Globals */                                                  
#define yAksen_Bypass_AG                     (* (reg8 *) yAksen_Bypass__AG)                       
/* Analog MUX bux enable */
#define yAksen_Bypass_AMUX                   (* (reg8 *) yAksen_Bypass__AMUX) 
/* Bidirectional Enable */                                                        
#define yAksen_Bypass_BIE                    (* (reg8 *) yAksen_Bypass__BIE)
/* Bit-mask for Aliased Register Access */
#define yAksen_Bypass_BIT_MASK               (* (reg8 *) yAksen_Bypass__BIT_MASK)
/* Bypass Enable */
#define yAksen_Bypass_BYP                    (* (reg8 *) yAksen_Bypass__BYP)
/* Port wide control signals */                                                   
#define yAksen_Bypass_CTL                    (* (reg8 *) yAksen_Bypass__CTL)
/* Drive Modes */
#define yAksen_Bypass_DM0                    (* (reg8 *) yAksen_Bypass__DM0) 
#define yAksen_Bypass_DM1                    (* (reg8 *) yAksen_Bypass__DM1)
#define yAksen_Bypass_DM2                    (* (reg8 *) yAksen_Bypass__DM2) 
/* Input Buffer Disable Override */
#define yAksen_Bypass_INP_DIS                (* (reg8 *) yAksen_Bypass__INP_DIS)
/* LCD Common or Segment Drive */
#define yAksen_Bypass_LCD_COM_SEG            (* (reg8 *) yAksen_Bypass__LCD_COM_SEG)
/* Enable Segment LCD */
#define yAksen_Bypass_LCD_EN                 (* (reg8 *) yAksen_Bypass__LCD_EN)
/* Slew Rate Control */
#define yAksen_Bypass_SLW                    (* (reg8 *) yAksen_Bypass__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define yAksen_Bypass_PRTDSI__CAPS_SEL       (* (reg8 *) yAksen_Bypass__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define yAksen_Bypass_PRTDSI__DBL_SYNC_IN    (* (reg8 *) yAksen_Bypass__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define yAksen_Bypass_PRTDSI__OE_SEL0        (* (reg8 *) yAksen_Bypass__PRTDSI__OE_SEL0) 
#define yAksen_Bypass_PRTDSI__OE_SEL1        (* (reg8 *) yAksen_Bypass__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define yAksen_Bypass_PRTDSI__OUT_SEL0       (* (reg8 *) yAksen_Bypass__PRTDSI__OUT_SEL0) 
#define yAksen_Bypass_PRTDSI__OUT_SEL1       (* (reg8 *) yAksen_Bypass__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define yAksen_Bypass_PRTDSI__SYNC_OUT       (* (reg8 *) yAksen_Bypass__PRTDSI__SYNC_OUT) 


#if defined(yAksen_Bypass__INTSTAT)  /* Interrupt Registers */

    #define yAksen_Bypass_INTSTAT                (* (reg8 *) yAksen_Bypass__INTSTAT)
    #define yAksen_Bypass_SNAP                   (* (reg8 *) yAksen_Bypass__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_yAksen_Bypass_H */


/* [] END OF FILE */
