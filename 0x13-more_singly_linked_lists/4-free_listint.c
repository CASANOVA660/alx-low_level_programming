#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head
 * Return: always 0
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
