#include "main.h"
#include <stdio.h>

/**
* main - determines and prints highest common factor
* Return: 0 for success
*/

int main(void)
{
	long int num = 612852475143;
	int prime, i = 1, div = 1, count = 0;

	while ( i <= num)
	{
		if (num % i == 0)
		{
			while (div <= i)
			{
				if ((i % div) == 0)
				{
					count++;
				}
				div++;
			}
			if (count == 2)
			{
				prime = i;
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("%d", prime);
	return (0);
}
