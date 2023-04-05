#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer to string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s == '\0')
		return (0);
	else
	{
		_strlen_recursion(s + 1);
		len++;
	}

	return (len);
}
