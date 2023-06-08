#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - receives the bit at given index
 * @n: int bit
 * @index: bit index
 * Return: value of bit, or -1 for failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index > 64)
	{
		return (-1);
	}
	check = n >> index;

	return (check & 1);
}
