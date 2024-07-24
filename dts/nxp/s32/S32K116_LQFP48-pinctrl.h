/*
 * NOTE: Autogenerated file by kinetis_cfg_utils.py
 * for S32K116_LQFP48/signal_configuration.xml
 *
 * Copyright 2023, NXP
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ZEPHYR_DTS_BINDING_S32K116_LQFP48_
#define _ZEPHYR_DTS_BINDING_S32K116_LQFP48_

#define KINETIS_MUX(port, pin, mux)		\
	(((((port) - 'A') & 0xF) << 28) |	\
	(((pin) & 0x3F) << 22) |		\
	(((mux) & 0x7) << 8))

#define CMP0_IN0_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define ADC0_SE0_PTA0 KINETIS_MUX('A',0,0) /* PTA0 */
#define PTA0 KINETIS_MUX('A',0,1) /* PTA0 */
#define LPI2C0_SCLS_PTA0 KINETIS_MUX('A',0,3) /* PTA0 */
#define FXIO_D2_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
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
#define PTA2 KINETIS_MUX('A',2,1) /* PTA2 */
#define LPI2C0_SDA_PTA2 KINETIS_MUX('A',2,3) /* PTA2 */
#define FXIO_D4_PTA2 KINETIS_MUX('A',2,5) /* PTA2 */
#define LPUART0_RX_PTA2 KINETIS_MUX('A',2,6) /* PTA2 */
#define PTA3 KINETIS_MUX('A',3,1) /* PTA3 */
#define LPI2C0_SCL_PTA3 KINETIS_MUX('A',3,3) /* PTA3 */
#define FXIO_D5_PTA3 KINETIS_MUX('A',3,5) /* PTA3 */
#define LPUART0_TX_PTA3 KINETIS_MUX('A',3,6) /* PTA3 */
#define PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define CMP0_OUT_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define JTAG_TMS_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define SWD_DIO_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define PTA5 KINETIS_MUX('A',5,1) /* PTA5 */
#define TCLK1_PTA5 KINETIS_MUX('A',5,3) /* PTA5 */
#define RESET_b_PTA5 KINETIS_MUX('A',5,7) /* PTA5 */
#define ADC0_SE3_PTA7 KINETIS_MUX('A',7,0) /* PTA7 */
#define PTA7 KINETIS_MUX('A',7,1) /* PTA7 */
#define FTM0_FLT2_PTA7 KINETIS_MUX('A',7,2) /* PTA7 */
#define RTC_CLKIN_PTA7 KINETIS_MUX('A',7,4) /* PTA7 */
#define LPUART1_RTS_PTA7 KINETIS_MUX('A',7,6) /* PTA7 */
#define PTA10 KINETIS_MUX('A',10,1) /* PTA10 */
#define FTM1_CH4_PTA10 KINETIS_MUX('A',10,2) /* PTA10 */
#define FXIO_D0_PTA10 KINETIS_MUX('A',10,4) /* PTA10 */
#define JTAG_TDO_PTA10 KINETIS_MUX('A',10,7) /* PTA10 */
#define PTA11 KINETIS_MUX('A',11,1) /* PTA11 */
#define FTM1_CH5_PTA11 KINETIS_MUX('A',11,2) /* PTA11 */
#define FXIO_D1_PTA11 KINETIS_MUX('A',11,4) /* PTA11 */
#define CMP0_RRT_PTA11 KINETIS_MUX('A',11,5) /* PTA11 */
#define PTA12 KINETIS_MUX('A',12,1) /* PTA12 */
#define FTM1_CH6_PTA12 KINETIS_MUX('A',12,2) /* PTA12 */
#define PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define FTM1_CH7_PTA13 KINETIS_MUX('A',13,2) /* PTA13 */
#define ADC0_SE4_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define LPUART0_RX_PTB0 KINETIS_MUX('B',0,2) /* PTB0 */
#define LPSPI0_PCS0_PTB0 KINETIS_MUX('B',0,3) /* PTB0 */
#define LPTMR0_ALT3_PTB0 KINETIS_MUX('B',0,4) /* PTB0 */
#define CAN0_RX_PTB0 KINETIS_MUX('B',0,5) /* PTB0 */
#define ADC0_SE5_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define PTB1 KINETIS_MUX('B',1,1) /* PTB1 */
#define LPUART0_TX_PTB1 KINETIS_MUX('B',1,2) /* PTB1 */
#define LPSPI0_SOUT_PTB1 KINETIS_MUX('B',1,3) /* PTB1 */
#define TCLK0_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define CAN0_TX_PTB1 KINETIS_MUX('B',1,5) /* PTB1 */
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
#define TRGMUX_IN1_PTB4 KINETIS_MUX('B',4,6) /* PTB4 */
#define PTB5 KINETIS_MUX('B',5,1) /* PTB5 */
#define FTM0_CH5_PTB5 KINETIS_MUX('B',5,2) /* PTB5 */
#define LPSPI0_PCS1_PTB5 KINETIS_MUX('B',5,3) /* PTB5 */
#define LPSPI0_PCS0_PTB5 KINETIS_MUX('B',5,4) /* PTB5 */
#define CLKOUT_PTB5 KINETIS_MUX('B',5,5) /* PTB5 */
#define TRGMUX_IN0_PTB5 KINETIS_MUX('B',5,6) /* PTB5 */
#define XTAL_PTB6 KINETIS_MUX('B',6,0) /* PTB6 */
#define PTB6 KINETIS_MUX('B',6,1) /* PTB6 */
#define LPI2C0_SDA_PTB6 KINETIS_MUX('B',6,2) /* PTB6 */
#define EXTAL_PTB7 KINETIS_MUX('B',7,0) /* PTB7 */
#define PTB7 KINETIS_MUX('B',7,1) /* PTB7 */
#define LPI2C0_SCL_PTB7 KINETIS_MUX('B',7,2) /* PTB7 */
#define PTB13 KINETIS_MUX('B',13,1) /* PTB13 */
#define FTM0_CH1_PTB13 KINETIS_MUX('B',13,2) /* PTB13 */
#define ADC0_SE9_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define FTM0_CH1_PTC1 KINETIS_MUX('C',1,2) /* PTC1 */
#define FTM1_CH7_PTC1 KINETIS_MUX('C',1,6) /* PTC1 */
#define ADC0_SE10_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define CMP0_IN5_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define PTC2 KINETIS_MUX('C',2,1) /* PTC2 */
#define FTM0_CH2_PTC2 KINETIS_MUX('C',2,2) /* PTC2 */
#define CAN0_RX_PTC2 KINETIS_MUX('C',2,3) /* PTC2 */
#define LPUART0_RX_PTC2 KINETIS_MUX('C',2,4) /* PTC2 */
#define CMP0_IN4_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define ADC0_SE11_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define FTM0_CH3_PTC3 KINETIS_MUX('C',3,2) /* PTC3 */
#define CAN0_TX_PTC3 KINETIS_MUX('C',3,3) /* PTC3 */
#define LPUART0_TX_PTC3 KINETIS_MUX('C',3,4) /* PTC3 */
#define CMP0_IN2_PTC4 KINETIS_MUX('C',4,0) /* PTC4 */
#define PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define FTM1_CH0_PTC4 KINETIS_MUX('C',4,2) /* PTC4 */
#define RTC_CLKOUT_PTC4 KINETIS_MUX('C',4,3) /* PTC4 */
#define FTM1_QD_PHB_PTC4 KINETIS_MUX('C',4,6) /* PTC4 */
#define JTAG_TCLK_PTC4 KINETIS_MUX('C',4,7) /* PTC4 */
#define SWD_CLK_PTC4 KINETIS_MUX('C',4,7) /* PTC4 */
#define PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define RTC_CLKOUT_PTC5 KINETIS_MUX('C',5,3) /* PTC5 */
#define JTAG_TDI_PTC5 KINETIS_MUX('C',5,7) /* PTC5 */
#define PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define LPUART1_RX_PTC6 KINETIS_MUX('C',6,2) /* PTC6 */
#define FTM1_QD_PHB_PTC6 KINETIS_MUX('C',6,6) /* PTC6 */
#define PTC7 KINETIS_MUX('C',7,1) /* PTC7 */
#define LPUART1_TX_PTC7 KINETIS_MUX('C',7,2) /* PTC7 */
#define FTM1_QD_PHA_PTC7 KINETIS_MUX('C',7,6) /* PTC7 */
#define PTC8 KINETIS_MUX('C',8,1) /* PTC8 */
#define LPUART1_RX_PTC8 KINETIS_MUX('C',8,2) /* PTC8 */
#define FTM1_FLT0_PTC8 KINETIS_MUX('C',8,3) /* PTC8 */
#define LPUART0_CTS_PTC8 KINETIS_MUX('C',8,6) /* PTC8 */
#define PTC9 KINETIS_MUX('C',9,1) /* PTC9 */
#define LPUART1_TX_PTC9 KINETIS_MUX('C',9,2) /* PTC9 */
#define FTM1_FLT1_PTC9 KINETIS_MUX('C',9,3) /* PTC9 */
#define LPUART0_RTS_PTC9 KINETIS_MUX('C',9,6) /* PTC9 */
#define ADC0_SE12_PTC14 KINETIS_MUX('C',14,0) /* PTC14 */
#define PTC14 KINETIS_MUX('C',14,1) /* PTC14 */
#define FTM1_CH2_PTC14 KINETIS_MUX('C',14,2) /* PTC14 */
#define TRGMUX_IN9_PTC14 KINETIS_MUX('C',14,6) /* PTC14 */
#define ADC0_SE13_PTC15 KINETIS_MUX('C',15,0) /* PTC15 */
#define PTC15 KINETIS_MUX('C',15,1) /* PTC15 */
#define FTM1_CH3_PTC15 KINETIS_MUX('C',15,2) /* PTC15 */
#define TRGMUX_IN8_PTC15 KINETIS_MUX('C',15,6) /* PTC15 */
#define ADC0_SE14_PTC16 KINETIS_MUX('C',16,0) /* PTC16 */
#define PTC16 KINETIS_MUX('C',16,1) /* PTC16 */
#define FTM1_FLT2_PTC16 KINETIS_MUX('C',16,2) /* PTC16 */
#define PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define FTM0_CH2_PTD0 KINETIS_MUX('D',0,2) /* PTD0 */
#define FXIO_D0_PTD0 KINETIS_MUX('D',0,6) /* PTD0 */
#define TRGMUX_OUT1_PTD0 KINETIS_MUX('D',0,7) /* PTD0 */
#define PTD1 KINETIS_MUX('D',1,1) /* PTD1 */
#define FTM0_CH3_PTD1 KINETIS_MUX('D',1,2) /* PTD1 */
#define FXIO_D1_PTD1 KINETIS_MUX('D',1,6) /* PTD1 */
#define TRGMUX_OUT2_PTD1 KINETIS_MUX('D',1,7) /* PTD1 */
#define PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define FXIO_D4_PTD2 KINETIS_MUX('D',2,4) /* PTD2 */
#define FXIO_D6_PTD2 KINETIS_MUX('D',2,5) /* PTD2 */
#define TRGMUX_IN5_PTD2 KINETIS_MUX('D',2,6) /* PTD2 */
#define PTD3 KINETIS_MUX('D',3,1) /* PTD3 */
#define FXIO_D5_PTD3 KINETIS_MUX('D',3,4) /* PTD3 */
#define FXIO_D7_PTD3 KINETIS_MUX('D',3,5) /* PTD3 */
#define TRGMUX_IN4_PTD3 KINETIS_MUX('D',3,6) /* PTD3 */
#define NMI_b_PTD3 KINETIS_MUX('D',3,7) /* PTD3 */
#define PTD5 KINETIS_MUX('D',5,1) /* PTD5 */
#define LPTMR0_ALT2_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define TRGMUX_IN7_PTD5 KINETIS_MUX('D',5,6) /* PTD5 */
#define PTD15 KINETIS_MUX('D',15,1) /* PTD15 */
#define FTM0_CH0_PTD15 KINETIS_MUX('D',15,2) /* PTD15 */
#define LPSPI0_SCK_PTD15 KINETIS_MUX('D',15,4) /* PTD15 */
#define PTD16 KINETIS_MUX('D',16,1) /* PTD16 */
#define FTM0_CH1_PTD16 KINETIS_MUX('D',16,2) /* PTD16 */
#define LPSPI0_SIN_PTD16 KINETIS_MUX('D',16,4) /* PTD16 */
#define CMP0_RRT_PTD16 KINETIS_MUX('D',16,5) /* PTD16 */
#define PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define CAN0_RX_PTE4 KINETIS_MUX('E',4,5) /* PTE4 */
#define FXIO_D6_PTE4 KINETIS_MUX('E',4,6) /* PTE4 */
#define PTE5 KINETIS_MUX('E',5,1) /* PTE5 */
#define TCLK2_PTE5 KINETIS_MUX('E',5,2) /* PTE5 */
#define CAN0_TX_PTE5 KINETIS_MUX('E',5,5) /* PTE5 */
#define FXIO_D7_PTE5 KINETIS_MUX('E',5,6) /* PTE5 */
#define CMP0_IN3_PTE8 KINETIS_MUX('E',8,0) /* PTE8 */
#define PTE8 KINETIS_MUX('E',8,1) /* PTE8 */
#define FTM0_CH6_PTE8 KINETIS_MUX('E',8,2) /* PTE8 */
#define PTE9 KINETIS_MUX('E',9,1) /* PTE9 */
#define FTM0_CH7_PTE9 KINETIS_MUX('E',9,2) /* PTE9 */
#endif
