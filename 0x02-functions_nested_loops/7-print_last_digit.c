#include "main.h"
#include <limits.h>

/**
 *print_last_digit - function that prints the last digit of a number.
 *@n: integer to check.
 *Return: Always 0.
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -n % 10;
		_putchar(l + 48);
	}
	else if (n == INT_MIN)
	{
		l = -n % 10;
		_putchar(l + 48);
	}
	else
	{
		l = n % 10;
		_putchar(l + 48);
	}
	return (l);
}
