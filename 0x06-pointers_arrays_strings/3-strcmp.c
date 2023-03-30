#include "main.h"

/**
 *_strcmp - compares two strings.
 *@s1: pointer
 *@s2: pointer
 *
 *Return: value less than 0 if string is less than the other.
 */

int _strcmp(char *s1, char *s2)
{
	int c, cm;

	counter = 0;
	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}

	cm = s1[c] - s2[c];
	return (cm);
}
