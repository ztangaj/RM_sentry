/*
    ChibiOS - Copyright (C) 2006..2017 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup for RM18A board.
 */

/*
 * Board identifier.
 */
#define BOARD_RM18A
#define BOARD_NAME                  "RM18A"

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                12000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F427xx

/*
 * IO pins assignments.
 */
#define GPIOA_S                     0U
#define GPIOA_T                     1U
#define GPIOA_U                     2U
#define GPIOA_V                     3U
#define GPIOA_P2                    4U
#define GPIOA_P1                    5U
#define GPIOA_OLED_7_BUTTON         6U
#define GPIOA_OLED_6_MOSI           7U
#define GPIOA_PWM_J27               8U
#define GPIOA_PWM_J28               9U
#define GPIOA_USB_FS_ID             10U
#define GPIOA_USB_FS_DM             11U
#define GPIOA_USB_FS_DP             12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_PIN15                 15U

#define GPIOB_L2                    0U
#define GPIOB_M2                    1U
#define GPIOB_USER_BUTTON           2U
#define GPIOB_OLED_5_SCLK           3U
#define GPIOB_PIN4                  4U
#define GPIOB_IMU_HEAT_PWM          5U
#define GPIOB_PIN6                  6U
#define GPIOB_USART1_RX             7U
#define GPIOB_IMU_INT               8U
#define GPIOB_OLED_4_DC             9U
#define GPIOB_OLED_3_RST            10U
#define GPIOB_PIN11                 11U
#define GPIOB_CAN2_RX               12U
#define GPIOB_CAN2_TX               13U
#define GPIOB_SNYCHOR_1             14U
#define GPIOB_SNYCHOR_2             15U

#define GPIOC_N2                    0U
#define GPIOC_O2                    1U
#define GPIOC_L1                    2U
#define GPIOC_M1                    3U
#define GPIOC_N1                    4U
#define GPIOC_O1                    5U
#define GPIOC_PIN6                  6U
#define GPIOC_PIN7                  7U
#define GPIOC_SDIO_D0               8U
#define GPIOC_SDIO_D1               9U
#define GPIOC_SDIO_D2               10U
#define GPIOC_SDIO_D3               11U
#define GPIOC_SDIO_CLK              12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U

#define GPIOD_CAN1_RX               0U
#define GPIOD_CAN1_TX               1U
#define GPIOD_SDIO_CMD              2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_USART2_TX             5U
#define GPIOD_USART2_RX             6U
#define GPIOD_PIN7                  7U
#define GPIOD_USART3_TX             8U
#define GPIOD_USART3_RX             9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_H                     12U
#define GPIOD_G                     13U
#define GPIOD_F                     14U
#define GPIOD_E                     15U

#define GPIOE_USART8_RX             0U
#define GPIOE_USART8_TX             1U
#define GPIOE_IST8310_RSTN          2U
#define GPIOE_IST8310_DRDY          3U
#define GPIOE_J2                    4U
#define GPIOE_J1                    5U
#define GPIOE_K1                    6U
#define GPIOE_USART7_RX             7U
#define GPIOE_USART7_TX             8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_LED_RED               11U
#define GPIOE_K2                    12U
#define GPIOE_PWM_J32               13U
#define GPIOE_PWM_J33               14U
#define GPIOE_SD_EXTI               15U

#define GPIOF_I2                    0U
#define GPIOF_I1                    1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_5VADJ_AD              4U
#define GPIOF_HW_VC_AD              5U
#define GPIOF_MPU6600_SPI5_NSS      6U
#define GPIOF_MPU6600_SPI5_SCK      7U
#define GPIOF_MPU6600_SPI5_MISO     8U
#define GPIOF_MPU6600_SPI5_MOSI     9U
#define GPIOF_Q1                    10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_LED_GREEN             14U
#define GPIOF_PIN15                 15U

#define GPIOG_PIN0                  0U
#define GPIOG_LED_H                 1U
#define GPIOG_LED_G                 2U
#define GPIOG_LED_F                 3U
#define GPIOG_LED_E                 4U
#define GPIOG_LED_D                 5U
#define GPIOG_LED_C                 6U
#define GPIOG_LED_B                 7U
#define GPIOG_LED_A                 8U
#define GPIOG_USART6_RX             9U
#define GPIOG_PIN10                 10U
#define GPIOG_PIN11                 11U
#define GPIOG_PIN12                 12U
#define GPIOG_LASER                 13U
#define GPIOG_USART6_TX             14U
#define GPIOG_PIN15                 15U

#define GPIOH_OSC_IN                0U
#define GPIOH_OSC_OUT               1U
#define GPIOH_POWER1_CTRL           2U
#define GPIOH_POWER2_CTRL           3U
#define GPIOH_POWER3_CTRL           4U
#define GPIOH_POWER4_CTRL           5U
#define GPIOH_BUZZER                6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_D                     10U
#define GPIOH_C                     11U
#define GPIOH_B                     12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

