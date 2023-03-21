#include "main.h"

/**
 * print_to_98 - unction that prints all natural numbers from n to 98
 *@n: int to check
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n > 97)
	{
		for (n; n > 97; n--)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0);
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0);
				_putchar((n % 10) + '0');
			}
		}
	}
	else
	{
		for (n; n < 98; n++)
		{
			_putchar((n / 10) + '0);
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
