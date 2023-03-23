#include "main.h"

/**
 * print_most_numbers - function that prints the numbers 0 to 9 without 2 4.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 || a == 52)
		{
			a++;
			_putchar(a);
		}
		else
			_putchar(a);
	}
	_putchar('\n');
}
