#include "main.h"
#include <stdio.h>

/**
* print_array - prints elements of an array
* @a: Pointer for int
* @n: number of elements to be printed
*/

void print_array(int *a, int n)
{
	int count = 0;

	if (n > 0)
	{
		printf("%d", *(a + count));
		count++;
		while (count < n)
		{
			printf(", %d", *(a + count));
			count++;
		}
	}
	putchar('\n');
}
