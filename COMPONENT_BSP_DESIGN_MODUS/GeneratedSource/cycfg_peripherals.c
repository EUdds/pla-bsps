/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
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

#include "cycfg_peripherals.h"

#define CAPTURE_PWM_INPUT_DISABLED 0x7U

#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_BLE_obj = 
    {
        .type = CYHAL_RSC_BLESS,
        .block_num = 0U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_scb_spi_config_t ADC_POT_SPI_config = 
{
    .spiMode = CY_SCB_SPI_MASTER,
    .subMode = CY_SCB_SPI_MOTOROLA,
    .sclkMode = CY_SCB_SPI_CPHA1_CPOL0,
    .oversample = 4,
    .rxDataWidth = 16UL,
    .txDataWidth = 16UL,
    .enableMsbFirst = true,
    .enableInputFilter = false,
    .enableFreeRunSclk = false,
    .enableMisoLateSample = true,
    .enableTransferSeperation = true,
    .ssPolarity = ((CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT0) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT1) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT2) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT3)),
    .enableWakeFromSleep = false,
    .rxFifoTriggerLevel = 0UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 63UL,
    .txFifoIntEnableMask = 0UL,
    .masterSlaveIntEnableMask = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ADC_POT_SPI_obj = 
    {
        .type = CYHAL_RSC_SCB,
        .block_num = 1U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_scb_spi_config_t FRAM_SPI_config = 
{
    .spiMode = CY_SCB_SPI_MASTER,
    .subMode = CY_SCB_SPI_MOTOROLA,
    .sclkMode = CY_SCB_SPI_CPHA0_CPOL0,
    .oversample = 4,
    .rxDataWidth = 8UL,
    .txDataWidth = 8UL,
    .enableMsbFirst = true,
    .enableInputFilter = false,
    .enableFreeRunSclk = false,
    .enableMisoLateSample = true,
    .enableTransferSeperation = false,
    .ssPolarity = ((CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT0) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT1) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT2) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT3)),
    .enableWakeFromSleep = false,
    .rxFifoTriggerLevel = 0UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 0UL,
    .txFifoIntEnableMask = 0UL,
    .masterSlaveIntEnableMask = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t FRAM_SPI_obj = 
    {
        .type = CYHAL_RSC_SCB,
        .block_num = 2U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_tcpwm_pwm_config_t CAPTURE_PWM_config = 
{
    .pwmMode = CY_TCPWM_PWM_MODE_PWM,
    .clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
    .pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
    .deadTimeClocks = 0,
    .runMode = CY_TCPWM_PWM_ONESHOT,
    .period0 = 1,
    .period1 = 32768,
    .enablePeriodSwap = false,
    .compare0 = 0,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = CY_TCPWM_INT_NONE,
    .invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
    .invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
    .killMode = CY_TCPWM_PWM_STOP_ON_KILL,
    .swapInputMode = CAPTURE_PWM_INPUT_DISABLED & 0x3U,
    .swapInput = CY_TCPWM_INPUT_0,
    .reloadInputMode = CY_TCPWM_INPUT_RISINGEDGE,
    .reloadInput = TCPWM1_CNT0_RELOAD_VALUE,
    .startInputMode = CAPTURE_PWM_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .killInputMode = CAPTURE_PWM_INPUT_DISABLED & 0x3U,
    .killInput = CY_TCPWM_INPUT_0,
    .countInputMode = CAPTURE_PWM_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
    .swapOverflowUnderflow = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CAPTURE_PWM_obj = 
    {
        .type = CYHAL_RSC_TCPWM,
        .block_num = 1U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB1_CLOCK, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB2_CLOCK, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM1_CLOCKS0, CY_SYSCLK_DIV_8_BIT, 2U);
}

void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_BLE_obj);
    cyhal_hwmgr_reserve(&ADC_POT_SPI_obj);
    cyhal_hwmgr_reserve(&FRAM_SPI_obj);
    cyhal_hwmgr_reserve(&CAPTURE_PWM_obj);
#endif //defined (CY_USING_HAL)
}
