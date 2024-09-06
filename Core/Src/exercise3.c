/*
 * exercise3.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */
#include "exercise3.h"

#define LED_ON 0
#define LED_OFF 1

typedef enum
{
	RED,
	YELLOW,
	GREEN
} TrafficLightState;

#define RED_TIME 5
#define YELLOW_TIME 2
#define GREEN_TIME 3

/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise3_init()
{
	HAL_GPIO_TogglePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin);
	HAL_GPIO_TogglePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin);
}

/**
  * @brief Simulate the behavior of a 4-way traffic light
  */
void exercise3_run()
{
	TrafficLightState way1_led_status = RED;
	int way1_counter = RED_TIME;

	TrafficLightState way2_led_status = GREEN;
	int way2_counter = GREEN_TIME;

	while (1)
	{
		switch (way1_led_status) {
			case RED:
				HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, LED_OFF);

				--way1_counter;
				if (way1_counter <= 0)
				{
					way1_led_status = GREEN;
					way1_counter = GREEN_TIME;
				}
				break;
			case GREEN:
				HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, LED_ON);

				--way1_counter;
				if (way1_counter <= 0)
				{
					way1_led_status = YELLOW;
					way1_counter = YELLOW_TIME;
				}
				break;
			case YELLOW:
				HAL_GPIO_WritePin(LED_RED_WAY1_GPIO_Port, LED_RED_WAY1_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_YELLOW_WAY1_GPIO_Port, LED_YELLOW_WAY1_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_GREEN_WAY1_GPIO_Port, LED_GREEN_WAY1_Pin, LED_OFF);

				--way1_counter;
				if (way1_counter <= 0)
				{
					way1_led_status = RED;
					way1_counter = RED_TIME;
				}
				break;
			default:
				break;
		}

		switch (way2_led_status) {
			case RED:
				HAL_GPIO_WritePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin, LED_OFF);

				--way2_counter;
				if (way2_counter <= 0)
				{
					way2_led_status = GREEN;
					way2_counter = GREEN_TIME;
				}
				break;
			case GREEN:
				HAL_GPIO_WritePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin, LED_ON);

				--way2_counter;
				if (way2_counter <= 0)
				{
					way2_led_status = YELLOW;
					way2_counter = YELLOW_TIME;
				}
				break;
			case YELLOW:
				HAL_GPIO_WritePin(LED_RED_WAY2_GPIO_Port, LED_RED_WAY2_Pin, LED_OFF);
				HAL_GPIO_WritePin(LED_YELLOW_WAY2_GPIO_Port, LED_YELLOW_WAY2_Pin, LED_ON);
				HAL_GPIO_WritePin(LED_GREEN_WAY2_GPIO_Port, LED_GREEN_WAY2_Pin, LED_OFF);

				--way2_counter;
				if (way2_counter <= 0)
				{
					way2_led_status = RED;
					way2_counter = RED_TIME;
				}
				break;
			default:
				break;
		}

		HAL_Delay(1000);
	}
}
