/*******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only
* intended for use with Renesas products. No other uses are authorized. This
* software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
* AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software
* and to discontinue the availability of this software. By using this software,
* you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
* Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
*******************************************************************************/
/* Copyright (c) 2019-2020 Renesas Electronics Corporation.
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
 */
/*******************************************************************************
* Rev: 3.01
* Description : IO bitmask header
*******************************************************************************/

#ifndef OSTM_IOBITMASK_H
#define OSTM_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define OSTM_OSTMnCMP_OSTMnCMP                                                 (0xFFFFFFFFu)
#define OSTM_OSTMnCMP_OSTMnCMP_SHIFT                                           (0u)
#define OSTM_OSTMnCNT_OSTMnCNT                                                 (0xFFFFFFFFu)
#define OSTM_OSTMnCNT_OSTMnCNT_SHIFT                                           (0u)
#define OSTM_OSTMnTE_OSTMnTE                                                   (0x01u)
#define OSTM_OSTMnTE_OSTMnTE_SHIFT                                             (0u)
#define OSTM_OSTMnTS_OSTMnTS                                                   (0x01u)
#define OSTM_OSTMnTS_OSTMnTS_SHIFT                                             (0u)
#define OSTM_OSTMnTT_OSTMnTT                                                   (0x01u)
#define OSTM_OSTMnTT_OSTMnTT_SHIFT                                             (0u)
#define OSTM_OSTMnCTL_OSTMnMD0                                                 (0x01u)
#define OSTM_OSTMnCTL_OSTMnMD0_SHIFT                                           (0u)
#define OSTM_OSTMnCTL_OSTMnMD1                                                 (0x02u)
#define OSTM_OSTMnCTL_OSTMnMD1_SHIFT                                           (1u)

#endif
