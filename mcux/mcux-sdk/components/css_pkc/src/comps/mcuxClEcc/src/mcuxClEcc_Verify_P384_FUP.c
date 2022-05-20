/*--------------------------------------------------------------------------*/
/* Copyright 2020 NXP                                                       */
/*                                                                          */
/* NXP Confidential. This software is owned or controlled by NXP and may    */
/* only be used strictly in accordance with the applicable license terms.   */
/* By expressly accepting such terms or by downloading, installing,         */
/* activating and/or otherwise using the software, you are agreeing that    */
/* you have read, and that you agree to comply with and are bound by, such  */
/* license terms. If you do not agree to be bound by the applicable license */
/* terms, then you may not retain, install, activate or otherwise use the   */
/* software.                                                                */
/*--------------------------------------------------------------------------*/

/** @file  mcuxClEcc_Verify_P384.c
 *  @brief mcuxClEcc: implementation of ECDSA signature verification for curve P-384
 */

#include <mcuxClEcc_Verify_P384_FUP.h>

SDK_ALIGN(const mcuxClPkc_FUPEntry_t mcuxClEcc_Fup_Convert_G_PrecG_toMR[5], 4u) = {{0x10u,0x00u,0x34u,0x74u,0xadu,0xfbu},{0x80u,0x00u,0x26u,0x16u,0x00u,0x20u},{0x80u,0x00u,0x27u,0x16u,0x00u,0x21u},{0x80u,0x00u,0x28u,0x16u,0x00u,0x2au},{0x80u,0x00u,0x29u,0x16u,0x00u,0x2bu}};

SDK_ALIGN(const mcuxClPkc_FUPEntry_t mcuxClEcc_Fup_Convert_P1plusP2_toAffineNR_CalcR[9], 4u) = {{0x10u,0x00u,0x1bu,0x5au,0x7cu,0xf3u},{0x80u,0x00u,0x1du,0x16u,0x00u,0x1cu},{0x80u,0x00u,0x1cu,0x16u,0x00u,0x1du},{0x80u,0x00u,0x1cu,0x1du,0x00u,0x1eu},{0x80u,0x00u,0x1eu,0x1du,0x00u,0x1fu},{0x80u,0x00u,0x20u,0x1eu,0x00u,0x24u},{0x80u,0x00u,0x21u,0x1fu,0x00u,0x25u},{0x80u,0x2au,0x00u,0x24u,0x00u,0x24u},{0x80u,0x2au,0x01u,0x24u,0x01u,0x26u}};

SDK_ALIGN(const mcuxClPkc_FUPEntry_t mcuxClEcc_Fup_Convert_pubkeyQ_toJacobianMR[6], 4u) = {{0x10u,0x00u,0x88u,0x55u,0xb5u,0x8du},{0x80u,0x00u,0x23u,0x16u,0x00u,0x1fu},{0x80u,0x00u,0x1fu,0x23u,0x00u,0x1eu},{0x80u,0x00u,0x1eu,0x23u,0x00u,0x1fu},{0x80u,0x00u,0x26u,0x1eu,0x00u,0x24u},{0x80u,0x00u,0x27u,0x1fu,0x00u,0x25u}};

SDK_ALIGN(const mcuxClPkc_FUPEntry_t mcuxClEcc_Fup_InitZ_CalcU1U2[6], 4u) = {{0x10u,0x00u,0xf3u,0x2bu,0x5eu,0xe4u},{0x00u,0x09u,0x00u,0x00u,0x00u,0x23u},{0x80u,0x00u,0x1au,0x1du,0x01u,0x18u},{0x80u,0x00u,0x1cu,0x1du,0x01u,0x19u},{0x80u,0x2au,0x01u,0x19u,0x01u,0x19u},{0x80u,0x2au,0x01u,0x18u,0x01u,0x18u}};

SDK_ALIGN(const mcuxClPkc_FUPEntry_t mcuxClEcc_Fup_Update_G_to_Prec1[5], 4u) = {{0x10u,0x00u,0x3fu,0x32u,0xf3u,0x71u},{0x80u,0x00u,0x23u,0x23u,0x00u,0x1eu},{0x80u,0x00u,0x1eu,0x23u,0x00u,0x1fu},{0x80u,0x00u,0x20u,0x1eu,0x00u,0x26u},{0x80u,0x00u,0x21u,0x1fu,0x00u,0x27u}};

SDK_ALIGN(const mcuxClPkc_FUPEntry_t mcuxClEcc_Fup_Update_pubkeyQ_P1_z[9], 4u) = {{0x10u,0x00u,0xe0u,0xa9u,0xdbu,0x3au},{0x80u,0x00u,0x22u,0x22u,0x00u,0x1eu},{0x80u,0x00u,0x1eu,0x22u,0x00u,0x1fu},{0x80u,0x00u,0x24u,0x1eu,0x00u,0x26u},{0x80u,0x00u,0x25u,0x1fu,0x00u,0x27u},{0x80u,0x00u,0x20u,0x1eu,0x00u,0x24u},{0x80u,0x00u,0x21u,0x1fu,0x00u,0x25u},{0x00u,0x0eu,0x00u,0x23u,0x23u,0x1cu},{0x80u,0x00u,0x1cu,0x22u,0x00u,0x23u}};


