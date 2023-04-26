/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define WCO_IN_ENABLED 1U
#define WCO_IN_PORT GPIO_PRT0
#define WCO_IN_PORT_NUM 0U
#define WCO_IN_PIN 0U
#define WCO_IN_NUM 0U
#define WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_PORT_PIN P0_0
    #define WCO_IN P0_0
    #define WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define WCO_OUT_ENABLED 1U
#define WCO_OUT_PORT GPIO_PRT0
#define WCO_OUT_PORT_NUM 0U
#define WCO_OUT_PIN 1U
#define WCO_OUT_NUM 1U
#define WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_PORT_PIN P0_1
    #define WCO_OUT P0_1
    #define WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_SW2_ENABLED 1U
#define CYBSP_USER_BTN1_ENABLED CYBSP_SW2_ENABLED
#define CYBSP_USER_BTN_ENABLED CYBSP_SW2_ENABLED
#define CYBSP_SW2_PORT GPIO_PRT0
#define CYBSP_USER_BTN1_PORT CYBSP_SW2_PORT
#define CYBSP_USER_BTN_PORT CYBSP_SW2_PORT
#define CYBSP_SW2_PORT_NUM 0U
#define CYBSP_USER_BTN1_PORT_NUM CYBSP_SW2_PORT_NUM
#define CYBSP_USER_BTN_PORT_NUM CYBSP_SW2_PORT_NUM
#define CYBSP_SW2_PIN 4U
#define CYBSP_USER_BTN1_PIN CYBSP_SW2_PIN
#define CYBSP_USER_BTN_PIN CYBSP_SW2_PIN
#define CYBSP_SW2_NUM 4U
#define CYBSP_USER_BTN1_NUM CYBSP_SW2_NUM
#define CYBSP_USER_BTN_NUM CYBSP_SW2_NUM
#define CYBSP_SW2_DRIVEMODE CY_GPIO_DM_HIGHZ
#define CYBSP_USER_BTN1_DRIVEMODE CYBSP_SW2_DRIVEMODE
#define CYBSP_USER_BTN_DRIVEMODE CYBSP_SW2_DRIVEMODE
#define CYBSP_SW2_INIT_DRIVESTATE 1
#define CYBSP_USER_BTN1_INIT_DRIVESTATE CYBSP_SW2_INIT_DRIVESTATE
#define CYBSP_USER_BTN_INIT_DRIVESTATE CYBSP_SW2_INIT_DRIVESTATE
#ifndef ioss_0_port_0_pin_4_HSIOM
    #define ioss_0_port_0_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SW2_HSIOM ioss_0_port_0_pin_4_HSIOM
#define CYBSP_USER_BTN1_HSIOM CYBSP_SW2_HSIOM
#define CYBSP_USER_BTN_HSIOM CYBSP_SW2_HSIOM
#define CYBSP_SW2_IRQ ioss_interrupts_gpio_0_IRQn
#define CYBSP_USER_BTN1_IRQ CYBSP_SW2_IRQ
#define CYBSP_USER_BTN_IRQ CYBSP_SW2_IRQ
#if defined (CY_USING_HAL)
    #define CYBSP_SW2_HAL_PORT_PIN P0_4
    #define CYBSP_USER_BTN1_HAL_PORT_PIN CYBSP_SW2_HAL_PORT_PIN
    #define CYBSP_USER_BTN_HAL_PORT_PIN CYBSP_SW2_HAL_PORT_PIN
    #define CYBSP_SW2 P0_4
    #define CYBSP_USER_BTN1 CYBSP_SW2
    #define CYBSP_USER_BTN CYBSP_SW2
    #define CYBSP_SW2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_USER_BTN1_HAL_IRQ CYBSP_SW2_HAL_IRQ
    #define CYBSP_USER_BTN_HAL_IRQ CYBSP_SW2_HAL_IRQ
    #define CYBSP_SW2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define CYBSP_USER_BTN1_HAL_DIR CYBSP_SW2_HAL_DIR
    #define CYBSP_USER_BTN_HAL_DIR CYBSP_SW2_HAL_DIR
    #define CYBSP_SW2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
    #define CYBSP_USER_BTN1_HAL_DRIVEMODE CYBSP_SW2_HAL_DRIVEMODE
    #define CYBSP_USER_BTN_HAL_DRIVEMODE CYBSP_SW2_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define SCB1_MOSI_ENABLED 1U
