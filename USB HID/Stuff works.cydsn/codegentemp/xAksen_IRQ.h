/*******************************************************************************
* File Name: xAksen_IRQ.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_xAksen_IRQ_H)
#define CY_ISR_xAksen_IRQ_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void xAksen_IRQ_Start(void);
void xAksen_IRQ_StartEx(cyisraddress address);
void xAksen_IRQ_Stop(void);

CY_ISR_PROTO(xAksen_IRQ_Interrupt);

void xAksen_IRQ_SetVector(cyisraddress address);
cyisraddress xAksen_IRQ_GetVector(void);

void xAksen_IRQ_SetPriority(uint8 priority);
uint8 xAksen_IRQ_GetPriority(void);

void xAksen_IRQ_Enable(void);
uint8 xAksen_IRQ_GetState(void);
void xAksen_IRQ_Disable(void);

void xAksen_IRQ_SetPending(void);
void xAksen_IRQ_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the xAksen_IRQ ISR. */
#define xAksen_IRQ_INTC_VECTOR            ((reg32 *) xAksen_IRQ__INTC_VECT)

/* Address of the xAksen_IRQ ISR priority. */
#define xAksen_IRQ_INTC_PRIOR             ((reg8 *) xAksen_IRQ__INTC_PRIOR_REG)

/* Priority of the xAksen_IRQ interrupt. */
#define xAksen_IRQ_INTC_PRIOR_NUMBER      xAksen_IRQ__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable xAksen_IRQ interrupt. */
#define xAksen_IRQ_INTC_SET_EN            ((reg32 *) xAksen_IRQ__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the xAksen_IRQ interrupt. */
#define xAksen_IRQ_INTC_CLR_EN            ((reg32 *) xAksen_IRQ__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the xAksen_IRQ interrupt state to pending. */
#define xAksen_IRQ_INTC_SET_PD            ((reg32 *) xAksen_IRQ__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the xAksen_IRQ interrupt. */
#define xAksen_IRQ_INTC_CLR_PD            ((reg32 *) xAksen_IRQ__INTC_CLR_PD_REG)


#endif /* CY_ISR_xAksen_IRQ_H */


/* [] END OF FILE */
