#include "main.h"

/**
 * print_sign - prints the sign of input
 * @c: integer input
 * Return: 0 or 1 or -1
 */

int print_sign(int c)
{
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
