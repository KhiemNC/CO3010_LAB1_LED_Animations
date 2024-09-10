/*
 * exercise9.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */

#include "exercise9.h"
#include "exercise6.h" // use exercise6_init()

#define LED_ON 1
#define LED_OFF 0

/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise9_init()
{
	exercise6_init();
}

/**
  * @brief Simulate the clearNumberOnClock(int num) function,
  * this will turn off all leds in sequence from led 11 to led 0/12
  */
void exercise9_run()
{
	int counter = 11;

	while (1)
	{
		if (counter < 0)
		{
			counter = 11;
			exercise9_init();
		}


		clearNumberOnClock(counter);

		--counter;

		HAL_Delay(1000);
	}
}

/**
  * @brief Clear a number (a led) on the clock, which not affect to the others led
  * @param  num: Specifies the number need to turn off, from 0 to 11
  * @retval None
  */
void clearNumberOnClock(int num)
{
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
			break;
		default:
			break;
	}
}
