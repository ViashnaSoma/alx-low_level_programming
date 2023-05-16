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
	int arr[height, width], h, w;
	
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			arr[h, w] = 0;
		}
	}
	return (*arr);
}
