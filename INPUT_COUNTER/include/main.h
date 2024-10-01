/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TERMO2_SO_Pin GPIO_PIN_2
#define TERMO2_SO_GPIO_Port GPIOC
#define RPM_Pin GPIO_PIN_0
#define RPM_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_1
#define LED_GPIO_Port GPIOA
#define TERMO1_CS_Pin GPIO_PIN_4
#define TERMO1_CS_GPIO_Port GPIOA
#define TERMO1_SCK_Pin GPIO_PIN_5
#define TERMO1_SCK_GPIO_Port GPIOA
#define PRESSURE_SENS_P_Pin GPIO_PIN_6
#define PRESSURE_SENS_P_GPIO_Port GPIOA
#define PRESSURE_SENS_N_Pin GPIO_PIN_7
#define PRESSURE_SENS_N_GPIO_Port GPIOA
#define PWM_EDF_1_Pin GPIO_PIN_9
#define PWM_EDF_1_GPIO_Port GPIOE
#define PWM_EDF_2_Pin GPIO_PIN_11
#define PWM_EDF_2_GPIO_Port GPIOE
#define PWM_FUEL_PUMP_Pin GPIO_PIN_13
#define PWM_FUEL_PUMP_GPIO_Port GPIOE
#define SSR_PYRO_Pin GPIO_PIN_9
#define SSR_PYRO_GPIO_Port GPIOD
#define SSR_FUEL_INIT_Pin GPIO_PIN_10
#define SSR_FUEL_INIT_GPIO_Port GPIOD
#define TERMO2_SCK_Pin GPIO_PIN_9
#define TERMO2_SCK_GPIO_Port GPIOA
#define TERMO2_CS_Pin GPIO_PIN_10
#define TERMO2_CS_GPIO_Port GPIOA
#define FUEL_FLOW_Pin GPIO_PIN_3
#define FUEL_FLOW_GPIO_Port GPIOB
#define TERMO1_SO_Pin GPIO_PIN_4
#define TERMO1_SO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
