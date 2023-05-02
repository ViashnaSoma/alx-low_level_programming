#include "main.h"

/**
* print_rev - prints string in reverse
* @s: Pointer for string
* Return: no return value
*/

void print_rev(char *s)
{
	int length = 0, check = 0;

	while (check == 0)
	{
		if (*(s + length) == 0)
		{
			check = 1;
		}
		else
		{
			length++;
		}
	}
	
	while (length > -1)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
