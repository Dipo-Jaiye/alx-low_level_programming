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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 1)
	{
		puts("1");
	}
	else if (n == 2)
	{
		puts("2");
	}
	else
	{
		puts("3");
	}

	return (0);
}
