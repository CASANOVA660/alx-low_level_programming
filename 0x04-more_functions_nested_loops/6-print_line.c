#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: integer to check.
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar(95);
	}
	else
		_putchar('\n');
	_putchar('\n');
}
