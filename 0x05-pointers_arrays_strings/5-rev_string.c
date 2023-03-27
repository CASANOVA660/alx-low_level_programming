#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to check.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
