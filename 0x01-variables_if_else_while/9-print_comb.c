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
	int commaAsciiValue;
	int spaceAsciiValue;

	i = 0;
	beginningOfAsciiSet = 48;
	commaAsciiValue = 44;
	spaceAsciiValue = 32;
	while (i < 10)
	{
		putchar(i + beginningOfAsciiSet);
		if (i + 1 != 10)
		{
			putchar(commaAsciiValue);
			putchar(spaceAsciiValue);
		}

		i++;
	}
	putchar('\n');

	return (0);
}
