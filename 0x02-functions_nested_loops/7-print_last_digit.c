#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: integer input value
 * Return: integer value
 */

int print_last_digit(int c)
{
	int last;

	last = abs(c % 10);
	putchar(last + '0');

	return (last);
}
