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
	unsigned int i = 0, check;

	check = n;
	
	if (index > 64)
	{
		return (-1);
	}
	while (check)
	{
		i++;
		check = check >> 1;
	}
	if (index < i)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
