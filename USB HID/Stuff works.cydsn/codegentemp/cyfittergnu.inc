.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* KNAP */
.set KNAP__0__INTTYPE, CYREG_PICU2_INTTYPE2
.set KNAP__0__MASK, 0x04
.set KNAP__0__PC, CYREG_PRT2_PC2
.set KNAP__0__PORT, 2
.set KNAP__0__SHIFT, 2
.set KNAP__AG, CYREG_PRT2_AG
.set KNAP__AMUX, CYREG_PRT2_AMUX
.set KNAP__BIE, CYREG_PRT2_BIE
.set KNAP__BIT_MASK, CYREG_PRT2_BIT_MASK
.set KNAP__BYP, CYREG_PRT2_BYP
.set KNAP__CTL, CYREG_PRT2_CTL
.set KNAP__DM0, CYREG_PRT2_DM0
.set KNAP__DM1, CYREG_PRT2_DM1
.set KNAP__DM2, CYREG_PRT2_DM2
.set KNAP__DR, CYREG_PRT2_DR
.set KNAP__INP_DIS, CYREG_PRT2_INP_DIS
.set KNAP__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set KNAP__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set KNAP__LCD_EN, CYREG_PRT2_LCD_EN
.set KNAP__MASK, 0x04
.set KNAP__PORT, 2
.set KNAP__PRT, CYREG_PRT2_PRT
.set KNAP__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set KNAP__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set KNAP__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set KNAP__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set KNAP__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set KNAP__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set KNAP__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set KNAP__PS, CYREG_PRT2_PS
.set KNAP__SHIFT, 2
.set KNAP__SLW, CYREG_PRT2_SLW

/* PORE */
.set PORE__0__INTTYPE, CYREG_PICU2_INTTYPE1
.set PORE__0__MASK, 0x02
.set PORE__0__PC, CYREG_PRT2_PC1
.set PORE__0__PORT, 2
.set PORE__0__SHIFT, 1
.set PORE__AG, CYREG_PRT2_AG
.set PORE__AMUX, CYREG_PRT2_AMUX
.set PORE__BIE, CYREG_PRT2_BIE
.set PORE__BIT_MASK, CYREG_PRT2_BIT_MASK
.set PORE__BYP, CYREG_PRT2_BYP
.set PORE__CTL, CYREG_PRT2_CTL
.set PORE__DM0, CYREG_PRT2_DM0
.set PORE__DM1, CYREG_PRT2_DM1
.set PORE__DM2, CYREG_PRT2_DM2
.set PORE__DR, CYREG_PRT2_DR
.set PORE__INP_DIS, CYREG_PRT2_INP_DIS
.set PORE__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set PORE__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set PORE__LCD_EN, CYREG_PRT2_LCD_EN
.set PORE__MASK, 0x02
.set PORE__PORT, 2
.set PORE__PRT, CYREG_PRT2_PRT
.set PORE__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set PORE__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set PORE__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set PORE__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set PORE__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set PORE__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set PORE__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set PORE__PS, CYREG_PRT2_PS
.set PORE__SHIFT, 1
.set PORE__SLW, CYREG_PRT2_SLW

/* USBFS_arb_int */
.set USBFS_arb_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_arb_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_arb_int__INTC_MASK, 0x400000
.set USBFS_arb_int__INTC_NUMBER, 22
.set USBFS_arb_int__INTC_PRIOR_NUM, 7
.set USBFS_arb_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_22
.set USBFS_arb_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_arb_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_bus_reset */
.set USBFS_bus_reset__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_bus_reset__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_bus_reset__INTC_MASK, 0x800000
.set USBFS_bus_reset__INTC_NUMBER, 23
.set USBFS_bus_reset__INTC_PRIOR_NUM, 7
.set USBFS_bus_reset__INTC_PRIOR_REG, CYREG_NVIC_PRI_23
.set USBFS_bus_reset__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_bus_reset__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_Dm */
.set USBFS_Dm__0__INTTYPE, CYREG_PICU15_INTTYPE7
.set USBFS_Dm__0__MASK, 0x80
.set USBFS_Dm__0__PC, CYREG_IO_PC_PRT15_7_6_PC1
.set USBFS_Dm__0__PORT, 15
.set USBFS_Dm__0__SHIFT, 7
.set USBFS_Dm__AG, CYREG_PRT15_AG
.set USBFS_Dm__AMUX, CYREG_PRT15_AMUX
.set USBFS_Dm__BIE, CYREG_PRT15_BIE
.set USBFS_Dm__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBFS_Dm__BYP, CYREG_PRT15_BYP
.set USBFS_Dm__CTL, CYREG_PRT15_CTL
.set USBFS_Dm__DM0, CYREG_PRT15_DM0
.set USBFS_Dm__DM1, CYREG_PRT15_DM1
.set USBFS_Dm__DM2, CYREG_PRT15_DM2
.set USBFS_Dm__DR, CYREG_PRT15_DR
.set USBFS_Dm__INP_DIS, CYREG_PRT15_INP_DIS
.set USBFS_Dm__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set USBFS_Dm__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBFS_Dm__LCD_EN, CYREG_PRT15_LCD_EN
.set USBFS_Dm__MASK, 0x80
.set USBFS_Dm__PORT, 15
.set USBFS_Dm__PRT, CYREG_PRT15_PRT
.set USBFS_Dm__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBFS_Dm__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBFS_Dm__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBFS_Dm__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBFS_Dm__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBFS_Dm__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBFS_Dm__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBFS_Dm__PS, CYREG_PRT15_PS
.set USBFS_Dm__SHIFT, 7
.set USBFS_Dm__SLW, CYREG_PRT15_SLW

