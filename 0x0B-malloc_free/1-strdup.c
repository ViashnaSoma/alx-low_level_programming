#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: Pointer for string
* Return: NULL if str = NULL or dup for success
*/

char *_strdup(char *str)
{
	int len = 0, count = 0;
	char *dup;

	if (!str)
	{
		return (NULL);
	}
	while(str[len] != NULL)
	{
		len++;
	}
	dup = malloc(len * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	while (count < len)
	{
		dup[count] = str[count];
		count++;
	}
	return (dup);
}
