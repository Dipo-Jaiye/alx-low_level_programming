#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int beginningOfAsciiSet;

	i = 0;
	beginningOfAsciiSet = 48;
	while (i < 10)
	{
		putchar(i + beginningOfAsciiSet);
		i++;
	}
	putchar('\n');

	return (0);
}
