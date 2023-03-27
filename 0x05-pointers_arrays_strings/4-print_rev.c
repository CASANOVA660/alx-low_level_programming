#include "main.h"

/**
 * print_rev - Entry point
 * takes pointer of first and prints the string in reverse
 * @s: pointer to first character
 * Return: void
 **/

void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