#define SCB1_MOSI_PORT GPIO_PRT10
#define SCB1_MOSI_PORT_NUM 10U
#define SCB1_MOSI_PIN 0U
#define SCB1_MOSI_NUM 0U
#define SCB1_MOSI_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define SCB1_MOSI_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_0_HSIOM
    #define ioss_0_port_10_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define SCB1_MOSI_HSIOM ioss_0_port_10_pin_0_HSIOM
#define SCB1_MOSI_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define SCB1_MOSI_HAL_PORT_PIN P10_0
    #define SCB1_MOSI P10_0
    #define SCB1_MOSI_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SCB1_MOSI_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define SCB1_MOSI_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define SCB1_MISO_ENABLED 1U
#define SCB1_MISO_PORT GPIO_PRT10
#define SCB1_MISO_PORT_NUM 10U
#define SCB1_MISO_PIN 1U
#define SCB1_MISO_NUM 1U
#define SCB1_MISO_DRIVEMODE CY_GPIO_DM_HIGHZ
#define SCB1_MISO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_1_HSIOM
    #define ioss_0_port_10_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define SCB1_MISO_HSIOM ioss_0_port_10_pin_1_HSIOM
#define SCB1_MISO_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define SCB1_MISO_HAL_PORT_PIN P10_1
    #define SCB1_MISO P10_1
    #define SCB1_MISO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SCB1_MISO_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define SCB1_MISO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define SCB1_SCK_ENABLED 1U
#define SCB1_SCK_PORT GPIO_PRT10
#define SCB1_SCK_PORT_NUM 10U
#define SCB1_SCK_PIN 2U
#define SCB1_SCK_NUM 2U
#define SCB1_SCK_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define SCB1_SCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_2_HSIOM
    #define ioss_0_port_10_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define SCB1_SCK_HSIOM ioss_0_port_10_pin_2_HSIOM
#define SCB1_SCK_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define SCB1_SCK_HAL_PORT_PIN P10_2
    #define SCB1_SCK P10_2
    #define SCB1_SCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SCB1_SCK_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define SCB1_SCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define HPF_POT_CS_ENABLED 1U
#define HPF_POT_CS_PORT GPIO_PRT10
#define HPF_POT_CS_PORT_NUM 10U
#define HPF_POT_CS_PIN 4U
#define HPF_POT_CS_NUM 4U
#define HPF_POT_CS_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define HPF_POT_CS_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_4_HSIOM
    #define ioss_0_port_10_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define HPF_POT_CS_HSIOM ioss_0_port_10_pin_4_HSIOM
#define HPF_POT_CS_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define HPF_POT_CS_HAL_PORT_PIN P10_4
    #define HPF_POT_CS P10_4
    #define HPF_POT_CS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define HPF_POT_CS_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define HPF_POT_CS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ADC_CS_ENABLED 1U
#define ADC_CS_PORT GPIO_PRT10
#define ADC_CS_PORT_NUM 10U
#define ADC_CS_PIN 6U
#define ADC_CS_NUM 6U
#define ADC_CS_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define ADC_CS_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_6_HSIOM
    #define ioss_0_port_10_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ADC_CS_HSIOM ioss_0_port_10_pin_6_HSIOM
#define ADC_CS_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
    #define ADC_CS_HAL_PORT_PIN P10_6
    #define ADC_CS P10_6
    #define ADC_CS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ADC_CS_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define ADC_CS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define LOGIC_ANALYZER_IN_ENABLED 1U
#define LOGIC_ANALYZER_IN_PORT GPIO_PRT12
#define LOGIC_ANALYZER_IN_PORT_NUM 12U
#define LOGIC_ANALYZER_IN_PIN 6U
#define LOGIC_ANALYZER_IN_NUM 6U
#define LOGIC_ANALYZER_IN_DRIVEMODE CY_GPIO_DM_HIGHZ
#define LOGIC_ANALYZER_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_6_HSIOM
    #define ioss_0_port_12_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define LOGIC_ANALYZER_IN_HSIOM ioss_0_port_12_pin_6_HSIOM
