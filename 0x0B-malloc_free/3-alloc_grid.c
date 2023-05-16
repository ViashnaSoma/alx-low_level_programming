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
		free(arr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(width * sizeof(int));
		if (!arr[h])
		{
			for (h--; h >= 0; h--)
			{
				free(arr[h]);
			}
			free(arr);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}
	return (arr);
}
