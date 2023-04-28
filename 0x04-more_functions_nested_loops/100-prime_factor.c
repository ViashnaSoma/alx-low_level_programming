#include <stdio.h>
/**
* main - determines and prints highest prime number
* Return: 0 for success
*/
int main(void)
{
	long i, num = 612852475143;
	
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
