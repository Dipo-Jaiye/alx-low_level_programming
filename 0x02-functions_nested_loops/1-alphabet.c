#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char a;
	int arrLen;
	int i;

	arrLen = 26;
	a = 'a';
	for (i = 0; i < arrLen; i++)
	{
		_putchar(i + a);
	}

	_putchar('\n');
}
