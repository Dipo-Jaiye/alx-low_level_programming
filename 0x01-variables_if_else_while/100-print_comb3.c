#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j;
	int beginningOfAsciiSet;
	int commaAsciiValue;
	int spaceAsciiValue;

	i = 0;
	beginningOfAsciiSet = 48;
	commaAsciiValue = 44;
	spaceAsciiValue = 32;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i != j)
			{
				if (((i * 10) + j) < ((j * 10) + i))
				{
					putchar(i + beginningOfAsciiSet);
					putchar(j + beginningOfAsciiSet);

					if (((i * 10) + j) < 89)
					{
						putchar(commaAsciiValue);
						putchar(spaceAsciiValue);
					}
				}
			}
			j++;
		}

		i++;
	}
	putchar('\n');

	return (0);
}