/* USBFS_Dp */
.set USBFS_Dp__0__INTTYPE, CYREG_PICU15_INTTYPE6
.set USBFS_Dp__0__MASK, 0x40
.set USBFS_Dp__0__PC, CYREG_IO_PC_PRT15_7_6_PC0
.set USBFS_Dp__0__PORT, 15
.set USBFS_Dp__0__SHIFT, 6
.set USBFS_Dp__AG, CYREG_PRT15_AG
.set USBFS_Dp__AMUX, CYREG_PRT15_AMUX
.set USBFS_Dp__BIE, CYREG_PRT15_BIE
.set USBFS_Dp__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBFS_Dp__BYP, CYREG_PRT15_BYP
.set USBFS_Dp__CTL, CYREG_PRT15_CTL
.set USBFS_Dp__DM0, CYREG_PRT15_DM0
.set USBFS_Dp__DM1, CYREG_PRT15_DM1
.set USBFS_Dp__DM2, CYREG_PRT15_DM2
.set USBFS_Dp__DR, CYREG_PRT15_DR
.set USBFS_Dp__INP_DIS, CYREG_PRT15_INP_DIS
.set USBFS_Dp__INTSTAT, CYREG_PICU15_INTSTAT
.set USBFS_Dp__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set USBFS_Dp__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBFS_Dp__LCD_EN, CYREG_PRT15_LCD_EN
.set USBFS_Dp__MASK, 0x40
.set USBFS_Dp__PORT, 15
.set USBFS_Dp__PRT, CYREG_PRT15_PRT
.set USBFS_Dp__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBFS_Dp__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBFS_Dp__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBFS_Dp__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBFS_Dp__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBFS_Dp__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBFS_Dp__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBFS_Dp__PS, CYREG_PRT15_PS
.set USBFS_Dp__SHIFT, 6
.set USBFS_Dp__SLW, CYREG_PRT15_SLW
.set USBFS_Dp__SNAP, CYREG_PICU_15_SNAP_15

