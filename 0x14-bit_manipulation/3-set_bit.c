#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1
 * @n: int pointer
 * @index: bit index
 * Return: 1 for success or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mult = 1, index2 = index;

	while (index2)
	{
		mul *= 2;
		index2--;
	}
	*n = *n + mul;
	return (1);
}
