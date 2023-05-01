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
	list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)");
			ptr = ptr->next;
			nbnode++;
		else
		{
			printf("[%u]%s\n", ptr->len, ptr->str);
			nbnode++;
			ptr = ptr->next;
		}
	return (nbnode);
}
