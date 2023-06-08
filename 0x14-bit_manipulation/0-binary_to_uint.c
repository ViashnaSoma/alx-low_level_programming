#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number or 0 for failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int blen;

	if (b == NULL)
		return (0);

	for (blen = 0; b[blen]; blen++)
	{
		if (b[blen] != '0' && b[blen] != '1')
			return (0);
	}

	for (power = 1, sum = 0, blen--; blen >= 0; blen--, power *= 2)
	{
		if (b[blen] == '1')
			sum += power;
	}

	return (sum);
}
