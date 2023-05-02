#include "main.h"

/**
 * _puts - Prints a string
 * @str: Pointer for string
 * Return: no return value
 */

void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != 0)
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
