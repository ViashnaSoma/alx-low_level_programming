#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value included in array
* @max: maximum value included in array
* Return: arr for success or NULL for failure
*/

int *array_range(int min, int max)
{
	int *arr;
	int count, count_min, i;
	
	if (min > max)
	{
		return (NULL);
	}
	count_min = min;
	for (count = 0; count_min <= max; count++)
	{
		count_min++;
	}
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
