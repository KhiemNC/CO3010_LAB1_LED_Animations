/*
 * exercise6.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */

#include "exercise6.h"

#define LED_ON 1
#define LED_OFF 0

/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise6_init()
{
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
	HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
	HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
	HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
	HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
	HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
	HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
	HAL_GPIO_TogglePin(LED_12_GPIO_Port, LED_12_Pin);
}

/**
  * @brief Simulate the schematic of an analog clock,
  * every single led will be turn on in sequence anticlockwise (12 to 1)
  */
void exercise6_run()
{
	int counter = 12;
	while (1)
	{
		switch (counter) {
			case 1:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_ON);
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
				break;
			case 2:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_ON);
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
				break;
			case 3:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 4:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 5:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 6:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 7:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 8:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 9:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 10:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 11:
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
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_OFF);
				break;
			case 12:
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
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, LED_ON);
				break;
			default:
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
				break;
		}

		--counter;
		if (counter <= 0)
		{
			counter = 12;
		}

		HAL_Delay(1000);
	}
}
