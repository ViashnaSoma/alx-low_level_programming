#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in new element
 * Return: pointer to the new node, or NULL for failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *temp = *head;

	last = malloc(sizeof(listint_t));
	if (!last)
	{
		return (NULL);
	}
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = last;

	return (last);
}