/* USBFS_dp_int */
.set USBFS_dp_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_dp_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_dp_int__INTC_MASK, 0x1000
.set USBFS_dp_int__INTC_NUMBER, 12
.set USBFS_dp_int__INTC_PRIOR_NUM, 7
.set USBFS_dp_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_12
.set USBFS_dp_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_dp_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_ep_0 */
.set USBFS_ep_0__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_ep_0__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_ep_0__INTC_MASK, 0x1000000
.set USBFS_ep_0__INTC_NUMBER, 24
.set USBFS_ep_0__INTC_PRIOR_NUM, 7
.set USBFS_ep_0__INTC_PRIOR_REG, CYREG_NVIC_PRI_24
.set USBFS_ep_0__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_ep_0__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_ep_1 */
.set USBFS_ep_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_ep_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_ep_1__INTC_MASK, 0x01
.set USBFS_ep_1__INTC_NUMBER, 0
.set USBFS_ep_1__INTC_PRIOR_NUM, 7
.set USBFS_ep_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set USBFS_ep_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_ep_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_ord_int */
.set USBFS_ord_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_ord_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_ord_int__INTC_MASK, 0x2000000
.set USBFS_ord_int__INTC_NUMBER, 25
.set USBFS_ord_int__INTC_PRIOR_NUM, 7
.set USBFS_ord_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_25
.set USBFS_ord_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_ord_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_sof_int */
.set USBFS_sof_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_sof_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_sof_int__INTC_MASK, 0x200000
.set USBFS_sof_int__INTC_NUMBER, 21
.set USBFS_sof_int__INTC_PRIOR_NUM, 7
.set USBFS_sof_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_21
.set USBFS_sof_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_sof_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_USB */
.set USBFS_USB__ARB_CFG, CYREG_USB_ARB_CFG
.set USBFS_USB__ARB_EP1_CFG, CYREG_USB_ARB_EP1_CFG
.set USBFS_USB__ARB_EP1_INT_EN, CYREG_USB_ARB_EP1_INT_EN
.set USBFS_USB__ARB_EP1_SR, CYREG_USB_ARB_EP1_SR
.set USBFS_USB__ARB_EP2_CFG, CYREG_USB_ARB_EP2_CFG
.set USBFS_USB__ARB_EP2_INT_EN, CYREG_USB_ARB_EP2_INT_EN
.set USBFS_USB__ARB_EP2_SR, CYREG_USB_ARB_EP2_SR
.set USBFS_USB__ARB_EP3_CFG, CYREG_USB_ARB_EP3_CFG
.set USBFS_USB__ARB_EP3_INT_EN, CYREG_USB_ARB_EP3_INT_EN
.set USBFS_USB__ARB_EP3_SR, CYREG_USB_ARB_EP3_SR
.set USBFS_USB__ARB_EP4_CFG, CYREG_USB_ARB_EP4_CFG
.set USBFS_USB__ARB_EP4_INT_EN, CYREG_USB_ARB_EP4_INT_EN
.set USBFS_USB__ARB_EP4_SR, CYREG_USB_ARB_EP4_SR
.set USBFS_USB__ARB_EP5_CFG, CYREG_USB_ARB_EP5_CFG
.set USBFS_USB__ARB_EP5_INT_EN, CYREG_USB_ARB_EP5_INT_EN
.set USBFS_USB__ARB_EP5_SR, CYREG_USB_ARB_EP5_SR
.set USBFS_USB__ARB_EP6_CFG, CYREG_USB_ARB_EP6_CFG
.set USBFS_USB__ARB_EP6_INT_EN, CYREG_USB_ARB_EP6_INT_EN
.set USBFS_USB__ARB_EP6_SR, CYREG_USB_ARB_EP6_SR
.set USBFS_USB__ARB_EP7_CFG, CYREG_USB_ARB_EP7_CFG
.set USBFS_USB__ARB_EP7_INT_EN, CYREG_USB_ARB_EP7_INT_EN
.set USBFS_USB__ARB_EP7_SR, CYREG_USB_ARB_EP7_SR
.set USBFS_USB__ARB_EP8_CFG, CYREG_USB_ARB_EP8_CFG
.set USBFS_USB__ARB_EP8_INT_EN, CYREG_USB_ARB_EP8_INT_EN
.set USBFS_USB__ARB_EP8_SR, CYREG_USB_ARB_EP8_SR
.set USBFS_USB__ARB_INT_EN, CYREG_USB_ARB_INT_EN
.set USBFS_USB__ARB_INT_SR, CYREG_USB_ARB_INT_SR
.set USBFS_USB__ARB_RW1_DR, CYREG_USB_ARB_RW1_DR
.set USBFS_USB__ARB_RW1_RA, CYREG_USB_ARB_RW1_RA
.set USBFS_USB__ARB_RW1_RA_MSB, CYREG_USB_ARB_RW1_RA_MSB
.set USBFS_USB__ARB_RW1_WA, CYREG_USB_ARB_RW1_WA
.set USBFS_USB__ARB_RW1_WA_MSB, CYREG_USB_ARB_RW1_WA_MSB
.set USBFS_USB__ARB_RW2_DR, CYREG_USB_ARB_RW2_DR
.set USBFS_USB__ARB_RW2_RA, CYREG_USB_ARB_RW2_RA
.set USBFS_USB__ARB_RW2_RA_MSB, CYREG_USB_ARB_RW2_RA_MSB
.set USBFS_USB__ARB_RW2_WA, CYREG_USB_ARB_RW2_WA
.set USBFS_USB__ARB_RW2_WA_MSB, CYREG_USB_ARB_RW2_WA_MSB
.set USBFS_USB__ARB_RW3_DR, CYREG_USB_ARB_RW3_DR
.set USBFS_USB__ARB_RW3_RA, CYREG_USB_ARB_RW3_RA
.set USBFS_USB__ARB_RW3_RA_MSB, CYREG_USB_ARB_RW3_RA_MSB
.set USBFS_USB__ARB_RW3_WA, CYREG_USB_ARB_RW3_WA
.set USBFS_USB__ARB_RW3_WA_MSB, CYREG_USB_ARB_RW3_WA_MSB
.set USBFS_USB__ARB_RW4_DR, CYREG_USB_ARB_RW4_DR
.set USBFS_USB__ARB_RW4_RA, CYREG_USB_ARB_RW4_RA
.set USBFS_USB__ARB_RW4_RA_MSB, CYREG_USB_ARB_RW4_RA_MSB
.set USBFS_USB__ARB_RW4_WA, CYREG_USB_ARB_RW4_WA
.set USBFS_USB__ARB_RW4_WA_MSB, CYREG_USB_ARB_RW4_WA_MSB
.set USBFS_USB__ARB_RW5_DR, CYREG_USB_ARB_RW5_DR
.set USBFS_USB__ARB_RW5_RA, CYREG_USB_ARB_RW5_RA
.set USBFS_USB__ARB_RW5_RA_MSB, CYREG_USB_ARB_RW5_RA_MSB
.set USBFS_USB__ARB_RW5_WA, CYREG_USB_ARB_RW5_WA
.set USBFS_USB__ARB_RW5_WA_MSB, CYREG_USB_ARB_RW5_WA_MSB
.set USBFS_USB__ARB_RW6_DR, CYREG_USB_ARB_RW6_DR
.set USBFS_USB__ARB_RW6_RA, CYREG_USB_ARB_RW6_RA
.set USBFS_USB__ARB_RW6_RA_MSB, CYREG_USB_ARB_RW6_RA_MSB
.set USBFS_USB__ARB_RW6_WA, CYREG_USB_ARB_RW6_WA
.set USBFS_USB__ARB_RW6_WA_MSB, CYREG_USB_ARB_RW6_WA_MSB
.set USBFS_USB__ARB_RW7_DR, CYREG_USB_ARB_RW7_DR
.set USBFS_USB__ARB_RW7_RA, CYREG_USB_ARB_RW7_RA
.set USBFS_USB__ARB_RW7_RA_MSB, CYREG_USB_ARB_RW7_RA_MSB
.set USBFS_USB__ARB_RW7_WA, CYREG_USB_ARB_RW7_WA
.set USBFS_USB__ARB_RW7_WA_MSB, CYREG_USB_ARB_RW7_WA_MSB
.set USBFS_USB__ARB_RW8_DR, CYREG_USB_ARB_RW8_DR
.set USBFS_USB__ARB_RW8_RA, CYREG_USB_ARB_RW8_RA
.set USBFS_USB__ARB_RW8_RA_MSB, CYREG_USB_ARB_RW8_RA_MSB
.set USBFS_USB__ARB_RW8_WA, CYREG_USB_ARB_RW8_WA
.set USBFS_USB__ARB_RW8_WA_MSB, CYREG_USB_ARB_RW8_WA_MSB
.set USBFS_USB__BUF_SIZE, CYREG_USB_BUF_SIZE
.set USBFS_USB__BUS_RST_CNT, CYREG_USB_BUS_RST_CNT
.set USBFS_USB__CR0, CYREG_USB_CR0
.set USBFS_USB__CR1, CYREG_USB_CR1
.set USBFS_USB__CWA, CYREG_USB_CWA
.set USBFS_USB__CWA_MSB, CYREG_USB_CWA_MSB
.set USBFS_USB__DMA_THRES, CYREG_USB_DMA_THRES
.set USBFS_USB__DMA_THRES_MSB, CYREG_USB_DMA_THRES_MSB
.set USBFS_USB__DYN_RECONFIG, CYREG_USB_DYN_RECONFIG
.set USBFS_USB__EP_ACTIVE, CYREG_USB_EP_ACTIVE
.set USBFS_USB__EP_TYPE, CYREG_USB_EP_TYPE
.set USBFS_USB__EP0_CNT, CYREG_USB_EP0_CNT
.set USBFS_USB__EP0_CR, CYREG_USB_EP0_CR
.set USBFS_USB__EP0_DR0, CYREG_USB_EP0_DR0
.set USBFS_USB__EP0_DR1, CYREG_USB_EP0_DR1
.set USBFS_USB__EP0_DR2, CYREG_USB_EP0_DR2
.set USBFS_USB__EP0_DR3, CYREG_USB_EP0_DR3
.set USBFS_USB__EP0_DR4, CYREG_USB_EP0_DR4
.set USBFS_USB__EP0_DR5, CYREG_USB_EP0_DR5
.set USBFS_USB__EP0_DR6, CYREG_USB_EP0_DR6
.set USBFS_USB__EP0_DR7, CYREG_USB_EP0_DR7
.set USBFS_USB__MEM_DATA, CYREG_USB_MEM_DATA_MBASE
.set USBFS_USB__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set USBFS_USB__PM_ACT_MSK, 0x01
.set USBFS_USB__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set USBFS_USB__PM_STBY_MSK, 0x01
.set USBFS_USB__SIE_EP_INT_EN, CYREG_USB_SIE_EP_INT_EN
.set USBFS_USB__SIE_EP_INT_SR, CYREG_USB_SIE_EP_INT_SR
.set USBFS_USB__SIE_EP1_CNT0, CYREG_USB_SIE_EP1_CNT0
.set USBFS_USB__SIE_EP1_CNT1, CYREG_USB_SIE_EP1_CNT1
.set USBFS_USB__SIE_EP1_CR0, CYREG_USB_SIE_EP1_CR0
.set USBFS_USB__SIE_EP2_CNT0, CYREG_USB_SIE_EP2_CNT0
.set USBFS_USB__SIE_EP2_CNT1, CYREG_USB_SIE_EP2_CNT1
.set USBFS_USB__SIE_EP2_CR0, CYREG_USB_SIE_EP2_CR0
.set USBFS_USB__SIE_EP3_CNT0, CYREG_USB_SIE_EP3_CNT0
.set USBFS_USB__SIE_EP3_CNT1, CYREG_USB_SIE_EP3_CNT1
.set USBFS_USB__SIE_EP3_CR0, CYREG_USB_SIE_EP3_CR0
.set USBFS_USB__SIE_EP4_CNT0, CYREG_USB_SIE_EP4_CNT0
.set USBFS_USB__SIE_EP4_CNT1, CYREG_USB_SIE_EP4_CNT1
.set USBFS_USB__SIE_EP4_CR0, CYREG_USB_SIE_EP4_CR0
.set USBFS_USB__SIE_EP5_CNT0, CYREG_USB_SIE_EP5_CNT0
.set USBFS_USB__SIE_EP5_CNT1, CYREG_USB_SIE_EP5_CNT1
.set USBFS_USB__SIE_EP5_CR0, CYREG_USB_SIE_EP5_CR0
.set USBFS_USB__SIE_EP6_CNT0, CYREG_USB_SIE_EP6_CNT0
.set USBFS_USB__SIE_EP6_CNT1, CYREG_USB_SIE_EP6_CNT1
.set USBFS_USB__SIE_EP6_CR0, CYREG_USB_SIE_EP6_CR0
.set USBFS_USB__SIE_EP7_CNT0, CYREG_USB_SIE_EP7_CNT0
.set USBFS_USB__SIE_EP7_CNT1, CYREG_USB_SIE_EP7_CNT1
.set USBFS_USB__SIE_EP7_CR0, CYREG_USB_SIE_EP7_CR0
.set USBFS_USB__SIE_EP8_CNT0, CYREG_USB_SIE_EP8_CNT0
.set USBFS_USB__SIE_EP8_CNT1, CYREG_USB_SIE_EP8_CNT1
.set USBFS_USB__SIE_EP8_CR0, CYREG_USB_SIE_EP8_CR0
.set USBFS_USB__SOF0, CYREG_USB_SOF0
.set USBFS_USB__SOF1, CYREG_USB_SOF1
.set USBFS_USB__USB_CLK_EN, CYREG_USB_USB_CLK_EN
.set USBFS_USB__USBIO_CR0, CYREG_USB_USBIO_CR0
.set USBFS_USB__USBIO_CR1, CYREG_USB_USBIO_CR1

