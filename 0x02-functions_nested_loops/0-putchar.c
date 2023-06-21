#include "main.h"

/**
 * main - entry point. prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char inputString[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(inputString[i]);
	}
	_putchar('\n');

	return (0);
}
