#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: format of argument
* Return: no return value
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int count = 0, flag = 0, i;
	char *str;
	char form[] = "cifs";

	va_start(ap, format);

	while (format && format[count])
	{
		i = 0;
		while (form[i])
		{
			if (format[count] == form[i] && flag)
			{
				printf(", ");
				break;
			} i++;
		}
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), flag = 1;
			break;
		case 's':
			str = va_arg(ap, char *), flag = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} count++;
	}
	printf("\n");
	va_end(ap);
}	
