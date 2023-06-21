#include "main.h"

/**
 * _islower - returns 1 if input is a lowercase character
 * @c: integer value of character
 * Return: 0 or 1
 */

int _islower(int c)
{
	char a;
	int upperBound;

	a = 'a';
	upperBound = a + 25;

	return (a <= c && c <= upperBound ? 1 : 0);
}
