#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer.
 *@n: integer to check.
 *Return: Always n.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