#define LOGIC_ANALYZER_IN_IRQ ioss_interrupts_gpio_12_IRQn
#if defined (CY_USING_HAL)
    #define LOGIC_ANALYZER_IN_HAL_PORT_PIN P12_6
    #define LOGIC_ANALYZER_IN P12_6
    #define LOGIC_ANALYZER_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define LOGIC_ANALYZER_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define LOGIC_ANALYZER_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
    #define CYBSP_UART_RX (P5_0)
    #define CYBSP_DEBUG_UART_RX CYBSP_UART_RX
    #define CYBSP_UART_TX (P5_1)
    #define CYBSP_DEBUG_UART_TX CYBSP_UART_TX
#endif //defined (CY_USING_HAL)
#define ioss_0_port_5_pin_5_ENABLED 1U
#define ioss_0_port_5_pin_5_PORT GPIO_PRT5
#define ioss_0_port_5_pin_5_PORT_NUM 5U
#define ioss_0_port_5_pin_5_PIN 5U
#define ioss_0_port_5_pin_5_NUM 5U
#define ioss_0_port_5_pin_5_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_5_pin_5_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_5_HSIOM
    #define ioss_0_port_5_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_5_pin_5_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_5_pin_5_HAL_PORT_PIN P5_5
    #define ioss_0_port_5_pin_5 P5_5
    #define ioss_0_port_5_pin_5_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_5_pin_5_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_5_pin_5_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define CYBSP_LED3 (P6_3)
    #define CYBSP_USER_LED1 CYBSP_LED3
    #define CYBSP_USER_LED CYBSP_LED3
    #define CYBSP_I2C_SCL (P6_4)
    #define CYBSP_I2C_SDA (P6_5)
#endif //defined (CY_USING_HAL)
#define SWDIO_ENABLED 1U
#define CYBSP_SWDIO_ENABLED SWDIO_ENABLED
#define SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT SWDIO_PORT
#define SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PORT_NUM SWDIO_PORT_NUM
#define SWDIO_PIN 6U
#define CYBSP_SWDIO_PIN SWDIO_PIN
#define SWDIO_NUM 6U
#define CYBSP_SWDIO_NUM SWDIO_NUM
#define SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_DRIVEMODE SWDIO_DRIVEMODE
#define SWDIO_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE SWDIO_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_HSIOM SWDIO_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDIO_IRQ SWDIO_IRQ
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_PORT_PIN P6_6
    #define CYBSP_SWDIO_HAL_PORT_PIN SWDIO_HAL_PORT_PIN
    #define SWDIO P6_6
    #define CYBSP_SWDIO SWDIO
    #define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDIO_HAL_IRQ SWDIO_HAL_IRQ
    #define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDIO_HAL_DIR SWDIO_HAL_DIR
    #define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
    #define CYBSP_SWDIO_HAL_DRIVEMODE SWDIO_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define SWCLK_ENABLED 1U
#define CYBSP_SWDCK_ENABLED SWCLK_ENABLED
#define SWCLK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT SWCLK_PORT
#define SWCLK_PORT_NUM 6U
#define CYBSP_SWDCK_PORT_NUM SWCLK_PORT_NUM
#define SWCLK_PIN 7U
#define CYBSP_SWDCK_PIN SWCLK_PIN
#define SWCLK_NUM 7U
#define CYBSP_SWDCK_NUM SWCLK_NUM
#define SWCLK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_DRIVEMODE SWCLK_DRIVEMODE
#define SWCLK_INIT_DRIVESTATE 1
#define CYBSP_SWDCK_INIT_DRIVESTATE SWCLK_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_HSIOM SWCLK_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDCK_IRQ SWCLK_IRQ
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_PORT_PIN P6_7
    #define CYBSP_SWDCK_HAL_PORT_PIN SWCLK_HAL_PORT_PIN
    #define SWCLK P6_7
    #define CYBSP_SWDCK SWCLK
    #define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDCK_HAL_IRQ SWCLK_HAL_IRQ
    #define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDCK_HAL_DIR SWCLK_HAL_DIR
    #define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
    #define CYBSP_SWDCK_HAL_DRIVEMODE SWCLK_HAL_DRIVEMODE
    #define CYBSP_LED4 (P7_1)
    #define CYBSP_USER_LED2 CYBSP_LED4
