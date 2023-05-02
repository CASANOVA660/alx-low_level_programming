#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements
 * @h : pointer to struct
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
