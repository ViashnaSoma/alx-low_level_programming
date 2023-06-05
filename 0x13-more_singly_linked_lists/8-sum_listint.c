#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sums up all nodes in list
 * @head: pointer to first node
 * Return: sum of list, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *cur_p = head;
	int sum = 0;

	while (cur_p != NULL)
	{
		sum += cur_p->n;
		cur_p = cur_p->next;
	}
	return (sum);
}
