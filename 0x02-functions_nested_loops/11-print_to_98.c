#include "main.h"

/**
 * print_to_98 - prints numbers between 98 and number
 *
 * @n: number to print
 *
 * Return: void
 */

void print_to_98(int n)
{
	int start, end;
	int i;

	if (n > 98)
	{
		start = 98;
		end = n + 1;
	}
	else
	{
		start = n;
		end = 98 + 1;
	}
	for (i = start; i < end; i++)
	{
		_putchar(i + '0');
	}
}
