#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character. 
 *@c: character to check
 * Return: Always 0 or 1 .
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) && (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
