/*******************************************************************************
* File Name: cycfg_dmas.h
*
* Description:
* DMA configuration
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

#if !defined(CYCFG_DMAS_H)
#define CYCFG_DMAS_H

#include "cycfg_notices.h"
#include "cy_dma.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define fram_rx_dma_ENABLED 1U
#define fram_rx_dma_HW DW0
#define fram_rx_dma_CHANNEL 0U
#define fram_rx_dma_IRQ cpuss_interrupts_dw0_0_IRQn
#define fram_tx_dma_ENABLED 1U
#define fram_tx_dma_HW DW0
#define fram_tx_dma_CHANNEL 1U
#define fram_tx_dma_IRQ cpuss_interrupts_dw0_1_IRQn
#define logic_analyzer_dma_ENABLED 1U
#define logic_analyzer_dma_HW DW0
#define logic_analyzer_dma_CHANNEL 2U
#define logic_analyzer_dma_IRQ cpuss_interrupts_dw0_2_IRQn
#define oscope_tx_dma_ENABLED 1U
#define oscope_tx_dma_HW DW0
#define oscope_tx_dma_CHANNEL 3U
#define oscope_tx_dma_IRQ cpuss_interrupts_dw0_3_IRQn
#define oscope_rx_dma_ENABLED 1U
#define oscope_rx_dma_HW DW0
#define oscope_rx_dma_CHANNEL 4U
#define oscope_rx_dma_IRQ cpuss_interrupts_dw0_4_IRQn

extern const cy_stc_dma_descriptor_config_t fram_rx_dma_Descriptor_0_config;
extern cy_stc_dma_descriptor_t fram_rx_dma_Descriptor_0;
extern const cy_stc_dma_channel_config_t fram_rx_dma_channelConfig;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t fram_rx_dma_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_dma_descriptor_config_t fram_tx_dma_Descriptor_0_config;
extern cy_stc_dma_descriptor_t fram_tx_dma_Descriptor_0;
extern const cy_stc_dma_channel_config_t fram_tx_dma_channelConfig;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t fram_tx_dma_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_dma_descriptor_config_t logic_analyzer_dma_Descriptor_0_config;
extern cy_stc_dma_descriptor_t logic_analyzer_dma_Descriptor_0;
extern const cy_stc_dma_channel_config_t logic_analyzer_dma_channelConfig;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t logic_analyzer_dma_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_dma_descriptor_config_t oscope_tx_dma_Descriptor_0_config;
extern cy_stc_dma_descriptor_t oscope_tx_dma_Descriptor_0;
extern const cy_stc_dma_channel_config_t oscope_tx_dma_channelConfig;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t oscope_tx_dma_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_dma_descriptor_config_t oscope_rx_dma_Descriptor_0_config;
extern cy_stc_dma_descriptor_t oscope_rx_dma_Descriptor_0;
extern const cy_stc_dma_channel_config_t oscope_rx_dma_channelConfig;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t oscope_rx_dma_obj;
#endif //defined (CY_USING_HAL)

void reserve_cycfg_dmas(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_DMAS_H */
