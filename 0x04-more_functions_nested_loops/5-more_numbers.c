#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 * Return: No Return values
 */

void more_numbers(void)
{
	int c = 0, num1, num2, limit = 9;

	while (c < 10)
	{
		num2 = 0;
		limit = 9;
		while (num2 < 2)
		{
			num1 = 0;
			if (num2 == 1)
			{
				limit = 4;
			}
			while (num1 <= limit)
			{
				if (num2 == 1)
				{
					_putchar(49);
				}
				_putchar(num1 + 48);
				num1++;
			}
			num2++;
		}
		_putchar('\n');
		c++;
	}
}
