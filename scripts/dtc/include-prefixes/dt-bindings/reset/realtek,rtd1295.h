/* SPDX-License-Identifier: (GPL-2.0-or-later OR BSD-2-Clause) */
/*
 * Realtek RTD1295 reset controllers
 *
 * Copyright (c) 2017 Andreas Färber
 */
#ifndef DT_BINDINGS_RESET_RTD1295_H
#define DT_BINDINGS_RESET_RTD1295_H

/* soft reset 1 */
#define RTD1295_RSTN_MISC		0
#define RTD1295_RSTN_NAT		1
#define RTD1295_RSTN_USB3_PHY0_POW	2
#define RTD1295_RSTN_GSPI		3
#define RTD1295_RSTN_USB3_P0_MDIO	4
#define RTD1295_RSTN_SATA_0		5
#define RTD1295_RSTN_USB		6
#define RTD1295_RSTN_SATA_PHY_0		7
#define RTD1295_RSTN_USB_PHY0		8
#define RTD1295_RSTN_USB_PHY1		9
#define RTD1295_RSTN_SATA_PHY_POW_0	10
#define RTD1295_RSTN_SATA_FUNC_EXIST_0	11
#define RTD1295_RSTN_HDMI		12
#define RTD1295_RSTN_VE1		13
#define RTD1295_RSTN_VE2		14
#define RTD1295_RSTN_VE3		15
#define RTD1295_RSTN_ETN		16
#define RTD1295_RSTN_AIO		17
#define RTD1295_RSTN_GPU		18
#define RTD1295_RSTN_TVE		19
#define RTD1295_RSTN_VO			20
#define RTD1295_RSTN_LVDS		21
#define RTD1295_RSTN_SE			22
#define RTD1295_RSTN_DCU		23
#define RTD1295_RSTN_DC_PHY		24
#define RTD1295_RSTN_CP			25
#define RTD1295_RSTN_MD			26
#define RTD1295_RSTN_TP			27
#define RTD1295_RSTN_AE			28
#define RTD1295_RSTN_NF			29
#define RTD1295_RSTN_MIPI		30
#define RTD1295_RSTN_RSA		31

/* soft reset 2 */
#define RTD1295_RSTN_ACPU		0
#define RTD1295_RSTN_JPEG		1
#define RTD1295_RSTN_USB_PHY3		2
#define RTD1295_RSTN_USB_PHY2		3
#define RTD1295_RSTN_USB3_PHY1_POW	4
#define RTD1295_RSTN_USB3_P1_MDIO	5
#define RTD1295_RSTN_PCIE0_STITCH	6
#define RTD1295_RSTN_PCIE0_PHY		7
#define RTD1295_RSTN_PCIE0		8
#define RTD1295_RSTN_PCR_CNT		9
#define RTD1295_RSTN_CR			10
#define RTD1295_RSTN_EMMC		11
#define RTD1295_RSTN_SDIO		12
#define RTD1295_RSTN_PCIE0_CORE		13
#define RTD1295_RSTN_PCIE0_POWER	14
#define RTD1295_RSTN_PCIE0_NONSTICH	15
#define RTD1295_RSTN_PCIE1_PHY		16
#define RTD1295_RSTN_PCIE1		17
#define RTD1295_RSTN_I2C_5		18
#define RTD1295_RSTN_PCIE1_STITCH	19
#define RTD1295_RSTN_PCIE1_CORE		20
#define RTD1295_RSTN_PCIE1_POWER	21
#define RTD1295_RSTN_PCIE1_NONSTICH	22
#define RTD1295_RSTN_I2C_4		23
#define RTD1295_RSTN_I2C_3		24
#define RTD1295_RSTN_I2C_2		25
#define RTD1295_RSTN_I2C_1		26
#define RTD1295_RSTN_UR2		27
#define RTD1295_RSTN_UR1		28
#define RTD1295_RSTN_MISC_SC		29
#define RTD1295_RSTN_CBUS_TX		30
#define RTD1295_RSTN_SDS_PHY		31

/* soft reset 4 */
#define RTD1295_RSTN_DCPHY_CRT		0
#define RTD1295_RSTN_DCPHY_ALERT_RX	1
#define RTD1295_RSTN_DCPHY_PTR		2
#define RTD1295_RSTN_DCPHY_LDO		3
#define RTD1295_RSTN_DCPHY_SSC_DIG	4
#define RTD1295_RSTN_HDMIRX		5
#define RTD1295_RSTN_CBUSRX		6
#define RTD1295_RSTN_SATA_PHY_POW_1	7
#define RTD1295_RSTN_SATA_FUNC_EXIST_1	8
#define RTD1295_RSTN_SATA_PHY_1		9
#define RTD1295_RSTN_SATA_1		10
#define RTD1295_RSTN_FAN		11
#define RTD1295_RSTN_HDMIRX_WRAP	12
#define RTD1295_RSTN_PCIE0_PHY_MDIO	13
#define RTD1295_RSTN_PCIE1_PHY_MDIO	14
#define RTD1295_RSTN_DISP		15

/* iso reset */
#define RTD1295_ISO_RSTN_IR		1
#define RTD1295_ISO_RSTN_CEC0		2
#define RTD1295_ISO_RSTN_CEC1		3
#define RTD1295_ISO_RSTN_DP		4
#define RTD1295_ISO_RSTN_CBUSTX		5
#define RTD1295_ISO_RSTN_CBUSRX		6
#define RTD1295_ISO_RSTN_EFUSE		7
#define RTD1295_ISO_RSTN_UR0		8
#define RTD1295_ISO_RSTN_GMAC		9
#define RTD1295_ISO_RSTN_GPHY		10
#define RTD1295_ISO_RSTN_I2C_0		11
#define RTD1295_ISO_RSTN_I2C_1		12
#define RTD1295_ISO_RSTN_CBUS		13

#endif
