/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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
#define VLCD_Pin GPIO_PIN_3
#define VLCD_GPIO_Port GPIOC
#define JOY_CENTER_Pin GPIO_PIN_0
#define JOY_CENTER_GPIO_Port GPIOA
#define JOY_LEFT_Pin GPIO_PIN_1
#define JOY_LEFT_GPIO_Port GPIOA
#define JOY_RIGHT_Pin GPIO_PIN_2
#define JOY_RIGHT_GPIO_Port GPIOA
#define JOY_UP_Pin GPIO_PIN_3
#define JOY_UP_GPIO_Port GPIOA
#define MFX_WAKEUP_Pin GPIO_PIN_4
#define MFX_WAKEUP_GPIO_Port GPIOA
#define JOY_DOWN_Pin GPIO_PIN_5
#define JOY_DOWN_GPIO_Port GPIOA
#define LD_R_Pin GPIO_PIN_2
#define LD_R_GPIO_Port GPIOB
#define LD_G_Pin GPIO_PIN_8
#define LD_G_GPIO_Port GPIOE
#define OTG_FS_PowerSwitchOn_Pin GPIO_PIN_9
#define OTG_FS_PowerSwitchOn_GPIO_Port GPIOC
#define COM0_Pin GPIO_PIN_8
#define COM0_GPIO_Port GPIOA
#define COM1_Pin GPIO_PIN_9
#define COM1_GPIO_Port GPIOA
#define COM2_Pin GPIO_PIN_10
#define COM2_GPIO_Port GPIOA
#define OTG_FS_DM_Pin GPIO_PIN_11
#define OTG_FS_DM_GPIO_Port GPIOA
#define OTG_FS_DP_Pin GPIO_PIN_12
#define OTG_FS_DP_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
