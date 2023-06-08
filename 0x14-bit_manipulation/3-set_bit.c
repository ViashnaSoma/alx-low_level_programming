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
	unsigned long int power;

	if (index > 64)
	{
		return (-1);
	}

	for (power = 1; index > 0; index--, power *= 2)
		;
	*n += power;

	return (1);
}