#endif //defined (CY_USING_HAL)
#define SCB2_MOSI_ENABLED 1U
#define SCB2_MOSI_PORT GPIO_PRT9
#define SCB2_MOSI_PORT_NUM 9U
#define SCB2_MOSI_PIN 0U
#define SCB2_MOSI_NUM 0U
#define SCB2_MOSI_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define SCB2_MOSI_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_0_HSIOM
    #define ioss_0_port_9_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define SCB2_MOSI_HSIOM ioss_0_port_9_pin_0_HSIOM
#define SCB2_MOSI_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
    #define SCB2_MOSI_HAL_PORT_PIN P9_0
    #define SCB2_MOSI P9_0
    #define SCB2_MOSI_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SCB2_MOSI_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define SCB2_MOSI_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define SCB2_MISO_ENABLED 1U
#define SCB2_MISO_PORT GPIO_PRT9
#define SCB2_MISO_PORT_NUM 9U
#define SCB2_MISO_PIN 1U
#define SCB2_MISO_NUM 1U
#define SCB2_MISO_DRIVEMODE CY_GPIO_DM_HIGHZ
#define SCB2_MISO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_1_HSIOM
    #define ioss_0_port_9_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define SCB2_MISO_HSIOM ioss_0_port_9_pin_1_HSIOM
#define SCB2_MISO_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
    #define SCB2_MISO_HAL_PORT_PIN P9_1
    #define SCB2_MISO P9_1
    #define SCB2_MISO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SCB2_MISO_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define SCB2_MISO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define SCB2_SCK_ENABLED 1U
#define SCB2_SCK_PORT GPIO_PRT9
#define SCB2_SCK_PORT_NUM 9U
#define SCB2_SCK_PIN 2U
#define SCB2_SCK_NUM 2U
#define SCB2_SCK_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define SCB2_SCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_2_HSIOM
    #define ioss_0_port_9_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define SCB2_SCK_HSIOM ioss_0_port_9_pin_2_HSIOM
#define SCB2_SCK_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
    #define SCB2_SCK_HAL_PORT_PIN P9_2
    #define SCB2_SCK P9_2
    #define SCB2_SCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SCB2_SCK_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define SCB2_SCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define FRAM_CS_ENABLED 1U
#define FRAM_CS_PORT GPIO_PRT9
#define FRAM_CS_PORT_NUM 9U
#define FRAM_CS_PIN 4U
#define FRAM_CS_NUM 4U
#define FRAM_CS_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define FRAM_CS_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_4_HSIOM
    #define ioss_0_port_9_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define FRAM_CS_HSIOM ioss_0_port_9_pin_4_HSIOM
#define FRAM_CS_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
    #define FRAM_CS_HAL_PORT_PIN P9_4
    #define FRAM_CS P9_4
    #define FRAM_CS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define FRAM_CS_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define FRAM_CS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t WCO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t WCO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SW2_config;
#define CYBSP_USER_BTN1_config CYBSP_SW2_config
#define CYBSP_USER_BTN_config CYBSP_SW2_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SW2_obj;
    #define CYBSP_USER_BTN1_obj CYBSP_SW2_obj
    #define CYBSP_USER_BTN_obj CYBSP_SW2_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SCB1_MOSI_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SCB1_MOSI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SCB1_MISO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SCB1_MISO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SCB1_SCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SCB1_SCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t HPF_POT_CS_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t HPF_POT_CS_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ADC_CS_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ADC_CS_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t LOGIC_ANALYZER_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t LOGIC_ANALYZER_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_5_pin_5_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_5_pin_5_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWDIO_config;
#define CYBSP_SWDIO_config SWDIO_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWDIO_obj;
    #define CYBSP_SWDIO_obj SWDIO_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWCLK_config;
#define CYBSP_SWDCK_config SWCLK_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWCLK_obj;
    #define CYBSP_SWDCK_obj SWCLK_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SCB2_MOSI_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SCB2_MOSI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SCB2_MISO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SCB2_MISO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SCB2_SCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SCB2_SCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t FRAM_CS_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t FRAM_CS_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
