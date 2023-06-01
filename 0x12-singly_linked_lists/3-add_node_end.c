#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *lis;
	list_t *temp = *head;

	while (str[len])
		len++;

	lis = malloc(sizeof(list_t));
	if (!lis)
		return (NULL);

	lis->str = strdup(str);
	lis->len = len;
	lis->next = NULL;

	if (*head == NULL)
	{
		*head = lis;
		return (lis);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = lis;

	return (lis);
}
