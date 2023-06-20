#include <stdio.h>

/**
 * main  - entry point
 *
 * prints 2 2 digit combos
 *
 * Return: 0
 */
int main(void)
{
	int asciiDigitStart;
	int firstNum;
	int secondNum;

	asciiDigitStart = 48;
	firstNum = 0;
	while (firstNum < 100)
	{
		secondNum = 0;
		while (secondNum < 100)
		{
			if (firstNum < secondNum)
			{
				putchar((firstNum / 10) + asciiDigitStart);
				putchar((firstNum % 10) + asciiDigitStart);
				putchar(' ');
				putchar((secondNum / 10) + asciiDigitStart);
				putchar((secondNum % 10) + asciiDigitStart);
				if (!(firstNum >= 98 && secondNum >= 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');

	return (0);
}
