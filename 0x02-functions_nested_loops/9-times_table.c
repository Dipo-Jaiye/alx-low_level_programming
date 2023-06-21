#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
