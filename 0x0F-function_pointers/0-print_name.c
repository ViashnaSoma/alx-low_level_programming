#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: print function
 * Return: No return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && *name && f)
	{
		f(name);
	}
}