/* xAkse */
.set xAkse__0__INTTYPE, CYREG_PICU1_INTTYPE7
.set xAkse__0__MASK, 0x80
.set xAkse__0__PC, CYREG_PRT1_PC7
.set xAkse__0__PORT, 1
.set xAkse__0__SHIFT, 7
.set xAkse__AG, CYREG_PRT1_AG
.set xAkse__AMUX, CYREG_PRT1_AMUX
.set xAkse__BIE, CYREG_PRT1_BIE
.set xAkse__BIT_MASK, CYREG_PRT1_BIT_MASK
.set xAkse__BYP, CYREG_PRT1_BYP
.set xAkse__CTL, CYREG_PRT1_CTL
.set xAkse__DM0, CYREG_PRT1_DM0
.set xAkse__DM1, CYREG_PRT1_DM1
.set xAkse__DM2, CYREG_PRT1_DM2
.set xAkse__DR, CYREG_PRT1_DR
.set xAkse__INP_DIS, CYREG_PRT1_INP_DIS
.set xAkse__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set xAkse__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set xAkse__LCD_EN, CYREG_PRT1_LCD_EN
.set xAkse__MASK, 0x80
.set xAkse__PORT, 1
.set xAkse__PRT, CYREG_PRT1_PRT
.set xAkse__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set xAkse__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set xAkse__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set xAkse__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set xAkse__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set xAkse__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set xAkse__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set xAkse__PS, CYREG_PRT1_PS
.set xAkse__SHIFT, 7
.set xAkse__SLW, CYREG_PRT1_SLW

