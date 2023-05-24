#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to be searched
* @size: size of array
* @cmp:  pointer to the function to be used to compare values
* Return: findex -  index of the first element for which the 
* cmp function does not return 0, 
* If no element matches or size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
