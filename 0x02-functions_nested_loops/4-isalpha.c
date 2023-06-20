#include "main.h"

/**
 * _isalpha - check if input is a lowercase character
 * or uppercase character
 * @c: integer value of character
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return (isalpha(c) > 0 ? 1 : 0);
}
