/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define WS2812_OUTPUT_Pin GPIO_PIN_1
#define WS2812_OUTPUT_GPIO_Port GPIOA
#define UART_ESP8266_TX_Pin GPIO_PIN_2
#define UART_ESP8266_TX_GPIO_Port GPIOA
#define UART_ESP8266_RX_Pin GPIO_PIN_3
#define UART_ESP8266_RX_GPIO_Port GPIOA
#define LCD1_RESET_Pin GPIO_PIN_4
#define LCD1_RESET_GPIO_Port GPIOA
#define SPI1_SCK_LCD_Pin GPIO_PIN_5
#define SPI1_SCK_LCD_GPIO_Port GPIOA
#define LCD1_BACKLIGHT_Pin GPIO_PIN_6
#define LCD1_BACKLIGHT_GPIO_Port GPIOA
#define SPI1_MOSI_LCD_Pin GPIO_PIN_7
#define SPI1_MOSI_LCD_GPIO_Port GPIOA
#define LCD1_DATA_CMD1_Pin GPIO_PIN_0
#define LCD1_DATA_CMD1_GPIO_Port GPIOB
#define LCD1_CS_Pin GPIO_PIN_1
#define LCD1_CS_GPIO_Port GPIOB
#define I2C_SCL_HMC5883L_Pin GPIO_PIN_10
#define I2C_SCL_HMC5883L_GPIO_Port GPIOB
#define I2C_SDA_HMC5883L_Pin GPIO_PIN_11
#define I2C_SDA_HMC5883L_GPIO_Port GPIOB
#define MICROWAVE_MOVEMENT_SENSOR_Pin GPIO_PIN_12
#define MICROWAVE_MOVEMENT_SENSOR_GPIO_Port GPIOB
#define MICROWAVE_MOVEMENT_SENSOR_EXTI_IRQn EXTI15_10_IRQn
#define I2C_SCL_BMP280_CJMCU530_Pin GPIO_PIN_6
#define I2C_SCL_BMP280_CJMCU530_GPIO_Port GPIOB
#define I2C_SDA_BMP280_CJMCU530_Pin GPIO_PIN_7
#define I2C_SDA_BMP280_CJMCU530_GPIO_Port GPIOB
#define HCSR04_TRIGGER_Pin GPIO_PIN_9
#define HCSR04_TRIGGER_GPIO_Port GPIOA
#define HCSR04_ECHO_Pin GPIO_PIN_10
#define HCSR04_ECHO_GPIO_Port GPIOA
#define HCSR04_ECHO_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */
#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);
#ifdef __cplusplus
 }
#endif

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