/* yAkse */
.set yAkse__0__INTTYPE, CYREG_PICU1_INTTYPE6
.set yAkse__0__MASK, 0x40
.set yAkse__0__PC, CYREG_PRT1_PC6
.set yAkse__0__PORT, 1
.set yAkse__0__SHIFT, 6
.set yAkse__AG, CYREG_PRT1_AG
.set yAkse__AMUX, CYREG_PRT1_AMUX
.set yAkse__BIE, CYREG_PRT1_BIE
.set yAkse__BIT_MASK, CYREG_PRT1_BIT_MASK
.set yAkse__BYP, CYREG_PRT1_BYP
.set yAkse__CTL, CYREG_PRT1_CTL
.set yAkse__DM0, CYREG_PRT1_DM0
.set yAkse__DM1, CYREG_PRT1_DM1
.set yAkse__DM2, CYREG_PRT1_DM2
.set yAkse__DR, CYREG_PRT1_DR
.set yAkse__INP_DIS, CYREG_PRT1_INP_DIS
.set yAkse__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set yAkse__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set yAkse__LCD_EN, CYREG_PRT1_LCD_EN
.set yAkse__MASK, 0x40
.set yAkse__PORT, 1
.set yAkse__PRT, CYREG_PRT1_PRT
.set yAkse__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set yAkse__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set yAkse__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set yAkse__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set yAkse__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set yAkse__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set yAkse__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set yAkse__PS, CYREG_PRT1_PS
.set yAkse__SHIFT, 6
.set yAkse__SLW, CYREG_PRT1_SLW

