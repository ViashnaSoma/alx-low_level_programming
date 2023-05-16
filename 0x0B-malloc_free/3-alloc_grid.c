#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates a 2 dimensional array
 * @width: Width of array
 * @height: Height of array
 * Return: arr if successful and null if not
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **arr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (!arr)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		*arr = malloc (height * sizeof(int));
		if (!*arr)
		{
			return (NULL);
		}
		for (w = 0; w < height; w++)
		{
			*arr[h] = 0;
		}
	}
	return (arr);
}
