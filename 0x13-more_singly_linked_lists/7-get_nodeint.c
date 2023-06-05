#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - gets a node at an index
 * @head: pointer to first node
 * @index: index in list
 * Return: pointer to node in list, else null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nextp = head;
	unsigned int count = 0;

	while (nextp != NULL)
	{
		if (count == index)
		{
			return (nextp);
		}
		nextp = nextp->next;
		count++;
	}
	return (NULL);
}
