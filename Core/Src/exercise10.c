/*
 * exercise10.c
 *
 *  Created on: Sep 5, 2024
 *      Author: nguye
 */


#include "exercise10.h"
#include "exercise6.h" // use exercise6_init()
#include "exercise7.h" // use clearAllClock()
#include "exercise8.h" // use setNumberOnClock(int num)

#define LED_ON 1
#define LED_OFF 0

/**
  * @brief Use for testing all GPIOs necessary
  */
void exercise10_init()
{
	exercise6_init();
}

/**
  * @brief Simulate a analog clock 00:00:00 -> 11:59:59
  */
void exercise10_run()
{
	// 00:00:00 -> 11:59:59
	int hour = 0;
	int minute = 0;
	int second = 0;

	while (1)
	{
		clearAllClock();
		setNumberOnClock(hour);
		setNumberOnClock(minute / 5);
		setNumberOnClock(second / 5);

		++second;
		if (second >= 60)
		{
			++minute;
			second = 0;
		}
		if (minute >= 60)
		{
			++hour;
			minute = 0;
		}
		if (hour >= 12)
		{
			hour = 0;
		}

		HAL_Delay(200);
	}
}
