#include "main.h"
#include <stdio.h>

/**
* main - Prints numbers 1 to 100 and fizz if
* multiple of 3, buzz if multiple of 5 and
* fizzbuzz if multiple of 3 and 5
* Return: 0 for success
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("Fizz Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("/n");
	return (0);
}