/* xAksen_ADC_SAR */
.set xAksen_ADC_SAR__CLK, CYREG_SAR0_CLK
.set xAksen_ADC_SAR__CSR0, CYREG_SAR0_CSR0
.set xAksen_ADC_SAR__CSR1, CYREG_SAR0_CSR1
.set xAksen_ADC_SAR__CSR2, CYREG_SAR0_CSR2
.set xAksen_ADC_SAR__CSR3, CYREG_SAR0_CSR3
.set xAksen_ADC_SAR__CSR4, CYREG_SAR0_CSR4
.set xAksen_ADC_SAR__CSR5, CYREG_SAR0_CSR5
.set xAksen_ADC_SAR__CSR6, CYREG_SAR0_CSR6
.set xAksen_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set xAksen_ADC_SAR__PM_ACT_MSK, 0x01
.set xAksen_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set xAksen_ADC_SAR__PM_STBY_MSK, 0x01
.set xAksen_ADC_SAR__SW0, CYREG_SAR0_SW0
.set xAksen_ADC_SAR__SW2, CYREG_SAR0_SW2
.set xAksen_ADC_SAR__SW3, CYREG_SAR0_SW3
.set xAksen_ADC_SAR__SW4, CYREG_SAR0_SW4
.set xAksen_ADC_SAR__SW6, CYREG_SAR0_SW6
.set xAksen_ADC_SAR__TR0, CYREG_SAR0_TR0
.set xAksen_ADC_SAR__WRK0, CYREG_SAR0_WRK0
.set xAksen_ADC_SAR__WRK1, CYREG_SAR0_WRK1

