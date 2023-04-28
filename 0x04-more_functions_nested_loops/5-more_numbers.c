#include "main.h"

/**
* more_numbers - prints 0 to 14 ten times
* Return: no return value
*/

void more_numbers(void)
{
	int i, a;

	int count = 0;

	while (count <= 10)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + 48);
		}
		for (a = 0; a <= 4; a++)
		{
			_putchar(49);
			_putchar(a + 48);
		}
		count++;
		putchar('\n');
	}
}
