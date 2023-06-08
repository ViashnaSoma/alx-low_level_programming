#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need 
 * to flip to get from one number to another.
 * @n: num 1
 * @m: num 2
 * Return: number of bits that need to flip through
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int less;
	int sum;

	less = n ^ m;
	sum = 0;

	while (less)
	{
		sum++;
		less &= (less - 1);
	}

	return (sum);
}
