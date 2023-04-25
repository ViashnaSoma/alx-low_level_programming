#include "main.h"

/**
* print_alphabet_x10 - prints the word _putchar 10 times
*/
void print_alphabet_x10(void)
{
	int i = 0, count;

	while (i < 10)
	{
		count = 97;
		while (count < 123)
		{
			_putchar(count);
			count++;
		}
		_putchar('\n');
		i++;
	}
}
