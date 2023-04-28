#include "main.h"

/**
* print_diagonal - prints diagonal lines
* @n: integer for number of diagonal lines
* Return: no return value
*/

void print_diagonal(int n)
{
	int count = 0, space;

	if (n > 0)
	{
		while (n > 0)
		{
			for (space = 1; space <= count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			count++;
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
