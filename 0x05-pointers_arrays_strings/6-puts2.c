#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: Pointer for string
* Return: no return value
*/

void puts2(char *str)
{
	int length = 0;

	while (*(str + length) != 0)
	{
		if (((length - 1) % 2) != 0)
		{
			_putchar(*(str + length));
		}
		length++;
	}
	_putchar('\n');
}