/* xAksen_Bypass */
.set xAksen_Bypass__0__INTTYPE, CYREG_PICU0_INTTYPE4
.set xAksen_Bypass__0__MASK, 0x10
.set xAksen_Bypass__0__PC, CYREG_PRT0_PC4
.set xAksen_Bypass__0__PORT, 0
.set xAksen_Bypass__0__SHIFT, 4
.set xAksen_Bypass__AG, CYREG_PRT0_AG
.set xAksen_Bypass__AMUX, CYREG_PRT0_AMUX
.set xAksen_Bypass__BIE, CYREG_PRT0_BIE
.set xAksen_Bypass__BIT_MASK, CYREG_PRT0_BIT_MASK
.set xAksen_Bypass__BYP, CYREG_PRT0_BYP
.set xAksen_Bypass__CTL, CYREG_PRT0_CTL
.set xAksen_Bypass__DM0, CYREG_PRT0_DM0
.set xAksen_Bypass__DM1, CYREG_PRT0_DM1
.set xAksen_Bypass__DM2, CYREG_PRT0_DM2
.set xAksen_Bypass__DR, CYREG_PRT0_DR
.set xAksen_Bypass__INP_DIS, CYREG_PRT0_INP_DIS
.set xAksen_Bypass__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set xAksen_Bypass__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set xAksen_Bypass__LCD_EN, CYREG_PRT0_LCD_EN
.set xAksen_Bypass__MASK, 0x10
.set xAksen_Bypass__PORT, 0
.set xAksen_Bypass__PRT, CYREG_PRT0_PRT
.set xAksen_Bypass__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set xAksen_Bypass__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set xAksen_Bypass__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set xAksen_Bypass__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set xAksen_Bypass__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set xAksen_Bypass__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set xAksen_Bypass__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set xAksen_Bypass__PS, CYREG_PRT0_PS
.set xAksen_Bypass__SHIFT, 4
.set xAksen_Bypass__SLW, CYREG_PRT0_SLW

/* xAksen_IRQ */
.set xAksen_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set xAksen_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set xAksen_IRQ__INTC_MASK, 0x02
.set xAksen_IRQ__INTC_NUMBER, 1
.set xAksen_IRQ__INTC_PRIOR_NUM, 7
.set xAksen_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set xAksen_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set xAksen_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* xAksen_theACLK */
.set xAksen_theACLK__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set xAksen_theACLK__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set xAksen_theACLK__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set xAksen_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set xAksen_theACLK__INDEX, 0x01
.set xAksen_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set xAksen_theACLK__PM_ACT_MSK, 0x02
.set xAksen_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set xAksen_theACLK__PM_STBY_MSK, 0x02

/* yAksen_ADC_SAR */
.set yAksen_ADC_SAR__CLK, CYREG_SAR1_CLK
.set yAksen_ADC_SAR__CSR0, CYREG_SAR1_CSR0
.set yAksen_ADC_SAR__CSR1, CYREG_SAR1_CSR1
.set yAksen_ADC_SAR__CSR2, CYREG_SAR1_CSR2
.set yAksen_ADC_SAR__CSR3, CYREG_SAR1_CSR3
.set yAksen_ADC_SAR__CSR4, CYREG_SAR1_CSR4
.set yAksen_ADC_SAR__CSR5, CYREG_SAR1_CSR5
.set yAksen_ADC_SAR__CSR6, CYREG_SAR1_CSR6
.set yAksen_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set yAksen_ADC_SAR__PM_ACT_MSK, 0x02
.set yAksen_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set yAksen_ADC_SAR__PM_STBY_MSK, 0x02
.set yAksen_ADC_SAR__SW0, CYREG_SAR1_SW0
.set yAksen_ADC_SAR__SW2, CYREG_SAR1_SW2
.set yAksen_ADC_SAR__SW3, CYREG_SAR1_SW3
.set yAksen_ADC_SAR__SW4, CYREG_SAR1_SW4
.set yAksen_ADC_SAR__SW6, CYREG_SAR1_SW6
.set yAksen_ADC_SAR__TR0, CYREG_SAR1_TR0
.set yAksen_ADC_SAR__WRK0, CYREG_SAR1_WRK0
.set yAksen_ADC_SAR__WRK1, CYREG_SAR1_WRK1

