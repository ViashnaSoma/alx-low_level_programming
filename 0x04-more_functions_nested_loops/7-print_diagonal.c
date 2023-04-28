#include "main.h"

/**
* print_diagonal - prints diagonal lines
* @n: integer for number of diagonal lines
* Return: no return value
*/

void print_diagonal(int n)
{
	int count = 1;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < (n-1))
		{
			_putchar(' ');
			count++;
		}
	_putchar('\\');
	_putchar('\n');
	}
}
