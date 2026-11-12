/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "env_validate.h"

// BALTA
// Nuestra placa

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "CARTESIANA"
#endif

#pragma once

#include "env_validate.h"

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "CARTESIANA COMM TEST"
#endif

// ---------------- Pump / spindle ----------------
#define OPEN_PIN                              3
#define CLOSE_PIN                             4
#define SPINDLE_LASER_ENA_PIN                 OPEN_PIN

// ---------------- X motors ----------------
#define X_STEP_PIN                             54
#define X_DIR_PIN                              55
#define X_ENABLE_PIN                           65

#define X2_STEP_PIN                            56
#define X2_DIR_PIN                             57
#define X2_ENABLE_PIN                          65

// ---------------- Y motor ----------------
#define Y_STEP_PIN                             58
#define Y_DIR_PIN                              59
#define Y_ENABLE_PIN                           65

// ---------------- Z motor ----------------
#define Z_STEP_PIN                             60
#define Z_DIR_PIN                              61
#define Z_ENABLE_PIN                           65

#define Z2_STEP_PIN                            62
#define Z2_DIR_PIN                             63
#define Z2_ENABLE_PIN                          65

// ---------------- Endstops ----------------
#define X_MIN_PIN                              12
#define X2_MIN_PIN                             11
#define Y_MIN_PIN                              9
//#define Y_MAX_PIN                             
#define Z_MIN_PIN                              8
#define Z2_MIN_PIN                             10

// ---------------- Manual jog buttons ----------------
#define X_BTN_SUBIR                           43
#define X_BTN_BAJAR                           45
#define Y_BTN_SUBIR                           41
#define Y_BTN_BAJAR                           39
#define Z_BTN_SUBIR                           25
#define Z_BTN_BAJAR                           29

// ---------------- Indicators / emergency ----------------
#define LED_AMARILLO                          2
#define LED_ROJO                              22
#define KILL_PIN                              47
#define KILL_PIN_STATE HIGH


// ---------------- Display / SD ----------------
// Kept assigned because these features are enabled in Configuration.h,
// even though they do not need to be physically connected for the serial test.

#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

  // Pantalla ST7920
  #define LCD_PINS_RS       16
  #define LCD_PINS_EN       17
  #define LCD_PINS_D4       23

  #define ST7920_CLK_PIN    LCD_PINS_D4
  #define ST7920_DAT_PIN    LCD_PINS_EN
  #define ST7920_CS_PIN     LCD_PINS_RS

  // Encoder y buzzer
  #define BTN_ENC           35
  #define BTN_EN1           33
  #define BTN_EN2           31
  #define BEEPER_PIN        37

  // Tarjeta SD
  #ifdef SDSUPPORT
    #define SD_DETECT_PIN   49
    #define SD_DETECT_STATE LOW
    #define SDSS            53
  #endif

#endif



#if 0

// Los pines utilizados se definirán cuando esté lista la placa

// Bomba
#define SPINDLE_LASER_ENA_PIN                 OPEN_PIN  // (XX)
#define OPEN_PIN                              pin_inutil  // (XX)
#define CLOSE_PIN                             pin_inutil  // (XX)

// Motores en el plano X
#define X_STEP_PIN                            pin_inutil  // (XX)
#define X_DIR_PIN                             pin_inutil  // (XX)
#define X_ENABLE_PIN                          pin_inutil  // (XX)


// Mismos movimientos pero distintos pines (double carriage)
#define X2_STEP_PIN                           pin_inutil  // (XX)
#define X2_DIR_PIN                            pin_inutil  // (XX)
#define X2_ENABLE_PIN                         pin_inutil  // (XX)


// Motor en el plano Y
#define Y_STEP_PIN                            pin_inutil  // (XX)
#define Y_DIR_PIN                             pin_inutil  // (XX)
#define Y_ENABLE_PIN                          pin_inutil  // (XX)


// Motor en el plano Z
#define Z_STEP_PIN                            pin_inutil  // (XX)
#define Z_DIR_PIN                             pin_inutil  // (XX)
#define Z_ENABLE_PIN                          pin_inutil  // (XX)


// Limitar movimientos
#define X_MIN_PIN                             pin_inutil  // (XX)
#define X_MAX_PIN                             pin_inutil  // (XX)

#define Y_MIN_PIN                             pin_inutil  // (XX)
#define Y_MAX_PIN                             pin_inutil  // (XX)

#define Z_MIN_PIN                             pin_inutil  // (XX)
#define Z_MAX_PIN                             pin_inutil  // (XX)

// Botones manuales de X
#define X_BTN_SUBIR                           pin_inutil
#define X_BTN_BAJAR                           pin_inutil

// Botones manuales de Y
#define Y_BTN_SUBIR                           pin_inutil
#define Y_BTN_BAJAR                           pin_inutil

// Botones manuales de Z
#define Z_BTN_SUBIR                           pin_inutil
#define Z_BTN_BAJAR                           pin_inutil

// Luces indicadoras y botón de emergencia
#define LED_AMARILLO                          pin_inutil
#define LED_ROJO                              pin_inutil
#define KILL_PIN                              pin_inutil


// Display
#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER 
  #define LCD_PINS_RS      pin_inutil  //Selección de regsitros (comando o datos)
  #define LCD_PINS_EN      pin_inutil  //Pin de enable para transferencia
  #define LCD_PINS_D4      pin_inutil  //Línes de datos en paralelo
  //#define LCD_PINS_D5      pin_inutil
  //#define LCD_PINS_D6      pin_inutil
  //#define LCD_PINS_D7      pin_inutil
  #define ST7920_CLK_PIN   LCD_PINS_D4  //Reloj serial para el controlador ST7920
  #define ST7920_DAT_PIN   LCD_PINS_EN  //Línea de datos serial hacia el ST7920
  #define ST7920_CS_PIN    LCD_PINS_RS  //Chip Select: activa la pantalla para comunicarse
  //#define BOARD_ST7920_DELAY_1 125  //Valores de retardo (en nanosegundos) usados para ajustar el timing entre cambios de pines (clock, data, enable)
  //#define BOARD_ST7920_DELAY_2 125
  //#define BOARD_ST7920_DELAY_3 125
  #define BTN_ENC        pin_inutil
  #define BTN_EN1        pin_inutil
  #define BTN_EN2        pin_inutil
  #define BEEPER_PIN     pin_inutil
  #ifdef SDSUPPORT
    #define SD_DETECT_PIN pin_inutil
    #define SDSS pin_inutil
    #define SDPOWER_PIN pin_inutil
    #define SD_DETECT_STATE (HIGH)
  #endif
#endif

#endif //o