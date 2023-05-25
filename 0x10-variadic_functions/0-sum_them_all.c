#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
* Return: 0 if n = 0, else sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i =0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
