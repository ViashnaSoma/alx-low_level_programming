#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints sign of number
*
* Return: returns 0 for success
*/
int main(void)
{
	int i;

	srand(time(0));

	i = rand() - RAND_MAX / 2;
	if (i == 0)
	{
		printf("%d is zero\n", i);
		else if (i < 0)
		{
			printf("%d is negative\n", i);
			else
			{
				printf("%d is positive\n", i);
			}
		}
	}
	return (0);
}
