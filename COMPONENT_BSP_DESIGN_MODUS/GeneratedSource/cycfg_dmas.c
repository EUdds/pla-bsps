/*******************************************************************************
* File Name: cycfg_dmas.c
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

#include "cycfg_dmas.h"

const cy_stc_dma_descriptor_config_t fram_rx_dma_Descriptor_0_config = 
{
    .retrigger = CY_DMA_RETRIG_16CYC,
    .interruptType = CY_DMA_DESCR,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_ENABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_BYTE,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_DATA,
    .descriptorType = CY_DMA_2D_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 0,
    .dstXincrement = 1,
    .xCount = 256,
    .srcYincrement = 0,
    .dstYincrement = 256,
    .yCount = 8,
    .nextDescriptor = &fram_rx_dma_Descriptor_0,
};
cy_stc_dma_descriptor_t fram_rx_dma_Descriptor_0 = 
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t fram_rx_dma_channelConfig = 
{
    .descriptor = &fram_rx_dma_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t fram_rx_dma_obj = 
    {
        .type = CYHAL_RSC_DMA,
        .block_num = 0U,
        .channel_num = fram_rx_dma_CHANNEL,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_dma_descriptor_config_t fram_tx_dma_Descriptor_0_config = 
{
    .retrigger = CY_DMA_WAIT_FOR_REACT,
    .interruptType = CY_DMA_DESCR_CHAIN,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_DISABLED,
    .triggerInType = CY_DMA_DESCR,
    .dataSize = CY_DMA_BYTE,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_DATA,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_SINGLE_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 1,
    .dstXincrement = 0,
    .xCount = 1,
    .srcYincrement = 0,
    .dstYincrement = 0,
    .yCount = 128,
    .nextDescriptor = NULL,
};
cy_stc_dma_descriptor_t fram_tx_dma_Descriptor_0 = 
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t fram_tx_dma_channelConfig = 
{
    .descriptor = &fram_tx_dma_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t fram_tx_dma_obj = 
    {
        .type = CYHAL_RSC_DMA,
        .block_num = 0U,
        .channel_num = fram_tx_dma_CHANNEL,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_dma_descriptor_config_t logic_analyzer_dma_Descriptor_0_config = 
{
    .retrigger = CY_DMA_RETRIG_IM,
    .interruptType = CY_DMA_DESCR,
    .triggerOutType = CY_DMA_DESCR,
    .channelState = CY_DMA_CHANNEL_DISABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_BYTE,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_DATA,
    .descriptorType = CY_DMA_2D_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 0,
    .dstXincrement = 1,
    .xCount = 256,
    .srcYincrement = 0,
    .dstYincrement = 256,
    .yCount = 8,
    .nextDescriptor = &logic_analyzer_dma_Descriptor_0,
};
cy_stc_dma_descriptor_t logic_analyzer_dma_Descriptor_0 = 
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t logic_analyzer_dma_channelConfig = 
{
    .descriptor = &logic_analyzer_dma_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t logic_analyzer_dma_obj = 
    {
        .type = CYHAL_RSC_DMA,
        .block_num = 0U,
        .channel_num = logic_analyzer_dma_CHANNEL,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_dma_descriptor_config_t oscope_tx_dma_Descriptor_0_config = 
{
    .retrigger = CY_DMA_RETRIG_4CYC,
    .interruptType = CY_DMA_1ELEMENT,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_DISABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_HALFWORD,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_DATA,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .descriptorType = CY_DMA_2D_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 0,
    .dstXincrement = 0,
    .xCount = 256,
    .srcYincrement = 0,
    .dstYincrement = 0,
    .yCount = 8,
    .nextDescriptor = &oscope_tx_dma_Descriptor_0,
};
cy_stc_dma_descriptor_t oscope_tx_dma_Descriptor_0 = 
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t oscope_tx_dma_channelConfig = 
{
    .descriptor = &oscope_tx_dma_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t oscope_tx_dma_obj = 
    {
        .type = CYHAL_RSC_DMA,
        .block_num = 0U,
        .channel_num = oscope_tx_dma_CHANNEL,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_dma_descriptor_config_t oscope_rx_dma_Descriptor_0_config = 
{
    .retrigger = CY_DMA_RETRIG_4CYC,
    .interruptType = CY_DMA_DESCR,
    .triggerOutType = CY_DMA_1ELEMENT,
    .channelState = CY_DMA_CHANNEL_DISABLED,
    .triggerInType = CY_DMA_1ELEMENT,
    .dataSize = CY_DMA_BYTE,
    .srcTransferSize = CY_DMA_TRANSFER_SIZE_WORD,
    .dstTransferSize = CY_DMA_TRANSFER_SIZE_DATA,
    .descriptorType = CY_DMA_2D_TRANSFER,
    .srcAddress = NULL,
    .dstAddress = NULL,
    .srcXincrement = 0,
    .dstXincrement = 1,
    .xCount = 256,
    .srcYincrement = 0,
    .dstYincrement = 256,
    .yCount = 8,
    .nextDescriptor = &oscope_rx_dma_Descriptor_0,
};
cy_stc_dma_descriptor_t oscope_rx_dma_Descriptor_0 = 
{
    .ctl = 0UL,
    .src = 0UL,
    .dst = 0UL,
    .xCtl = 0UL,
    .yCtl = 0UL,
    .nextPtr = 0UL,
};
const cy_stc_dma_channel_config_t oscope_rx_dma_channelConfig = 
{
    .descriptor = &oscope_rx_dma_Descriptor_0,
    .preemptable = false,
    .priority = 3,
    .enable = false,
    .bufferable = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t oscope_rx_dma_obj = 
    {
        .type = CYHAL_RSC_DMA,
        .block_num = 0U,
        .channel_num = oscope_rx_dma_CHANNEL,
    };
#endif //defined (CY_USING_HAL)


void reserve_cycfg_dmas(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&fram_rx_dma_obj);
    cyhal_hwmgr_reserve(&fram_tx_dma_obj);
    cyhal_hwmgr_reserve(&logic_analyzer_dma_obj);
    cyhal_hwmgr_reserve(&oscope_tx_dma_obj);
    cyhal_hwmgr_reserve(&oscope_rx_dma_obj);
#endif //defined (CY_USING_HAL)
}