/* yAksen_Bypass */
.set yAksen_Bypass__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set yAksen_Bypass__0__MASK, 0x04
.set yAksen_Bypass__0__PC, CYREG_PRT0_PC2
.set yAksen_Bypass__0__PORT, 0
.set yAksen_Bypass__0__SHIFT, 2
.set yAksen_Bypass__AG, CYREG_PRT0_AG
.set yAksen_Bypass__AMUX, CYREG_PRT0_AMUX
.set yAksen_Bypass__BIE, CYREG_PRT0_BIE
.set yAksen_Bypass__BIT_MASK, CYREG_PRT0_BIT_MASK
.set yAksen_Bypass__BYP, CYREG_PRT0_BYP
.set yAksen_Bypass__CTL, CYREG_PRT0_CTL
.set yAksen_Bypass__DM0, CYREG_PRT0_DM0
.set yAksen_Bypass__DM1, CYREG_PRT0_DM1
.set yAksen_Bypass__DM2, CYREG_PRT0_DM2
.set yAksen_Bypass__DR, CYREG_PRT0_DR
.set yAksen_Bypass__INP_DIS, CYREG_PRT0_INP_DIS
.set yAksen_Bypass__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set yAksen_Bypass__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set yAksen_Bypass__LCD_EN, CYREG_PRT0_LCD_EN
.set yAksen_Bypass__MASK, 0x04
.set yAksen_Bypass__PORT, 0
.set yAksen_Bypass__PRT, CYREG_PRT0_PRT
.set yAksen_Bypass__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set yAksen_Bypass__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set yAksen_Bypass__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set yAksen_Bypass__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set yAksen_Bypass__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set yAksen_Bypass__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set yAksen_Bypass__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set yAksen_Bypass__PS, CYREG_PRT0_PS
.set yAksen_Bypass__SHIFT, 2
.set yAksen_Bypass__SLW, CYREG_PRT0_SLW

/* yAksen_IRQ */
.set yAksen_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set yAksen_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set yAksen_IRQ__INTC_MASK, 0x04
.set yAksen_IRQ__INTC_NUMBER, 2
.set yAksen_IRQ__INTC_PRIOR_NUM, 7
.set yAksen_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set yAksen_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set yAksen_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* yAksen_theACLK */
.set yAksen_theACLK__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set yAksen_theACLK__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set yAksen_theACLK__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set yAksen_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set yAksen_theACLK__INDEX, 0x00
.set yAksen_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set yAksen_theACLK__PM_ACT_MSK, 0x01
.set yAksen_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set yAksen_theACLK__PM_STBY_MSK, 0x01

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 33000000
.set BCLK__BUS_CLK__KHZ, 33000
.set BCLK__BUS_CLK__MHZ, 33
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 12
.set CYDEV_CHIP_DIE_PSOC5LP, 19
.set CYDEV_CHIP_DIE_PSOC5TM, 20
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 4
.set CYDEV_CHIP_FAMILY_FM3, 5
.set CYDEV_CHIP_FAMILY_FM4, 6
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 12
.set CYDEV_CHIP_MEMBER_4C, 18
.set CYDEV_CHIP_MEMBER_4D, 8
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 13
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 11
.set CYDEV_CHIP_MEMBER_4I, 17
.set CYDEV_CHIP_MEMBER_4J, 9
.set CYDEV_CHIP_MEMBER_4K, 10
.set CYDEV_CHIP_MEMBER_4L, 16
.set CYDEV_CHIP_MEMBER_4M, 15
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4P, 14
.set CYDEV_CHIP_MEMBER_4Q, 7
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 20
.set CYDEV_CHIP_MEMBER_5B, 19
.set CYDEV_CHIP_MEMBER_FM3, 24
.set CYDEV_CHIP_MEMBER_FM4, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 21
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 22
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 23
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 1
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 0
.set CYDEV_INTR_RISING, 0x00000006
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP, 1
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set CyScBoostClk__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set CyScBoostClk__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set CyScBoostClk__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set CyScBoostClk__CFG2_SRC_SEL_MASK, 0x07
.set CyScBoostClk__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set CyScBoostClk__CFG3_PHASE_DLY_MASK, 0x0F
.set CyScBoostClk__INDEX, 0x00
.set CyScBoostClk__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set CyScBoostClk__PM_ACT_MSK, 0x01
.set CyScBoostClk__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set CyScBoostClk__PM_STBY_MSK, 0x01
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
