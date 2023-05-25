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
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator)
		{
			if (i < (n - 1))
			{
				printf("%s ", separator);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
