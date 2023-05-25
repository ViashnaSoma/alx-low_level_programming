#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings -  prints strings, followed by a new line
* @separator: the string to be printed between the strings
* @n: number of arguments
* Return: No return value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator)
	{
		for (i = 0; i < (n - 1); i++)
		{
