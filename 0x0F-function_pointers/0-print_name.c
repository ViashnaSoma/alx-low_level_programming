#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", name);
}
