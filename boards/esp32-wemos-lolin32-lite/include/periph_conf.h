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
  * @brief       Configuration of CPU peripherals for WeMos LOLIN32 Lite board
  *
  * @author      Kagan Ege <kaganegeozkan@gmail.com>
  */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include <stdint.h>

#include "cpu.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ADC_GPIOS
#define ADC_GPIOS { GPIO35, GPIO34, GPIO39, GPIO36 }
#endif

#ifndef DAC_GPIOS
#define DAC_GPIOS { GPIO25, GPIO26 }
#endif

#ifndef I2C0_SPEED
#define I2C0_SPEED I2C_SPEED_FAST
#endif
#ifndef I2C0_SCL
#define I2C0_SCL GPIO4
#endif
#ifndef I2C0_SDA
#define I2C0_SDA GPIO0
#endif
#ifndef I2C1_SPEED
#define I2C1_SPEED I2C_SPEED_FAST
#endif
#ifndef I2C1_SCL
#define I2C1_SCL GPIO2
#endif
#ifndef I2C1_SDA
#define I2C1_SDA GPIO15
#endif

#ifndef PWM0_GPIOS
#define PWM0_GPIOS { GPIO13, GPIO12, GPIO14, GPIO27, GPIO32, GPIO33 }
#endif

#ifndef SPI0_CTRL
#define SPI0_CTRL VSPI
#endif
#ifndef SPI0_SCK
#define SPI0_SCK GPIO18
#endif
#ifndef SPI0_MISO
#define SPI0_MISO GPIO19
#endif
#ifndef SPI0_MOSI
#define SPI0_MOSI GPIO23
#endif
#ifndef SPI0_CS0
#define SPI0_CS0 GPIO5
#endif

#define UART0_TXD   GPIO1
#define UART0_RXD   GPIO3
#define UART1_TXD   GPIO17
#define UART1_RXD   GPIO16

#ifdef __cplusplus
}
#endif

#include "periph_conf_common.h"

#endif /* PERIPH_CONF_H */
/** @} */
