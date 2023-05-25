#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* Return: No return value
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < (n - 1); i++)
	{
		if (separator)
		{
			printf("%d%s", va_arg(ap, unsigned int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, unsigned int));
		}
	}
	printf("%d\n", va_arg(ap, unsigned int));
	va_end(ap);
}
