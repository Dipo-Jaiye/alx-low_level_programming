#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int arrLen;
	int i;
	int j;

	arrLen = strlen(lowercase);
	for (i = 0; i < arrLen; i++)
	{
		putchar(lowercase[i]);
	}

	for (j = 0; j < arrLen; j++)
	{
		putchar(uppercase[j]);
	}

	putchar('\n');

	return (0);
}
