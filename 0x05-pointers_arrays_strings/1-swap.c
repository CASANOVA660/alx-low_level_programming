#include "main.h"


/**
 * swap_int - function that swaps the values of two integers
 * @a: first int
 * @b: sec int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
