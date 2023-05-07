#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * @b: binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;
	unsigned int len = 0;
	unsigned int p = 0;
	int i;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			s |= (1 << p);
		}
		p++;
	}
	return (s);
}
