#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to a pointer to first node
 * @idx: index in list to insert at
 * @n: integer to insert
 * Return: pointer to node in list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur_p = *head, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (cur_p != NULL)
	{
		if (count == idx - 1)
		{
			new->n = n;
			new->next = cur_p->next;
			cur_p->next = new;
			return (new);
		}
		cur_p = cur_p->next;
		count++;
	}
	return (NULL);
}
