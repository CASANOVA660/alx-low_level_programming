#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int nbelememt = 0;

	while (h != NULL)
	{
		nbelement++;
		h = h->next;
	}
	return (nbelement);
}	