#define GPIOI_A                     0U
#define GPIOI_PIN1                  1U
#define GPIOI_Z                     2U
#define GPIOI_PIN3                  3U
#define GPIOI_PIN4                  4U
#define GPIOI_W                     5U
#define GPIOI_X                     6U
#define GPIOI_Y                     7U
#define GPIOI_PIN8                  8U
#define GPIOI_Q2                    9U
#define GPIOI_PIN10                 10U
#define GPIOI_PIN11                 11U
#define GPIOI_PIN12                 12U
#define GPIOI_PIN13                 13U
#define GPIOI_PIN14                 14U
#define GPIOI_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_S                      PAL_LINE(GPIOA, 0U)
#define LINE_T                      PAL_LINE(GPIOA, 1U)
#define LINE_U                      PAL_LINE(GPIOA, 2U)
#define LINE_V                      PAL_LINE(GPIOA, 3U)
#define LINE_P2                     PAL_LINE(GPIOA, 4U)
#define LINE_P1                     PAL_LINE(GPIOA, 5U)
#define LINE_OLED_7_BUTTON          PAL_LINE(GPIOA, 6U)
#define LINE_OLED_6_MOSI            PAL_LINE(GPIOA, 7U)
#define LINE_PWM_J27                PAL_LINE(GPIOA, 8U)
#define LINE_PWM_J28                PAL_LINE(GPIOA, 9U)
#define LINE_USB_FS_ID              PAL_LINE(GPIOA, 10U)
#define LINE_USB_FS_DM              PAL_LINE(GPIOA, 11U)
#define LINE_USB_FS_DP              PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_L2                     PAL_LINE(GPIOB, 0U)
#define LINE_M2                     PAL_LINE(GPIOB, 1U)
#define LINE_USER_BUTTON            PAL_LINE(GPIOB, 2U)
#define LINE_OLED_5_SCLK            PAL_LINE(GPIOB, 3U)
#define LINE_IMU_HEAT_PWM           PAL_LINE(GPIOB, 5U)
#define LINE_USART1_RX              PAL_LINE(GPIOB, 7U)
#define LINE_IMU_INT                PAL_LINE(GPIOB, 8U)
#define LINE_OLED_4_DC              PAL_LINE(GPIOB, 9U)
#define LINE_OLED_3_RST             PAL_LINE(GPIOB, 10U)
#define LINE_CAN2_RX                PAL_LINE(GPIOB, 12U)
#define LINE_CAN2_TX                PAL_LINE(GPIOB, 13U)
#define LINE_SNYCHOR_1              PAL_LINE(GPIOB, 14U)
#define LINE_SNYCHOR_2              PAL_LINE(GPIOB, 15U)
#define LINE_N2                     PAL_LINE(GPIOC, 0U)
#define LINE_O2                     PAL_LINE(GPIOC, 1U)
#define LINE_L1                     PAL_LINE(GPIOC, 2U)
#define LINE_M1                     PAL_LINE(GPIOC, 3U)
#define LINE_N1                     PAL_LINE(GPIOC, 4U)
#define LINE_O1                     PAL_LINE(GPIOC, 5U)
#define LINE_SDIO_D0                PAL_LINE(GPIOC, 8U)
#define LINE_SDIO_D1                PAL_LINE(GPIOC, 9U)
#define LINE_SDIO_D2                PAL_LINE(GPIOC, 10U)
#define LINE_SDIO_D3                PAL_LINE(GPIOC, 11U)
#define LINE_SDIO_CLK               PAL_LINE(GPIOC, 12U)
#define LINE_CAN1_RX                PAL_LINE(GPIOD, 0U)
#define LINE_CAN1_TX                PAL_LINE(GPIOD, 1U)
#define LINE_SDIO_CMD               PAL_LINE(GPIOD, 2U)
#define LINE_USART2_TX              PAL_LINE(GPIOD, 5U)
#define LINE_USART2_RX              PAL_LINE(GPIOD, 6U)
#define LINE_USART3_TX              PAL_LINE(GPIOD, 8U)
#define LINE_USART3_RX              PAL_LINE(GPIOD, 9U)
#define LINE_H                      PAL_LINE(GPIOD, 12U)
#define LINE_G                      PAL_LINE(GPIOD, 13U)
#define LINE_F                      PAL_LINE(GPIOD, 14U)
#define LINE_E                      PAL_LINE(GPIOD, 15U)
#define LINE_USART8_RX              PAL_LINE(GPIOE, 0U)
#define LINE_USART8_TX              PAL_LINE(GPIOE, 1U)
#define LINE_IST8310_RSTN           PAL_LINE(GPIOE, 2U)
#define LINE_IST8310_DRDY           PAL_LINE(GPIOE, 3U)
#define LINE_J2                     PAL_LINE(GPIOE, 4U)
#define LINE_J1                     PAL_LINE(GPIOE, 5U)
#define LINE_K1                     PAL_LINE(GPIOE, 6U)
#define LINE_USART7_RX              PAL_LINE(GPIOE, 7U)
#define LINE_USART7_TX              PAL_LINE(GPIOE, 8U)
#define LINE_LED_RED                PAL_LINE(GPIOE, 11U)
#define LINE_K2                     PAL_LINE(GPIOE, 12U)
#define LINE_PWM_J32                PAL_LINE(GPIOE, 13U)
#define LINE_PWM_J33                PAL_LINE(GPIOE, 14U)
#define LINE_SD_EXTI                PAL_LINE(GPIOE, 15U)
#define LINE_I2                     PAL_LINE(GPIOF, 0U)
#define LINE_I1                     PAL_LINE(GPIOF, 1U)
#define LINE_5VADJ_AD               PAL_LINE(GPIOF, 4U)
#define LINE_HW_VC_AD               PAL_LINE(GPIOF, 5U)
#define LINE_MPU6600_SPI5_NSS       PAL_LINE(GPIOF, 6U)
#define LINE_MPU6600_SPI5_SCK       PAL_LINE(GPIOF, 7U)
#define LINE_MPU6600_SPI5_MISO      PAL_LINE(GPIOF, 8U)
#define LINE_MPU6600_SPI5_MOSI      PAL_LINE(GPIOF, 9U)
#define LINE_Q1                     PAL_LINE(GPIOF, 10U)
#define LINE_LED_GREEN              PAL_LINE(GPIOF, 14U)
#define LINE_LED_H                  PAL_LINE(GPIOG, 1U)
#define LINE_LED_G                  PAL_LINE(GPIOG, 2U)
#define LINE_LED_F                  PAL_LINE(GPIOG, 3U)
#define LINE_LED_E                  PAL_LINE(GPIOG, 4U)
#define LINE_LED_D                  PAL_LINE(GPIOG, 5U)
#define LINE_LED_C                  PAL_LINE(GPIOG, 6U)
#define LINE_LED_B                  PAL_LINE(GPIOG, 7U)
#define LINE_LED_A                  PAL_LINE(GPIOG, 8U)
#define LINE_USART6_RX              PAL_LINE(GPIOG, 9U)
#define LINE_LASER                  PAL_LINE(GPIOG, 13U)
#define LINE_USART6_TX              PAL_LINE(GPIOG, 14U)
#define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)
#define LINE_POWER1_CTRL            PAL_LINE(GPIOH, 2U)
#define LINE_POWER2_CTRL            PAL_LINE(GPIOH, 3U)
#define LINE_POWER3_CTRL            PAL_LINE(GPIOH, 4U)
#define LINE_POWER4_CTRL            PAL_LINE(GPIOH, 5U)
#define LINE_BUZZER                 PAL_LINE(GPIOH, 6U)
#define LINE_D                      PAL_LINE(GPIOH, 10U)
#define LINE_C                      PAL_LINE(GPIOH, 11U)
#define LINE_B                      PAL_LINE(GPIOH, 12U)
#define LINE_A                      PAL_LINE(GPIOI, 0U)
#define LINE_Z                      PAL_LINE(GPIOI, 2U)
#define LINE_W                      PAL_LINE(GPIOI, 5U)
#define LINE_X                      PAL_LINE(GPIOI, 6U)
#define LINE_Y                      PAL_LINE(GPIOI, 7U)
#define LINE_Q2                     PAL_LINE(GPIOI, 9U)

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - S                         (input floating).
 * PA1  - T                         (input floating).
 * PA2  - U                         (input floating).
 * PA3  - V                         (input floating).
 * PA4  - P2                        (input floating).
 * PA5  - P1                        (input floating).
 * PA6  - OLED_7_BUTTON             (input floating).
 * PA7  - OLED_6_MOSI               (output pushpull maximum).
 * PA8  - PWM_J27                   (input floating).
 * PA9  - PWM_J28                   (input floating).
 * PA10 - USB_FS_ID                 (alternate 10).
 * PA11 - USB_FS_DM                 (alternate 10).
 * PA12 - USB_FS_DP                 (alternate 10).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - PIN15                     (input floating).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_S) |              \
                                     PIN_MODE_INPUT(GPIOA_T) |              \
                                     PIN_MODE_INPUT(GPIOA_U) |              \
                                     PIN_MODE_INPUT(GPIOA_V) |              \
                                     PIN_MODE_INPUT(GPIOA_P2) |             \
                                     PIN_MODE_INPUT(GPIOA_P1) |             \
                                     PIN_MODE_INPUT(GPIOA_OLED_7_BUTTON) |  \
                                     PIN_MODE_OUTPUT(GPIOA_OLED_6_MOSI) |   \
                                     PIN_MODE_INPUT(GPIOA_PWM_J27) |        \
                                     PIN_MODE_INPUT(GPIOA_PWM_J28) |        \
                                     PIN_MODE_ALTERNATE(GPIOA_USB_FS_ID) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_USB_FS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_USB_FS_DP) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_S) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA_T) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA_U) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA_V) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA_P2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOA_P1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OLED_7_BUTTON) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_OLED_6_MOSI) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PWM_J27) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PWM_J28) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_FS_ID) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_FS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_FS_DP) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOA_S) |          \
                                     PIN_OSPEED_VERYLOW(GPIOA_T) |          \
                                     PIN_OSPEED_VERYLOW(GPIOA_U) |          \
                                     PIN_OSPEED_HIGH(GPIOA_V) |             \
                                     PIN_OSPEED_VERYLOW(GPIOA_P2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOA_P1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOA_OLED_7_BUTTON) |\
                                     PIN_OSPEED_HIGH(GPIOA_OLED_6_MOSI) |   \
                                     PIN_OSPEED_VERYLOW(GPIOA_PWM_J27) |    \
                                     PIN_OSPEED_HIGH(GPIOA_PWM_J28) |       \
                                     PIN_OSPEED_HIGH(GPIOA_USB_FS_ID) |     \
                                     PIN_OSPEED_HIGH(GPIOA_USB_FS_DM) |     \
                                     PIN_OSPEED_HIGH(GPIOA_USB_FS_DP) |     \
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_VERYLOW(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_S) |          \
                                     PIN_PUPDR_FLOATING(GPIOA_T) |          \
                                     PIN_PUPDR_FLOATING(GPIOA_U) |          \
                                     PIN_PUPDR_FLOATING(GPIOA_V) |          \
                                     PIN_PUPDR_FLOATING(GPIOA_P2) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_P1) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_OLED_7_BUTTON) |\
                                     PIN_PUPDR_FLOATING(GPIOA_OLED_6_MOSI) |\
                                     PIN_PUPDR_FLOATING(GPIOA_PWM_J27) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_PWM_J28) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_USB_FS_ID) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_USB_FS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_USB_FS_DP) |  \
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_S) |                \
                                     PIN_ODR_HIGH(GPIOA_T) |                \
                                     PIN_ODR_HIGH(GPIOA_U) |                \
                                     PIN_ODR_HIGH(GPIOA_V) |                \
                                     PIN_ODR_HIGH(GPIOA_P2) |               \
                                     PIN_ODR_HIGH(GPIOA_P1) |               \
                                     PIN_ODR_HIGH(GPIOA_OLED_7_BUTTON) |    \
                                     PIN_ODR_HIGH(GPIOA_OLED_6_MOSI) |      \
                                     PIN_ODR_HIGH(GPIOA_PWM_J27) |          \
                                     PIN_ODR_HIGH(GPIOA_PWM_J28) |          \
                                     PIN_ODR_HIGH(GPIOA_USB_FS_ID) |        \
                                     PIN_ODR_HIGH(GPIOA_USB_FS_DM) |        \
                                     PIN_ODR_HIGH(GPIOA_USB_FS_DP) |        \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_S, 0U) |             \
                                     PIN_AFIO_AF(GPIOA_T, 0U) |             \
                                     PIN_AFIO_AF(GPIOA_U, 0U) |             \
                                     PIN_AFIO_AF(GPIOA_V, 0U) |             \
                                     PIN_AFIO_AF(GPIOA_P2, 0U) |            \
                                     PIN_AFIO_AF(GPIOA_P1, 0U) |            \
                                     PIN_AFIO_AF(GPIOA_OLED_7_BUTTON, 0U) | \
                                     PIN_AFIO_AF(GPIOA_OLED_6_MOSI, 0U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PWM_J27, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_PWM_J28, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_USB_FS_ID, 10U) |    \
                                     PIN_AFIO_AF(GPIOA_USB_FS_DM, 10U) |    \
                                     PIN_AFIO_AF(GPIOA_USB_FS_DP, 10U) |    \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN15, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - L2                        (input floating).
 * PB1  - M2                        (input floating).
 * PB2  - USER_BUTTON               (input pulldown).
 * PB3  - OLED_5_SCLK               (output pushpull maximum).
 * PB4  - PIN4                      (input floating).
 * PB5  - IMU_HEAT_PWM              (output pushpull minimum).
 * PB6  - PIN6                      (input floating).
 * PB7  - USART1_RX                 (alternate 7).
 * PB8  - IMU_INT                   (input floating).
 * PB9  - OLED_4_DC                 (output pushpull maximum).
 * PB10 - OLED_3_RST                (output pushpull maximum).
 * PB11 - PIN11                     (input floating).
 * PB12 - CAN2_RX                   (alternate 9).
 * PB13 - CAN2_TX                   (alternate 9).
 * PB14 - SNYCHOR_1                 (input floating).
 * PB15 - SNYCHOR_2                 (input floating).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_L2) |             \
                                     PIN_MODE_INPUT(GPIOB_M2) |             \
                                     PIN_MODE_INPUT(GPIOB_USER_BUTTON) |    \
                                     PIN_MODE_OUTPUT(GPIOB_OLED_5_SCLK) |   \
                                     PIN_MODE_INPUT(GPIOB_PIN4) |           \
                                     PIN_MODE_OUTPUT(GPIOB_IMU_HEAT_PWM) |  \
                                     PIN_MODE_INPUT(GPIOB_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_USART1_RX) |  \
                                     PIN_MODE_INPUT(GPIOB_IMU_INT) |        \
                                     PIN_MODE_OUTPUT(GPIOB_OLED_4_DC) |     \
                                     PIN_MODE_OUTPUT(GPIOB_OLED_3_RST) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN11) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_CAN2_RX) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_CAN2_TX) |    \
                                     PIN_MODE_INPUT(GPIOB_SNYCHOR_1) |      \
                                     PIN_MODE_INPUT(GPIOB_SNYCHOR_2))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_L2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOB_M2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USER_BUTTON) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OLED_5_SCLK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_IMU_HEAT_PWM) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART1_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_IMU_INT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OLED_4_DC) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OLED_3_RST) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN2_RX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN2_TX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SNYCHOR_1) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SNYCHOR_2))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOB_L2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOB_M2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOB_USER_BUTTON) |\
                                     PIN_OSPEED_HIGH(GPIOB_OLED_5_SCLK) |   \
                                     PIN_OSPEED_VERYLOW(GPIOB_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOB_IMU_HEAT_PWM) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_PIN6) |       \
                                     PIN_OSPEED_HIGH(GPIOB_USART1_RX) |     \
                                     PIN_OSPEED_HIGH(GPIOB_IMU_INT) |       \
                                     PIN_OSPEED_HIGH(GPIOB_OLED_4_DC) |     \
                                     PIN_OSPEED_HIGH(GPIOB_OLED_3_RST) |    \
                                     PIN_OSPEED_VERYLOW(GPIOB_PIN11) |      \
                                     PIN_OSPEED_HIGH(GPIOB_CAN2_RX) |       \
                                     PIN_OSPEED_HIGH(GPIOB_CAN2_TX) |       \
                                     PIN_OSPEED_VERYLOW(GPIOB_SNYCHOR_1) |  \
                                     PIN_OSPEED_VERYLOW(GPIOB_SNYCHOR_2))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_L2) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_M2) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOB_USER_BUTTON) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OLED_5_SCLK) |\
                                     PIN_PUPDR_FLOATING(GPIOB_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_IMU_HEAT_PWM) |\
                                     PIN_PUPDR_FLOATING(GPIOB_PIN6) |       \
                                     PIN_PUPDR_PULLUP(GPIOB_USART1_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_IMU_INT) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_OLED_4_DC) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_OLED_3_RST) | \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN2_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN2_TX) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_SNYCHOR_1) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_SNYCHOR_2))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_L2) |               \
                                     PIN_ODR_HIGH(GPIOB_M2) |               \
                                     PIN_ODR_HIGH(GPIOB_USER_BUTTON) |      \
                                     PIN_ODR_HIGH(GPIOB_OLED_5_SCLK) |      \
                                     PIN_ODR_HIGH(GPIOB_PIN4) |             \
                                     PIN_ODR_LOW(GPIOB_IMU_HEAT_PWM) |      \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOB_USART1_RX) |        \
                                     PIN_ODR_HIGH(GPIOB_IMU_INT) |          \
                                     PIN_ODR_HIGH(GPIOB_OLED_4_DC) |        \
                                     PIN_ODR_HIGH(GPIOB_OLED_3_RST) |       \
                                     PIN_ODR_HIGH(GPIOB_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOB_CAN2_RX) |          \
                                     PIN_ODR_HIGH(GPIOB_CAN2_TX) |          \
                                     PIN_ODR_HIGH(GPIOB_SNYCHOR_1) |        \
                                     PIN_ODR_HIGH(GPIOB_SNYCHOR_2))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_L2, 0U) |            \
                                     PIN_AFIO_AF(GPIOB_M2, 0U) |            \
                                     PIN_AFIO_AF(GPIOB_USER_BUTTON, 0U) |   \
                                     PIN_AFIO_AF(GPIOB_OLED_5_SCLK, 0U) |   \
                                     PIN_AFIO_AF(GPIOB_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_IMU_HEAT_PWM, 0U) |  \
                                     PIN_AFIO_AF(GPIOB_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_USART1_RX, 7U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_IMU_INT, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_OLED_4_DC, 0U) |     \
                                     PIN_AFIO_AF(GPIOB_OLED_3_RST, 0U) |    \
                                     PIN_AFIO_AF(GPIOB_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_CAN2_RX, 9U) |       \
                                     PIN_AFIO_AF(GPIOB_CAN2_TX, 9U) |       \
                                     PIN_AFIO_AF(GPIOB_SNYCHOR_1, 0U) |     \
                                     PIN_AFIO_AF(GPIOB_SNYCHOR_2, 0U))

