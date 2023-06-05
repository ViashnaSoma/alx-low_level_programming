#include "lists.h"

/**
 * pop_listint - frees an int list
 * @head: head of the linked list.
 * Return: Return 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n;

	if (*head != NULL)
	{
		n = current->n;
		*head = current->next;
		free(current);
	}
	else
	{
		n = 0;
	}
	return (n);
}
