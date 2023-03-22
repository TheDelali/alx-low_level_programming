#include <unistd.h>
#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int hour, minute;
	char buffer[6];

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; hour < 60; minute++)
		{
			buffer[0] = hour / 10 + '0';
			buffer[1] = hour % 10 +'0';
			buffer[2] = ':';
			buffer[3] = minute / 10 +'0';
			buffer[4] = minute % 10 +'0';
			buffer[5] = '\n';
			write(STDOUT_FILENO, buffer, 6);
		}
	}
}
