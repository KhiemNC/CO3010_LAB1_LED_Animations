/*
 * exercise8.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */

#include "exercise8.h"
#include "exercise6.h" // use exercise6_init()
#include "exercise7.h" // use clearAllClock()

#define LED_ON 1
#define LED_OFF 0

/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise8_init()
{
	exercise6_init();
}

/**
  * @brief Simulate the setNumberOnClock(int num) function,
  * this will turn on all leds in sequence from led 11 to led 0/12
  */
void exercise8_run()
{
	int counter = 11;
	clearAllClock();

	while (1)
	{
		if (counter < 0)
		{
			counter = 11;
			clearAllClock();
		}


		setNumberOnClock(counter);

		--counter;

		HAL_Delay(1000);
	}
}

/**
  * @brief Set a number (a led) on the clock, which not affect to the others led
  * @param  num: Specifies the number need to turn on, from 0 to 11
  * @retval None
  */
void setNumberOnClock(int num)
{
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_ON);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_ON);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_ON);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_ON);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_ON);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_ON);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_ON);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_ON);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_ON);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_ON);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_ON);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_ON);
			break;
		default:
			break;
	}
}
