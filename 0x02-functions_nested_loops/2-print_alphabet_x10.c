#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a;

	a = 0;

	while (a <= 10)
	{
		print_alphabet();
		a++;
	}
	_putchar('\n');
}
