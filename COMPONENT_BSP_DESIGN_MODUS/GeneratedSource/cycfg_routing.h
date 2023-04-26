/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* mtb-pdl-cat1 2.4.1.17937
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
void init_cycfg_routing(void);

#define ioss_0_port_0_pin_0_ANALOG P0_0_SRSS_WCO_IN
#define ioss_0_port_0_pin_1_ANALOG P0_1_SRSS_WCO_OUT
#define ioss_0_port_10_pin_0_HSIOM P10_0_SCB1_SPI_MOSI
#define ioss_0_port_10_pin_1_HSIOM P10_1_SCB1_SPI_MISO
#define ioss_0_port_10_pin_2_HSIOM P10_2_SCB1_SPI_CLK
#define ioss_0_port_10_pin_4_HSIOM P10_4_SCB1_SPI_SELECT1
#define ioss_0_port_10_pin_6_HSIOM P10_6_SCB1_SPI_SELECT3
#define ioss_0_port_6_pin_6_HSIOM P6_6_CPUSS_SWJ_SWDIO_TMS
#define ioss_0_port_6_pin_7_HSIOM P6_7_CPUSS_SWJ_SWCLK_TCLK
#define ioss_0_port_9_pin_0_HSIOM P9_0_SCB2_SPI_MOSI
#define ioss_0_port_9_pin_1_HSIOM P9_1_SCB2_SPI_MISO
#define ioss_0_port_9_pin_2_HSIOM P9_2_SCB2_SPI_CLK
#define ioss_0_port_9_pin_4_HSIOM P9_4_SCB2_SPI_SELECT1

#define ADC_POT_SPI_tr_rx_req_0_TRIGGER_IN_0 TRIG0_IN_TR_GROUP13_OUTPUT7
#define ADC_POT_SPI_tr_rx_req_0_TRIGGER_IN_1 TRIG13_IN_SCB1_TR_RX_REQ
#define ADC_POT_SPI_tr_tx_req_0_TRIGGER_IN_0 TRIG0_IN_TR_GROUP13_OUTPUT8
#define ADC_POT_SPI_tr_tx_req_0_TRIGGER_IN_1 TRIG13_IN_SCB1_TR_TX_REQ
#define CAPTURE_PWM_reload_0_TRIGGER_OUT TRIG3_OUT_TCPWM1_TR_IN9
#define CAPTURE_PWM_tr_overflow_0_TRIGGER_IN_0 TRIG0_IN_TR_GROUP11_OUTPUT9
#define CAPTURE_PWM_tr_overflow_0_TRIGGER_IN_1 TRIG11_IN_TCPWM1_TR_OVERFLOW0
#define CAPTURE_PWM_tr_overflow_0_TRIGGER_IN_2 TRIG3_IN_TR_GROUP11_OUTPUT8
#define fram_rx_dma_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DW0_TR_IN0
#define FRAM_SPI_tr_rx_req_0_TRIGGER_IN_0 TRIG0_IN_TR_GROUP13_OUTPUT9
#define FRAM_SPI_tr_rx_req_0_TRIGGER_IN_1 TRIG13_IN_SCB2_TR_RX_REQ
#define logic_analyzer_dma_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DW0_TR_IN2
#define oscope_rx_dma_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DW0_TR_IN4
#define oscope_tx_dma_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DW0_TR_IN3

#define TCPWM1_CNT0_RELOAD_VALUE 0xb

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */
