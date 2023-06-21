#include "main.h"

/**
 * jack_bauer - prints all the time in a day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;
	int i, j;

	hour = 24;
	minute = 60;
	for (i = 0; i < hour; i++)
	{
		for (j = 0; j < minute; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
