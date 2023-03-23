#include "main.h"

/**
 *_isupper - function that checks for uppercase character.
 *@c: integer to check.
 *Return: 1 if c is uppercase else 0.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
	return (0);
}
