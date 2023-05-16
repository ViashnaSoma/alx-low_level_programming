#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: 2D array
* @height: Array height
*Return: no return value
*/

void free_grid(int **grid, int height)
{
	if ((height > 0) || (grid != 0))
	{
		for (; height > 0; height--)
		{
			free(grid[height]):
		}
		free(grid);
	}
}
