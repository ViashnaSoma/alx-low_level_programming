#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number to clear
 * @index: index position to change
 * Return: 1 for success,or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;
	unsigned int index2;

	if (index > 64)
	{
		return (-1);
	}
	index2 = index;
	for (count = 1; index2 > 0; count *= 2, index2--)
		;

	if ((*n >> index) & 1)
	{
		*n -= count;
	}
	return (1);
}
