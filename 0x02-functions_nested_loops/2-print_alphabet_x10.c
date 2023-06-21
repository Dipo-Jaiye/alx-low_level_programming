#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets
 * ten times.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	char a;
	int arrLen;

	a = 'a';
	arrLen = 26;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 0; i < arrLen; i++)
		{
			_putchar(i + a);
		}

		_putchar('\n');
	}
}
