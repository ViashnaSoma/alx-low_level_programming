#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: Array width
* @height: Array height
* Return: arr for success, NULL for failure
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int h, w;

	if  ((height <= 0) || (width <= 0))
	{
		return (NULL);
	}
	arr = malloc(width * height * sizeof(int));
	if (!arr)
	{
		return (NULL);
		for (h = 0; h < height; h++)
		{
			free(arr[h]);
		}
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
