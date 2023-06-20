#include <stdio.h>

/**
 * main - entry point
 *
 * This program prints three combinations in a ascending order
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	int asciiDigitStart;

	asciiDigitStart = 48;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i != j && j != k && i != k && i < j && j < k)
				{
					putchar(i + asciiDigitStart);
					putchar(j + asciiDigitStart);
					putchar(k + asciiDigitStart);
					if ((i * 100) + (j * 10) + k + 1 < 790)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
