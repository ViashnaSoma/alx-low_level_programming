#include "main.h"

/**
* print_triangle - Prints a square using #
* @size: size of triangle
* Return: No Return values
*/

void print_triangle(int size)
{
	int c, count, tri = 1;

	if (size > 0)
	{
		while (size > 0)
		{
			c = size - 1;
			for (count = 0; count < c; count++)
			{
				_putchar(' ');
			}
			for (count = 0; count < tri; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
			tri++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
