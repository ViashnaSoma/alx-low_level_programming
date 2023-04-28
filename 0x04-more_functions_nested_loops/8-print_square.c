#include "main.h"

/**
* print_square - prints a square
* @size: integer for size of square
* Return: no return value
*/

void print_square(int size)
{
	int i, count;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
