#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet(void)
	{
		char c;
		for (c = 97; c <= 122; c++)
			_putchar(c);
		_putchar('\n');
		return (0);
	}
	print_alphabet();
	return (0);
}
