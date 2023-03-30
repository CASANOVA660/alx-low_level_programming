#include "main.h"
/**
*_strncpy - a function that copies a string.
*@dest: pointer to check
*@src: pointer to check
*@n: number of bytes to be used.
*
* Return: pointer to destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];
	for (; b < n; b++)
		dest[b] = '\0';

	return (dest);
}
