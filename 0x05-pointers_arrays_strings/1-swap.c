#include "main.h"

/**
* swap_int - swaps values of two integers
* @a: Pointer for int a
* @b: Pointer for int b
* Return: no return value
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
