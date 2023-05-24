#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function
* given as a parameter on each element of an array
* @array: array to be actioned
* @size: size of the array
* @action:  a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int count;

	if (array && size && action)
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
