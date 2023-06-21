#include "main.h"

/**
 * _isalpha - check if input is a lowercase character
 * or uppercase character
 * @c: integer value of character
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	char a, A;
	int firstTest, secondTest;
	int lowercaseBound, uppercaseBound;

	a = 'a';
	A = 'A';
	lowercaseBound = a + 25;
	uppercaseBound = A + 25;
	firstTest = a <= c && c <= lowercaseBound;
	secondTest = c >= A && c <= uppercaseBound;
	return ((firstTest || secondTest) ? 1 : 0);
}
