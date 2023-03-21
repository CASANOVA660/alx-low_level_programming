#include "main.h"

/**
 * _islower - function that checks for lowercase character with 'c' parameter .
 *
 * Return: Always 0 or 1 .
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
