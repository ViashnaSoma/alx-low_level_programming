#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - prints a name
* @name: name to be printed
* @f: printf function
* Return: no return value
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
