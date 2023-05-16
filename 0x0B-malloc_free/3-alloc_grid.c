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

	arr = malloc(width * height * sizeof(int));
	if ((!arr) || (height <= 0) || (width <= 0))
	{
		return (NULL);
		free(arr);
	}
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			arr[h][w] = 0;
		}
	}
	return (arr);
}
