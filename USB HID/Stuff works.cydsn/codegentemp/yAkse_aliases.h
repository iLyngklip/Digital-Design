/*******************************************************************************
* File Name: yAkse.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_yAkse_ALIASES_H) /* Pins yAkse_ALIASES_H */
#define CY_PINS_yAkse_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define yAkse_0			(yAkse__0__PC)
#define yAkse_0_INTR	((uint16)((uint16)0x0001u << yAkse__0__SHIFT))

#define yAkse_INTR_ALL	 ((uint16)(yAkse_0_INTR))

#endif /* End Pins yAkse_ALIASES_H */


/* [] END OF FILE */