/*
 * GPIOC setup:
 *
 * PC0  - N2                        (input floating).
 * PC1  - O2                        (input floating).
 * PC2  - L1                        (input floating).
 * PC3  - M1                        (input floating).
 * PC4  - N1                        (input floating).
 * PC5  - O1                        (input floating).
 * PC6  - PIN6                      (input floating).
 * PC7  - PIN7                      (input floating).
 * PC8  - SDIO_D0                   (alternate 12).
 * PC9  - SDIO_D1                   (alternate 12).
 * PC10 - SDIO_D2                   (alternate 12).
 * PC11 - SDIO_D3                   (alternate 12).
 * PC12 - SDIO_CLK                  (alternate 12).
 * PC13 - PIN13                     (input floating).
 * PC14 - PIN14                     (input floating).
 * PC15 - PIN15                     (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_N2) |             \
                                     PIN_MODE_INPUT(GPIOC_O2) |             \
                                     PIN_MODE_INPUT(GPIOC_L1) |             \
                                     PIN_MODE_INPUT(GPIOC_M1) |             \
                                     PIN_MODE_INPUT(GPIOC_N1) |             \
                                     PIN_MODE_INPUT(GPIOC_O1) |             \
                                     PIN_MODE_INPUT(GPIOC_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_SDIO_D0) |    \
                                     PIN_MODE_ALTERNATE(GPIOC_SDIO_D1) |    \
                                     PIN_MODE_ALTERNATE(GPIOC_SDIO_D2) |    \
                                     PIN_MODE_ALTERNATE(GPIOC_SDIO_D3) |    \
                                     PIN_MODE_ALTERNATE(GPIOC_SDIO_CLK) |   \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_N2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOC_O2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOC_L1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOC_M1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOC_N1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOC_O1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SDIO_D0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SDIO_D1) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SDIO_D2) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SDIO_D3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SDIO_CLK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOC_N2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOC_O2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOC_L1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOC_M1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOC_N1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOC_O1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOC_SDIO_D0) |    \
                                     PIN_OSPEED_VERYLOW(GPIOC_SDIO_D1) |    \
                                     PIN_OSPEED_VERYLOW(GPIOC_SDIO_D2) |    \
                                     PIN_OSPEED_VERYLOW(GPIOC_SDIO_D3) |    \
                                     PIN_OSPEED_VERYLOW(GPIOC_SDIO_CLK) |   \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_N2) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_O2) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_L1) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_M1) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_N1) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_O1) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_SDIO_D0) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_SDIO_D1) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_SDIO_D2) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_SDIO_D3) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_SDIO_CLK) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_N2) |               \
                                     PIN_ODR_HIGH(GPIOC_O2) |               \
                                     PIN_ODR_HIGH(GPIOC_L1) |               \
                                     PIN_ODR_HIGH(GPIOC_M1) |               \
                                     PIN_ODR_HIGH(GPIOC_N1) |               \
                                     PIN_ODR_HIGH(GPIOC_O1) |               \
                                     PIN_ODR_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOC_SDIO_D0) |          \
                                     PIN_ODR_HIGH(GPIOC_SDIO_D1) |          \
                                     PIN_ODR_HIGH(GPIOC_SDIO_D2) |          \
                                     PIN_ODR_HIGH(GPIOC_SDIO_D3) |          \
                                     PIN_ODR_HIGH(GPIOC_SDIO_CLK) |         \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_N2, 0U) |            \
                                     PIN_AFIO_AF(GPIOC_O2, 0U) |            \
                                     PIN_AFIO_AF(GPIOC_L1, 0U) |            \
                                     PIN_AFIO_AF(GPIOC_M1, 0U) |            \
                                     PIN_AFIO_AF(GPIOC_N1, 0U) |            \
                                     PIN_AFIO_AF(GPIOC_O1, 0U) |            \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN7, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_SDIO_D0, 12U) |      \
                                     PIN_AFIO_AF(GPIOC_SDIO_D1, 12U) |      \
                                     PIN_AFIO_AF(GPIOC_SDIO_D2, 12U) |      \
                                     PIN_AFIO_AF(GPIOC_SDIO_D3, 12U) |      \
                                     PIN_AFIO_AF(GPIOC_SDIO_CLK, 12U) |     \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - CAN1_RX                   (alternate 9).
 * PD1  - CAN1_TX                   (alternate 9).
 * PD2  - SDIO_CMD                  (alternate 12).
 * PD3  - PIN3                      (input floating).
 * PD4  - PIN4                      (input floating).
 * PD5  - USART2_TX                 (alternate 7).
 * PD6  - USART2_RX                 (alternate 7).
 * PD7  - PIN7                      (input floating).
 * PD8  - USART3_TX                 (alternate 7).
 * PD9  - USART3_RX                 (alternate 7).
 * PD10 - PIN10                     (input floating).
 * PD11 - PIN11                     (input floating).
 * PD12 - H                         (input floating).
 * PD13 - G                         (input floating).
 * PD14 - F                         (input floating).
 * PD15 - E                         (input floating).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_CAN1_RX) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_CAN1_TX) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_SDIO_CMD) |   \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_USART2_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOD_USART2_RX) |  \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_USART3_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOD_USART3_RX) |  \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_H) |              \
                                     PIN_MODE_INPUT(GPIOD_G) |              \
                                     PIN_MODE_INPUT(GPIOD_F) |              \
                                     PIN_MODE_INPUT(GPIOD_E))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_CAN1_RX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_CAN1_TX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_SDIO_CMD) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_USART2_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_USART2_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_USART3_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_USART3_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_H) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOD_G) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOD_F) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOD_E))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_CAN1_RX) |       \
                                     PIN_OSPEED_HIGH(GPIOD_CAN1_TX) |       \
                                     PIN_OSPEED_HIGH(GPIOD_SDIO_CMD) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_USART2_TX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOD_USART2_RX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_USART3_TX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOD_USART3_RX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_H) |          \
                                     PIN_OSPEED_VERYLOW(GPIOD_G) |          \
                                     PIN_OSPEED_VERYLOW(GPIOD_F) |          \
                                     PIN_OSPEED_VERYLOW(GPIOD_E))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_CAN1_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_CAN1_TX) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_SDIO_CMD) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN4) |       \
                                     PIN_PUPDR_PULLUP(GPIOD_USART2_TX) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_USART2_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN7) |       \
                                     PIN_PUPDR_PULLUP(GPIOD_USART3_TX) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_USART3_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_H) |          \
                                     PIN_PUPDR_FLOATING(GPIOD_G) |          \
                                     PIN_PUPDR_FLOATING(GPIOD_F) |          \
                                     PIN_PUPDR_FLOATING(GPIOD_E))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_CAN1_RX) |          \
                                     PIN_ODR_HIGH(GPIOD_CAN1_TX) |          \
                                     PIN_ODR_HIGH(GPIOD_SDIO_CMD) |         \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_USART2_TX) |        \
                                     PIN_ODR_HIGH(GPIOD_USART2_RX) |        \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_USART3_TX) |        \
                                     PIN_ODR_HIGH(GPIOD_USART3_RX) |        \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_H) |                \
                                     PIN_ODR_HIGH(GPIOD_G) |                \
                                     PIN_ODR_HIGH(GPIOD_F) |                \
                                     PIN_ODR_HIGH(GPIOD_E))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_CAN1_RX, 9U) |       \
                                     PIN_AFIO_AF(GPIOD_CAN1_TX, 9U) |       \
                                     PIN_AFIO_AF(GPIOD_SDIO_CMD, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_USART2_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOD_USART2_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_USART3_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOD_USART3_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_H, 0U) |             \
                                     PIN_AFIO_AF(GPIOD_G, 0U) |             \
                                     PIN_AFIO_AF(GPIOD_F, 0U) |             \
                                     PIN_AFIO_AF(GPIOD_E, 0U))

/*
 * GPIOE setup:
 *
 * PE0  - USART8_RX                 (alternate 8).
 * PE1  - USART8_TX                 (alternate 8).
 * PE2  - IST8310_RSTN              (input floating).
 * PE3  - IST8310_DRDY              (input floating).
 * PE4  - J2                        (input floating).
 * PE5  - J1                        (input floating).
 * PE6  - K1                        (input floating).
 * PE7  - USART7_RX                 (alternate 8).
 * PE8  - USART7_TX                 (alternate 8).
 * PE9  - PIN9                      (input floating).
 * PE10 - PIN10                     (input floating).
 * PE11 - LED_RED                   (output opendrain minimum).
 * PE12 - K2                        (input floating).
 * PE13 - PWM_J32                   (input floating).
 * PE14 - PWM_J33                   (input floating).
 * PE15 - SD_EXTI                   (input floating).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ALTERNATE(GPIOE_USART8_RX) |  \
                                     PIN_MODE_ALTERNATE(GPIOE_USART8_TX) |  \
                                     PIN_MODE_INPUT(GPIOE_IST8310_RSTN) |   \
                                     PIN_MODE_INPUT(GPIOE_IST8310_DRDY) |   \
                                     PIN_MODE_INPUT(GPIOE_J2) |             \
                                     PIN_MODE_INPUT(GPIOE_J1) |             \
                                     PIN_MODE_INPUT(GPIOE_K1) |             \
                                     PIN_MODE_ALTERNATE(GPIOE_USART7_RX) |  \
                                     PIN_MODE_ALTERNATE(GPIOE_USART7_TX) |  \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_OUTPUT(GPIOE_LED_RED) |       \
                                     PIN_MODE_INPUT(GPIOE_K2) |             \
                                     PIN_MODE_INPUT(GPIOE_PWM_J32) |        \
                                     PIN_MODE_INPUT(GPIOE_PWM_J33) |        \
                                     PIN_MODE_INPUT(GPIOE_SD_EXTI))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_USART8_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_USART8_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_IST8310_RSTN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_IST8310_DRDY) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_J2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOE_J1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOE_K1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOE_USART7_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_USART7_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOE_LED_RED) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_K2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PWM_J32) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PWM_J33) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SD_EXTI))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOE_USART8_RX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOE_USART8_TX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOE_IST8310_RSTN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_IST8310_DRDY) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_J2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOE_J1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOE_K1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOE_USART7_RX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOE_USART7_TX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_LED_RED) |    \
                                     PIN_OSPEED_VERYLOW(GPIOE_K2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOE_PWM_J32) |    \
                                     PIN_OSPEED_VERYLOW(GPIOE_PWM_J33) |    \
                                     PIN_OSPEED_VERYLOW(GPIOE_SD_EXTI))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_USART8_RX) |    \
                                     PIN_PUPDR_PULLUP(GPIOE_USART8_TX) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_IST8310_RSTN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_IST8310_DRDY) |\
                                     PIN_PUPDR_FLOATING(GPIOE_J2) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_J1) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_K1) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_USART7_RX) |    \
                                     PIN_PUPDR_PULLUP(GPIOE_USART7_TX) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_LED_RED) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_K2) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PWM_J32) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_PWM_J33) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_SD_EXTI))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_USART8_RX) |        \
                                     PIN_ODR_HIGH(GPIOE_USART8_TX) |        \
                                     PIN_ODR_HIGH(GPIOE_IST8310_RSTN) |     \
                                     PIN_ODR_HIGH(GPIOE_IST8310_DRDY) |     \
                                     PIN_ODR_HIGH(GPIOE_J2) |               \
                                     PIN_ODR_HIGH(GPIOE_J1) |               \
                                     PIN_ODR_HIGH(GPIOE_K1) |               \
                                     PIN_ODR_HIGH(GPIOE_USART7_RX) |        \
                                     PIN_ODR_HIGH(GPIOE_USART7_TX) |        \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_LOW(GPIOE_LED_RED) |           \
                                     PIN_ODR_HIGH(GPIOE_K2) |               \
                                     PIN_ODR_HIGH(GPIOE_PWM_J32) |          \
                                     PIN_ODR_HIGH(GPIOE_PWM_J33) |          \
                                     PIN_ODR_HIGH(GPIOE_SD_EXTI))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_USART8_RX, 8U) |     \
                                     PIN_AFIO_AF(GPIOE_USART8_TX, 8U) |     \
                                     PIN_AFIO_AF(GPIOE_IST8310_RSTN, 0U) |  \
                                     PIN_AFIO_AF(GPIOE_IST8310_DRDY, 0U) |  \
                                     PIN_AFIO_AF(GPIOE_J2, 0U) |            \
                                     PIN_AFIO_AF(GPIOE_J1, 0U) |            \
                                     PIN_AFIO_AF(GPIOE_K1, 0U) |            \
                                     PIN_AFIO_AF(GPIOE_USART7_RX, 8U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_USART7_TX, 8U) |     \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_LED_RED, 0U) |       \
                                     PIN_AFIO_AF(GPIOE_K2, 0U) |            \
                                     PIN_AFIO_AF(GPIOE_PWM_J32, 0U) |       \
                                     PIN_AFIO_AF(GPIOE_PWM_J33, 0U) |       \
                                     PIN_AFIO_AF(GPIOE_SD_EXTI, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - I2                        (input floating).
 * PF1  - I1                        (input floating).
 * PF2  - PIN2                      (input floating).
 * PF3  - PIN3                      (input floating).
 * PF4  - 5VADJ_AD                  (input floating).
 * PF5  - HW_VC_AD                  (input floating).
 * PF6  - MPU6600_SPI5_NSS          (alternate 5).
 * PF7  - MPU6600_SPI5_SCK          (alternate 5).
 * PF8  - MPU6600_SPI5_MISO         (alternate 5).
 * PF9  - MPU6600_SPI5_MOSI         (alternate 5).
 * PF10 - Q1                        (input floating).
 * PF11 - PIN11                     (input floating).
 * PF12 - PIN12                     (input floating).
 * PF13 - PIN13                     (input floating).
 * PF14 - LED_GREEN                 (output opendrain minimum).
 * PF15 - PIN15                     (input floating).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_I2) |             \
                                     PIN_MODE_INPUT(GPIOF_I1) |             \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_5VADJ_AD) |       \
                                     PIN_MODE_INPUT(GPIOF_HW_VC_AD) |       \
                                     PIN_MODE_ALTERNATE(GPIOF_MPU6600_SPI5_NSS) |\
                                     PIN_MODE_ALTERNATE(GPIOF_MPU6600_SPI5_SCK) |\
                                     PIN_MODE_ALTERNATE(GPIOF_MPU6600_SPI5_MISO) |\
                                     PIN_MODE_ALTERNATE(GPIOF_MPU6600_SPI5_MOSI) |\
                                     PIN_MODE_INPUT(GPIOF_Q1) |             \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_OUTPUT(GPIOF_LED_GREEN) |     \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_I2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOF_I1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_5VADJ_AD) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOF_HW_VC_AD) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOF_MPU6600_SPI5_NSS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_MPU6600_SPI5_SCK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_MPU6600_SPI5_MISO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_MPU6600_SPI5_MOSI) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Q1) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_LED_GREEN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOF_I2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOF_I1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_5VADJ_AD) |   \
                                     PIN_OSPEED_VERYLOW(GPIOF_HW_VC_AD) |   \
                                     PIN_OSPEED_VERYLOW(GPIOF_MPU6600_SPI5_NSS) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_MPU6600_SPI5_SCK) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_MPU6600_SPI5_MISO) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_MPU6600_SPI5_MOSI) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Q1) |         \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_LED_GREEN) |  \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_I2) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_I1) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_5VADJ_AD) |   \
                                     PIN_PUPDR_FLOATING(GPIOF_HW_VC_AD) |   \
                                     PIN_PUPDR_FLOATING(GPIOF_MPU6600_SPI5_NSS) |\
                                     PIN_PUPDR_FLOATING(GPIOF_MPU6600_SPI5_SCK) |\
                                     PIN_PUPDR_FLOATING(GPIOF_MPU6600_SPI5_MISO) |\
                                     PIN_PUPDR_FLOATING(GPIOF_MPU6600_SPI5_MOSI) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Q1) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_LED_GREEN) |  \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_I2) |               \
                                     PIN_ODR_HIGH(GPIOF_I1) |               \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_5VADJ_AD) |         \
                                     PIN_ODR_HIGH(GPIOF_HW_VC_AD) |         \
                                     PIN_ODR_HIGH(GPIOF_MPU6600_SPI5_NSS) | \
                                     PIN_ODR_HIGH(GPIOF_MPU6600_SPI5_SCK) | \
                                     PIN_ODR_HIGH(GPIOF_MPU6600_SPI5_MISO) |\
                                     PIN_ODR_HIGH(GPIOF_MPU6600_SPI5_MOSI) |\
                                     PIN_ODR_HIGH(GPIOF_Q1) |               \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_LOW(GPIOF_LED_GREEN) |         \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_I2, 0U) |            \
                                     PIN_AFIO_AF(GPIOF_I1, 0U) |            \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_5VADJ_AD, 0U) |      \
                                     PIN_AFIO_AF(GPIOF_HW_VC_AD, 0U) |      \
                                     PIN_AFIO_AF(GPIOF_MPU6600_SPI5_NSS, 5U) |\
                                     PIN_AFIO_AF(GPIOF_MPU6600_SPI5_SCK, 5U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_MPU6600_SPI5_MISO, 5U) |\
                                     PIN_AFIO_AF(GPIOF_MPU6600_SPI5_MOSI, 5U) |\
                                     PIN_AFIO_AF(GPIOF_Q1, 0U) |            \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_LED_GREEN, 0U) |     \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0U))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input floating).
 * PG1  - LED_H                     (output opendrain minimum).
 * PG2  - LED_G                     (output opendrain minimum).
 * PG3  - LED_F                     (output opendrain minimum).
 * PG4  - LED_E                     (output opendrain minimum).
 * PG5  - LED_D                     (output opendrain minimum).
 * PG6  - LED_C                     (output opendrain minimum).
 * PG7  - LED_B                     (output opendrain minimum).
 * PG8  - LED_A                     (output opendrain minimum).
 * PG9  - USART6_RX                 (alternate 8).
 * PG10 - PIN10                     (input floating).
 * PG11 - PIN11                     (input floating).
 * PG12 - PIN12                     (input floating).
 * PG13 - LASER                     (output pushpull maximum).
 * PG14 - USART6_TX                 (alternate 8).
 * PG15 - PIN15                     (input floating).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_OUTPUT(GPIOG_LED_H) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_G) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_F) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_E) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_D) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_C) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_B) |         \
                                     PIN_MODE_OUTPUT(GPIOG_LED_A) |         \
                                     PIN_MODE_ALTERNATE(GPIOG_USART6_RX) |  \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_OUTPUT(GPIOG_LASER) |         \
                                     PIN_MODE_ALTERNATE(GPIOG_USART6_TX) |  \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_H) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_G) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_F) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_E) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_D) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_C) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_B) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOG_LED_A) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_USART6_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_LASER) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_USART6_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOG_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_H) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_G) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_F) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_E) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_D) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_C) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_B) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_LED_A) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_USART6_RX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN12) |      \
                                     PIN_OSPEED_HIGH(GPIOG_LASER) |         \
                                     PIN_OSPEED_VERYLOW(GPIOG_USART6_TX) |  \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_H) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_G) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_F) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_E) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_D) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_C) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_B) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LED_A) |      \
                                     PIN_PUPDR_PULLUP(GPIOG_USART6_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_LASER) |      \
                                     PIN_PUPDR_PULLUP(GPIOG_USART6_TX) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_LOW(GPIOG_LED_H) |             \
                                     PIN_ODR_LOW(GPIOG_LED_G) |             \
                                     PIN_ODR_LOW(GPIOG_LED_F) |             \
                                     PIN_ODR_LOW(GPIOG_LED_E) |             \
                                     PIN_ODR_LOW(GPIOG_LED_D) |             \
                                     PIN_ODR_LOW(GPIOG_LED_C) |             \
                                     PIN_ODR_LOW(GPIOG_LED_B) |             \
                                     PIN_ODR_LOW(GPIOG_LED_A) |             \
                                     PIN_ODR_HIGH(GPIOG_USART6_RX) |        \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_LASER) |            \
                                     PIN_ODR_HIGH(GPIOG_USART6_TX) |        \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_LED_H, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LED_G, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LED_F, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LED_E, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LED_D, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LED_C, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LED_B, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_LED_A, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_USART6_RX, 8U) |     \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_LASER, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_USART6_TX, 8U) |     \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - POWER1_CTRL               (output pushpull minimum).
 * PH3  - POWER2_CTRL               (output pushpull minimum).
 * PH4  - POWER3_CTRL               (output pushpull minimum).
 * PH5  - POWER4_CTRL               (output pushpull minimum).
 * PH6  - BUZZER                    (alternate 9).
 * PH7  - PIN7                      (input floating).
 * PH8  - PIN8                      (input floating).
 * PH9  - PIN9                      (input floating).
 * PH10 - D                         (input floating).
 * PH11 - C                         (input floating).
 * PH12 - B                         (input floating).
 * PH13 - PIN13                     (input floating).
 * PH14 - PIN14                     (input floating).
 * PH15 - PIN15                     (input floating).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_OUTPUT(GPIOH_POWER1_CTRL) |   \
                                     PIN_MODE_OUTPUT(GPIOH_POWER2_CTRL) |   \
                                     PIN_MODE_OUTPUT(GPIOH_POWER3_CTRL) |   \
                                     PIN_MODE_OUTPUT(GPIOH_POWER4_CTRL) |   \
                                     PIN_MODE_ALTERNATE(GPIOH_BUZZER) |     \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_D) |              \
                                     PIN_MODE_INPUT(GPIOH_C) |              \
                                     PIN_MODE_INPUT(GPIOH_B) |              \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_POWER1_CTRL) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_POWER2_CTRL) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_POWER3_CTRL) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_POWER4_CTRL) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_BUZZER) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_D) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOH_C) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOH_B) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_POWER1_CTRL) |\
                                     PIN_OSPEED_VERYLOW(GPIOH_POWER2_CTRL) |\
                                     PIN_OSPEED_VERYLOW(GPIOH_POWER3_CTRL) |\
                                     PIN_OSPEED_VERYLOW(GPIOH_POWER4_CTRL) |\
                                     PIN_OSPEED_VERYLOW(GPIOH_BUZZER) |     \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_D) |          \
                                     PIN_OSPEED_VERYLOW(GPIOH_C) |          \
                                     PIN_OSPEED_VERYLOW(GPIOH_B) |          \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_FLOATING(GPIOH_POWER1_CTRL) |\
                                     PIN_PUPDR_FLOATING(GPIOH_POWER2_CTRL) |\
                                     PIN_PUPDR_FLOATING(GPIOH_POWER3_CTRL) |\
                                     PIN_PUPDR_FLOATING(GPIOH_POWER4_CTRL) |\
                                     PIN_PUPDR_FLOATING(GPIOH_BUZZER) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_D) |          \
                                     PIN_PUPDR_FLOATING(GPIOH_C) |          \
                                     PIN_PUPDR_FLOATING(GPIOH_B) |          \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_POWER1_CTRL) |      \
                                     PIN_ODR_HIGH(GPIOH_POWER2_CTRL) |      \
                                     PIN_ODR_HIGH(GPIOH_POWER3_CTRL) |      \
                                     PIN_ODR_HIGH(GPIOH_POWER4_CTRL) |      \
                                     PIN_ODR_HIGH(GPIOH_BUZZER) |           \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_D) |                \
                                     PIN_ODR_HIGH(GPIOH_C) |                \
                                     PIN_ODR_HIGH(GPIOH_B) |                \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_POWER1_CTRL, 0U) |   \
                                     PIN_AFIO_AF(GPIOH_POWER2_CTRL, 0U) |   \
                                     PIN_AFIO_AF(GPIOH_POWER3_CTRL, 0U) |   \
                                     PIN_AFIO_AF(GPIOH_POWER4_CTRL, 0U) |   \
                                     PIN_AFIO_AF(GPIOH_BUZZER, 9U) |        \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_D, 0U) |             \
                                     PIN_AFIO_AF(GPIOH_C, 0U) |             \
                                     PIN_AFIO_AF(GPIOH_B, 0U) |             \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 * GPIOI setup:
 *
 * PI0  - A                         (input floating).
 * PI1  - PIN1                      (input floating).
 * PI2  - Z                         (input floating).
 * PI3  - PIN3                      (input floating).
 * PI4  - PIN4                      (input floating).
 * PI5  - W                         (input floating).
 * PI6  - X                         (input floating).
 * PI7  - Y                         (input floating).
 * PI8  - PIN8                      (input floating).
 * PI9  - Q2                        (input floating).
 * PI10 - PIN10                     (input floating).
 * PI11 - PIN11                     (input floating).
 * PI12 - PIN12                     (input floating).
 * PI13 - PIN13                     (input floating).
 * PI14 - PIN14                     (input floating).
 * PI15 - PIN15                     (input floating).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_A) |              \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_Z) |              \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_W) |              \
                                     PIN_MODE_INPUT(GPIOI_X) |              \
                                     PIN_MODE_INPUT(GPIOI_Y) |              \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_Q2) |             \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_A) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_Z) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_W) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOI_X) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOI_Y) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_Q2) |         \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOI_A) |          \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_Z) |          \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_W) |          \
                                     PIN_OSPEED_VERYLOW(GPIOI_X) |          \
                                     PIN_OSPEED_VERYLOW(GPIOI_Y) |          \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_Q2) |         \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_FLOATING(GPIOI_A) |          \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_Z) |          \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_W) |          \
                                     PIN_PUPDR_FLOATING(GPIOI_X) |          \
                                     PIN_PUPDR_FLOATING(GPIOI_Y) |          \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_Q2) |         \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_A) |                \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_Z) |                \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_W) |                \
                                     PIN_ODR_HIGH(GPIOI_X) |                \
                                     PIN_ODR_HIGH(GPIOI_Y) |                \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_Q2) |               \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_A, 0U) |             \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_Z, 0U) |             \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_W, 0U) |             \
                                     PIN_AFIO_AF(GPIOI_X, 0U) |             \
                                     PIN_AFIO_AF(GPIOI_Y, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_Q2, 0U) |            \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0U))

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
