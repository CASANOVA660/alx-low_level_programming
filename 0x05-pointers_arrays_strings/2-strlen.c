#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: int to check
 * Return: Always int.
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
