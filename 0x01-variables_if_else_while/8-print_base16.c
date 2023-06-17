#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char base16Chars[] = "0123456789abcdef";
	int arrLen;
	int i;

	arrLen = strlen(base16Chars);
	for (i = 0; i < arrLen; i++)
	{
		putchar(base16Chars[i]);
	}

	putchar('\n');

	return (0);
}
