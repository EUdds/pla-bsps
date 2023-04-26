/*******************************************************************************
* File Name: cycfg_pins.c
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t WCO_IN_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = WCO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t WCO_IN_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = WCO_IN_PORT_NUM,
        .channel_num = WCO_IN_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t WCO_OUT_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = WCO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t WCO_OUT_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = WCO_OUT_PORT_NUM,
        .channel_num = WCO_OUT_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SW2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CYBSP_SW2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SW2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SW2_PORT_NUM,
        .channel_num = CYBSP_SW2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SCB1_MOSI_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB1_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SCB1_MOSI_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SCB1_MOSI_PORT_NUM,
        .channel_num = SCB1_MOSI_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SCB1_MISO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB1_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SCB1_MISO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SCB1_MISO_PORT_NUM,
        .channel_num = SCB1_MISO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SCB1_SCK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB1_SCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SCB1_SCK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SCB1_SCK_PORT_NUM,
        .channel_num = SCB1_SCK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t HPF_POT_CS_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = HPF_POT_CS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t HPF_POT_CS_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = HPF_POT_CS_PORT_NUM,
        .channel_num = HPF_POT_CS_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_CS_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = ADC_CS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ADC_CS_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ADC_CS_PORT_NUM,
        .channel_num = ADC_CS_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t LOGIC_ANALYZER_IN_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = LOGIC_ANALYZER_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t LOGIC_ANALYZER_IN_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = LOGIC_ANALYZER_IN_PORT_NUM,
        .channel_num = LOGIC_ANALYZER_IN_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_5_pin_5_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_5_pin_5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_5_pin_5_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_5_pin_5_PORT_NUM,
        .channel_num = ioss_0_port_5_pin_5_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SWDIO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SWDIO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SWDIO_PORT_NUM,
        .channel_num = SWDIO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SWCLK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLDOWN,
    .hsiom = SWCLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SWCLK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SWCLK_PORT_NUM,
        .channel_num = SWCLK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SCB2_MOSI_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB2_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SCB2_MOSI_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SCB2_MOSI_PORT_NUM,
        .channel_num = SCB2_MOSI_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SCB2_MISO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB2_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SCB2_MISO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SCB2_MISO_PORT_NUM,
        .channel_num = SCB2_MISO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SCB2_SCK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB2_SCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SCB2_SCK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SCB2_SCK_PORT_NUM,
        .channel_num = SCB2_SCK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t FRAM_CS_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = FRAM_CS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t FRAM_CS_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = FRAM_CS_PORT_NUM,
        .channel_num = FRAM_CS_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(WCO_IN_PORT, WCO_IN_PIN, &WCO_IN_config);
    Cy_GPIO_Pin_Init(WCO_OUT_PORT, WCO_OUT_PIN, &WCO_OUT_config);
    Cy_GPIO_Pin_Init(CYBSP_SW2_PORT, CYBSP_SW2_PIN, &CYBSP_SW2_config);
    Cy_GPIO_Pin_Init(SCB1_MOSI_PORT, SCB1_MOSI_PIN, &SCB1_MOSI_config);
    Cy_GPIO_Pin_Init(SCB1_MISO_PORT, SCB1_MISO_PIN, &SCB1_MISO_config);
    Cy_GPIO_Pin_Init(SCB1_SCK_PORT, SCB1_SCK_PIN, &SCB1_SCK_config);
    Cy_GPIO_Pin_Init(HPF_POT_CS_PORT, HPF_POT_CS_PIN, &HPF_POT_CS_config);
    Cy_GPIO_Pin_Init(ADC_CS_PORT, ADC_CS_PIN, &ADC_CS_config);
    Cy_GPIO_Pin_Init(LOGIC_ANALYZER_IN_PORT, LOGIC_ANALYZER_IN_PIN, &LOGIC_ANALYZER_IN_config);
    Cy_GPIO_Pin_Init(ioss_0_port_5_pin_5_PORT, ioss_0_port_5_pin_5_PIN, &ioss_0_port_5_pin_5_config);
    Cy_GPIO_Pin_Init(SWDIO_PORT, SWDIO_PIN, &SWDIO_config);
    Cy_GPIO_Pin_Init(SWCLK_PORT, SWCLK_PIN, &SWCLK_config);
    Cy_GPIO_Pin_Init(SCB2_MOSI_PORT, SCB2_MOSI_PIN, &SCB2_MOSI_config);
    Cy_GPIO_Pin_Init(SCB2_MISO_PORT, SCB2_MISO_PIN, &SCB2_MISO_config);
    Cy_GPIO_Pin_Init(SCB2_SCK_PORT, SCB2_SCK_PIN, &SCB2_SCK_config);
    Cy_GPIO_Pin_Init(FRAM_CS_PORT, FRAM_CS_PIN, &FRAM_CS_config);
}

void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&WCO_IN_obj);
    cyhal_hwmgr_reserve(&WCO_OUT_obj);
    cyhal_hwmgr_reserve(&CYBSP_SW2_obj);
    cyhal_hwmgr_reserve(&SCB1_MOSI_obj);
    cyhal_hwmgr_reserve(&SCB1_MISO_obj);
    cyhal_hwmgr_reserve(&SCB1_SCK_obj);
    cyhal_hwmgr_reserve(&HPF_POT_CS_obj);
    cyhal_hwmgr_reserve(&ADC_CS_obj);
    cyhal_hwmgr_reserve(&LOGIC_ANALYZER_IN_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_5_pin_5_obj);
    cyhal_hwmgr_reserve(&SWDIO_obj);
    cyhal_hwmgr_reserve(&SWCLK_obj);
    cyhal_hwmgr_reserve(&SCB2_MOSI_obj);
    cyhal_hwmgr_reserve(&SCB2_MISO_obj);
    cyhal_hwmgr_reserve(&SCB2_SCK_obj);
    cyhal_hwmgr_reserve(&FRAM_CS_obj);
#endif //defined (CY_USING_HAL)
}
