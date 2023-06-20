#include "main.h"

/**
 * _islower - returns 1 if input is a lowercase character
 * @c: integer value of character
 * Return: 0 or 1
 */

int _islower(int c)
{
	return (islower(c) > 0 ? 1 : 0);
}
