#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a;
	char c;

	a = 0;

	while (a <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		a++;
		_putchar('\n');
	}
}
