#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @size: array size
* @c: initial character
* Return: arr for success and NULL if not
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		if (arr != NULL)
		{
			while (count < size)
			{
				arr[count] = c;
				count++;
			}
		}
		return (arr);
	}
}
