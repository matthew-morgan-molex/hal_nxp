/*
 * Copyright 1997-2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*!
 * @file S32Z2_RTUM_NIC_D.h
 * @version 1.8
 * @date 2022-07-13
 * @brief Peripheral Access Layer for S32Z2_RTUM_NIC_D
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32Z2_RTUM_NIC_D_H_)  /* Check if memory map has not been already included */
#define S32Z2_RTUM_NIC_D_H_

#include "S32Z2_COMMON.h"

/* ----------------------------------------------------------------------------
   -- RTUM_NIC_D Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RTUM_NIC_D_Peripheral_Access_Layer RTUM_NIC_D Peripheral Access Layer
 * @{
 */

/** RTUM_NIC_D - Register Layout Typedef */
typedef struct {
  __O  uint32_t REMAP;                             /**< Remap, offset: 0x0 */
} RTUM_NIC_D_Type, *RTUM_NIC_D_MemMapPtr;

/** Number of instances of the RTUM_NIC_D module. */
#define RTUM_NIC_D_INSTANCE_COUNT                (2u)

/* RTUM_NIC_D - Peripheral instance base addresses */
/** Peripheral RTU0__RTUM_NIC_D base address */
#define IP_RTU0__RTUM_NIC_D_BASE                 (0x75000000u)
/** Peripheral RTU0__RTUM_NIC_D base pointer */
#define IP_RTU0__RTUM_NIC_D                      ((RTUM_NIC_D_Type *)IP_RTU0__RTUM_NIC_D_BASE)
/** Peripheral RTU1__RTUM_NIC_D base address */
#define IP_RTU1__RTUM_NIC_D_BASE                 (0x75400000u)
/** Peripheral RTU1__RTUM_NIC_D base pointer */
#define IP_RTU1__RTUM_NIC_D                      ((RTUM_NIC_D_Type *)IP_RTU1__RTUM_NIC_D_BASE)
/** Array initializer of RTUM_NIC_D peripheral base addresses */
#define IP_RTUM_NIC_D_BASE_ADDRS                 { IP_RTU0__RTUM_NIC_D_BASE, IP_RTU1__RTUM_NIC_D_BASE }
/** Array initializer of RTUM_NIC_D peripheral base pointers */
#define IP_RTUM_NIC_D_BASE_PTRS                  { IP_RTU0__RTUM_NIC_D, IP_RTU1__RTUM_NIC_D }

/* ----------------------------------------------------------------------------
   -- RTUM_NIC_D Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RTUM_NIC_D_Register_Masks RTUM_NIC_D Register Masks
 * @{
 */

/*! @name REMAP - Remap */
/*! @{ */

#define RTUM_NIC_D_REMAP_remap_MASK              (0x3U)
#define RTUM_NIC_D_REMAP_remap_SHIFT             (0U)
#define RTUM_NIC_D_REMAP_remap_WIDTH             (2U)
#define RTUM_NIC_D_REMAP_remap(x)                (((uint32_t)(((uint32_t)(x)) << RTUM_NIC_D_REMAP_remap_SHIFT)) & RTUM_NIC_D_REMAP_remap_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group RTUM_NIC_D_Register_Masks */

/*!
 * @}
 */ /* end of group RTUM_NIC_D_Peripheral_Access_Layer */

#endif  /* #if !defined(S32Z2_RTUM_NIC_D_H_) */
