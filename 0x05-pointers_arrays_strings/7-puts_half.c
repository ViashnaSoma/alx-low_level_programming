#include "main.h"

/**
* puts_half - prints half of a string
* @str: Pointer for string
* Return: no return value
*/

void puts_half(char *str)
{
	int length = 0, check = 0, halflength, length2;

	while (check == 0)
	{
		if (*(str + length) == 0)
		{
			check = 1;
		}
		else
		{
			length++;
		}
	}
	length2 = length;
	if ((length % 2) != 0)
	{
		length2 = length - 1;
	}
	halflength = length2 / 2;
	while (halflength <= length)
	{
		_putchar(*(str + halflength));
		halflength++;
	}
	_putchar('\n');
}
