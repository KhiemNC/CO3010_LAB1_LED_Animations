/*
 * exercise7.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */

#include "exercise7.h"
#include "exercise6.h" // use exercise6_init()

#define LED_ON 1
#define LED_OFF 0

/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise7_init()
{
	exercise6_init();
}

/**
  * @brief There are nothing to simulate
  */
void exercise7_run()
{
	while (1)
	{
		if (1)
		{
		}

		HAL_Delay(1000);
	}
}

/**
  * @brief Clear 12 leds of the clock
  */
void clearAllClock()
{
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
}
