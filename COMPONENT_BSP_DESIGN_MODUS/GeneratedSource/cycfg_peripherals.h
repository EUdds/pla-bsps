/*******************************************************************************
* File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_scb_spi.h"
#include "cy_sysclk.h"
#include "cy_tcpwm_pwm.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_BLE_ENABLED 1U
#define CY_BLE_CORE_CORTEX_M4 4U
#define CY_BLE_CORE_CORTEX_M0P 0U
#define CY_BLE_CORE_DUAL 255U
#ifndef CY_BLE_CORE
    #define CY_BLE_CORE 4U
#endif
#define CY_BLE_IRQ bless_interrupt_IRQn
#define ADC_POT_SPI_ENABLED 1U
#define ADC_POT_SPI_HW SCB1
#define ADC_POT_SPI_IRQ scb_1_interrupt_IRQn
#define FRAM_SPI_ENABLED 1U
#define FRAM_SPI_HW SCB2
#define FRAM_SPI_IRQ scb_2_interrupt_IRQn
#define CAPTURE_PWM_ENABLED 1U
#define CAPTURE_PWM_HW TCPWM1
#define CAPTURE_PWM_NUM 0UL
#define CAPTURE_PWM_MASK (1UL << 0)

#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_BLE_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_spi_config_t ADC_POT_SPI_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ADC_POT_SPI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_spi_config_t FRAM_SPI_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t FRAM_SPI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_pwm_config_t CAPTURE_PWM_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CAPTURE_PWM_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
