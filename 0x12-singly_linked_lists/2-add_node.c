#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add to the node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lis;
	unsigned int len = 0;

	while (str[len])
		len++;

	lis = malloc(sizeof(list_t));
	if (!lis)
		return (NULL);

	lis->str = strdup(str);
	lis->len = len;
	lis->next = (*head);
	(*head) = lis;

	return (*head);
}
