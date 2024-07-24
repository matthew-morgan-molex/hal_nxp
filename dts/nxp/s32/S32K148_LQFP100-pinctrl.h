/*
 * NOTE: Autogenerated file by kinetis_cfg_utils.py
 * for S32K148_LQFP100/signal_configuration.xml
 *
 * Copyright 2023, NXP
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ZEPHYR_DTS_BINDING_S32K148_LQFP100_
#define _ZEPHYR_DTS_BINDING_S32K148_LQFP100_

#define KINETIS_MUX(port, pin, mux)		\
	(((((port) - 'A') & 0xF) << 28) |	\
	(((pin) & 0x3F) << 22) |		\
	(((mux) & 0x7) << 8))

#define CMP0_IN0_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define ADC0_SE0_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define PTA0 KINETIS_MUX('A',0,1) /* PTA0 */
#define FTM2_CH1_PTA0 KINETIS_MUX('A',0,2) /* PTA0 */
#define LPI2C0_SCLS_PTA0 KINETIS_MUX('A',0,3) /* PTA0 */
#define FXIO_D2_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
#define FTM2_QD_PHA_PTA0 KINETIS_MUX('A',0,5) /* PTA0 */
#define LPUART0_CTS_PTA0 KINETIS_MUX('A',0,6) /* PTA0 */
#define TRGMUX_OUT3_PTA0 KINETIS_MUX('A',0,7) /* PTA0 */
#define ADC0_SE1_PTA1 KINETIS_MUX('A',1,0) /* PTA1 */
#define CMP0_IN1_PTA1 KINETIS_MUX('A',1,0) /* PTA1 */
#define PTA1 KINETIS_MUX('A',1,1) /* PTA1 */
#define FTM1_CH1_PTA1 KINETIS_MUX('A',1,2) /* PTA1 */
#define LPI2C0_SDAS_PTA1 KINETIS_MUX('A',1,3) /* PTA1 */
#define FXIO_D3_PTA1 KINETIS_MUX('A',1,4) /* PTA1 */
#define FTM1_QD_PHA_PTA1 KINETIS_MUX('A',1,5) /* PTA1 */
#define LPUART0_RTS_PTA1 KINETIS_MUX('A',1,6) /* PTA1 */
#define TRGMUX_OUT0_PTA1 KINETIS_MUX('A',1,7) /* PTA1 */
#define ADC1_SE0_PTA2 KINETIS_MUX('A',2,0) /* PTA2 */
#define PTA2 KINETIS_MUX('A',2,1) /* PTA2 */
#define FTM3_CH0_PTA2 KINETIS_MUX('A',2,2) /* PTA2 */
#define LPI2C0_SDA_PTA2 KINETIS_MUX('A',2,3) /* PTA2 */
#define EWM_OUT_b_PTA2 KINETIS_MUX('A',2,4) /* PTA2 */
#define FXIO_D4_PTA2 KINETIS_MUX('A',2,5) /* PTA2 */
#define LPUART0_RX_PTA2 KINETIS_MUX('A',2,6) /* PTA2 */
#define ADC1_SE1_PTA3 KINETIS_MUX('A',3,0) /* PTA3 */
#define PTA3 KINETIS_MUX('A',3,1) /* PTA3 */
#define FTM3_CH1_PTA3 KINETIS_MUX('A',3,2) /* PTA3 */
#define LPI2C0_SCL_PTA3 KINETIS_MUX('A',3,3) /* PTA3 */
#define EWM_IN_PTA3 KINETIS_MUX('A',3,4) /* PTA3 */
#define FXIO_D5_PTA3 KINETIS_MUX('A',3,5) /* PTA3 */
#define LPUART0_TX_PTA3 KINETIS_MUX('A',3,6) /* PTA3 */
#define PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define CMP0_OUT_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define EWM_OUT_b_PTA4 KINETIS_MUX('A',4,5) /* PTA4 */
#define SWD_DIO_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define JTAG_TMS_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define PTA5 KINETIS_MUX('A',5,1) /* PTA5 */
#define TCLK1_PTA5 KINETIS_MUX('A',5,3) /* PTA5 */
#define RESET_b_PTA5 KINETIS_MUX('A',5,7) /* PTA5 */
#define ADC0_SE2_PTA6 KINETIS_MUX('A',6,0) /* PTA6 */
#define PTA6 KINETIS_MUX('A',6,1) /* PTA6 */
#define FTM0_FLT1_PTA6 KINETIS_MUX('A',6,2) /* PTA6 */
#define LPSPI1_PCS1_PTA6 KINETIS_MUX('A',6,3) /* PTA6 */
#define FTM5_CH5_PTA6 KINETIS_MUX('A',6,4) /* PTA6 */
#define LPUART1_CTS_PTA6 KINETIS_MUX('A',6,6) /* PTA6 */
#define ADC0_SE3_PTA7 KINETIS_MUX('A',7,0) /* PTA7 */
#define PTA7 KINETIS_MUX('A',7,1) /* PTA7 */
#define FTM0_FLT2_PTA7 KINETIS_MUX('A',7,2) /* PTA7 */
#define FTM5_CH3_PTA7 KINETIS_MUX('A',7,3) /* PTA7 */
#define RTC_CLKIN_PTA7 KINETIS_MUX('A',7,4) /* PTA7 */
#define LPUART1_RTS_PTA7 KINETIS_MUX('A',7,6) /* PTA7 */
#define PTA8 KINETIS_MUX('A',8,1) /* PTA8 */
#define LPUART2_RX_PTA8 KINETIS_MUX('A',8,2) /* PTA8 */
#define LPSPI2_SOUT_PTA8 KINETIS_MUX('A',8,3) /* PTA8 */
#define FXIO_D6_PTA8 KINETIS_MUX('A',8,4) /* PTA8 */
#define FTM3_FLT3_PTA8 KINETIS_MUX('A',8,5) /* PTA8 */
#define FTM4_FLT1_PTA8 KINETIS_MUX('A',8,6) /* PTA8 */
#define PTA9 KINETIS_MUX('A',9,1) /* PTA9 */
#define LPUART2_TX_PTA9 KINETIS_MUX('A',9,2) /* PTA9 */
#define LPSPI2_PCS0_PTA9 KINETIS_MUX('A',9,3) /* PTA9 */
#define FXIO_D7_PTA9 KINETIS_MUX('A',9,4) /* PTA9 */
#define FTM3_FLT2_PTA9 KINETIS_MUX('A',9,5) /* PTA9 */
#define FTM1_FLT3_PTA9 KINETIS_MUX('A',9,6) /* PTA9 */
#define FTM4_FLT0_PTA9 KINETIS_MUX('A',9,7) /* PTA9 */
#define PTA10 KINETIS_MUX('A',10,1) /* PTA10 */
#define FTM1_CH4_PTA10 KINETIS_MUX('A',10,2) /* PTA10 */
#define FXIO_D0_PTA10 KINETIS_MUX('A',10,4) /* PTA10 */
#define noetm_TRACE_SWO_PTA10 KINETIS_MUX('A',10,7) /* PTA10 */
#define JTAG_TDO_PTA10 KINETIS_MUX('A',10,7) /* PTA10 */
#define PTA11 KINETIS_MUX('A',11,1) /* PTA11 */
#define FTM1_CH5_PTA11 KINETIS_MUX('A',11,2) /* PTA11 */
#define FXIO_D1_PTA11 KINETIS_MUX('A',11,4) /* PTA11 */
#define CMP0_RRT_PTA11 KINETIS_MUX('A',11,5) /* PTA11 */
#define SAI0_SYNC_PTA11 KINETIS_MUX('A',11,6) /* PTA11 */
#define PTA12 KINETIS_MUX('A',12,1) /* PTA12 */
#define FTM1_CH6_PTA12 KINETIS_MUX('A',12,2) /* PTA12 */
#define CAN1_RX_PTA12 KINETIS_MUX('A',12,3) /* PTA12 */
#define LPI2C1_SDAS_PTA12 KINETIS_MUX('A',12,4) /* PTA12 */
#define FTM2_QD_PHB_PTA12 KINETIS_MUX('A',12,6) /* PTA12 */
#define SAI0_BCLK_PTA12 KINETIS_MUX('A',12,7) /* PTA12 */
#define PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define FTM1_CH7_PTA13 KINETIS_MUX('A',13,2) /* PTA13 */
#define CAN1_TX_PTA13 KINETIS_MUX('A',13,3) /* PTA13 */
#define LPI2C1_SCLS_PTA13 KINETIS_MUX('A',13,4) /* PTA13 */
#define FTM2_QD_PHA_PTA13 KINETIS_MUX('A',13,6) /* PTA13 */
#define SAI0_D0_PTA13 KINETIS_MUX('A',13,7) /* PTA13 */
#define PTA14 KINETIS_MUX('A',14,1) /* PTA14 */
#define FTM0_FLT0_PTA14 KINETIS_MUX('A',14,2) /* PTA14 */
#define FTM3_FLT1_PTA14 KINETIS_MUX('A',14,3) /* PTA14 */
#define EWM_IN_PTA14 KINETIS_MUX('A',14,4) /* PTA14 */
#define FTM1_FLT0_PTA14 KINETIS_MUX('A',14,6) /* PTA14 */
#define SAI0_D3_PTA14 KINETIS_MUX('A',14,7) /* PTA14 */
#define ADC1_SE12_PTA15 KINETIS_MUX('A',15,0) /* PTA15 */
#define PTA15 KINETIS_MUX('A',15,1) /* PTA15 */
#define FTM1_CH2_PTA15 KINETIS_MUX('A',15,2) /* PTA15 */
#define LPSPI0_PCS3_PTA15 KINETIS_MUX('A',15,3) /* PTA15 */
#define LPSPI2_PCS3_PTA15 KINETIS_MUX('A',15,4) /* PTA15 */
#define FTM7_FLT0_PTA15 KINETIS_MUX('A',15,5) /* PTA15 */
#define ADC1_SE13_PTA16 KINETIS_MUX('A',16,0) /* PTA16 */
#define PTA16 KINETIS_MUX('A',16,1) /* PTA16 */
#define FTM1_CH3_PTA16 KINETIS_MUX('A',16,2) /* PTA16 */
#define LPSPI1_PCS2_PTA16 KINETIS_MUX('A',16,3) /* PTA16 */
#define PTA17 KINETIS_MUX('A',17,1) /* PTA17 */
#define FTM0_CH6_PTA17 KINETIS_MUX('A',17,2) /* PTA17 */
#define FTM3_FLT0_PTA17 KINETIS_MUX('A',17,3) /* PTA17 */
#define EWM_OUT_b_PTA17 KINETIS_MUX('A',17,4) /* PTA17 */
#define FTM5_FLT0_PTA17 KINETIS_MUX('A',17,5) /* PTA17 */
#define ADC0_SE4_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define ADC1_SE14_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define LPUART0_RX_PTB0 KINETIS_MUX('B',0,2) /* PTB0 */
#define LPSPI0_PCS0_PTB0 KINETIS_MUX('B',0,3) /* PTB0 */
#define LPTMR0_ALT3_PTB0 KINETIS_MUX('B',0,4) /* PTB0 */
#define CAN0_RX_PTB0 KINETIS_MUX('B',0,5) /* PTB0 */
#define FTM4_CH6_PTB0 KINETIS_MUX('B',0,6) /* PTB0 */
#define ADC0_SE5_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define ADC1_SE15_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define PTB1 KINETIS_MUX('B',1,1) /* PTB1 */
#define LPUART0_TX_PTB1 KINETIS_MUX('B',1,2) /* PTB1 */
#define LPSPI0_SOUT_PTB1 KINETIS_MUX('B',1,3) /* PTB1 */
#define TCLK0_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define CAN0_TX_PTB1 KINETIS_MUX('B',1,5) /* PTB1 */
#define FTM4_CH5_PTB1 KINETIS_MUX('B',1,6) /* PTB1 */
#define ADC0_SE6_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define PTB2 KINETIS_MUX('B',2,1) /* PTB2 */
#define FTM1_CH0_PTB2 KINETIS_MUX('B',2,2) /* PTB2 */
#define LPSPI0_SCK_PTB2 KINETIS_MUX('B',2,3) /* PTB2 */
#define FTM1_QD_PHB_PTB2 KINETIS_MUX('B',2,4) /* PTB2 */
#define TRGMUX_IN3_PTB2 KINETIS_MUX('B',2,6) /* PTB2 */
#define ADC0_SE7_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define PTB3 KINETIS_MUX('B',3,1) /* PTB3 */
#define FTM1_CH1_PTB3 KINETIS_MUX('B',3,2) /* PTB3 */
#define LPSPI0_SIN_PTB3 KINETIS_MUX('B',3,3) /* PTB3 */
#define FTM1_QD_PHA_PTB3 KINETIS_MUX('B',3,4) /* PTB3 */
#define TRGMUX_IN2_PTB3 KINETIS_MUX('B',3,6) /* PTB3 */
#define PTB4 KINETIS_MUX('B',4,1) /* PTB4 */
#define FTM0_CH4_PTB4 KINETIS_MUX('B',4,2) /* PTB4 */
#define LPSPI0_SOUT_PTB4 KINETIS_MUX('B',4,3) /* PTB4 */
#define MII_RMII_MDIO_PTB4 KINETIS_MUX('B',4,5) /* PTB4 */
#define TRGMUX_IN1_PTB4 KINETIS_MUX('B',4,6) /* PTB4 */
#define PTB5 KINETIS_MUX('B',5,1) /* PTB5 */
#define FTM0_CH5_PTB5 KINETIS_MUX('B',5,2) /* PTB5 */
#define LPSPI0_PCS1_PTB5 KINETIS_MUX('B',5,3) /* PTB5 */
#define LPSPI0_PCS0_PTB5 KINETIS_MUX('B',5,4) /* PTB5 */
#define CLKOUT_PTB5 KINETIS_MUX('B',5,5) /* PTB5 */
#define TRGMUX_IN0_PTB5 KINETIS_MUX('B',5,6) /* PTB5 */
#define MII_RMII_MDC_PTB5 KINETIS_MUX('B',5,7) /* PTB5 */
#define XTAL_PTB6 KINETIS_MUX('B',6,0) /* PTB6 */
#define PTB6 KINETIS_MUX('B',6,1) /* PTB6 */
#define LPI2C0_SDA_PTB6 KINETIS_MUX('B',6,2) /* PTB6 */
#define EXTAL_PTB7 KINETIS_MUX('B',7,0) /* PTB7 */
#define PTB7 KINETIS_MUX('B',7,1) /* PTB7 */
#define LPI2C0_SCL_PTB7 KINETIS_MUX('B',7,2) /* PTB7 */
#define PTB8 KINETIS_MUX('B',8,1) /* PTB8 */
#define FTM3_CH0_PTB8 KINETIS_MUX('B',8,2) /* PTB8 */
#define SAI1_BCLK_PTB8 KINETIS_MUX('B',8,4) /* PTB8 */
#define PTB9 KINETIS_MUX('B',9,1) /* PTB9 */
#define FTM3_CH1_PTB9 KINETIS_MUX('B',9,2) /* PTB9 */
#define LPI2C0_SCLS_PTB9 KINETIS_MUX('B',9,3) /* PTB9 */
#define SAI1_D0_PTB9 KINETIS_MUX('B',9,4) /* PTB9 */
#define PTB10 KINETIS_MUX('B',10,1) /* PTB10 */
#define FTM3_CH2_PTB10 KINETIS_MUX('B',10,2) /* PTB10 */
#define LPI2C0_SDAS_PTB10 KINETIS_MUX('B',10,3) /* PTB10 */
#define SAI1_MCLK_PTB10 KINETIS_MUX('B',10,4) /* PTB10 */
#define PTB11 KINETIS_MUX('B',11,1) /* PTB11 */
#define FTM3_CH3_PTB11 KINETIS_MUX('B',11,2) /* PTB11 */
#define LPI2C0_HREQ_PTB11 KINETIS_MUX('B',11,3) /* PTB11 */
#define ADC1_SE7_PTB12 KINETIS_MUX('B',12,0) /* PTB12 */
#define PTB12 KINETIS_MUX('B',12,1) /* PTB12 */
#define FTM0_CH0_PTB12 KINETIS_MUX('B',12,2) /* PTB12 */
#define FTM3_FLT2_PTB12 KINETIS_MUX('B',12,3) /* PTB12 */
#define CAN2_RX_PTB12 KINETIS_MUX('B',12,4) /* PTB12 */
#define FTM6_FLT1_PTB12 KINETIS_MUX('B',12,5) /* PTB12 */
#define ADC0_SE8_PTB13 KINETIS_MUX('B',13,0) /* PTB13 */
#define ADC1_SE8_PTB13 KINETIS_MUX('B',13,0) /* PTB13 */
#define PTB13 KINETIS_MUX('B',13,1) /* PTB13 */
#define FTM0_CH1_PTB13 KINETIS_MUX('B',13,2) /* PTB13 */
#define FTM3_FLT1_PTB13 KINETIS_MUX('B',13,3) /* PTB13 */
#define CAN2_TX_PTB13 KINETIS_MUX('B',13,4) /* PTB13 */
#define FTM6_FLT0_PTB13 KINETIS_MUX('B',13,5) /* PTB13 */
#define ADC1_SE9_PTB14 KINETIS_MUX('B',14,0) /* PTB14 */
#define ADC0_SE9_PTB14 KINETIS_MUX('B',14,0) /* PTB14 */
#define PTB14 KINETIS_MUX('B',14,1) /* PTB14 */
#define FTM0_CH2_PTB14 KINETIS_MUX('B',14,2) /* PTB14 */
#define LPSPI1_SCK_PTB14 KINETIS_MUX('B',14,3) /* PTB14 */
#define ADC1_SE14_PTB15 KINETIS_MUX('B',15,0) /* PTB15 */
#define PTB15 KINETIS_MUX('B',15,1) /* PTB15 */
#define FTM0_CH3_PTB15 KINETIS_MUX('B',15,2) /* PTB15 */
#define LPSPI1_SIN_PTB15 KINETIS_MUX('B',15,3) /* PTB15 */
#define ADC1_SE15_PTB16 KINETIS_MUX('B',16,0) /* PTB16 */
#define PTB16 KINETIS_MUX('B',16,1) /* PTB16 */
#define FTM0_CH4_PTB16 KINETIS_MUX('B',16,2) /* PTB16 */
#define LPSPI1_SOUT_PTB16 KINETIS_MUX('B',16,3) /* PTB16 */
#define PTB17 KINETIS_MUX('B',17,1) /* PTB17 */
#define FTM0_CH5_PTB17 KINETIS_MUX('B',17,2) /* PTB17 */
#define LPSPI1_PCS3_PTB17 KINETIS_MUX('B',17,3) /* PTB17 */
#define FTM5_FLT1_PTB17 KINETIS_MUX('B',17,4) /* PTB17 */
#define ADC0_SE8_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define PTC0 KINETIS_MUX('C',0,1) /* PTC0 */
#define FTM0_CH0_PTC0 KINETIS_MUX('C',0,2) /* PTC0 */
#define LPSPI2_SIN_PTC0 KINETIS_MUX('C',0,3) /* PTC0 */
#define MII_RMII_RXD1_PTC0 KINETIS_MUX('C',0,4) /* PTC0 */
#define MII_RMII_RXD0_PTC0 KINETIS_MUX('C',0,5) /* PTC0 */
#define FTM1_CH6_PTC0 KINETIS_MUX('C',0,6) /* PTC0 */
#define ADC0_SE9_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define FTM0_CH1_PTC1 KINETIS_MUX('C',1,2) /* PTC1 */
#define LPSPI2_SOUT_PTC1 KINETIS_MUX('C',1,3) /* PTC1 */
#define MII_RMII_RXD1_PTC1 KINETIS_MUX('C',1,4) /* PTC1 */
#define MII_RMII_RXD0_PTC1 KINETIS_MUX('C',1,5) /* PTC1 */
#define FTM1_CH7_PTC1 KINETIS_MUX('C',1,6) /* PTC1 */
#define ADC0_SE10_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define CMP0_IN5_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define PTC2 KINETIS_MUX('C',2,1) /* PTC2 */
#define FTM0_CH2_PTC2 KINETIS_MUX('C',2,2) /* PTC2 */
#define CAN0_RX_PTC2 KINETIS_MUX('C',2,3) /* PTC2 */
#define LPUART0_RX_PTC2 KINETIS_MUX('C',2,4) /* PTC2 */
#define MII_RMII_TXD0_PTC2 KINETIS_MUX('C',2,5) /* PTC2 */
#define ETM_TRACE_CLKOUT_PTC2 KINETIS_MUX('C',2,6) /* PTC2 */
#define CMP0_IN4_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define ADC0_SE11_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define FTM0_CH3_PTC3 KINETIS_MUX('C',3,2) /* PTC3 */
#define CAN0_TX_PTC3 KINETIS_MUX('C',3,3) /* PTC3 */
#define LPUART0_TX_PTC3 KINETIS_MUX('C',3,4) /* PTC3 */
#define MII_TX_ER_PTC3 KINETIS_MUX('C',3,5) /* PTC3 */
#define CMP0_IN2_PTC4 KINETIS_MUX('C',4,0) /* PTC4 */
#define PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define FTM1_CH0_PTC4 KINETIS_MUX('C',4,2) /* PTC4 */
#define RTC_CLKOUT_PTC4 KINETIS_MUX('C',4,3) /* PTC4 */
#define EWM_IN_PTC4 KINETIS_MUX('C',4,5) /* PTC4 */
#define FTM1_QD_PHB_PTC4 KINETIS_MUX('C',4,6) /* PTC4 */
#define JTAG_TCLK_PTC4 KINETIS_MUX('C',4,7) /* PTC4 */
#define SWD_CLK_PTC4 KINETIS_MUX('C',4,7) /* PTC4 */
#define PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define FTM2_CH0_PTC5 KINETIS_MUX('C',5,2) /* PTC5 */
#define RTC_CLKOUT_PTC5 KINETIS_MUX('C',5,3) /* PTC5 */
#define LPI2C1_HREQ_PTC5 KINETIS_MUX('C',5,4) /* PTC5 */
#define FTM2_QD_PHB_PTC5 KINETIS_MUX('C',5,6) /* PTC5 */
#define JTAG_TDI_PTC5 KINETIS_MUX('C',5,7) /* PTC5 */
#define ADC1_SE4_PTC6 KINETIS_MUX('C',6,0) /* PTC6 */
#define PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define LPUART1_RX_PTC6 KINETIS_MUX('C',6,2) /* PTC6 */
#define CAN1_RX_PTC6 KINETIS_MUX('C',6,3) /* PTC6 */
#define FTM3_CH2_PTC6 KINETIS_MUX('C',6,4) /* PTC6 */
#define FTM1_QD_PHB_PTC6 KINETIS_MUX('C',6,6) /* PTC6 */
#define ADC1_SE5_PTC7 KINETIS_MUX('C',7,0) /* PTC7 */
#define PTC7 KINETIS_MUX('C',7,1) /* PTC7 */
#define LPUART1_TX_PTC7 KINETIS_MUX('C',7,2) /* PTC7 */
#define CAN1_TX_PTC7 KINETIS_MUX('C',7,3) /* PTC7 */
#define FTM3_CH3_PTC7 KINETIS_MUX('C',7,4) /* PTC7 */
#define FTM1_QD_PHA_PTC7 KINETIS_MUX('C',7,6) /* PTC7 */
#define PTC8 KINETIS_MUX('C',8,1) /* PTC8 */
#define LPUART1_RX_PTC8 KINETIS_MUX('C',8,2) /* PTC8 */
#define FTM1_FLT0_PTC8 KINETIS_MUX('C',8,3) /* PTC8 */
#define FTM5_CH1_PTC8 KINETIS_MUX('C',8,4) /* PTC8 */
#define LPUART0_CTS_PTC8 KINETIS_MUX('C',8,6) /* PTC8 */
#define PTC9 KINETIS_MUX('C',9,1) /* PTC9 */
#define LPUART1_TX_PTC9 KINETIS_MUX('C',9,2) /* PTC9 */
#define FTM1_FLT1_PTC9 KINETIS_MUX('C',9,3) /* PTC9 */
#define FTM5_CH0_PTC9 KINETIS_MUX('C',9,4) /* PTC9 */
#define LPUART0_RTS_PTC9 KINETIS_MUX('C',9,6) /* PTC9 */
#define PTC10 KINETIS_MUX('C',10,1) /* PTC10 */
#define FTM3_CH4_PTC10 KINETIS_MUX('C',10,2) /* PTC10 */
#define TRGMUX_IN11_PTC10 KINETIS_MUX('C',10,6) /* PTC10 */
#define PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define FTM3_CH5_PTC11 KINETIS_MUX('C',11,2) /* PTC11 */
#define FTM4_CH2_PTC11 KINETIS_MUX('C',11,3) /* PTC11 */
#define TRGMUX_IN10_PTC11 KINETIS_MUX('C',11,6) /* PTC11 */
#define PTC12 KINETIS_MUX('C',12,1) /* PTC12 */
#define FTM3_CH6_PTC12 KINETIS_MUX('C',12,2) /* PTC12 */
#define FTM2_CH6_PTC12 KINETIS_MUX('C',12,3) /* PTC12 */
#define LPUART2_CTS_PTC12 KINETIS_MUX('C',12,4) /* PTC12 */
#define PTC13 KINETIS_MUX('C',13,1) /* PTC13 */
#define FTM3_CH7_PTC13 KINETIS_MUX('C',13,2) /* PTC13 */
#define FTM2_CH7_PTC13 KINETIS_MUX('C',13,3) /* PTC13 */
#define LPUART2_RTS_PTC13 KINETIS_MUX('C',13,4) /* PTC13 */
#define ADC0_SE12_PTC14 KINETIS_MUX('C',14,0) /* PTC14 */
#define PTC14 KINETIS_MUX('C',14,1) /* PTC14 */
#define FTM1_CH2_PTC14 KINETIS_MUX('C',14,2) /* PTC14 */
#define LPSPI2_PCS0_PTC14 KINETIS_MUX('C',14,3) /* PTC14 */
#define MII_COL_PTC14 KINETIS_MUX('C',14,4) /* PTC14 */
#define TRGMUX_IN9_PTC14 KINETIS_MUX('C',14,6) /* PTC14 */
#define ADC0_SE13_PTC15 KINETIS_MUX('C',15,0) /* PTC15 */
#define PTC15 KINETIS_MUX('C',15,1) /* PTC15 */
#define FTM1_CH3_PTC15 KINETIS_MUX('C',15,2) /* PTC15 */
#define LPSPI2_SCK_PTC15 KINETIS_MUX('C',15,3) /* PTC15 */
#define MII_CRS_PTC15 KINETIS_MUX('C',15,4) /* PTC15 */
#define TRGMUX_IN8_PTC15 KINETIS_MUX('C',15,6) /* PTC15 */
#define ADC0_SE14_PTC16 KINETIS_MUX('C',16,0) /* PTC16 */
#define PTC16 KINETIS_MUX('C',16,1) /* PTC16 */
#define FTM1_FLT2_PTC16 KINETIS_MUX('C',16,2) /* PTC16 */
#define CAN2_RX_PTC16 KINETIS_MUX('C',16,3) /* PTC16 */
#define LPI2C1_SDAS_PTC16 KINETIS_MUX('C',16,4) /* PTC16 */
#define MII_RMII_RX_ER_PTC16 KINETIS_MUX('C',16,5) /* PTC16 */
#define ADC0_SE15_PTC17 KINETIS_MUX('C',17,0) /* PTC17 */
#define PTC17 KINETIS_MUX('C',17,1) /* PTC17 */
#define FTM1_FLT3_PTC17 KINETIS_MUX('C',17,2) /* PTC17 */
#define CAN2_TX_PTC17 KINETIS_MUX('C',17,3) /* PTC17 */
#define LPI2C1_SCLS_PTC17 KINETIS_MUX('C',17,4) /* PTC17 */
#define MII_RMII_RX_DV_PTC17 KINETIS_MUX('C',17,5) /* PTC17 */
#define PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define FTM0_CH2_PTD0 KINETIS_MUX('D',0,2) /* PTD0 */
#define LPSPI1_SCK_PTD0 KINETIS_MUX('D',0,3) /* PTD0 */
#define FTM2_CH0_PTD0 KINETIS_MUX('D',0,4) /* PTD0 */
#define ETM_TRACE_D0_PTD0 KINETIS_MUX('D',0,5) /* PTD0 */
#define FXIO_D0_PTD0 KINETIS_MUX('D',0,6) /* PTD0 */
#define TRGMUX_OUT1_PTD0 KINETIS_MUX('D',0,7) /* PTD0 */
#define PTD1 KINETIS_MUX('D',1,1) /* PTD1 */
#define FTM0_CH3_PTD1 KINETIS_MUX('D',1,2) /* PTD1 */
#define LPSPI1_SIN_PTD1 KINETIS_MUX('D',1,3) /* PTD1 */
#define FTM2_CH1_PTD1 KINETIS_MUX('D',1,4) /* PTD1 */
#define SAI0_MCLK_PTD1 KINETIS_MUX('D',1,5) /* PTD1 */
#define FXIO_D1_PTD1 KINETIS_MUX('D',1,6) /* PTD1 */
#define TRGMUX_OUT2_PTD1 KINETIS_MUX('D',1,7) /* PTD1 */
#define ADC1_SE2_PTD2 KINETIS_MUX('D',2,0) /* PTD2 */
#define PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define FTM3_CH4_PTD2 KINETIS_MUX('D',2,2) /* PTD2 */
#define LPSPI1_SOUT_PTD2 KINETIS_MUX('D',2,3) /* PTD2 */
#define FXIO_D4_PTD2 KINETIS_MUX('D',2,4) /* PTD2 */
#define FXIO_D6_PTD2 KINETIS_MUX('D',2,5) /* PTD2 */
#define TRGMUX_IN5_PTD2 KINETIS_MUX('D',2,6) /* PTD2 */
#define ADC1_SE3_PTD3 KINETIS_MUX('D',3,0) /* PTD3 */
#define PTD3 KINETIS_MUX('D',3,1) /* PTD3 */
#define FTM3_CH5_PTD3 KINETIS_MUX('D',3,2) /* PTD3 */
#define LPSPI1_PCS0_PTD3 KINETIS_MUX('D',3,3) /* PTD3 */
#define FXIO_D5_PTD3 KINETIS_MUX('D',3,4) /* PTD3 */
#define FXIO_D7_PTD3 KINETIS_MUX('D',3,5) /* PTD3 */
#define TRGMUX_IN4_PTD3 KINETIS_MUX('D',3,6) /* PTD3 */
#define NMI_b_PTD3 KINETIS_MUX('D',3,7) /* PTD3 */
#define ADC1_SE6_PTD4 KINETIS_MUX('D',4,0) /* PTD4 */
#define PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define FTM0_FLT3_PTD4 KINETIS_MUX('D',4,2) /* PTD4 */
#define FTM3_FLT3_PTD4 KINETIS_MUX('D',4,3) /* PTD4 */
#define PTD5 KINETIS_MUX('D',5,1) /* PTD5 */
#define FTM2_CH3_PTD5 KINETIS_MUX('D',5,2) /* PTD5 */
#define LPTMR0_ALT2_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define FTM2_FLT1_PTD5 KINETIS_MUX('D',5,4) /* PTD5 */
#define MII_TXD3_PTD5 KINETIS_MUX('D',5,5) /* PTD5 */
#define TRGMUX_IN7_PTD5 KINETIS_MUX('D',5,6) /* PTD5 */
#define CMP0_IN7_PTD6 KINETIS_MUX('D',6,0) /* PTD6 */
#define PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define LPUART2_RX_PTD6 KINETIS_MUX('D',6,2) /* PTD6 */
#define FTM2_FLT2_PTD6 KINETIS_MUX('D',6,4) /* PTD6 */
#define MII_TXD2_PTD6 KINETIS_MUX('D',6,5) /* PTD6 */
#define CMP0_IN6_PTD7 KINETIS_MUX('D',7,0) /* PTD7 */
#define PTD7 KINETIS_MUX('D',7,1) /* PTD7 */
#define LPUART2_TX_PTD7 KINETIS_MUX('D',7,2) /* PTD7 */
#define FTM2_FLT3_PTD7 KINETIS_MUX('D',7,4) /* PTD7 */
#define MII_RMII_TXD1_PTD7 KINETIS_MUX('D',7,5) /* PTD7 */
#define ETM_TRACE_D0_PTD7 KINETIS_MUX('D',7,6) /* PTD7 */
#define PTD8 KINETIS_MUX('D',8,1) /* PTD8 */
#define LPI2C1_SDA_PTD8 KINETIS_MUX('D',8,2) /* PTD8 */
#define MII_RXD3_PTD8 KINETIS_MUX('D',8,3) /* PTD8 */
#define FTM2_FLT2_PTD8 KINETIS_MUX('D',8,4) /* PTD8 */
#define FXIO_D1_PTD8 KINETIS_MUX('D',8,5) /* PTD8 */
#define FTM1_CH4_PTD8 KINETIS_MUX('D',8,6) /* PTD8 */
#define PTD9 KINETIS_MUX('D',9,1) /* PTD9 */
#define LPI2C1_SCL_PTD9 KINETIS_MUX('D',9,2) /* PTD9 */
#define FXIO_D0_PTD9 KINETIS_MUX('D',9,3) /* PTD9 */
#define FTM2_FLT3_PTD9 KINETIS_MUX('D',9,4) /* PTD9 */
#define MII_RXD2_PTD9 KINETIS_MUX('D',9,5) /* PTD9 */
#define FTM1_CH5_PTD9 KINETIS_MUX('D',9,6) /* PTD9 */
#define PTD10 KINETIS_MUX('D',10,1) /* PTD10 */
#define FTM2_CH0_PTD10 KINETIS_MUX('D',10,2) /* PTD10 */
#define FTM2_QD_PHB_PTD10 KINETIS_MUX('D',10,3) /* PTD10 */
#define ETM_TRACE_D3_PTD10 KINETIS_MUX('D',10,4) /* PTD10 */
#define MII_RX_CLK_PTD10 KINETIS_MUX('D',10,5) /* PTD10 */
#define CLKOUT_PTD10 KINETIS_MUX('D',10,6) /* PTD10 */
#define PTD11 KINETIS_MUX('D',11,1) /* PTD11 */
#define FTM2_CH1_PTD11 KINETIS_MUX('D',11,2) /* PTD11 */
#define FTM2_QD_PHA_PTD11 KINETIS_MUX('D',11,3) /* PTD11 */
#define ETM_TRACE_D2_PTD11 KINETIS_MUX('D',11,4) /* PTD11 */
#define MII_RMII_TX_CLK_PTD11 KINETIS_MUX('D',11,5) /* PTD11 */
#define LPUART2_CTS_PTD11 KINETIS_MUX('D',11,6) /* PTD11 */
#define PTD12 KINETIS_MUX('D',12,1) /* PTD12 */
#define FTM2_CH2_PTD12 KINETIS_MUX('D',12,2) /* PTD12 */
#define LPI2C1_HREQ_PTD12 KINETIS_MUX('D',12,3) /* PTD12 */
#define ETM_TRACE_D1_PTD12 KINETIS_MUX('D',12,4) /* PTD12 */
#define MII_RMII_TX_EN_PTD12 KINETIS_MUX('D',12,5) /* PTD12 */
#define LPUART2_RTS_PTD12 KINETIS_MUX('D',12,6) /* PTD12 */
#define PTD13 KINETIS_MUX('D',13,1) /* PTD13 */
#define FTM2_CH4_PTD13 KINETIS_MUX('D',13,2) /* PTD13 */
#define LPUART1_RX_PTD13 KINETIS_MUX('D',13,3) /* PTD13 */
#define ENET_TMR1_PTD13 KINETIS_MUX('D',13,5) /* PTD13 */
#define RTC_CLKOUT_PTD13 KINETIS_MUX('D',13,7) /* PTD13 */
#define PTD14 KINETIS_MUX('D',14,1) /* PTD14 */
#define FTM2_CH5_PTD14 KINETIS_MUX('D',14,2) /* PTD14 */
#define LPUART1_TX_PTD14 KINETIS_MUX('D',14,3) /* PTD14 */
#define ENET_TMR0_PTD14 KINETIS_MUX('D',14,5) /* PTD14 */
#define CLKOUT_PTD14 KINETIS_MUX('D',14,7) /* PTD14 */
#define PTD15 KINETIS_MUX('D',15,1) /* PTD15 */
#define FTM0_CH0_PTD15 KINETIS_MUX('D',15,2) /* PTD15 */
#define ETM_TRACE_D3_PTD15 KINETIS_MUX('D',15,3) /* PTD15 */
#define LPSPI0_SCK_PTD15 KINETIS_MUX('D',15,4) /* PTD15 */
#define ENET_TMR2_PTD15 KINETIS_MUX('D',15,5) /* PTD15 */
#define PTD16 KINETIS_MUX('D',16,1) /* PTD16 */
#define FTM0_CH1_PTD16 KINETIS_MUX('D',16,2) /* PTD16 */
#define ETM_TRACE_D2_PTD16 KINETIS_MUX('D',16,3) /* PTD16 */
#define LPSPI0_SIN_PTD16 KINETIS_MUX('D',16,4) /* PTD16 */
#define CMP0_RRT_PTD16 KINETIS_MUX('D',16,5) /* PTD16 */
#define ETM_TRACE_CLKOUT_PTD16 KINETIS_MUX('D',16,6) /* PTD16 */
#define PTD17 KINETIS_MUX('D',17,1) /* PTD17 */
#define FTM0_FLT2_PTD17 KINETIS_MUX('D',17,2) /* PTD17 */
#define LPUART2_RX_PTD17 KINETIS_MUX('D',17,3) /* PTD17 */
#define FTM5_FLT1_PTD17 KINETIS_MUX('D',17,4) /* PTD17 */
#define PTE0 KINETIS_MUX('E',0,1) /* PTE0 */
#define LPSPI0_SCK_PTE0 KINETIS_MUX('E',0,2) /* PTE0 */
#define TCLK1_PTE0 KINETIS_MUX('E',0,3) /* PTE0 */
#define LPI2C1_SDA_PTE0 KINETIS_MUX('E',0,4) /* PTE0 */
#define LPSPI1_SOUT_PTE0 KINETIS_MUX('E',0,5) /* PTE0 */
#define FTM1_FLT2_PTE0 KINETIS_MUX('E',0,6) /* PTE0 */
#define SAI0_D2_PTE0 KINETIS_MUX('E',0,7) /* PTE0 */
#define PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define LPSPI0_SIN_PTE1 KINETIS_MUX('E',1,2) /* PTE1 */
#define LPI2C0_HREQ_PTE1 KINETIS_MUX('E',1,3) /* PTE1 */
#define LPI2C1_SCL_PTE1 KINETIS_MUX('E',1,4) /* PTE1 */
#define LPSPI1_PCS0_PTE1 KINETIS_MUX('E',1,5) /* PTE1 */
#define FTM1_FLT1_PTE1 KINETIS_MUX('E',1,6) /* PTE1 */
#define SAI0_D1_PTE1 KINETIS_MUX('E',1,7) /* PTE1 */
#define ADC1_SE10_PTE2 KINETIS_MUX('E',2,0) /* PTE2 */
#define PTE2 KINETIS_MUX('E',2,1) /* PTE2 */
#define LPSPI0_SOUT_PTE2 KINETIS_MUX('E',2,2) /* PTE2 */
#define LPTMR0_ALT3_PTE2 KINETIS_MUX('E',2,3) /* PTE2 */
#define FTM3_CH6_PTE2 KINETIS_MUX('E',2,4) /* PTE2 */
#define LPUART1_CTS_PTE2 KINETIS_MUX('E',2,6) /* PTE2 */
#define SAI1_SYNC_PTE2 KINETIS_MUX('E',2,7) /* PTE2 */
#define PTE3 KINETIS_MUX('E',3,1) /* PTE3 */
#define FTM0_FLT0_PTE3 KINETIS_MUX('E',3,2) /* PTE3 */
#define LPUART2_RTS_PTE3 KINETIS_MUX('E',3,3) /* PTE3 */
#define FTM2_FLT0_PTE3 KINETIS_MUX('E',3,4) /* PTE3 */
#define TRGMUX_IN6_PTE3 KINETIS_MUX('E',3,6) /* PTE3 */
#define CMP0_OUT_PTE3 KINETIS_MUX('E',3,7) /* PTE3 */
#define PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define ETM_TRACE_D1_PTE4 KINETIS_MUX('E',4,2) /* PTE4 */
#define FTM2_QD_PHB_PTE4 KINETIS_MUX('E',4,3) /* PTE4 */
#define FTM2_CH2_PTE4 KINETIS_MUX('E',4,4) /* PTE4 */
#define CAN0_RX_PTE4 KINETIS_MUX('E',4,5) /* PTE4 */
#define FXIO_D6_PTE4 KINETIS_MUX('E',4,6) /* PTE4 */
#define EWM_OUT_b_PTE4 KINETIS_MUX('E',4,7) /* PTE4 */
#define PTE5 KINETIS_MUX('E',5,1) /* PTE5 */
#define TCLK2_PTE5 KINETIS_MUX('E',5,2) /* PTE5 */
#define FTM2_QD_PHA_PTE5 KINETIS_MUX('E',5,3) /* PTE5 */
#define FTM2_CH3_PTE5 KINETIS_MUX('E',5,4) /* PTE5 */
#define CAN0_TX_PTE5 KINETIS_MUX('E',5,5) /* PTE5 */
#define FXIO_D7_PTE5 KINETIS_MUX('E',5,6) /* PTE5 */
#define EWM_IN_PTE5 KINETIS_MUX('E',5,7) /* PTE5 */
#define ADC1_SE11_PTE6 KINETIS_MUX('E',6,0) /* PTE6 */
#define PTE6 KINETIS_MUX('E',6,1) /* PTE6 */
#define LPSPI0_PCS2_PTE6 KINETIS_MUX('E',6,2) /* PTE6 */
#define FTM7_FLT1_PTE6 KINETIS_MUX('E',6,3) /* PTE6 */
#define FTM3_CH7_PTE6 KINETIS_MUX('E',6,4) /* PTE6 */
#define LPUART1_RTS_PTE6 KINETIS_MUX('E',6,6) /* PTE6 */
#define PTE7 KINETIS_MUX('E',7,1) /* PTE7 */
#define FTM0_CH7_PTE7 KINETIS_MUX('E',7,2) /* PTE7 */
#define FTM3_FLT0_PTE7 KINETIS_MUX('E',7,3) /* PTE7 */
#define CMP0_IN3_PTE8 KINETIS_MUX('E',8,0) /* PTE8 */
#define PTE8 KINETIS_MUX('E',8,1) /* PTE8 */
#define FTM0_CH6_PTE8 KINETIS_MUX('E',8,2) /* PTE8 */
#define MII_RMII_MDC_PTE8 KINETIS_MUX('E',8,5) /* PTE8 */
#define PTE9 KINETIS_MUX('E',9,1) /* PTE9 */
#define FTM0_CH7_PTE9 KINETIS_MUX('E',9,2) /* PTE9 */
#define LPUART2_CTS_PTE9 KINETIS_MUX('E',9,3) /* PTE9 */
#define ENET_TMR3_PTE9 KINETIS_MUX('E',9,5) /* PTE9 */
#define PTE10 KINETIS_MUX('E',10,1) /* PTE10 */
#define CLKOUT_PTE10 KINETIS_MUX('E',10,2) /* PTE10 */
#define LPSPI2_PCS1_PTE10 KINETIS_MUX('E',10,3) /* PTE10 */
#define FTM2_CH4_PTE10 KINETIS_MUX('E',10,4) /* PTE10 */
#define FXIO_D4_PTE10 KINETIS_MUX('E',10,6) /* PTE10 */
#define TRGMUX_OUT4_PTE10 KINETIS_MUX('E',10,7) /* PTE10 */
#define PTE11 KINETIS_MUX('E',11,1) /* PTE11 */
#define LPSPI2_PCS0_PTE11 KINETIS_MUX('E',11,2) /* PTE11 */
#define LPTMR0_ALT1_PTE11 KINETIS_MUX('E',11,3) /* PTE11 */
#define FTM2_CH5_PTE11 KINETIS_MUX('E',11,4) /* PTE11 */
#define FXIO_D5_PTE11 KINETIS_MUX('E',11,6) /* PTE11 */
#define TRGMUX_OUT5_PTE11 KINETIS_MUX('E',11,7) /* PTE11 */
#define PTE12 KINETIS_MUX('E',12,1) /* PTE12 */
#define FTM0_FLT3_PTE12 KINETIS_MUX('E',12,2) /* PTE12 */
#define LPUART2_TX_PTE12 KINETIS_MUX('E',12,3) /* PTE12 */
#define FTM5_FLT0_PTE12 KINETIS_MUX('E',12,4) /* PTE12 */
#define PTE13 KINETIS_MUX('E',13,1) /* PTE13 */
#define FTM4_CH5_PTE13 KINETIS_MUX('E',13,2) /* PTE13 */
#define LPSPI2_PCS2_PTE13 KINETIS_MUX('E',13,3) /* PTE13 */
#define FTM2_FLT0_PTE13 KINETIS_MUX('E',13,4) /* PTE13 */
#define PTE14 KINETIS_MUX('E',14,1) /* PTE14 */
#define FTM0_FLT1_PTE14 KINETIS_MUX('E',14,2) /* PTE14 */
#define FTM2_FLT1_PTE14 KINETIS_MUX('E',14,4) /* PTE14 */
#define PTE15 KINETIS_MUX('E',15,1) /* PTE15 */
#define LPUART1_CTS_PTE15 KINETIS_MUX('E',15,2) /* PTE15 */
#define LPSPI2_SCK_PTE15 KINETIS_MUX('E',15,3) /* PTE15 */
#define FTM2_CH6_PTE15 KINETIS_MUX('E',15,4) /* PTE15 */
#define FTM4_FLT1_PTE15 KINETIS_MUX('E',15,5) /* PTE15 */
#define FXIO_D2_PTE15 KINETIS_MUX('E',15,6) /* PTE15 */
#define TRGMUX_OUT6_PTE15 KINETIS_MUX('E',15,7) /* PTE15 */
#define PTE16 KINETIS_MUX('E',16,1) /* PTE16 */
#define LPUART1_RTS_PTE16 KINETIS_MUX('E',16,2) /* PTE16 */
#define LPSPI2_SIN_PTE16 KINETIS_MUX('E',16,3) /* PTE16 */
#define FTM2_CH7_PTE16 KINETIS_MUX('E',16,4) /* PTE16 */
#define FTM4_FLT0_PTE16 KINETIS_MUX('E',16,5) /* PTE16 */
#define FXIO_D3_PTE16 KINETIS_MUX('E',16,6) /* PTE16 */
#define TRGMUX_OUT7_PTE16 KINETIS_MUX('E',16,7) /* PTE16 */
#endif
