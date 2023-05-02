#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to a struct
 * Return:  the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nbnodes = 0;

	while (h != NULL)
	{
		nbnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nbnodes);
}
