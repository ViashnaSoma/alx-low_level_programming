#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: memory allocation sizw
* Return: 98 for error or mem for success
*/

void *malloc_checked(unsigned int b)
{
	int *mem;

	if (b == 0)
	{
		return (98);
	}
	else 
	{
		mem = malloc(b);
		if (mem = NULL)
		{
			return (98);
		}
		else
		{
			return (mem);
		}
	}
}
