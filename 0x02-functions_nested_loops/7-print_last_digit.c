#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number.
 *@n: integer to check.
 *Return: Always 0.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l + 48);
	return (l);
}
