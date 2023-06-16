#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 *
 * Return: 1 (always fail)
 */
int main(void)
{
	char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(message, sizeof(char), strlen(message), stderr);

	return (1);
}
