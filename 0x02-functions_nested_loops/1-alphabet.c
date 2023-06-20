#include "main.h"
#include <string.h>

/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
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
