#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num1 = 1;
	char *num2 = (char *)&num1;

	return ((int)*num2);
}
