#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int arrLen;
	int i;

	arrLen = strlen(alphabets);
	for (i = arrLen - 1; i >= 0; i--)
	{
		putchar(alphabets[i]);
	}

	putchar('\n');

	return (0);
}
