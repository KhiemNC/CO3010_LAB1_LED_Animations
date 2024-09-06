/*
 * exercise1.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */
#include "exercise1.h"

#define LED_ON 0
#define LED_OFF 1


/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise1_init()
{
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

/**
  * @brief State transitions for 2 LEDs every 2s
  */
void exercise1_run()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, LED_ON);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, LED_OFF);
	while (1)
	{
		if (1)
		{
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
		}

		HAL_Delay(2000);
	}
}

