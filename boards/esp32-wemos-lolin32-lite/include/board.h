/*
 * Copyright (C) 2025 Kagan Ege
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

 /**
  * @ingroup     boards_esp32-wemos-lolin32-lite
  * @{
  *
  * @file
  * @brief       Board specific definitions for the WeMos LOLIN32 Lite
  *
  * @note        Most definitions can be overridden by an \ref
  *              esp32_application_specific_configurations "application-specific
  *              board configuration".
  *
  * @author      Kagan Ege <kaganegeozkan@gmail.com>
  */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"
#include "periph_conf.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CONFIG_ZTIMER_USEC_ADJUST_SET 7
#define CONFIG_ZTIMER_USEC_ADJUST_SLEEP 15

#define LED0_PIN GPIO22
#define LED0_ACTIVE (0)

#include "board_common.h"

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
