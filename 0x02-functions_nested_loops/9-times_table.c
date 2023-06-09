#include "main.h"
/**
 * times_table - function prints the 9 times table
 */
void times_table(void)
{
	int num = 0, mult, result, d1, d2;

	while (num <= 9)
	{
		mult = 0;
		while (mult <= 9)
		{
			result = num * mult;
			if (result > 9)
			{
				d1 = result / 10;
				d2 = result % 10;
				_putchar(d1 + 48);
				_putchar(d2 + 48);
			}
			else
			{
				if (mult != 0)
				{
					_putchar(' ');
					_putchar(result + 48);
				}
				else
				{
					_putchar(result + 48);
				}
			}
			if (mult != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar('\n');
			}
			mult++;
		}
		num++;
	}
}
