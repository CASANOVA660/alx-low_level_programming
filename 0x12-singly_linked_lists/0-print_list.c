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
	int nbnode = 0;
	list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d]%s\n", ptr->len, ptr->str);
			printf("-> %d elements\n", nbnode);
		}
		nbnode++;
		ptr = ptr->next;
	}
	return (nbnode);
}
