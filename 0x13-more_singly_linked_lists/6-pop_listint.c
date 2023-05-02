#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the head
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data;

	if (!head)
		return (0);
	else
	{
		data = (*head)->n;
		*head = (*head)->next;
		free(ptr);
	}
	return (data);
}
