#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);

	if (lastDigit == 0)
	{
		printf("0\n");
	}
	else if (lastDigit <= 5)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("greater than 5\n");
	}

	return (0);
}
