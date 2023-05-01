#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nbnode = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
			nbnode++;
		else
		{
			printf("[%u]%s\n", h->len, h->str);
			nbnode++;
			h = h->next;
		}
	return (nbnode);
}
