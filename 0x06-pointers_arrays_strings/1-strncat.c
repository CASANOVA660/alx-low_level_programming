#include "main.h"

/**
 *_strncat - function that concatenates two strings.
 *@dest: pointer to check.
 *@src: pointer to check.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, j;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
