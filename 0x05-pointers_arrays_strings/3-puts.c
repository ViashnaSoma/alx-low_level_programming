#include "main.h"

/**
* _puts - prints a string
* @str: Pointer of string
*Return: no return value
*/

void _puts(char *str)
{
	int check = 0, length = 0;

	while (check == 0)
	{
		if (*(str + length) == 0)
		{
			check = 1;
		}
		else
		{
			_putchar(*(str + length));
		}
	}
	_putchar('\n');
}
