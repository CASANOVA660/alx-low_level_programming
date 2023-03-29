#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to dest.
 * @src: pointer to src.
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, j;

	while (l != '\0')
		l++;
	for (j = 0; j != '\0'; j++; l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
