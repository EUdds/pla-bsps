/*******************************************************************************
* File Name: cycfg_clocks.c
*
* Description:
* Clock configuration
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

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t FRAM_SPI_CLK_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = FRAM_SPI_CLK_HW,
        .channel_num = FRAM_SPI_CLK_NUM,
    };
    const cyhal_resource_inst_t ADC_POT_SPI_CLK_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = ADC_POT_SPI_CLK_HW,
        .channel_num = ADC_POT_SPI_CLK_NUM,
    };
    const cyhal_resource_inst_t LOGIC_ANALYZER_CLK_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = LOGIC_ANALYZER_CLK_HW,
        .channel_num = LOGIC_ANALYZER_CLK_NUM,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_clocks(void)
{
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 0U, 0U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 1U, 0U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 2U, 49U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 2U);
}

void reserve_cycfg_clocks(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&FRAM_SPI_CLK_obj);
    cyhal_hwmgr_reserve(&ADC_POT_SPI_CLK_obj);
    cyhal_hwmgr_reserve(&LOGIC_ANALYZER_CLK_obj);
#endif //defined (CY_USING_HAL)
}
