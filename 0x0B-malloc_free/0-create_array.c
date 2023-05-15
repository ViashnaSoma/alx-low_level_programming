#include "main.h"

/**
* create_array - creates an array of chars, and initializes it with a specific char
* @size: array size
* @c: initial character
* Return: arr for success and NULL if not
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	int count = 0;
	
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		while (count < size)
		{
			arr[count] = c;
			count++;
		}
		return (arr);
	}
}
