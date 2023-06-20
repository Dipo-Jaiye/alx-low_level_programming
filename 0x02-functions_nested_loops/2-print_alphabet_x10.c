#include "main.h"
#include <string.h>

/**
 * print_alphabet_x10 - prints all lowercase alphabets
 * ten times.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
		int arrLen;
		int i;

		arrLen = strlen(alphabets);
		for (i = 0; i < arrLen; i++)
		{
			putchar(alphabets[i]);
		}

		putchar('\n');
	}
}
