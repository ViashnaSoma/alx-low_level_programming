#include "main.h"

/**
* void print_line - prints a straight line
* @n - integer for line length
* Return: no return value
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(_);
		}
		putchar('\n');
	}
} 
