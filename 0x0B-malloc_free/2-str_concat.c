#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	unsigned int i, j, b, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	st = malloc(sizeof(char) * (i + j + 1));

	if (st == NULL)
	{
		free(st);
		return (NULL);
	}

	for (b = 0; b < i; b++)
		st[b] = s1[b];

	l = j;
	for (j = 0; j <= l; b++, j++)
		st[b] = s2[j];

	return (st);
}
