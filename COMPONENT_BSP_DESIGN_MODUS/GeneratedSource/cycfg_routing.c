/*******************************************************************************
* File Name: cycfg_routing.c
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

#include "cycfg_routing.h"

#include "cy_trigmux.h"

#include "stdbool.h"

void init_cycfg_routing(void)
{
    Cy_TrigMux_Connect(TRIG0_IN_TR_GROUP11_OUTPUT9, TRIG0_OUT_CPUSS_DW0_TR_IN2, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG0_IN_TR_GROUP13_OUTPUT7, TRIG0_OUT_CPUSS_DW0_TR_IN4, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG0_IN_TR_GROUP13_OUTPUT8, TRIG0_OUT_CPUSS_DW0_TR_IN3, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG0_IN_TR_GROUP13_OUTPUT9, TRIG0_OUT_CPUSS_DW0_TR_IN0, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG11_IN_TCPWM1_TR_OVERFLOW0, TRIG11_OUT_TR_GROUP0_INPUT18, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG11_IN_TCPWM1_TR_OVERFLOW0, TRIG11_OUT_TR_GROUP3_INPUT17, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG13_IN_SCB1_TR_RX_REQ, TRIG13_OUT_TR_GROUP0_INPUT34, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG13_IN_SCB1_TR_TX_REQ, TRIG13_OUT_TR_GROUP0_INPUT35, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG13_IN_SCB2_TR_RX_REQ, TRIG13_OUT_TR_GROUP0_INPUT36, false, TRIGGER_TYPE_LEVEL);
    Cy_TrigMux_Connect(TRIG3_IN_TR_GROUP11_OUTPUT8, TRIG3_OUT_TCPWM1_TR_IN9, false, TRIGGER_TYPE_LEVEL);
}
