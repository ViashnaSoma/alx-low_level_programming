#include <stdio.h>
/**
*print_to_98 - returns all natural numbers from n to 98 in order
*@n: integer
*/

void print_to_98(int n)
{
	int count;

	if (n < 98)
	{
		printf("%d, ", n);
		for (count = n + 1; count < 98; count++)
		{
			printf("%d, ", count);
		}
		printf("98");
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		for (count = n - 1; count > 98; count--)
		{
			printf("%d, ", count);
		}
		printf("98");
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
