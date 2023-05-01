#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of element.
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t  nb = 0;

	while (h != NULL)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
