#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  print_numbers - prints out numbers given
 * @separator: string to be seperated between numbers
 * @n: number of arguements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
