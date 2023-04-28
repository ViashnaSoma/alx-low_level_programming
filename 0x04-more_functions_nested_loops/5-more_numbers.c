#include "main.h"

/**
* more_numbers - prints 0 to 14 ten times
* Return: no return value
*/

void more_numbers(void)
{
	int i = 0;
	
	int count = 0;
	
	while (count <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + 48);
		}
		count++;
		putchar('/n');
	}
}
