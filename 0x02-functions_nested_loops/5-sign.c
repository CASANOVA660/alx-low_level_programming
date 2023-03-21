#include "main.h"

/**
 *print_sign - function that prints the sign of a number.
 *@n : integer to check
 * Return: Always 0 or 1 or -1 .
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+' + 49);
		return (+1);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
